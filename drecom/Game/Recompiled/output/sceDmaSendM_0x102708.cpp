#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void sceDmaSendM_0x102708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceDmaSendM_0x102708");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::sceDmaSendM(rdram, ctx, runtime); 
}
