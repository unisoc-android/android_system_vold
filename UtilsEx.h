/*
 * Created by Spreadst
 */

#ifndef UTILS_EX_H
#define UTILS_EX_H

/* SPRD: add for storage @{ */
/*  create symlink  */
status_t CreateSymlink(const std::string& source, const std::string& target);
/*  delete symlink  */
status_t DeleteSymlink(const std::string& path);
/*  write string to file  */
status_t WriteToFile(const std::string& preMsg, const std::string& file, const std::string& str, const char byte);
/* @} */

#ifdef UMS
status_t ReadFile(const std::string& file, char* buf, int buf_size);
bool getSupportUms();
#endif

#endif
