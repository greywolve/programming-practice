# File IO

Looked up how file IO works. All IO including file IO ultimately results in OS calls. Casey calls the win32 api directly, but things like fopen or SDL's file IO will end up doing the same in a wrapped manner.

I want to look at Infinitely engine file formats and see if I can start reading them in some way.
