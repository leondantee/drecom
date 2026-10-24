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

// Function: entry_00111778
// Address: 0x111778 - 0x1117d0
void entry_00111778_0x111778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111778_0x111778");
#endif

    switch (ctx->pc) {
        case 0x1117acu: goto label_1117ac;
        default: break;
    }

    ctx->pc = 0x111778u;

    // 0x111778: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x111778u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x11177c: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x11177cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x111780: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x111780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x111784: 0x1520ffe4  bnez        $t1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x111784u;
    {
        const bool branch_taken_0x111784 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x111788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111784u;
        // 0x111788: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111784) {
            ctx->pc = 0x111718u;
            return;
        }
    }
    ctx->pc = 0x11178Cu;
    // 0x11178c: 0xc71025  or          $v0, $a2, $a3
    ctx->pc = 0x11178cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x111790: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x111790u;
    {
        const bool branch_taken_0x111790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111790u;
        // 0x111794: 0x113842  srl         $a3, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111790) {
            ctx->pc = 0x111804u;
            return;
        }
    }
    ctx->pc = 0x111798u;
    // 0x111798: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x111798u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x11179c: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x11179cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x1117a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1117a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1117a4: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x1117A4u;
    SET_GPR_U32(ctx, 31, 0x1117ACu);
    ctx->pc = 0x1117A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1117A4u;
    // 0x1117a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x1117A4u, 0x1117ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1117ACu;
label_1117ac:
    // 0x1117ac: 0x4400015  bltz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1117ACu;
    {
        const bool branch_taken_0x1117ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1117B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117ACu;
        // 0x1117b0: 0x113842  srl         $a3, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117ac) {
            ctx->pc = 0x111804u;
            return;
        }
    }
    ctx->pc = 0x1117B4u;
    // 0x1117b4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1117b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1117b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1117b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1117bc: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1117BCu;
    {
        const bool branch_taken_0x1117bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1117C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117BCu;
        // 0x1117c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117bc) {
            ctx->pc = 0x1117D0u;
            return;
        }
    }
    ctx->pc = 0x1117C4u;
    // 0x1117c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1117c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1117c8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1117C8u;
    {
        const bool branch_taken_0x1117c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1117CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117C8u;
        // 0x1117cc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117c8) {
            ctx->pc = 0x111800u;
            return;
        }
    }
    ctx->pc = 0x1117D0u;
}
