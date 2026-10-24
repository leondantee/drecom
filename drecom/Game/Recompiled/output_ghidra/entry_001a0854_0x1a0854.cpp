#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001a0854
// Address: 0x1a0854 - 0x1a0868
void entry_001a0854_0x1a0854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0854_0x1a0854");
#endif

    ctx->pc = 0x1a0854u;

    // 0x1a0854: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a0854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a0858: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a0858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a085c: 0xa4222740  sh          $v0, 0x2740($at)
    ctx->pc = 0x1a085cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D2740u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5D2740u, _value); } while (0);
    // 0x1a0860: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x1A0860u;
    {
        const bool branch_taken_0x1a0860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0860) {
            ctx->pc = 0x1A09DCu;
            return;
        }
    }
    ctx->pc = 0x1A0868u;
}
