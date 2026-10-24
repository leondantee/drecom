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

// Function: entry_0037b7c0
// Address: 0x37b7c0 - 0x37b7d8
void entry_0037b7c0_0x37b7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037b7c0_0x37b7c0");
#endif

    ctx->pc = 0x37b7c0u;

    // 0x37b7c0: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b7c4: 0xac200bb0  sw          $zero, 0xBB0($at)
    ctx->pc = 0x37b7c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x9A0BB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0BB0u, _value); } while (0);
    // 0x37b7c8: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x37b7c8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37b7cc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x37b7ccu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37b7d0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x37B7D0u;
    {
        const bool branch_taken_0x37b7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b7d0) {
            ctx->pc = 0x37B7F8u;
            return;
        }
    }
    ctx->pc = 0x37B7D8u;
}
