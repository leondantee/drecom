#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void _sceFsDbChk_0x216318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_sceFsDbChk_0x216318");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::sceFsDbChk(rdram, ctx, runtime); 
}
