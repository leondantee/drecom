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

// Function: __sfp
// Address: 0x117180 - 0x117260
void ps2___sfp_0x117180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sfp_0x117180");
#endif

    switch (ctx->pc) {
        case 0x1171a8u: goto label_1171a8;
        case 0x1171b0u: goto label_1171b0;
        case 0x1171b4u: goto label_1171b4;
        case 0x1171c8u: goto label_1171c8;
        case 0x1171f4u: goto label_1171f4;
        default: break;
    }

    ctx->pc = 0x117180u;

    // 0x117180: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x117180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x117184: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x117184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x117188: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x117188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11718c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11718cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117190: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117194: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x117194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x117198: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x117198u;
    {
        const bool branch_taken_0x117198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117198u;
        // 0x11719c: 0x263001d8  addiu       $s0, $s1, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117198) {
            ctx->pc = 0x1171B8u;
            goto label_1171b8;
        }
    }
    ctx->pc = 0x1171A0u;
    // 0x1171a0: 0xc045ca0  jal         func_117280
    ctx->pc = 0x1171A0u;
    SET_GPR_U32(ctx, 31, 0x1171A8u);
    ctx->pc = 0x117280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117280u, 0x1171A0u, 0x1171A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1171A8u;
label_1171a8:
    // 0x1171a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1171A8u;
    {
        const bool branch_taken_0x1171a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1171ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171A8u;
        // 0x1171ac: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171a8) {
            ctx->pc = 0x1171BCu;
            goto label_1171bc;
        }
    }
    ctx->pc = 0x1171B0u;
label_1171b0:
    // 0x1171b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1171b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1171b4:
    // 0x1171b4: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1171b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1171b8:
    // 0x1171b8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1171b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1171bc:
    // 0x1171bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1171bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1171c0: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1171C0u;
    {
        const bool branch_taken_0x1171c0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1171C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171C0u;
        // 0x1171c4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171c0) {
            ctx->pc = 0x1171DCu;
            goto label_1171dc;
        }
    }
    ctx->pc = 0x1171C8u;
label_1171c8:
    // 0x1171c8: 0x8482000c  lh          $v0, 0xC($a0)
    ctx->pc = 0x1171c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1171cc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1171CCu;
    {
        const bool branch_taken_0x1171cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1171D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171CCu;
        // 0x1171d0: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171cc) {
            ctx->pc = 0x11720Cu;
            goto label_11720c;
        }
    }
    ctx->pc = 0x1171D4u;
    // 0x1171d4: 0x461fffc  bgez        $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1171D4u;
    {
        const bool branch_taken_0x1171d4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1171D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171D4u;
        // 0x1171d8: 0x24840058  addiu       $a0, $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171d4) {
            ctx->pc = 0x1171C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1171c8;
        }
    }
    ctx->pc = 0x1171DCu;
label_1171dc:
    // 0x1171dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1171dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1171e0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1171E0u;
    {
        const bool branch_taken_0x1171e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1171E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171E0u;
        // 0x1171e4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171e0) {
            ctx->pc = 0x1171B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1171b4;
        }
    }
    ctx->pc = 0x1171E8u;
    // 0x1171e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1171e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1171ec: 0xc045c44  jal         func_117110
    ctx->pc = 0x1171ECu;
    SET_GPR_U32(ctx, 31, 0x1171F4u);
    ctx->pc = 0x1171F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1171ECu;
    // 0x1171f0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117110u, 0x1171ECu, 0x1171F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1171F4u;
label_1171f4:
    // 0x1171f4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1171F4u;
    {
        const bool branch_taken_0x1171f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1171F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171F4u;
        // 0x1171f8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171f4) {
            ctx->pc = 0x1171B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1171b0;
        }
    }
    ctx->pc = 0x1171FCu;
    // 0x1171fc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1171fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x117200: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x117200u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117204: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x117204u;
    {
        const bool branch_taken_0x117204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117204u;
        // 0x117208: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117204) {
            ctx->pc = 0x11724Cu;
            goto label_11724c;
        }
    }
    ctx->pc = 0x11720Cu;
label_11720c:
    // 0x11720c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11720cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117210: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x117210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x117214: 0xa482000c  sh          $v0, 0xC($a0)
    ctx->pc = 0x117214u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x117218: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x117218u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x11721c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x11721cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117220: 0xac910054  sw          $s1, 0x54($a0)
    ctx->pc = 0x117220u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 17));
    // 0x117224: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x117224u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x117228: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x117228u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x11722c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x11722cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x117230: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x117230u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x117234: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x117234u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x117238: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x117238u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x11723c: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x11723cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x117240: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x117240u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x117244: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x117244u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x117248: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x117248u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_11724c:
    // 0x11724c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11724cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117250: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x117250u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117254: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117258: 0x3e00008  jr          $ra
    ctx->pc = 0x117258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11725Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117258u;
        // 0x11725c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117260u;
}
