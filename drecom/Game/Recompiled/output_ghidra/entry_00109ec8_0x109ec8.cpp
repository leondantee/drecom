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

// Function: entry_00109ec8
// Address: 0x109ec8 - 0x109ef0
void entry_00109ec8_0x109ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109ec8_0x109ec8");
#endif

    switch (ctx->pc) {
        case 0x109eecu: goto label_109eec;
        default: break;
    }

    ctx->pc = 0x109ec8u;

    // 0x109ec8: 0x3402be00  ori         $v0, $zero, 0xBE00
    ctx->pc = 0x109ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48640);
    // 0x109ecc: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x109eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x109ed0: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x109ED0u;
    {
        const bool branch_taken_0x109ed0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x109ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109ED0u;
        // 0x109ed4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ed0) {
            ctx->pc = 0x109EF0u;
            return;
        }
    }
    ctx->pc = 0x109ED8u;
    // 0x109ed8: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x109ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x109edc: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x109EDCu;
    {
        const bool branch_taken_0x109edc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x109EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109EDCu;
        // 0x109ee0: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109edc) {
            ctx->pc = 0x109EF4u;
            return;
        }
    }
    ctx->pc = 0x109EE4u;
    // 0x109ee4: 0xc042430  jal         func_1090C0
    ctx->pc = 0x109EE4u;
    SET_GPR_U32(ctx, 31, 0x109EECu);
    ctx->pc = 0x109EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109EE4u;
    // 0x109ee8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1090C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1090C0u, 0x109EE4u, 0x109EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109EECu;
label_109eec:
    // 0x109eec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x109eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x109ef0u;
}
