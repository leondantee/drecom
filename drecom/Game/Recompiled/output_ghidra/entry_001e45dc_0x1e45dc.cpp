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

// Function: entry_001e45dc
// Address: 0x1e45dc - 0x1e45fc
void entry_001e45dc_0x1e45dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e45dc_0x1e45dc");
#endif

    ctx->pc = 0x1e45dcu;

    // 0x1e45dc: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1e45dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1e45e0: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1e45e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1e45e4: 0x1060007a  beqz        $v1, . + 4 + (0x7A << 2)
    ctx->pc = 0x1E45E4u;
    {
        const bool branch_taken_0x1e45e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e45e4) {
            ctx->pc = 0x1E47D0u;
            return;
        }
    }
    ctx->pc = 0x1E45ECu;
    // 0x1e45ec: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1e45ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1e45f0: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1e45f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1e45f4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1e45f4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e45f8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1e45f8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1e45fcu;
}
