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

// Function: entry_00116458
// Address: 0x116458 - 0x1164d8
void entry_00116458_0x116458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116458_0x116458");
#endif

    switch (ctx->pc) {
        case 0x116460u: goto label_116460;
        case 0x11646cu: goto label_11646c;
        case 0x116478u: goto label_116478;
        case 0x116494u: goto label_116494;
        case 0x1164acu: goto label_1164ac;
        case 0x1164b8u: goto label_1164b8;
        default: break;
    }

    ctx->pc = 0x116458u;

    // 0x116458: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x116458u;
    SET_GPR_U32(ctx, 31, 0x116460u);
    ctx->pc = 0x11645Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116458u;
    // 0x11645c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x116458u, 0x116460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116460u;
label_116460:
    // 0x116460: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x116460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116464: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x116464u;
    SET_GPR_U32(ctx, 31, 0x11646Cu);
    ctx->pc = 0x116468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116464u;
    // 0x116468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x116464u, 0x11646Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11646Cu;
label_11646c:
    // 0x11646c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11646cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116470: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x116470u;
    SET_GPR_U32(ctx, 31, 0x116478u);
    ctx->pc = 0x116474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116470u;
    // 0x116474: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x116470u, 0x116478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116478u;
label_116478:
    // 0x116478: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x116478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11647c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11647cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116480: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x116480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x116484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116488: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x116488u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x11648c: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x11648Cu;
    SET_GPR_U32(ctx, 31, 0x116494u);
    ctx->pc = 0x116490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11648Cu;
    // 0x116490: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x11648Cu, 0x116494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116494u;
label_116494:
    // 0x116494: 0x442027f  bltzl       $v0, . + 4 + (0x27F << 2)
    ctx->pc = 0x116494u;
    {
        const bool branch_taken_0x116494 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x116494) {
            ctx->pc = 0x116498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116494u;
            // 0x116498: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116E94u;
            return;
        }
    }
    ctx->pc = 0x11649Cu;
    // 0x11649c: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x11649cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1164a0: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x1164a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x1164a4: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x1164A4u;
    SET_GPR_U32(ctx, 31, 0x1164ACu);
    ctx->pc = 0x1164A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1164A4u;
    // 0x1164a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x1164A4u, 0x1164ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1164ACu;
label_1164ac:
    // 0x1164ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1164acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1164b0: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x1164B0u;
    SET_GPR_U32(ctx, 31, 0x1164B8u);
    ctx->pc = 0x1164B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1164B0u;
    // 0x1164b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x1164B0u, 0x1164B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1164B8u;
label_1164b8:
    // 0x1164b8: 0x4400098  bltz        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x1164B8u;
    {
        const bool branch_taken_0x1164b8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1164BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1164B8u;
        // 0x1164bc: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1164b8) {
            ctx->pc = 0x11671Cu;
            return;
        }
    }
    ctx->pc = 0x1164C0u;
    // 0x1164c0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1164c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1164c4: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x1164c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1164c8: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1164C8u;
    {
        const bool branch_taken_0x1164c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1164c8) {
            ctx->pc = 0x116430u;
            return;
        }
    }
    ctx->pc = 0x1164D0u;
    // 0x1164d0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1164D0u;
    {
        const bool branch_taken_0x1164d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1164D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1164D0u;
        // 0x1164d4: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1164d0) {
            ctx->pc = 0x1165D0u;
            return;
        }
    }
    ctx->pc = 0x1164D8u;
}
