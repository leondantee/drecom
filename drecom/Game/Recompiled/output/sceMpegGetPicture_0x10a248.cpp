#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void sceMpegGetPicture_0x10a248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceMpegGetPicture_0x10a248");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::sceMpegGetPicture(rdram, ctx, runtime); 
}
