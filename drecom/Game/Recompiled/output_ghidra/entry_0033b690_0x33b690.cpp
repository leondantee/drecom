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

// Function: entry_0033b690
// Address: 0x33b690 - 0x33b6c0
void entry_0033b690_0x33b690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033b690_0x33b690");
#endif

    ctx->pc = 0x33b690u;

    // 0x33b690: 0x2e83001f  sltiu       $v1, $s4, 0x1F
    ctx->pc = 0x33b690u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x33b694: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x33B694u;
    {
        const bool branch_taken_0x33b694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b694) {
            ctx->pc = 0x33B67Cu;
            return;
        }
    }
    ctx->pc = 0x33B69Cu;
    // 0x33b69c: 0x8e030138  lw          $v1, 0x138($s0)
    ctx->pc = 0x33b69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x33b6a0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x33b6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x33b6a4: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x33b6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x33b6a8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x33b6a8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33b6ac: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x33b6acu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33b6b0: 0xa6000012  sh          $zero, 0x12($s0)
    ctx->pc = 0x33b6b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x33b6b4: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x33b6b4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33b6b8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x33B6B8u;
    {
        const bool branch_taken_0x33b6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b6b8) {
            ctx->pc = 0x33B788u;
            return;
        }
    }
    ctx->pc = 0x33B6C0u;
}
