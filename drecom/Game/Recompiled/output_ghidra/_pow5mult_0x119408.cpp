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

// Function: _pow5mult
// Address: 0x119408 - 0x119508
void _pow5mult_0x119408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_pow5mult_0x119408");
#endif

    switch (ctx->pc) {
        case 0x119454u: goto label_119454;
        case 0x11947cu: goto label_11947c;
        case 0x119490u: goto label_119490;
        case 0x1194a8u: goto label_1194a8;
        case 0x1194ccu: goto label_1194cc;
        case 0x1194dcu: goto label_1194dc;
        default: break;
    }

    ctx->pc = 0x119408u;

    // 0x119408: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x119408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11940c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11940cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x119410: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x119410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x119414: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x119414u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119418: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x119418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11941c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x11941cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119420: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x119420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x119424: 0x32230003  andi        $v1, $s1, 0x3
    ctx->pc = 0x119424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    // 0x119428: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11942c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x11942Cu;
    {
        const bool branch_taken_0x11942c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x119430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11942Cu;
        // 0x119430: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11942c) {
            ctx->pc = 0x119458u;
            goto label_119458;
        }
    }
    ctx->pc = 0x119434u;
    // 0x119434: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x119434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x119438: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x119438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x11943c: 0x2442d9f8  addiu       $v0, $v0, -0x2608
    ctx->pc = 0x11943cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957560));
    // 0x119440: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x119440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x119444: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x119444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x119448: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x119448u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11944c: 0xc04637e  jal         func_118DF8
    ctx->pc = 0x11944Cu;
    SET_GPR_U32(ctx, 31, 0x119454u);
    ctx->pc = 0x119450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11944Cu;
    // 0x119450: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DF8u, 0x11944Cu, 0x119454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119454u;
label_119454:
    // 0x119454: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x119454u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_119458:
    // 0x119458: 0x118883  sra         $s1, $s1, 2
    ctx->pc = 0x119458u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 2));
    // 0x11945c: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x11945Cu;
    {
        const bool branch_taken_0x11945c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x119460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11945Cu;
        // 0x119460: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11945c) {
            ctx->pc = 0x1194ECu;
            goto label_1194ec;
        }
    }
    ctx->pc = 0x119464u;
    // 0x119464: 0x8e700048  lw          $s0, 0x48($s3)
    ctx->pc = 0x119464u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x119468: 0x16000013  bnez        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x119468u;
    {
        const bool branch_taken_0x119468 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119468u;
        // 0x11946c: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119468) {
            ctx->pc = 0x1194B8u;
            goto label_1194b8;
        }
    }
    ctx->pc = 0x119470u;
    // 0x119470: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x119470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119474: 0xc046468  jal         func_1191A0
    ctx->pc = 0x119474u;
    SET_GPR_U32(ctx, 31, 0x11947Cu);
    ctx->pc = 0x119478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119474u;
    // 0x119478: 0x24050271  addiu       $a1, $zero, 0x271 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 625));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1191A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1191A0u, 0x119474u, 0x11947Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11947Cu;
label_11947c:
    // 0x11947c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11947cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119480: 0xae620048  sw          $v0, 0x48($s3)
    ctx->pc = 0x119480u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
    // 0x119484: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x119484u;
    {
        const bool branch_taken_0x119484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119484u;
        // 0x119488: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119484) {
            ctx->pc = 0x1194B4u;
            goto label_1194b4;
        }
    }
    ctx->pc = 0x11948Cu;
    // 0x11948c: 0x0  nop
    ctx->pc = 0x11948cu;
    // NOP
label_119490:
    // 0x119490: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x119490u;
    {
        const bool branch_taken_0x119490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x119490) {
            ctx->pc = 0x119494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119490u;
            // 0x119494: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1194B4u;
            goto label_1194b4;
        }
    }
    ctx->pc = 0x119498u;
    // 0x119498: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x119498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11949c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11949cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1194a0: 0xc046476  jal         func_1191D8
    ctx->pc = 0x1194A0u;
    SET_GPR_U32(ctx, 31, 0x1194A8u);
    ctx->pc = 0x1194A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1194A0u;
    // 0x1194a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1191D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1191D8u, 0x1194A0u, 0x1194A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1194A8u;
label_1194a8:
    // 0x1194a8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1194a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1194ac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1194acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1194b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1194b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1194b4:
    // 0x1194b4: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1194b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_1194b8:
    // 0x1194b8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1194B8u;
    {
        const bool branch_taken_0x1194b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1194BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1194B8u;
        // 0x1194bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1194b8) {
            ctx->pc = 0x1194DCu;
            goto label_1194dc;
        }
    }
    ctx->pc = 0x1194C0u;
    // 0x1194c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1194c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1194c4: 0xc046476  jal         func_1191D8
    ctx->pc = 0x1194C4u;
    SET_GPR_U32(ctx, 31, 0x1194CCu);
    ctx->pc = 0x1194C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1194C4u;
    // 0x1194c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1191D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1191D8u, 0x1194C4u, 0x1194CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1194CCu;
label_1194cc:
    // 0x1194cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1194ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1194d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1194d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1194d4: 0xc046372  jal         func_118DC8
    ctx->pc = 0x1194D4u;
    SET_GPR_U32(ctx, 31, 0x1194DCu);
    ctx->pc = 0x1194D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1194D4u;
    // 0x1194d8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DC8u, 0x1194D4u, 0x1194DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1194DCu;
label_1194dc:
    // 0x1194dc: 0x118843  sra         $s1, $s1, 1
    ctx->pc = 0x1194dcu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
    // 0x1194e0: 0x5620ffeb  bnel        $s1, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1194E0u;
    {
        const bool branch_taken_0x1194e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1194e0) {
            ctx->pc = 0x1194E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1194E0u;
            // 0x1194e4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119490;
        }
    }
    ctx->pc = 0x1194E8u;
    // 0x1194e8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1194e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1194ec:
    // 0x1194ec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1194ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1194f0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1194f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1194f4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1194f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1194f8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1194f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1194fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1194fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119500: 0x3e00008  jr          $ra
    ctx->pc = 0x119500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119500u;
        // 0x119504: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119508u;
}
