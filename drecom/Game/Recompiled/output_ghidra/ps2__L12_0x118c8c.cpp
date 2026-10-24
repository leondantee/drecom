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

// Function: $L12
// Address: 0x118c8c - 0x118cb0
void ps2__L12_0x118c8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L12_0x118c8c");
#endif

    ctx->pc = 0x118c8cu;

label_118c8c:
    // 0x118c8c: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x118c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x118c90: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x118c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x118c94: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x118c94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x118c98: 0x2cc20020  sltiu       $v0, $a2, 0x20
    ctx->pc = 0x118c98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x118c9c: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x118c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x118ca0: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x118CA0u;
    {
        const bool branch_taken_0x118ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118CA0u;
        // 0x118ca4: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118ca0) {
            ctx->pc = 0x118C8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118c8c;
        }
    }
    ctx->pc = 0x118CA8u;
    // 0x118ca8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x118CA8u;
    {
        const bool branch_taken_0x118ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118CA8u;
        // 0x118cac: 0x2cc20008  sltiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x118ca8) {
            ctx->pc = 0x118CBCu;
            return;
        }
    }
    ctx->pc = 0x118CB0u;
}
