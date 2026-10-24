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

// Function: entry_001e0dd8
// Address: 0x1e0dd8 - 0x1e0e00
void entry_001e0dd8_0x1e0dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0dd8_0x1e0dd8");
#endif

    ctx->pc = 0x1e0dd8u;

    // 0x1e0dd8: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x1e0dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e0ddc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1e0ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1e0de0: 0x1060010b  beqz        $v1, . + 4 + (0x10B << 2)
    ctx->pc = 0x1E0DE0u;
    {
        const bool branch_taken_0x1e0de0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0de0) {
            ctx->pc = 0x1E1210u;
            return;
        }
    }
    ctx->pc = 0x1E0DE8u;
    // 0x1e0de8: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1e0de8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e0dec: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e0decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e0df0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1e0df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1e0df4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E0DF4u;
    {
        const bool branch_taken_0x1e0df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0df4) {
            ctx->pc = 0x1E0E00u;
            return;
        }
    }
    ctx->pc = 0x1E0DFCu;
    // 0x1e0dfc: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1e0dfcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    ctx->pc = 0x1e0e00u;
}
