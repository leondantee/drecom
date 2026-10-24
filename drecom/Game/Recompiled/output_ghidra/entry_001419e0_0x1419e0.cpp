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

// Function: entry_001419e0
// Address: 0x1419e0 - 0x141a0c
void entry_001419e0_0x1419e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001419e0_0x1419e0");
#endif

    ctx->pc = 0x1419e0u;

    // 0x1419e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1419e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1419e4: 0x8c23fce0  lw          $v1, -0x320($at)
    ctx->pc = 0x1419e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CFCE0u));
    // 0x1419e8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1419e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1419ec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1419ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1419f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1419F0u;
    {
        const bool branch_taken_0x1419f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1419f0) {
            ctx->pc = 0x141A0Cu;
            return;
        }
    }
    ctx->pc = 0x1419F8u;
    // 0x1419f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1419f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1419fc: 0x90220e04  lbu         $v0, 0xE04($at)
    ctx->pc = 0x1419fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x5D0E04u));
    // 0x141a00: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x141a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x141a04: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141a08: 0xa0220e04  sb          $v0, 0xE04($at)
    ctx->pc = 0x141a08u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0E04u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D0E04u, _value); } while (0);
    ctx->pc = 0x141a0cu;
}
