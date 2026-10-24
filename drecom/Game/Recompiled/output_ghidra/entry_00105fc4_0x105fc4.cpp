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

// Function: entry_00105fc4
// Address: 0x105fc4 - 0x106008
void entry_00105fc4_0x105fc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105fc4_0x105fc4");
#endif

    switch (ctx->pc) {
        case 0x105fccu: goto label_105fcc;
        case 0x105fe8u: goto label_105fe8;
        case 0x105ff0u: goto label_105ff0;
        default: break;
    }

    ctx->pc = 0x105fc4u;

label_105fc4:
    // 0x105fc4: 0xc04186a  jal         func_1061A8
    ctx->pc = 0x105FC4u;
    SET_GPR_U32(ctx, 31, 0x105FCCu);
    ctx->pc = 0x105FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105FC4u;
    // 0x105fc8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1061A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061A8u, 0x105FC4u, 0x105FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105FCCu;
label_105fcc:
    // 0x105fcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x105fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105fd0: 0x1214fffc  beq         $s0, $s4, . + 4 + (-0x4 << 2)
    ctx->pc = 0x105FD0u;
    {
        const bool branch_taken_0x105fd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x105FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105FD0u;
        // 0x105fd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105fd0) {
            ctx->pc = 0x105FC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105fc4;
        }
    }
    ctx->pc = 0x105FD8u;
    // 0x105fd8: 0x1213fff9  beq         $s0, $s3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x105FD8u;
    {
        const bool branch_taken_0x105fd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        if (branch_taken_0x105fd8) {
            ctx->pc = 0x105FC0u;
            return;
        }
    }
    ctx->pc = 0x105FE0u;
    // 0x105fe0: 0xc041b46  jal         func_106D18
    ctx->pc = 0x105FE0u;
    SET_GPR_U32(ctx, 31, 0x105FE8u);
    ctx->pc = 0x106D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D18u, 0x105FE0u, 0x105FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105FE8u;
label_105fe8:
    // 0x105fe8: 0xc0416a8  jal         func_105AA0
    ctx->pc = 0x105FE8u;
    SET_GPR_U32(ctx, 31, 0x105FF0u);
    ctx->pc = 0x105AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105AA0u, 0x105FE8u, 0x105FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105FF0u;
label_105ff0:
    // 0x105ff0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x105ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x105ff4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x105ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x105ff8: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x105ff8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x105ffc: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x105ffcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x106000: 0x2611ffff  addiu       $s1, $s0, -0x1
    ctx->pc = 0x106000u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x106004: 0x2e120001  sltiu       $s2, $s0, 0x1
    ctx->pc = 0x106004u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x106008u;
}
