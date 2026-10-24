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

// Function: entry_0033b6e4
// Address: 0x33b6e4 - 0x33b70c
void entry_0033b6e4_0x33b6e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033b6e4_0x33b6e4");
#endif

    ctx->pc = 0x33b6e4u;

    // 0x33b6e4: 0x92430012  lbu         $v1, 0x12($s2)
    ctx->pc = 0x33b6e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x33b6e8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x33b6e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33b6ec: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x33b6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x33b6f0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x33b6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x33b6f4: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x33b6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x33b6f8: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33B6F8u;
    {
        const bool branch_taken_0x33b6f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33b6f8) {
            ctx->pc = 0x33B70Cu;
            return;
        }
    }
    ctx->pc = 0x33B700u;
    // 0x33b700: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x33b700u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33b704: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x33B704u;
    {
        const bool branch_taken_0x33b704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b704) {
            ctx->pc = 0x33B720u;
            return;
        }
    }
    ctx->pc = 0x33B70Cu;
}
