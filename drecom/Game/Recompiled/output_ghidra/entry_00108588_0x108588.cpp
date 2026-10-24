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

// Function: entry_00108588
// Address: 0x108588 - 0x1085bc
void entry_00108588_0x108588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108588_0x108588");
#endif

    ctx->pc = 0x108588u;

label_108588:
    // 0x108588: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x108588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10858c: 0x0  nop
    ctx->pc = 0x10858cu;
    // NOP
    // 0x108590: 0x0  nop
    ctx->pc = 0x108590u;
    // NOP
    // 0x108594: 0x0  nop
    ctx->pc = 0x108594u;
    // NOP
    // 0x108598: 0x0  nop
    ctx->pc = 0x108598u;
    // NOP
    // 0x10859c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10859Cu;
    {
        const bool branch_taken_0x10859c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10859c) {
            ctx->pc = 0x108588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108588;
        }
    }
    ctx->pc = 0x1085A4u;
    // 0x1085a4: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x1085a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1085a8: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x1085a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1085ac: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x1085ACu;
    {
        const bool branch_taken_0x1085ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1085B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085ACu;
        // 0x1085b0: 0xa0482d  daddu       $t1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1085ac) {
            ctx->pc = 0x1084B8u;
            return;
        }
    }
    ctx->pc = 0x1085B4u;
    // 0x1085b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1085B4u;
    {
        const bool branch_taken_0x1085b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1085B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085B4u;
        // 0x1085b8: 0x8f0200e4  lw          $v0, 0xE4($t8) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1085b4) {
            ctx->pc = 0x1085C4u;
            return;
        }
    }
    ctx->pc = 0x1085BCu;
}
