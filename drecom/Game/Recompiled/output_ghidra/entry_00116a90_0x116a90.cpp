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

// Function: entry_00116a90
// Address: 0x116a90 - 0x116ad8
void entry_00116a90_0x116a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116a90_0x116a90");
#endif

    switch (ctx->pc) {
        case 0x116ac0u: goto label_116ac0;
        case 0x116ad0u: goto label_116ad0;
        default: break;
    }

    ctx->pc = 0x116a90u;

    // 0x116a90: 0x5c80001a  bgtzl       $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x116A90u;
    {
        const bool branch_taken_0x116a90 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x116a90) {
            ctx->pc = 0x116A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116A90u;
            // 0x116a94: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116AFCu;
            return;
        }
    }
    ctx->pc = 0x116A98u;
    // 0x116a98: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x116a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x116a9c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x116a9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x116aa0: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x116AA0u;
    {
        const bool branch_taken_0x116aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116aa0) {
            ctx->pc = 0x116AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116AA0u;
            // 0x116aa4: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116AFCu;
            return;
        }
    }
    ctx->pc = 0x116AA8u;
    // 0x116aa8: 0x480000b  bltz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x116AA8u;
    {
        const bool branch_taken_0x116aa8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x116AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116AA8u;
        // 0x116aac: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116aa8) {
            ctx->pc = 0x116AD8u;
            return;
        }
    }
    ctx->pc = 0x116AB0u;
    // 0x116ab0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x116ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116ab4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x116ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x116ab8: 0xc04637e  jal         func_118DF8
    ctx->pc = 0x116AB8u;
    SET_GPR_U32(ctx, 31, 0x116AC0u);
    ctx->pc = 0x116ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116AB8u;
    // 0x116abc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DF8u, 0x116AB8u, 0x116AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116AC0u;
label_116ac0:
    // 0x116ac0: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x116ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x116ac4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x116ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x116ac8: 0xc0465a0  jal         func_119680
    ctx->pc = 0x116AC8u;
    SET_GPR_U32(ctx, 31, 0x116AD0u);
    ctx->pc = 0x116ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116AC8u;
    // 0x116acc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119680u, 0x116AC8u, 0x116AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116AD0u;
label_116ad0:
    // 0x116ad0: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x116AD0u;
    {
        const bool branch_taken_0x116ad0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x116AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116AD0u;
        // 0x116ad4: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ad0) {
            ctx->pc = 0x116AE8u;
            return;
        }
    }
    ctx->pc = 0x116AD8u;
}
