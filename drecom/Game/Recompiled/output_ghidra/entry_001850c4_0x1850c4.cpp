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

// Function: entry_001850c4
// Address: 0x1850c4 - 0x1850dc
void entry_001850c4_0x1850c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001850c4_0x1850c4");
#endif

    ctx->pc = 0x1850c4u;

    // 0x1850c4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1850c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1850c8: 0x244202a0  addiu       $v0, $v0, 0x2A0
    ctx->pc = 0x1850c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 672));
    // 0x1850cc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1850ccu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x4802A0u));
    // 0x1850d0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1850d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1850d4: 0x244202b0  addiu       $v0, $v0, 0x2B0
    ctx->pc = 0x1850d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x1850d8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1850d8u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x4802B0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x4802B0u, _value); } while (0);
    ctx->pc = 0x1850dcu;
}
