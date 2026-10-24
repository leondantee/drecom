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

// Function: entry_00109748
// Address: 0x109748 - 0x10976c
void entry_00109748_0x109748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109748_0x109748");
#endif

    ctx->pc = 0x109748u;

label_109748:
    // 0x109748: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x109748u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x10974c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10974Cu;
    {
        const bool branch_taken_0x10974c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10974Cu;
        // 0x109750: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10974c) {
            ctx->pc = 0x10976Cu;
            return;
        }
    }
    ctx->pc = 0x109754u;
    // 0x109754: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x109754u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x109758: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x109758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x10975c: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x10975cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109760: 0x54c3fff9  bnel        $a2, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x109760u;
    {
        const bool branch_taken_0x109760 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x109760) {
            ctx->pc = 0x109764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109760u;
            // 0x109764: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109748;
        }
    }
    ctx->pc = 0x109768u;
    // 0x109768: 0x8c510010  lw          $s1, 0x10($v0)
    ctx->pc = 0x109768u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->pc = 0x10976cu;
}
