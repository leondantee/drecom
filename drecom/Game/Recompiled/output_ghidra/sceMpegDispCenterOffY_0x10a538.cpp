#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void sceMpegDispCenterOffY_0x10a538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceMpegDispCenterOffY_0x10a538");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::sceMpegDispCenterOffY(rdram, ctx, runtime); 
}
