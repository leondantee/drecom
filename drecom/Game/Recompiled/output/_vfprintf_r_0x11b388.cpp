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

// Function: _vfprintf_r
// Address: 0x11b388 - 0x11c8a0
void _vfprintf_r_0x11b388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_vfprintf_r_0x11b388");
#endif

    switch (ctx->pc) {
        case 0x11b3c8u: goto label_11b3c8;
        case 0x11b3fcu: goto label_11b3fc;
        case 0x11b438u: goto label_11b438;
        case 0x11b468u: goto label_11b468;
        case 0x11b470u: goto label_11b470;
        case 0x11b490u: goto label_11b490;
        case 0x11b4fcu: goto label_11b4fc;
        case 0x11b53cu: goto label_11b53c;
        case 0x11b544u: goto label_11b544;
        case 0x11b548u: goto label_11b548;
        case 0x11b54cu: goto label_11b54c;
        case 0x11b560u: goto label_11b560;
        case 0x11b638u: goto label_11b638;
        case 0x11b688u: goto label_11b688;
        case 0x11b7d8u: goto label_11b7d8;
        case 0x11b7e8u: goto label_11b7e8;
        case 0x11b810u: goto label_11b810;
        case 0x11b84cu: goto label_11b84c;
        case 0x11b8b0u: goto label_11b8b0;
        case 0x11ba1cu: goto label_11ba1c;
        case 0x11ba40u: goto label_11ba40;
        case 0x11bb30u: goto label_11bb30;
        case 0x11bb48u: goto label_11bb48;
        case 0x11bb98u: goto label_11bb98;
        case 0x11bba4u: goto label_11bba4;
        case 0x11bbc0u: goto label_11bbc0;
        case 0x11bc00u: goto label_11bc00;
        case 0x11bcc8u: goto label_11bcc8;
        case 0x11bd0cu: goto label_11bd0c;
        case 0x11bd64u: goto label_11bd64;
        case 0x11be14u: goto label_11be14;
        case 0x11be58u: goto label_11be58;
        case 0x11be98u: goto label_11be98;
        case 0x11beecu: goto label_11beec;
        case 0x11bf20u: goto label_11bf20;
        case 0x11bf60u: goto label_11bf60;
        case 0x11bfb4u: goto label_11bfb4;
        case 0x11c004u: goto label_11c004;
        case 0x11c050u: goto label_11c050;
        case 0x11c0b4u: goto label_11c0b4;
        case 0x11c0d8u: goto label_11c0d8;
        case 0x11c118u: goto label_11c118;
        case 0x11c1b4u: goto label_11c1b4;
        case 0x11c1f8u: goto label_11c1f8;
        case 0x11c218u: goto label_11c218;
        case 0x11c258u: goto label_11c258;
        case 0x11c2b4u: goto label_11c2b4;
        case 0x11c340u: goto label_11c340;
        case 0x11c368u: goto label_11c368;
        case 0x11c3a8u: goto label_11c3a8;
        case 0x11c404u: goto label_11c404;
        case 0x11c484u: goto label_11c484;
        case 0x11c4d8u: goto label_11c4d8;
        case 0x11c594u: goto label_11c594;
        case 0x11c5a8u: goto label_11c5a8;
        case 0x11c608u: goto label_11c608;
        case 0x11c648u: goto label_11c648;
        case 0x11c6d4u: goto label_11c6d4;
        case 0x11c71cu: goto label_11c71c;
        case 0x11c748u: goto label_11c748;
        case 0x11c78cu: goto label_11c78c;
        case 0x11c7e8u: goto label_11c7e8;
        case 0x11c824u: goto label_11c824;
        case 0x11c84cu: goto label_11c84c;
        default: break;
    }

    ctx->pc = 0x11b388u;

    // 0x11b388: 0x27bdfd30  addiu       $sp, $sp, -0x2D0
    ctx->pc = 0x11b388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966576));
    // 0x11b38c: 0xffb40270  sd          $s4, 0x270($sp)
    ctx->pc = 0x11b38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 20));
    // 0x11b390: 0xffb00230  sd          $s0, 0x230($sp)
    ctx->pc = 0x11b390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 16));
    // 0x11b394: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x11b394u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b398: 0xafa501e8  sw          $a1, 0x1E8($sp)
    ctx->pc = 0x11b398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 5));
    // 0x11b39c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x11b39cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b3a0: 0xffbf02c0  sd          $ra, 0x2C0($sp)
    ctx->pc = 0x11b3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 31));
    // 0x11b3a4: 0xffbe02b0  sd          $fp, 0x2B0($sp)
    ctx->pc = 0x11b3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 30));
    // 0x11b3a8: 0xffb702a0  sd          $s7, 0x2A0($sp)
    ctx->pc = 0x11b3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 23));
    // 0x11b3ac: 0xffb60290  sd          $s6, 0x290($sp)
    ctx->pc = 0x11b3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 22));
    // 0x11b3b0: 0xffb50280  sd          $s5, 0x280($sp)
    ctx->pc = 0x11b3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 21));
    // 0x11b3b4: 0xffb30260  sd          $s3, 0x260($sp)
    ctx->pc = 0x11b3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 19));
    // 0x11b3b8: 0xffb20250  sd          $s2, 0x250($sp)
    ctx->pc = 0x11b3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 18));
    // 0x11b3bc: 0xffb10240  sd          $s1, 0x240($sp)
    ctx->pc = 0x11b3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 17));
    // 0x11b3c0: 0xc045f4e  jal         func_117D38
    ctx->pc = 0x11B3C0u;
    SET_GPR_U32(ctx, 31, 0x11B3C8u);
    ctx->pc = 0x11B3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B3C0u;
    // 0x11b3c4: 0xafa401e4  sw          $a0, 0x1E4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117D38u, 0x11B3C0u, 0x11B3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B3C8u;
label_11b3c8:
    // 0x11b3c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11b3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11b3cc: 0xafa201f8  sw          $v0, 0x1F8($sp)
    ctx->pc = 0x11b3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 2));
    // 0x11b3d0: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x11b3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11b3d4: 0x9443000c  lhu         $v1, 0xC($v0)
    ctx->pc = 0x11b3d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x11b3d8: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x11b3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x11b3dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B3DCu;
    {
        const bool branch_taken_0x11b3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B3DCu;
        // 0x11b3e0: 0xafa001d8  sw          $zero, 0x1D8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b3dc) {
            ctx->pc = 0x11B3F4u;
            goto label_11b3f4;
        }
    }
    ctx->pc = 0x11B3E4u;
    // 0x11b3e4: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11b3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11b3e8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x11b3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x11b3ec: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11B3ECu;
    {
        const bool branch_taken_0x11b3ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B3ECu;
        // 0x11b3f0: 0x3063001a  andi        $v1, $v1, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b3ec) {
            ctx->pc = 0x11B410u;
            goto label_11b410;
        }
    }
    ctx->pc = 0x11B3F4u;
label_11b3f4:
    // 0x11b3f4: 0xc0472e4  jal         func_11CB90
    ctx->pc = 0x11B3F4u;
    SET_GPR_U32(ctx, 31, 0x11B3FCu);
    ctx->pc = 0x11B3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B3F4u;
    // 0x11b3f8: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11CB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CB90u, 0x11B3F4u, 0x11B3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B3FCu;
label_11b3fc:
    // 0x11b3fc: 0x1440051c  bnez        $v0, . + 4 + (0x51C << 2)
    ctx->pc = 0x11B3FCu;
    {
        const bool branch_taken_0x11b3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B3FCu;
        // 0x11b400: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b3fc) {
            ctx->pc = 0x11C870u;
            goto label_11c870;
        }
    }
    ctx->pc = 0x11B404u;
    // 0x11b404: 0x8fa501e8  lw          $a1, 0x1E8($sp)
    ctx->pc = 0x11b404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11b408: 0x94a3000c  lhu         $v1, 0xC($a1)
    ctx->pc = 0x11b408u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x11b40c: 0x3063001a  andi        $v1, $v1, 0x1A
    ctx->pc = 0x11b40cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)26);
label_11b410:
    // 0x11b410: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x11b410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x11b414: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11B414u;
    {
        const bool branch_taken_0x11b414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B414u;
        // 0x11b418: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b414) {
            ctx->pc = 0x11B440u;
            goto label_11b440;
        }
    }
    ctx->pc = 0x11B41Cu;
    // 0x11b41c: 0x8fa601e8  lw          $a2, 0x1E8($sp)
    ctx->pc = 0x11b41cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11b420: 0x84c2000e  lh          $v0, 0xE($a2)
    ctx->pc = 0x11b420u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x11b424: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11B424u;
    {
        const bool branch_taken_0x11b424 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11B428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B424u;
        // 0x11b428: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b424) {
            ctx->pc = 0x11B440u;
            goto label_11b440;
        }
    }
    ctx->pc = 0x11B42Cu;
    // 0x11b42c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11b42cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b430: 0xc046c96  jal         func_11B258
    ctx->pc = 0x11B430u;
    SET_GPR_U32(ctx, 31, 0x11B438u);
    ctx->pc = 0x11B434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B430u;
    // 0x11b434: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B258u, 0x11B430u, 0x11B438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B438u;
label_11b438:
    // 0x11b438: 0x1000050e  b           . + 4 + (0x50E << 2)
    ctx->pc = 0x11B438u;
    {
        const bool branch_taken_0x11b438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B438u;
        // 0x11b43c: 0xdfbf02c0  ld          $ra, 0x2C0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b438) {
            ctx->pc = 0x11C874u;
            goto label_11c874;
        }
    }
    ctx->pc = 0x11B440u;
label_11b440:
    // 0x11b440: 0x27a201d4  addiu       $v0, $sp, 0x1D4
    ctx->pc = 0x11b440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 468));
    // 0x11b444: 0x27a301d8  addiu       $v1, $sp, 0x1D8
    ctx->pc = 0x11b444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    // 0x11b448: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x11b448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x11b44c: 0xafb10010  sw          $s1, 0x10($sp)
    ctx->pc = 0x11b44cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
    // 0x11b450: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x11b450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x11b454: 0xafb001ec  sw          $s0, 0x1EC($sp)
    ctx->pc = 0x11b454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 16));
    // 0x11b458: 0xafa001f0  sw          $zero, 0x1F0($sp)
    ctx->pc = 0x11b458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 0));
    // 0x11b45c: 0xafa20218  sw          $v0, 0x218($sp)
    ctx->pc = 0x11b45cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 2));
    // 0x11b460: 0xafa3021c  sw          $v1, 0x21C($sp)
    ctx->pc = 0x11b460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 3));
    // 0x11b464: 0x0  nop
    ctx->pc = 0x11b464u;
    // NOP
label_11b468:
    // 0x11b468: 0x8fb301ec  lw          $s3, 0x1EC($sp)
    ctx->pc = 0x11b468u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x11b46c: 0x24120025  addiu       $s2, $zero, 0x25
    ctx->pc = 0x11b46cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_11b470:
    // 0x11b470: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x11b470u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x11b474: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x11b474u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x11b478: 0x8ca4490c  lw          $a0, 0x490C($a1)
    ctx->pc = 0x11b478u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x38490Cu));
    // 0x11b47c: 0x8cc74910  lw          $a3, 0x4910($a2)
    ctx->pc = 0x11b47cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x384910u));
    // 0x11b480: 0x8fa50218  lw          $a1, 0x218($sp)
    ctx->pc = 0x11b480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x11b484: 0x8fa601ec  lw          $a2, 0x1EC($sp)
    ctx->pc = 0x11b484u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x11b488: 0xc046238  jal         func_1188E0
    ctx->pc = 0x11B488u;
    SET_GPR_U32(ctx, 31, 0x11B490u);
    ctx->pc = 0x11B48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B488u;
    // 0x11b48c: 0x8fa8021c  lw          $t0, 0x21C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1188E0u;
    {
        ctx->pc = 0x11B490u;
        ps2_stubs::mbtowc_r(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x11B490u) { return; }
    ctx->pc = 0x11B490u;
label_11b490:
    // 0x11b490: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11b490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b494: 0x1a000007  blez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11B494u;
    {
        const bool branch_taken_0x11b494 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x11B498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B494u;
        // 0x11b498: 0x8fa301ec  lw          $v1, 0x1EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b494) {
            ctx->pc = 0x11B4B4u;
            goto label_11b4b4;
        }
    }
    ctx->pc = 0x11B49Cu;
    // 0x11b49c: 0x8fa201d4  lw          $v0, 0x1D4($sp)
    ctx->pc = 0x11b49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x11b4a0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x11b4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x11b4a4: 0x1452fff2  bne         $v0, $s2, . + 4 + (-0xE << 2)
    ctx->pc = 0x11B4A4u;
    {
        const bool branch_taken_0x11b4a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x11B4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B4A4u;
        // 0x11b4a8: 0xafa301ec  sw          $v1, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b4a4) {
            ctx->pc = 0x11B470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b470;
        }
    }
    ctx->pc = 0x11B4ACu;
    // 0x11b4ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x11b4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x11b4b0: 0xafa301ec  sw          $v1, 0x1EC($sp)
    ctx->pc = 0x11b4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 3));
label_11b4b4:
    // 0x11b4b4: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x11b4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x11b4b8: 0x939023  subu        $s2, $a0, $s3
    ctx->pc = 0x11b4b8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x11b4bc: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x11B4BCu;
    {
        const bool branch_taken_0x11b4bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b4bc) {
            ctx->pc = 0x11B510u;
            goto label_11b510;
        }
    }
    ctx->pc = 0x11B4C4u;
    // 0x11b4c4: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x11b4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x11b4c8: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x11b4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x11b4cc: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x11b4ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11b4d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x11b4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11b4d4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x11b4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11b4d8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x11b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x11b4dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11b4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11b4e0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x11b4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x11b4e4: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x11b4e4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11b4e8: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11B4E8u;
    {
        const bool branch_taken_0x11b4e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B4E8u;
        // 0x11b4ec: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b4e8) {
            ctx->pc = 0x11B504u;
            goto label_11b504;
        }
    }
    ctx->pc = 0x11B4F0u;
    // 0x11b4f0: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11b4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11b4f4: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11B4F4u;
    SET_GPR_U32(ctx, 31, 0x11B4FCu);
    ctx->pc = 0x11B4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B4F4u;
    // 0x11b4f8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11B4F4u, 0x11B4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B4FCu;
label_11b4fc:
    // 0x11b4fc: 0x144004d6  bnez        $v0, . + 4 + (0x4D6 << 2)
    ctx->pc = 0x11B4FCu;
    {
        const bool branch_taken_0x11b4fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B4FCu;
        // 0x11b500: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b4fc) {
            ctx->pc = 0x11C858u;
            goto label_11c858;
        }
    }
    ctx->pc = 0x11B504u;
label_11b504:
    // 0x11b504: 0x8fa501f0  lw          $a1, 0x1F0($sp)
    ctx->pc = 0x11b504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x11b508: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x11b508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x11b50c: 0xafa501f0  sw          $a1, 0x1F0($sp)
    ctx->pc = 0x11b50cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 5));
label_11b510:
    // 0x11b510: 0x1a0004c9  blez        $s0, . + 4 + (0x4C9 << 2)
    ctx->pc = 0x11B510u;
    {
        const bool branch_taken_0x11b510 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x11B514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B510u;
        // 0x11b514: 0x8fa601ec  lw          $a2, 0x1EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b510) {
            ctx->pc = 0x11C838u;
            goto label_11c838;
        }
    }
    ctx->pc = 0x11B518u;
    // 0x11b518: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x11b518u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b51c: 0xafa0020c  sw          $zero, 0x20C($sp)
    ctx->pc = 0x11b51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 0));
    // 0x11b520: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x11b520u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11b524: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11b524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11b528: 0xafa001f4  sw          $zero, 0x1F4($sp)
    ctx->pc = 0x11b528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 0));
    // 0x11b52c: 0xafa601ec  sw          $a2, 0x1EC($sp)
    ctx->pc = 0x11b52cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 6));
    // 0x11b530: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x11b530u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
    // 0x11b534: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11B534u;
    {
        const bool branch_taken_0x11b534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B534u;
        // 0x11b538: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b534) {
            ctx->pc = 0x11B54Cu;
            goto label_11b54c;
        }
    }
    ctx->pc = 0x11B53Cu;
label_11b53c:
    // 0x11b53c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11B53Cu;
    {
        const bool branch_taken_0x11b53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B53Cu;
        // 0x11b540: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b53c) {
            ctx->pc = 0x11B54Cu;
            goto label_11b54c;
        }
    }
    ctx->pc = 0x11B544u;
label_11b544:
    // 0x11b544: 0x8fa301ec  lw          $v1, 0x1EC($sp)
    ctx->pc = 0x11b544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_11b548:
    // 0x11b548: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x11b548u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_11b54c:
    // 0x11b54c: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x11b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x11b550: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x11b550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x11b554: 0x2be03  sra         $s7, $v0, 24
    ctx->pc = 0x11b554u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 2), 24));
    // 0x11b558: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x11b558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x11b55c: 0xafa401ec  sw          $a0, 0x1EC($sp)
    ctx->pc = 0x11b55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 4));
label_11b560:
    // 0x11b560: 0x26e3ffe0  addiu       $v1, $s7, -0x20
    ctx->pc = 0x11b560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967264));
    // 0x11b564: 0x2c620059  sltiu       $v0, $v1, 0x59
    ctx->pc = 0x11b564u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
    // 0x11b568: 0x104001b6  beqz        $v0, . + 4 + (0x1B6 << 2)
    ctx->pc = 0x11B568u;
    {
        const bool branch_taken_0x11b568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B568u;
        // 0x11b56c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b568) {
            ctx->pc = 0x11BC44u;
            goto label_11bc44;
        }
    }
    ctx->pc = 0x11B570u;
    // 0x11b570: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11b570u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11b574: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x11b574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x11b578: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11b578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11b57c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11b57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11b580: 0x800008  jr          $a0
    ctx->pc = 0x11B580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11B588u: goto label_11b588;
            case 0x11B5A0u: goto label_11b5a0;
            case 0x11B5B0u: goto label_11b5b0;
            case 0x11B5C8u: goto label_11b5c8;
            case 0x11B5D4u: goto label_11b5d4;
            case 0x11B5E8u: goto label_11b5e8;
            case 0x11B674u: goto label_11b674;
            case 0x11B680u: goto label_11b680;
            case 0x11B6B8u: goto label_11b6b8;
            case 0x11B6C8u: goto label_11b6c8;
            case 0x11B6D8u: goto label_11b6d8;
            case 0x11B70Cu: goto label_11b70c;
            case 0x11B71Cu: goto label_11b71c;
            case 0x11B73Cu: goto label_11b73c;
            case 0x11B740u: goto label_11b740;
            case 0x11B784u: goto label_11b784;
            case 0x11B94Cu: goto label_11b94c;
            case 0x11B998u: goto label_11b998;
            case 0x11B99Cu: goto label_11b99c;
            case 0x11B9D0u: goto label_11b9d0;
            case 0x11B9F4u: goto label_11b9f4;
            case 0x11BA48u: goto label_11ba48;
            case 0x11BA4Cu: goto label_11ba4c;
            case 0x11BA80u: goto label_11ba80;
            case 0x11BA8Cu: goto label_11ba8c;
            case 0x11BC44u: goto label_11bc44;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B580u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x11B588u;
label_11b588:
    // 0x11b588: 0x83a201d1  lb          $v0, 0x1D1($sp)
    ctx->pc = 0x11b588u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x11b58c: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x11B58Cu;
    {
        const bool branch_taken_0x11b58c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B58Cu;
        // 0x11b590: 0x8fa201ec  lw          $v0, 0x1EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b58c) {
            ctx->pc = 0x11B53Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b53c;
        }
    }
    ctx->pc = 0x11B594u;
    // 0x11b594: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x11b594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x11b598: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x11B598u;
    {
        const bool branch_taken_0x11b598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B598u;
        // 0x11b59c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b598) {
            ctx->pc = 0x11B5DCu;
            goto label_11b5dc;
        }
    }
    ctx->pc = 0x11B5A0u;
label_11b5a0:
    // 0x11b5a0: 0x8fa601ec  lw          $a2, 0x1EC($sp)
    ctx->pc = 0x11b5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x11b5a4: 0x37de0001  ori         $fp, $fp, 0x1
    ctx->pc = 0x11b5a4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)1);
    // 0x11b5a8: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x11B5A8u;
    {
        const bool branch_taken_0x11b5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B5A8u;
        // 0x11b5ac: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b5a8) {
            ctx->pc = 0x11B54Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b54c;
        }
    }
    ctx->pc = 0x11B5B0u;
label_11b5b0:
    // 0x11b5b0: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x11b5b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x11b5b4: 0x8e82fff8  lw          $v0, -0x8($s4)
    ctx->pc = 0x11b5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x11b5b8: 0x441ffe2  bgez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x11B5B8u;
    {
        const bool branch_taken_0x11b5b8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11B5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B5B8u;
        // 0x11b5bc: 0xafa201f4  sw          $v0, 0x1F4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b5b8) {
            ctx->pc = 0x11B544u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b544;
        }
    }
    ctx->pc = 0x11B5C0u;
    // 0x11b5c0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x11b5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x11b5c4: 0xafa201f4  sw          $v0, 0x1F4($sp)
    ctx->pc = 0x11b5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 2));
label_11b5c8:
    // 0x11b5c8: 0x8fa301ec  lw          $v1, 0x1EC($sp)
    ctx->pc = 0x11b5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x11b5cc: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x11B5CCu;
    {
        const bool branch_taken_0x11b5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B5CCu;
        // 0x11b5d0: 0x37de0004  ori         $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b5cc) {
            ctx->pc = 0x11B548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b548;
        }
    }
    ctx->pc = 0x11B5D4u;
label_11b5d4:
    // 0x11b5d4: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x11b5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x11b5d8: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x11b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_11b5dc:
    // 0x11b5dc: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x11b5dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11b5e0: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x11B5E0u;
    {
        const bool branch_taken_0x11b5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B5E0u;
        // 0x11b5e4: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b5e0) {
            ctx->pc = 0x11B54Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b54c;
        }
    }
    ctx->pc = 0x11B5E8u;
label_11b5e8:
    // 0x11b5e8: 0x8fa601ec  lw          $a2, 0x1EC($sp)
    ctx->pc = 0x11b5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x11b5ec: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x11b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x11b5f0: 0x80d70000  lb          $s7, 0x0($a2)
    ctx->pc = 0x11b5f0u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11b5f4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11b5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11b5f8: 0x16e20009  bne         $s7, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11B5F8u;
    {
        const bool branch_taken_0x11b5f8 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x11B5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B5F8u;
        // 0x11b5fc: 0xafa601ec  sw          $a2, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b5f8) {
            ctx->pc = 0x11B620u;
            goto label_11b620;
        }
    }
    ctx->pc = 0x11B600u;
    // 0x11b600: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x11b600u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x11b604: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x11b604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x11b608: 0x8e90fff8  lw          $s0, -0x8($s4)
    ctx->pc = 0x11b608u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x11b60c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x11b60cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11b610: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x11b610u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11b614: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x11b614u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11b618: 0x1000ffcc  b           . + 4 + (-0x34 << 2)
    ctx->pc = 0x11B618u;
    {
        const bool branch_taken_0x11b618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B618u;
        // 0x11b61c: 0x202900b  movn        $s2, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b618) {
            ctx->pc = 0x11B54Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b54c;
        }
    }
    ctx->pc = 0x11B620u;
label_11b620:
    // 0x11b620: 0x26e2ffd0  addiu       $v0, $s7, -0x30
    ctx->pc = 0x11b620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967248));
    // 0x11b624: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x11b624u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x11b628: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11B628u;
    {
        const bool branch_taken_0x11b628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B628u;
        // 0x11b62c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b628) {
            ctx->pc = 0x11B660u;
            goto label_11b660;
        }
    }
    ctx->pc = 0x11B630u;
    // 0x11b630: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x11b630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x11b634: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x11b634u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_11b638:
    // 0x11b638: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x11b638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x11b63c: 0x578021  addu        $s0, $v0, $s7
    ctx->pc = 0x11b63cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x11b640: 0x8fa201ec  lw          $v0, 0x1EC($sp)
    ctx->pc = 0x11b640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x11b644: 0x80570000  lb          $s7, 0x0($v0)
    ctx->pc = 0x11b644u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11b648: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11b648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11b64c: 0xafa201ec  sw          $v0, 0x1EC($sp)
    ctx->pc = 0x11b64cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 2));
    // 0x11b650: 0x26e2ffd0  addiu       $v0, $s7, -0x30
    ctx->pc = 0x11b650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967248));
    // 0x11b654: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x11b654u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x11b658: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11B658u;
    {
        const bool branch_taken_0x11b658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B658u;
        // 0x11b65c: 0x2031018  mult        $v0, $s0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b658) {
            ctx->pc = 0x11B638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b638;
        }
    }
    ctx->pc = 0x11B660u;
label_11b660:
    // 0x11b660: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x11b660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x11b664: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x11b664u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11b668: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x11b668u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11b66c: 0x1000ffbc  b           . + 4 + (-0x44 << 2)
    ctx->pc = 0x11B66Cu;
    {
        const bool branch_taken_0x11b66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B66Cu;
        // 0x11b670: 0x202900b  movn        $s2, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b66c) {
            ctx->pc = 0x11B560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b560;
        }
    }
    ctx->pc = 0x11B674u;
label_11b674:
    // 0x11b674: 0x8fa301ec  lw          $v1, 0x1EC($sp)
    ctx->pc = 0x11b674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x11b678: 0x1000ffb3  b           . + 4 + (-0x4D << 2)
    ctx->pc = 0x11B678u;
    {
        const bool branch_taken_0x11b678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B678u;
        // 0x11b67c: 0x37de0080  ori         $fp, $fp, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b678) {
            ctx->pc = 0x11B548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b548;
        }
    }
    ctx->pc = 0x11B680u;
label_11b680:
    // 0x11b680: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11b680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b684: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x11b684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_11b688:
    // 0x11b688: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x11b688u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x11b68c: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x11b68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x11b690: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x11b690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x11b694: 0x578021  addu        $s0, $v0, $s7
    ctx->pc = 0x11b694u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x11b698: 0x80970000  lb          $s7, 0x0($a0)
    ctx->pc = 0x11b698u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11b69c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x11b69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x11b6a0: 0x26e2ffd0  addiu       $v0, $s7, -0x30
    ctx->pc = 0x11b6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967248));
    // 0x11b6a4: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x11b6a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x11b6a8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11B6A8u;
    {
        const bool branch_taken_0x11b6a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B6A8u;
        // 0x11b6ac: 0xafa401ec  sw          $a0, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b6a8) {
            ctx->pc = 0x11B688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b688;
        }
    }
    ctx->pc = 0x11B6B0u;
    // 0x11b6b0: 0x1000ffab  b           . + 4 + (-0x55 << 2)
    ctx->pc = 0x11B6B0u;
    {
        const bool branch_taken_0x11b6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B6B0u;
        // 0x11b6b4: 0xafb001f4  sw          $s0, 0x1F4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b6b0) {
            ctx->pc = 0x11B560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b560;
        }
    }
    ctx->pc = 0x11B6B8u;
label_11b6b8:
    // 0x11b6b8: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x11b6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x11b6bc: 0x37de0008  ori         $fp, $fp, 0x8
    ctx->pc = 0x11b6bcu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)8);
    // 0x11b6c0: 0x1000ffa2  b           . + 4 + (-0x5E << 2)
    ctx->pc = 0x11B6C0u;
    {
        const bool branch_taken_0x11b6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B6C0u;
        // 0x11b6c4: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b6c0) {
            ctx->pc = 0x11B54Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b54c;
        }
    }
    ctx->pc = 0x11B6C8u;
label_11b6c8:
    // 0x11b6c8: 0x8fa601ec  lw          $a2, 0x1EC($sp)
    ctx->pc = 0x11b6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x11b6cc: 0x37de0040  ori         $fp, $fp, 0x40
    ctx->pc = 0x11b6ccu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)64);
    // 0x11b6d0: 0x1000ff9e  b           . + 4 + (-0x62 << 2)
    ctx->pc = 0x11B6D0u;
    {
        const bool branch_taken_0x11b6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B6D0u;
        // 0x11b6d4: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b6d0) {
            ctx->pc = 0x11B54Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b54c;
        }
    }
    ctx->pc = 0x11B6D8u;
label_11b6d8:
    // 0x11b6d8: 0x8fa201ec  lw          $v0, 0x1EC($sp)
    ctx->pc = 0x11b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x11b6dc: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x11b6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x11b6e0: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x11b6e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11b6e4: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x11b6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x11b6e8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11B6E8u;
    {
        const bool branch_taken_0x11b6e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11B6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B6E8u;
        // 0x11b6ec: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b6e8) {
            ctx->pc = 0x11B704u;
            goto label_11b704;
        }
    }
    ctx->pc = 0x11B6F0u;
    // 0x11b6f0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11b6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11b6f4: 0x37de0020  ori         $fp, $fp, 0x20
    ctx->pc = 0x11b6f4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)32);
    // 0x11b6f8: 0xafa501ec  sw          $a1, 0x1EC($sp)
    ctx->pc = 0x11b6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 5));
    // 0x11b6fc: 0x1000ff93  b           . + 4 + (-0x6D << 2)
    ctx->pc = 0x11B6FCu;
    {
        const bool branch_taken_0x11b6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B6FCu;
        // 0x11b700: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b6fc) {
            ctx->pc = 0x11B54Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b54c;
        }
    }
    ctx->pc = 0x11B704u;
label_11b704:
    // 0x11b704: 0x1000ff91  b           . + 4 + (-0x6F << 2)
    ctx->pc = 0x11B704u;
    {
        const bool branch_taken_0x11b704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B704u;
        // 0x11b708: 0x37de0010  ori         $fp, $fp, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b704) {
            ctx->pc = 0x11B54Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b54c;
        }
    }
    ctx->pc = 0x11B70Cu;
label_11b70c:
    // 0x11b70c: 0x8fa601ec  lw          $a2, 0x1EC($sp)
    ctx->pc = 0x11b70cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x11b710: 0x37de0020  ori         $fp, $fp, 0x20
    ctx->pc = 0x11b710u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)32);
    // 0x11b714: 0x1000ff8d  b           . + 4 + (-0x73 << 2)
    ctx->pc = 0x11B714u;
    {
        const bool branch_taken_0x11b714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B714u;
        // 0x11b718: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b714) {
            ctx->pc = 0x11B54Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b54c;
        }
    }
    ctx->pc = 0x11B71Cu;
label_11b71c:
    // 0x11b71c: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x11b71cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x11b720: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x11b720u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x11b724: 0x9282fff8  lbu         $v0, -0x8($s4)
    ctx->pc = 0x11b724u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x11b728: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x11b728u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b72c: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x11b72cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
    // 0x11b730: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x11b730u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11b734: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x11B734u;
    {
        const bool branch_taken_0x11b734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B734u;
        // 0x11b738: 0xa3a20060  sb          $v0, 0x60($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b734) {
            ctx->pc = 0x11BC5Cu;
            goto label_11bc5c;
        }
    }
    ctx->pc = 0x11B73Cu;
label_11b73c:
    // 0x11b73c: 0x37de0010  ori         $fp, $fp, 0x10
    ctx->pc = 0x11b73cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)16);
label_11b740:
    // 0x11b740: 0x33c20010  andi        $v0, $fp, 0x10
    ctx->pc = 0x11b740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)16);
    // 0x11b744: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B744u;
    {
        const bool branch_taken_0x11b744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B744u;
        // 0x11b748: 0x33c20040  andi        $v0, $fp, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b744) {
            ctx->pc = 0x11B758u;
            goto label_11b758;
        }
    }
    ctx->pc = 0x11B74Cu;
    // 0x11b74c: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x11b74cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x11b750: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11B750u;
    {
        const bool branch_taken_0x11b750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B750u;
        // 0x11b754: 0xde90fff8  ld          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b750) {
            ctx->pc = 0x11B76Cu;
            goto label_11b76c;
        }
    }
    ctx->pc = 0x11B758u;
label_11b758:
    // 0x11b758: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B758u;
    {
        const bool branch_taken_0x11b758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B758u;
        // 0x11b75c: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b758) {
            ctx->pc = 0x11B768u;
            goto label_11b768;
        }
    }
    ctx->pc = 0x11B760u;
    // 0x11b760: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11B760u;
    {
        const bool branch_taken_0x11b760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B760u;
        // 0x11b764: 0x8690fff8  lh          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b760) {
            ctx->pc = 0x11B76Cu;
            goto label_11b76c;
        }
    }
    ctx->pc = 0x11B768u;
label_11b768:
    // 0x11b768: 0x8e90fff8  lw          $s0, -0x8($s4)
    ctx->pc = 0x11b768u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_11b76c:
    // 0x11b76c: 0x60100db  bgez        $s0, . + 4 + (0xDB << 2)
    ctx->pc = 0x11B76Cu;
    {
        const bool branch_taken_0x11b76c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x11B770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B76Cu;
        // 0x11b770: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b76c) {
            ctx->pc = 0x11BADCu;
            goto label_11badc;
        }
    }
    ctx->pc = 0x11B774u;
    // 0x11b774: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x11b774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x11b778: 0x10802f  dsubu       $s0, $zero, $s0
    ctx->pc = 0x11b778u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
    // 0x11b77c: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x11B77Cu;
    {
        const bool branch_taken_0x11b77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B77Cu;
        // 0x11b780: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b77c) {
            ctx->pc = 0x11BADCu;
            goto label_11badc;
        }
    }
    ctx->pc = 0x11B784u;
label_11b784:
    // 0x11b784: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11b784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11b788: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B788u;
    {
        const bool branch_taken_0x11b788 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x11B78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B788u;
        // 0x11b78c: 0x24020067  addiu       $v0, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b788) {
            ctx->pc = 0x11B798u;
            goto label_11b798;
        }
    }
    ctx->pc = 0x11B790u;
    // 0x11b790: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11B790u;
    {
        const bool branch_taken_0x11b790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B790u;
        // 0x11b794: 0x24120006  addiu       $s2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b790) {
            ctx->pc = 0x11B7B0u;
            goto label_11b7b0;
        }
    }
    ctx->pc = 0x11B798u;
label_11b798:
    // 0x11b798: 0x12e20003  beq         $s7, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B798u;
    {
        const bool branch_taken_0x11b798 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x11B79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B798u;
        // 0x11b79c: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b798) {
            ctx->pc = 0x11B7A8u;
            goto label_11b7a8;
        }
    }
    ctx->pc = 0x11B7A0u;
    // 0x11b7a0: 0x16e20004  bne         $s7, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B7A0u;
    {
        const bool branch_taken_0x11b7a0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x11B7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B7A0u;
        // 0x11b7a4: 0x33c20008  andi        $v0, $fp, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b7a0) {
            ctx->pc = 0x11B7B4u;
            goto label_11b7b4;
        }
    }
    ctx->pc = 0x11B7A8u;
label_11b7a8:
    // 0x11b7a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11b7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b7ac: 0x52900a  movz        $s2, $v0, $s2
    ctx->pc = 0x11b7acu;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_11b7b0:
    // 0x11b7b0: 0x33c20008  andi        $v0, $fp, 0x8
    ctx->pc = 0x11b7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)8);
label_11b7b4:
    // 0x11b7b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B7B4u;
    {
        const bool branch_taken_0x11b7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B7B4u;
        // 0x11b7b8: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b7b4) {
            ctx->pc = 0x11B7C8u;
            goto label_11b7c8;
        }
    }
    ctx->pc = 0x11B7BCu;
    // 0x11b7bc: 0xde82fff8  ld          $v0, -0x8($s4)
    ctx->pc = 0x11b7bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x11b7c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11B7C0u;
    {
        const bool branch_taken_0x11b7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B7C0u;
        // 0x11b7c4: 0xffa20200  sd          $v0, 0x200($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b7c0) {
            ctx->pc = 0x11B7D0u;
            goto label_11b7d0;
        }
    }
    ctx->pc = 0x11B7C8u;
label_11b7c8:
    // 0x11b7c8: 0xde83fff8  ld          $v1, -0x8($s4)
    ctx->pc = 0x11b7c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x11b7cc: 0xffa30200  sd          $v1, 0x200($sp)
    ctx->pc = 0x11b7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 3));
label_11b7d0:
    // 0x11b7d0: 0xc04525a  jal         func_114968
    ctx->pc = 0x11B7D0u;
    SET_GPR_U32(ctx, 31, 0x11B7D8u);
    ctx->pc = 0x11B7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B7D0u;
    // 0x11b7d4: 0xdfa40200  ld          $a0, 0x200($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114968u, 0x11B7D0u, 0x11B7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B7D8u;
label_11b7d8:
    // 0x11b7d8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11B7D8u;
    {
        const bool branch_taken_0x11b7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B7D8u;
        // 0x11b7dc: 0xdfa40200  ld          $a0, 0x200($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b7d8) {
            ctx->pc = 0x11B808u;
            goto label_11b808;
        }
    }
    ctx->pc = 0x11B7E0u;
    // 0x11b7e0: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x11B7E0u;
    SET_GPR_U32(ctx, 31, 0x11B7E8u);
    ctx->pc = 0x11B7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B7E0u;
    // 0x11b7e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x11B7E0u, 0x11B7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B7E8u;
label_11b7e8:
    // 0x11b7e8: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B7E8u;
    {
        const bool branch_taken_0x11b7e8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B7E8u;
        // 0x11b7ec: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b7e8) {
            ctx->pc = 0x11B7FCu;
            goto label_11b7fc;
        }
    }
    ctx->pc = 0x11B7F0u;
    // 0x11b7f0: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x11b7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x11b7f4: 0xa3a201d1  sb          $v0, 0x1D1($sp)
    ctx->pc = 0x11b7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
    // 0x11b7f8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11b7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_11b7fc:
    // 0x11b7fc: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x11b7fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11b800: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x11B800u;
    {
        const bool branch_taken_0x11b800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B800u;
        // 0x11b804: 0x2453db40  addiu       $s3, $v0, -0x24C0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b800) {
            ctx->pc = 0x11BC58u;
            goto label_11bc58;
        }
    }
    ctx->pc = 0x11B808u;
label_11b808:
    // 0x11b808: 0xc04526c  jal         func_1149B0
    ctx->pc = 0x11B808u;
    SET_GPR_U32(ctx, 31, 0x11B810u);
    ctx->pc = 0x11B80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B808u;
    // 0x11b80c: 0xdfa40200  ld          $a0, 0x200($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1149B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1149B0u, 0x11B808u, 0x11B810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B810u;
label_11b810:
    // 0x11b810: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B810u;
    {
        const bool branch_taken_0x11b810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B810u;
        // 0x11b814: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b810) {
            ctx->pc = 0x11B824u;
            goto label_11b824;
        }
    }
    ctx->pc = 0x11B818u;
    // 0x11b818: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x11b818u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11b81c: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x11B81Cu;
    {
        const bool branch_taken_0x11b81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B81Cu;
        // 0x11b820: 0x2453db48  addiu       $s3, $v0, -0x24B8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b81c) {
            ctx->pc = 0x11BC58u;
            goto label_11bc58;
        }
    }
    ctx->pc = 0x11B824u;
label_11b824:
    // 0x11b824: 0x37de0100  ori         $fp, $fp, 0x100
    ctx->pc = 0x11b824u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)256);
    // 0x11b828: 0x8fa401e4  lw          $a0, 0x1E4($sp)
    ctx->pc = 0x11b828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x11b82c: 0xdfa50200  ld          $a1, 0x200($sp)
    ctx->pc = 0x11b82cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x11b830: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x11b830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b834: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x11b834u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b838: 0x27a801d0  addiu       $t0, $sp, 0x1D0
    ctx->pc = 0x11b838u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x11b83c: 0x27a901dc  addiu       $t1, $sp, 0x1DC
    ctx->pc = 0x11b83cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
    // 0x11b840: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x11b840u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b844: 0xc047228  jal         func_11C8A0
    ctx->pc = 0x11B844u;
    SET_GPR_U32(ctx, 31, 0x11B84Cu);
    ctx->pc = 0x11B848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B844u;
    // 0x11b848: 0x27ab01e0  addiu       $t3, $sp, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C8A0u, 0x11B844u, 0x11B84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B84Cu;
label_11b84c:
    // 0x11b84c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11b84cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b850: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x11b850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x11b854: 0x12e20003  beq         $s7, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B854u;
    {
        const bool branch_taken_0x11b854 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x11B858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B854u;
        // 0x11b858: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b854) {
            ctx->pc = 0x11B864u;
            goto label_11b864;
        }
    }
    ctx->pc = 0x11B85Cu;
    // 0x11b85c: 0x16e2000c  bne         $s7, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11B85Cu;
    {
        const bool branch_taken_0x11b85c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x11B860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B85Cu;
        // 0x11b860: 0x8fa501dc  lw          $a1, 0x1DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b85c) {
            ctx->pc = 0x11B890u;
            goto label_11b890;
        }
    }
    ctx->pc = 0x11B864u;
label_11b864:
    // 0x11b864: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x11b864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x11b868: 0x28a2fffd  slti        $v0, $a1, -0x3
    ctx->pc = 0x11b868u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x11b86c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B86Cu;
    {
        const bool branch_taken_0x11b86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B86Cu;
        // 0x11b870: 0x3ae40067  xori        $a0, $s7, 0x67 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) ^ (uint64_t)(uint16_t)103);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b86c) {
            ctx->pc = 0x11B880u;
            goto label_11b880;
        }
    }
    ctx->pc = 0x11B874u;
    // 0x11b874: 0x245102a  slt         $v0, $s2, $a1
    ctx->pc = 0x11b874u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x11b878: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B878u;
    {
        const bool branch_taken_0x11b878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b878) {
            ctx->pc = 0x11B87Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B878u;
            // 0x11b87c: 0x24170067  addiu       $s7, $zero, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B890u;
            goto label_11b890;
        }
    }
    ctx->pc = 0x11B880u;
label_11b880:
    // 0x11b880: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x11b880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x11b884: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x11b884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x11b888: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x11b888u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b88c: 0x64b80b  movn        $s7, $v1, $a0
    ctx->pc = 0x11b88cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 3));
label_11b890:
    // 0x11b890: 0x2ae20066  slti        $v0, $s7, 0x66
    ctx->pc = 0x11b890u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)102) ? 1 : 0);
    // 0x11b894: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x11B894u;
    {
        const bool branch_taken_0x11b894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B894u;
        // 0x11b898: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b894) {
            ctx->pc = 0x11B8DCu;
            goto label_11b8dc;
        }
    }
    ctx->pc = 0x11B89Cu;
    // 0x11b89c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11b89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b8a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11b8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b8a4: 0xafa201dc  sw          $v0, 0x1DC($sp)
    ctx->pc = 0x11b8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 2));
    // 0x11b8a8: 0xc047294  jal         func_11CA50
    ctx->pc = 0x11B8A8u;
    SET_GPR_U32(ctx, 31, 0x11B8B0u);
    ctx->pc = 0x11B8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B8A8u;
    // 0x11b8ac: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11CA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CA50u, 0x11B8A8u, 0x11B8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B8B0u;
label_11b8b0:
    // 0x11b8b0: 0xafa20208  sw          $v0, 0x208($sp)
    ctx->pc = 0x11b8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 2));
    // 0x11b8b4: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x11b8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x11b8b8: 0x8fa40208  lw          $a0, 0x208($sp)
    ctx->pc = 0x11b8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x11b8bc: 0x28430002  slti        $v1, $v0, 0x2
    ctx->pc = 0x11b8bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11b8c0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B8C0u;
    {
        const bool branch_taken_0x11b8c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8C0u;
        // 0x11b8c4: 0x82a821  addu        $s5, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8c0) {
            ctx->pc = 0x11B8D4u;
            goto label_11b8d4;
        }
    }
    ctx->pc = 0x11B8C8u;
    // 0x11b8c8: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x11b8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x11b8cc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x11B8CCu;
    {
        const bool branch_taken_0x11b8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8CCu;
        // 0x11b8d0: 0x83a201d0  lb          $v0, 0x1D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8cc) {
            ctx->pc = 0x11B938u;
            goto label_11b938;
        }
    }
    ctx->pc = 0x11B8D4u;
label_11b8d4:
    // 0x11b8d4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x11B8D4u;
    {
        const bool branch_taken_0x11b8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8D4u;
        // 0x11b8d8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8d4) {
            ctx->pc = 0x11B934u;
            goto label_11b934;
        }
    }
    ctx->pc = 0x11B8DCu;
label_11b8dc:
    // 0x11b8dc: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x11b8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x11b8e0: 0x16e2000b  bne         $s7, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11B8E0u;
    {
        const bool branch_taken_0x11b8e0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x11B8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8E0u;
        // 0x11b8e4: 0x8fa301e0  lw          $v1, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8e0) {
            ctx->pc = 0x11B910u;
            goto label_11b910;
        }
    }
    ctx->pc = 0x11B8E8u;
    // 0x11b8e8: 0x18a00012  blez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x11B8E8u;
    {
        const bool branch_taken_0x11b8e8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x11B8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8E8u;
        // 0x11b8ec: 0x26550002  addiu       $s5, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8e8) {
            ctx->pc = 0x11B934u;
            goto label_11b934;
        }
    }
    ctx->pc = 0x11B8F0u;
    // 0x11b8f0: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B8F0u;
    {
        const bool branch_taken_0x11b8f0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8F0u;
        // 0x11b8f4: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8f0) {
            ctx->pc = 0x11B904u;
            goto label_11b904;
        }
    }
    ctx->pc = 0x11B8F8u;
    // 0x11b8f8: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x11b8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x11b8fc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x11B8FCu;
    {
        const bool branch_taken_0x11b8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8FCu;
        // 0x11b900: 0x83a201d0  lb          $v0, 0x1D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8fc) {
            ctx->pc = 0x11B938u;
            goto label_11b938;
        }
    }
    ctx->pc = 0x11B904u;
label_11b904:
    // 0x11b904: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x11b904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11b908: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11B908u;
    {
        const bool branch_taken_0x11b908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B908u;
        // 0x11b90c: 0x52a821  addu        $s5, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b908) {
            ctx->pc = 0x11B934u;
            goto label_11b934;
        }
    }
    ctx->pc = 0x11B910u;
label_11b910:
    // 0x11b910: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x11b910u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11b914: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B914u;
    {
        const bool branch_taken_0x11b914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B914u;
        // 0x11b918: 0x33c20001  andi        $v0, $fp, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b914) {
            ctx->pc = 0x11B924u;
            goto label_11b924;
        }
    }
    ctx->pc = 0x11B91Cu;
    // 0x11b91c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11B91Cu;
    {
        const bool branch_taken_0x11b91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B91Cu;
        // 0x11b920: 0xa2a821  addu        $s5, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b91c) {
            ctx->pc = 0x11B934u;
            goto label_11b934;
        }
    }
    ctx->pc = 0x11B924u;
label_11b924:
    // 0x11b924: 0x1ca00003  bgtz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B924u;
    {
        const bool branch_taken_0x11b924 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x11B928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B924u;
        // 0x11b928: 0x24750001  addiu       $s5, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b924) {
            ctx->pc = 0x11B934u;
            goto label_11b934;
        }
    }
    ctx->pc = 0x11B92Cu;
    // 0x11b92c: 0x24620002  addiu       $v0, $v1, 0x2
    ctx->pc = 0x11b92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x11b930: 0x45a823  subu        $s5, $v0, $a1
    ctx->pc = 0x11b930u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_11b934:
    // 0x11b934: 0x83a201d0  lb          $v0, 0x1D0($sp)
    ctx->pc = 0x11b934u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
label_11b938:
    // 0x11b938: 0x104000c7  beqz        $v0, . + 4 + (0xC7 << 2)
    ctx->pc = 0x11B938u;
    {
        const bool branch_taken_0x11b938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B938u;
        // 0x11b93c: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b938) {
            ctx->pc = 0x11BC58u;
            goto label_11bc58;
        }
    }
    ctx->pc = 0x11B940u;
    // 0x11b940: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x11b940u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11b944: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x11B944u;
    {
        const bool branch_taken_0x11b944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B944u;
        // 0x11b948: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b944) {
            ctx->pc = 0x11BC5Cu;
            goto label_11bc5c;
        }
    }
    ctx->pc = 0x11B94Cu;
label_11b94c:
    // 0x11b94c: 0x33c20010  andi        $v0, $fp, 0x10
    ctx->pc = 0x11b94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)16);
    // 0x11b950: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B950u;
    {
        const bool branch_taken_0x11b950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B950u;
        // 0x11b954: 0x8fa501f0  lw          $a1, 0x1F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b950) {
            ctx->pc = 0x11B968u;
            goto label_11b968;
        }
    }
    ctx->pc = 0x11B958u;
    // 0x11b958: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x11b958u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x11b95c: 0x8e82fff8  lw          $v0, -0x8($s4)
    ctx->pc = 0x11b95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x11b960: 0x1000fec1  b           . + 4 + (-0x13F << 2)
    ctx->pc = 0x11B960u;
    {
        const bool branch_taken_0x11b960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B960u;
        // 0x11b964: 0xfc450000  sd          $a1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b960) {
            ctx->pc = 0x11B468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b468;
        }
    }
    ctx->pc = 0x11B968u;
label_11b968:
    // 0x11b968: 0x33c20040  andi        $v0, $fp, 0x40
    ctx->pc = 0x11b968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)64);
    // 0x11b96c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B96Cu;
    {
        const bool branch_taken_0x11b96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B96Cu;
        // 0x11b970: 0x8fa601f0  lw          $a2, 0x1F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b96c) {
            ctx->pc = 0x11B984u;
            goto label_11b984;
        }
    }
    ctx->pc = 0x11B974u;
    // 0x11b974: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x11b974u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x11b978: 0x8e82fff8  lw          $v0, -0x8($s4)
    ctx->pc = 0x11b978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x11b97c: 0x1000feba  b           . + 4 + (-0x146 << 2)
    ctx->pc = 0x11B97Cu;
    {
        const bool branch_taken_0x11b97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B97Cu;
        // 0x11b980: 0xa4460000  sh          $a2, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b97c) {
            ctx->pc = 0x11B468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b468;
        }
    }
    ctx->pc = 0x11B984u;
label_11b984:
    // 0x11b984: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x11b984u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x11b988: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x11b988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x11b98c: 0x8e82fff8  lw          $v0, -0x8($s4)
    ctx->pc = 0x11b98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x11b990: 0x1000feb5  b           . + 4 + (-0x14B << 2)
    ctx->pc = 0x11B990u;
    {
        const bool branch_taken_0x11b990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B990u;
        // 0x11b994: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b990) {
            ctx->pc = 0x11B468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b468;
        }
    }
    ctx->pc = 0x11B998u;
label_11b998:
    // 0x11b998: 0x37de0010  ori         $fp, $fp, 0x10
    ctx->pc = 0x11b998u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)16);
label_11b99c:
    // 0x11b99c: 0x33c20010  andi        $v0, $fp, 0x10
    ctx->pc = 0x11b99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)16);
    // 0x11b9a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B9A0u;
    {
        const bool branch_taken_0x11b9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9A0u;
        // 0x11b9a4: 0x33c20040  andi        $v0, $fp, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b9a0) {
            ctx->pc = 0x11B9B4u;
            goto label_11b9b4;
        }
    }
    ctx->pc = 0x11B9A8u;
    // 0x11b9a8: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x11b9a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x11b9ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11B9ACu;
    {
        const bool branch_taken_0x11b9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9ACu;
        // 0x11b9b0: 0xde90fff8  ld          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b9ac) {
            ctx->pc = 0x11B9C8u;
            goto label_11b9c8;
        }
    }
    ctx->pc = 0x11B9B4u;
label_11b9b4:
    // 0x11b9b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B9B4u;
    {
        const bool branch_taken_0x11b9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9B4u;
        // 0x11b9b8: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b9b4) {
            ctx->pc = 0x11B9C4u;
            goto label_11b9c4;
        }
    }
    ctx->pc = 0x11B9BCu;
    // 0x11b9bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11B9BCu;
    {
        const bool branch_taken_0x11b9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9BCu;
        // 0x11b9c0: 0x9690fff8  lhu         $s0, -0x8($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b9bc) {
            ctx->pc = 0x11B9C8u;
            goto label_11b9c8;
        }
    }
    ctx->pc = 0x11B9C4u;
label_11b9c4:
    // 0x11b9c4: 0x9e90fff8  lwu         $s0, -0x8($s4)
    ctx->pc = 0x11b9c4u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_11b9c8:
    // 0x11b9c8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x11B9C8u;
    {
        const bool branch_taken_0x11b9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9C8u;
        // 0x11b9cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b9c8) {
            ctx->pc = 0x11BAD8u;
            goto label_11bad8;
        }
    }
    ctx->pc = 0x11B9D0u;
label_11b9d0:
    // 0x11b9d0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11b9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x11b9d4: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x11b9d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x11b9d8: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x11b9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
    // 0x11b9dc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x11b9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11b9e0: 0xafa20214  sw          $v0, 0x214($sp)
    ctx->pc = 0x11b9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
    // 0x11b9e4: 0x37de0002  ori         $fp, $fp, 0x2
    ctx->pc = 0x11b9e4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)2);
    // 0x11b9e8: 0x24170078  addiu       $s7, $zero, 0x78
    ctx->pc = 0x11b9e8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x11b9ec: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x11B9ECu;
    {
        const bool branch_taken_0x11b9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9ECu;
        // 0x11b9f0: 0x8e90fff8  lw          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b9ec) {
            ctx->pc = 0x11BAD8u;
            goto label_11bad8;
        }
    }
    ctx->pc = 0x11B9F4u;
label_11b9f4:
    // 0x11b9f4: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x11b9f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x11b9f8: 0x8e93fff8  lw          $s3, -0x8($s4)
    ctx->pc = 0x11b9f8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x11b9fc: 0x16600002  bnez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x11B9FCu;
    {
        const bool branch_taken_0x11b9fc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9FCu;
        // 0x11ba00: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b9fc) {
            ctx->pc = 0x11BA08u;
            goto label_11ba08;
        }
    }
    ctx->pc = 0x11BA04u;
    // 0x11ba04: 0x2453db68  addiu       $s3, $v0, -0x2498
    ctx->pc = 0x11ba04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957928));
label_11ba08:
    // 0x11ba08: 0x640000b  bltz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x11BA08u;
    {
        const bool branch_taken_0x11ba08 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x11BA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA08u;
        // 0x11ba0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba08) {
            ctx->pc = 0x11BA38u;
            goto label_11ba38;
        }
    }
    ctx->pc = 0x11BA10u;
    // 0x11ba10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11ba10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba14: 0xc046248  jal         func_118920
    ctx->pc = 0x11BA14u;
    SET_GPR_U32(ctx, 31, 0x11BA1Cu);
    ctx->pc = 0x11BA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA14u;
    // 0x11ba18: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118920u;
    {
        ctx->pc = 0x11BA1Cu;
        ps2_stubs::memchr(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x11BA1Cu) { return; }
    ctx->pc = 0x11BA1Cu;
label_11ba1c:
    // 0x11ba1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11BA1Cu;
    {
        const bool branch_taken_0x11ba1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA1Cu;
        // 0x11ba20: 0x53a823  subu        $s5, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba1c) {
            ctx->pc = 0x11BA30u;
            goto label_11ba30;
        }
    }
    ctx->pc = 0x11BA24u;
    // 0x11ba24: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x11ba24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x11ba28: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x11BA28u;
    {
        const bool branch_taken_0x11ba28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA28u;
        // 0x11ba2c: 0x242a80b  movn        $s5, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba28) {
            ctx->pc = 0x11BC54u;
            goto label_11bc54;
        }
    }
    ctx->pc = 0x11BA30u;
label_11ba30:
    // 0x11ba30: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x11BA30u;
    {
        const bool branch_taken_0x11ba30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA30u;
        // 0x11ba34: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba30) {
            ctx->pc = 0x11BC54u;
            goto label_11bc54;
        }
    }
    ctx->pc = 0x11BA38u;
label_11ba38:
    // 0x11ba38: 0xc046b58  jal         func_11AD60
    ctx->pc = 0x11BA38u;
    SET_GPR_U32(ctx, 31, 0x11BA40u);
    ctx->pc = 0x11BA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA38u;
    // 0x11ba3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AD60u;
    {
        ctx->pc = 0x11BA40u;
        ps2_stubs::strlen(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x11BA40u) { return; }
    ctx->pc = 0x11BA40u;
label_11ba40:
    // 0x11ba40: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x11BA40u;
    {
        const bool branch_taken_0x11ba40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA40u;
        // 0x11ba44: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba40) {
            ctx->pc = 0x11BC54u;
            goto label_11bc54;
        }
    }
    ctx->pc = 0x11BA48u;
label_11ba48:
    // 0x11ba48: 0x37de0010  ori         $fp, $fp, 0x10
    ctx->pc = 0x11ba48u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)16);
label_11ba4c:
    // 0x11ba4c: 0x33c20010  andi        $v0, $fp, 0x10
    ctx->pc = 0x11ba4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)16);
    // 0x11ba50: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11BA50u;
    {
        const bool branch_taken_0x11ba50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA50u;
        // 0x11ba54: 0x33c20040  andi        $v0, $fp, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba50) {
            ctx->pc = 0x11BA64u;
            goto label_11ba64;
        }
    }
    ctx->pc = 0x11BA58u;
    // 0x11ba58: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x11ba58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x11ba5c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11BA5Cu;
    {
        const bool branch_taken_0x11ba5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA5Cu;
        // 0x11ba60: 0xde90fff8  ld          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba5c) {
            ctx->pc = 0x11BA78u;
            goto label_11ba78;
        }
    }
    ctx->pc = 0x11BA64u;
label_11ba64:
    // 0x11ba64: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BA64u;
    {
        const bool branch_taken_0x11ba64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA64u;
        // 0x11ba68: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba64) {
            ctx->pc = 0x11BA74u;
            goto label_11ba74;
        }
    }
    ctx->pc = 0x11BA6Cu;
    // 0x11ba6c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11BA6Cu;
    {
        const bool branch_taken_0x11ba6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA6Cu;
        // 0x11ba70: 0x9690fff8  lhu         $s0, -0x8($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba6c) {
            ctx->pc = 0x11BA78u;
            goto label_11ba78;
        }
    }
    ctx->pc = 0x11BA74u;
label_11ba74:
    // 0x11ba74: 0x9e90fff8  lwu         $s0, -0x8($s4)
    ctx->pc = 0x11ba74u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_11ba78:
    // 0x11ba78: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x11BA78u;
    {
        const bool branch_taken_0x11ba78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA78u;
        // 0x11ba7c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba78) {
            ctx->pc = 0x11BAD8u;
            goto label_11bad8;
        }
    }
    ctx->pc = 0x11BA80u;
label_11ba80:
    // 0x11ba80: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11ba80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x11ba84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11BA84u;
    {
        const bool branch_taken_0x11ba84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA84u;
        // 0x11ba88: 0x2442db70  addiu       $v0, $v0, -0x2490 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba84) {
            ctx->pc = 0x11BA94u;
            goto label_11ba94;
        }
    }
    ctx->pc = 0x11BA8Cu;
label_11ba8c:
    // 0x11ba8c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11ba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x11ba90: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x11ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
label_11ba94:
    // 0x11ba94: 0xafa20214  sw          $v0, 0x214($sp)
    ctx->pc = 0x11ba94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
    // 0x11ba98: 0x33c20010  andi        $v0, $fp, 0x10
    ctx->pc = 0x11ba98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)16);
    // 0x11ba9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11BA9Cu;
    {
        const bool branch_taken_0x11ba9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA9Cu;
        // 0x11baa0: 0x33c20040  andi        $v0, $fp, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba9c) {
            ctx->pc = 0x11BAB0u;
            goto label_11bab0;
        }
    }
    ctx->pc = 0x11BAA4u;
    // 0x11baa4: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x11baa4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x11baa8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11BAA8u;
    {
        const bool branch_taken_0x11baa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BAA8u;
        // 0x11baac: 0xde90fff8  ld          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11baa8) {
            ctx->pc = 0x11BAC4u;
            goto label_11bac4;
        }
    }
    ctx->pc = 0x11BAB0u;
label_11bab0:
    // 0x11bab0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BAB0u;
    {
        const bool branch_taken_0x11bab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BAB0u;
        // 0x11bab4: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bab0) {
            ctx->pc = 0x11BAC0u;
            goto label_11bac0;
        }
    }
    ctx->pc = 0x11BAB8u;
    // 0x11bab8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11BAB8u;
    {
        const bool branch_taken_0x11bab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BAB8u;
        // 0x11babc: 0x9690fff8  lhu         $s0, -0x8($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bab8) {
            ctx->pc = 0x11BAC4u;
            goto label_11bac4;
        }
    }
    ctx->pc = 0x11BAC0u;
label_11bac0:
    // 0x11bac0: 0x9e90fff8  lwu         $s0, -0x8($s4)
    ctx->pc = 0x11bac0u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_11bac4:
    // 0x11bac4: 0x33c30001  andi        $v1, $fp, 0x1
    ctx->pc = 0x11bac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x11bac8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BAC8u;
    {
        const bool branch_taken_0x11bac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BAC8u;
        // 0x11bacc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bac8) {
            ctx->pc = 0x11BAD8u;
            goto label_11bad8;
        }
    }
    ctx->pc = 0x11BAD0u;
    // 0x11bad0: 0x37c20002  ori         $v0, $fp, 0x2
    ctx->pc = 0x11bad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)2);
    // 0x11bad4: 0x50f00b  movn        $fp, $v0, $s0
    ctx->pc = 0x11bad4u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 2));
label_11bad8:
    // 0x11bad8: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x11bad8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
label_11badc:
    // 0x11badc: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BADCu;
    {
        const bool branch_taken_0x11badc = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x11BAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BADCu;
        // 0x11bae0: 0xafb2020c  sw          $s2, 0x20C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11badc) {
            ctx->pc = 0x11BAECu;
            goto label_11baec;
        }
    }
    ctx->pc = 0x11BAE4u;
    // 0x11bae4: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x11bae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x11bae8: 0x3c2f024  and         $fp, $fp, $v0
    ctx->pc = 0x11bae8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) & GPR_U64(ctx, 2));
label_11baec:
    // 0x11baec: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11BAECu;
    {
        const bool branch_taken_0x11baec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BAECu;
        // 0x11baf0: 0x27b301bc  addiu       $s3, $sp, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11baec) {
            ctx->pc = 0x11BB00u;
            goto label_11bb00;
        }
    }
    ctx->pc = 0x11BAF4u;
    // 0x11baf4: 0x8fa5020c  lw          $a1, 0x20C($sp)
    ctx->pc = 0x11baf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x11baf8: 0x10a0004d  beqz        $a1, . + 4 + (0x4D << 2)
    ctx->pc = 0x11BAF8u;
    {
        const bool branch_taken_0x11baf8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BAF8u;
        // 0x11bafc: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11baf8) {
            ctx->pc = 0x11BC30u;
            goto label_11bc30;
        }
    }
    ctx->pc = 0x11BB00u;
label_11bb00:
    // 0x11bb00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11bb04: 0x1082001f  beq         $a0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x11BB04u;
    {
        const bool branch_taken_0x11bb04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11BB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB04u;
        // 0x11bb08: 0x2e02000a  sltiu       $v0, $s0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb04) {
            ctx->pc = 0x11BB84u;
            goto label_11bb84;
        }
    }
    ctx->pc = 0x11BB0Cu;
    // 0x11bb0c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x11BB0Cu;
    {
        const bool branch_taken_0x11bb0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB0Cu;
        // 0x11bb10: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb0c) {
            ctx->pc = 0x11BB38u;
            goto label_11bb38;
        }
    }
    ctx->pc = 0x11BB14u;
    // 0x11bb14: 0x10820037  beq         $a0, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x11BB14u;
    {
        const bool branch_taken_0x11bb14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11BB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB14u;
        // 0x11bb18: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb14) {
            ctx->pc = 0x11BBF4u;
            goto label_11bbf4;
        }
    }
    ctx->pc = 0x11BB1Cu;
    // 0x11bb1c: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x11bb1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11bb20: 0x2453db88  addiu       $s3, $v0, -0x2478
    ctx->pc = 0x11bb20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957960));
    // 0x11bb24: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x11bb24u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
    // 0x11bb28: 0xc046b58  jal         func_11AD60
    ctx->pc = 0x11BB28u;
    SET_GPR_U32(ctx, 31, 0x11BB30u);
    ctx->pc = 0x11BB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BB28u;
    // 0x11bb2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AD60u;
    {
        ctx->pc = 0x11BB30u;
        ps2_stubs::strlen(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x11BB30u) { return; }
    ctx->pc = 0x11BB30u;
label_11bb30:
    // 0x11bb30: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x11BB30u;
    {
        const bool branch_taken_0x11bb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB30u;
        // 0x11bb34: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb30) {
            ctx->pc = 0x11BC60u;
            goto label_11bc60;
        }
    }
    ctx->pc = 0x11BB38u;
label_11bb38:
    // 0x11bb38: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x11bb38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11bb3c: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x11bb3cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x11bb40: 0x33c30001  andi        $v1, $fp, 0x1
    ctx->pc = 0x11bb40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x11bb44: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x11bb44u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
label_11bb48:
    // 0x11bb48: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x11bb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x11bb4c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x11bb4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x11bb50: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x11bb50u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x11bb54: 0x1080fa  dsrl        $s0, $s0, 3
    ctx->pc = 0x11bb54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
    // 0x11bb58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11bb58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11bb5c: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x11bb5cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x11bb60: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11BB60u;
    {
        const bool branch_taken_0x11bb60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x11bb60) {
            ctx->pc = 0x11BB48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11bb48;
        }
    }
    ctx->pc = 0x11BB68u;
    // 0x11bb68: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x11BB68u;
    {
        const bool branch_taken_0x11bb68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB68u;
        // 0x11bb6c: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb68) {
            ctx->pc = 0x11BC38u;
            goto label_11bc38;
        }
    }
    ctx->pc = 0x11BB70u;
    // 0x11bb70: 0x10430032  beq         $v0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x11BB70u;
    {
        const bool branch_taken_0x11bb70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11BB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB70u;
        // 0x11bb74: 0x2662fea4  addiu       $v0, $s3, -0x15C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966948));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb70) {
            ctx->pc = 0x11BC3Cu;
            goto label_11bc3c;
        }
    }
    ctx->pc = 0x11BB78u;
    // 0x11bb78: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x11bb78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x11bb7c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x11BB7Cu;
    {
        const bool branch_taken_0x11bb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB7Cu;
        // 0x11bb80: 0xa2630000  sb          $v1, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb7c) {
            ctx->pc = 0x11BC38u;
            goto label_11bc38;
        }
    }
    ctx->pc = 0x11BB84u;
label_11bb84:
    // 0x11bb84: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x11BB84u;
    {
        const bool branch_taken_0x11bb84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB84u;
        // 0x11bb88: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb84) {
            ctx->pc = 0x11BBD8u;
            goto label_11bbd8;
        }
    }
    ctx->pc = 0x11BB8Cu;
    // 0x11bb8c: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x11bb8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x11bb90: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x11bb90u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
    // 0x11bb94: 0x0  nop
    ctx->pc = 0x11bb94u;
    // NOP
label_11bb98:
    // 0x11bb98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bb9c: 0xc04786c  jal         func_11E1B0
    ctx->pc = 0x11BB9Cu;
    SET_GPR_U32(ctx, 31, 0x11BBA4u);
    ctx->pc = 0x11BBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BB9Cu;
    // 0x11bba0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1B0u, 0x11BB9Cu, 0x11BBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BBA4u;
label_11bba4:
    // 0x11bba4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x11bba4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x11bba8: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x11bba8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x11bbac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bbacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bbb0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11bbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11bbb4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x11bbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x11bbb8: 0xc0476f8  jal         func_11DBE0
    ctx->pc = 0x11BBB8u;
    SET_GPR_U32(ctx, 31, 0x11BBC0u);
    ctx->pc = 0x11BBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BBB8u;
    // 0x11bbbc: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DBE0u, 0x11BBB8u, 0x11BBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BBC0u;
label_11bbc0:
    // 0x11bbc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11bbc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bbc4: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x11bbc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x11bbc8: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x11BBC8u;
    {
        const bool branch_taken_0x11bbc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BBC8u;
        // 0x11bbcc: 0x66020030  daddiu      $v0, $s0, 0x30 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)48);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bbc8) {
            ctx->pc = 0x11BB98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11bb98;
        }
    }
    ctx->pc = 0x11BBD0u;
    // 0x11bbd0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11BBD0u;
    {
        const bool branch_taken_0x11bbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BBD0u;
        // 0x11bbd4: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bbd0) {
            ctx->pc = 0x11BBE8u;
            goto label_11bbe8;
        }
    }
    ctx->pc = 0x11BBD8u;
label_11bbd8:
    // 0x11bbd8: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x11bbd8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x11bbdc: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x11bbdcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
    // 0x11bbe0: 0x66020030  daddiu      $v0, $s0, 0x30
    ctx->pc = 0x11bbe0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)48);
    // 0x11bbe4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x11bbe4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_11bbe8:
    // 0x11bbe8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11bbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11bbec: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x11BBECu;
    {
        const bool branch_taken_0x11bbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BBECu;
        // 0x11bbf0: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bbec) {
            ctx->pc = 0x11BC38u;
            goto label_11bc38;
        }
    }
    ctx->pc = 0x11BBF4u;
label_11bbf4:
    // 0x11bbf4: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x11bbf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11bbf8: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x11bbf8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x11bbfc: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x11bbfcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
label_11bc00:
    // 0x11bc00: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x11bc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x11bc04: 0x8fa60214  lw          $a2, 0x214($sp)
    ctx->pc = 0x11bc04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x11bc08: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11bc08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11bc0c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11bc0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11bc10: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x11bc10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x11bc14: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x11bc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x11bc18: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x11bc18u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
    // 0x11bc1c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x11bc1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11bc20: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11BC20u;
    {
        const bool branch_taken_0x11bc20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BC20u;
        // 0x11bc24: 0xa2630000  sb          $v1, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc20) {
            ctx->pc = 0x11BC00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11bc00;
        }
    }
    ctx->pc = 0x11BC28u;
    // 0x11bc28: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11BC28u;
    {
        const bool branch_taken_0x11bc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BC28u;
        // 0x11bc2c: 0x2662fea4  addiu       $v0, $s3, -0x15C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966948));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc28) {
            ctx->pc = 0x11BC3Cu;
            goto label_11bc3c;
        }
    }
    ctx->pc = 0x11BC30u;
label_11bc30:
    // 0x11bc30: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x11bc30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x11bc34: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x11bc34u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
label_11bc38:
    // 0x11bc38: 0x2662fea4  addiu       $v0, $s3, -0x15C
    ctx->pc = 0x11bc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966948));
label_11bc3c:
    // 0x11bc3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11BC3Cu;
    {
        const bool branch_taken_0x11bc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BC3Cu;
        // 0x11bc40: 0x2a2a823  subu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc3c) {
            ctx->pc = 0x11BC60u;
            goto label_11bc60;
        }
    }
    ctx->pc = 0x11BC44u;
label_11bc44:
    // 0x11bc44: 0x12e002fc  beqz        $s7, . + 4 + (0x2FC << 2)
    ctx->pc = 0x11BC44u;
    {
        const bool branch_taken_0x11bc44 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BC44u;
        // 0x11bc48: 0x27b30060  addiu       $s3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc44) {
            ctx->pc = 0x11C838u;
            goto label_11c838;
        }
    }
    ctx->pc = 0x11BC4Cu;
    // 0x11bc4c: 0xa3b70060  sb          $s7, 0x60($sp)
    ctx->pc = 0x11bc4cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 23));
    // 0x11bc50: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x11bc50u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11bc54:
    // 0x11bc54: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x11bc54u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
label_11bc58:
    // 0x11bc58: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x11bc58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_11bc5c:
    // 0x11bc5c: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x11bc5cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
label_11bc60:
    // 0x11bc60: 0xafb50210  sw          $s5, 0x210($sp)
    ctx->pc = 0x11bc60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 21));
    // 0x11bc64: 0x8fa4020c  lw          $a0, 0x20C($sp)
    ctx->pc = 0x11bc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x11bc68: 0x8fa5020c  lw          $a1, 0x20C($sp)
    ctx->pc = 0x11bc68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x11bc6c: 0x2a4102a  slt         $v0, $s5, $a0
    ctx->pc = 0x11bc6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x11bc70: 0x83a301d1  lb          $v1, 0x1D1($sp)
    ctx->pc = 0x11bc70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x11bc74: 0x2a2280a  movz        $a1, $s5, $v0
    ctx->pc = 0x11bc74u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 21));
    // 0x11bc78: 0x93a401d1  lbu         $a0, 0x1D1($sp)
    ctx->pc = 0x11bc78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x11bc7c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11BC7Cu;
    {
        const bool branch_taken_0x11bc7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BC7Cu;
        // 0x11bc80: 0xafa50210  sw          $a1, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc7c) {
            ctx->pc = 0x11BC90u;
            goto label_11bc90;
        }
    }
    ctx->pc = 0x11BC84u;
    // 0x11bc84: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11bc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11bc88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11BC88u;
    {
        const bool branch_taken_0x11bc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BC88u;
        // 0x11bc8c: 0xafa50210  sw          $a1, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc88) {
            ctx->pc = 0x11BCA0u;
            goto label_11bca0;
        }
    }
    ctx->pc = 0x11BC90u;
label_11bc90:
    // 0x11bc90: 0x8fa60210  lw          $a2, 0x210($sp)
    ctx->pc = 0x11bc90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x11bc94: 0x33c20002  andi        $v0, $fp, 0x2
    ctx->pc = 0x11bc94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)2);
    // 0x11bc98: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x11bc98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x11bc9c: 0xafa60210  sw          $a2, 0x210($sp)
    ctx->pc = 0x11bc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 6));
label_11bca0:
    // 0x11bca0: 0x16c00037  bnez        $s6, . + 4 + (0x37 << 2)
    ctx->pc = 0x11BCA0u;
    {
        const bool branch_taken_0x11bca0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BCA0u;
        // 0x11bca4: 0x8fa201f4  lw          $v0, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bca0) {
            ctx->pc = 0x11BD80u;
            goto label_11bd80;
        }
    }
    ctx->pc = 0x11BCA8u;
    // 0x11bca8: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x11bca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x11bcac: 0x438023  subu        $s0, $v0, $v1
    ctx->pc = 0x11bcacu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11bcb0: 0x1a000033  blez        $s0, . + 4 + (0x33 << 2)
    ctx->pc = 0x11BCB0u;
    {
        const bool branch_taken_0x11bcb0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x11BCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BCB0u;
        // 0x11bcb4: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bcb0) {
            ctx->pc = 0x11BD80u;
            goto label_11bd80;
        }
    }
    ctx->pc = 0x11BCB8u;
    // 0x11bcb8: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x11BCB8u;
    {
        const bool branch_taken_0x11bcb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BCB8u;
        // 0x11bcbc: 0x3c06003b  lui         $a2, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bcb8) {
            ctx->pc = 0x11BD28u;
            goto label_11bd28;
        }
    }
    ctx->pc = 0x11BCC0u;
    // 0x11bcc0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11BCC0u;
    {
        const bool branch_taken_0x11bcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BCC0u;
        // 0x11bcc4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bcc0) {
            ctx->pc = 0x11BCCCu;
            goto label_11bccc;
        }
    }
    ctx->pc = 0x11BCC8u;
label_11bcc8:
    // 0x11bcc8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x11bcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_11bccc:
    // 0x11bccc: 0x24c4db20  addiu       $a0, $a2, -0x24E0
    ctx->pc = 0x11bcccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957856));
    // 0x11bcd0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x11bcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x11bcd4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x11bcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x11bcd8: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x11bcd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bcdc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11bcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11bce0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11bce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11bce4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x11bce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x11bce8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11bce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11bcec: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11bcecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11bcf0: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x11bcf0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11bcf4: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11BCF4u;
    {
        const bool branch_taken_0x11bcf4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BCF4u;
        // 0x11bcf8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bcf4) {
            ctx->pc = 0x11BD18u;
            goto label_11bd18;
        }
    }
    ctx->pc = 0x11BCFCu;
    // 0x11bcfc: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11bcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11bd00: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x11bd00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11bd04: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11BD04u;
    SET_GPR_U32(ctx, 31, 0x11BD0Cu);
    ctx->pc = 0x11BD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BD04u;
    // 0x11bd08: 0x7fa60220  sq          $a2, 0x220($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11BD04u, 0x11BD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BD0Cu;
label_11bd0c:
    // 0x11bd0c: 0x144002d2  bnez        $v0, . + 4 + (0x2D2 << 2)
    ctx->pc = 0x11BD0Cu;
    {
        const bool branch_taken_0x11bd0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD0Cu;
        // 0x11bd10: 0x7ba60220  lq          $a2, 0x220($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd0c) {
            ctx->pc = 0x11C858u;
            goto label_11c858;
        }
    }
    ctx->pc = 0x11BD14u;
    // 0x11bd14: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x11bd14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_11bd18:
    // 0x11bd18: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x11bd18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x11bd1c: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x11bd1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x11bd20: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x11BD20u;
    {
        const bool branch_taken_0x11bd20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD20u;
        // 0x11bd24: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd20) {
            ctx->pc = 0x11BCC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11bcc8;
        }
    }
    ctx->pc = 0x11BD28u;
label_11bd28:
    // 0x11bd28: 0x24c2db20  addiu       $v0, $a2, -0x24E0
    ctx->pc = 0x11bd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957856));
    // 0x11bd2c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x11bd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x11bd30: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11bd30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11bd34: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11bd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11bd38: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x11bd38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bd3c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11bd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11bd40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11bd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11bd44: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x11bd44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x11bd48: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x11bd48u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11bd4c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11bd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11bd50: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11BD50u;
    {
        const bool branch_taken_0x11bd50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD50u;
        // 0x11bd54: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd50) {
            ctx->pc = 0x11BD78u;
            goto label_11bd78;
        }
    }
    ctx->pc = 0x11BD58u;
    // 0x11bd58: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11bd58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11bd5c: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11BD5Cu;
    SET_GPR_U32(ctx, 31, 0x11BD64u);
    ctx->pc = 0x11BD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BD5Cu;
    // 0x11bd60: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11BD5Cu, 0x11BD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BD64u;
label_11bd64:
    // 0x11bd64: 0x144002bc  bnez        $v0, . + 4 + (0x2BC << 2)
    ctx->pc = 0x11BD64u;
    {
        const bool branch_taken_0x11bd64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD64u;
        // 0x11bd68: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd64) {
            ctx->pc = 0x11C858u;
            goto label_11c858;
        }
    }
    ctx->pc = 0x11BD6Cu;
    // 0x11bd6c: 0x27b20028  addiu       $s2, $sp, 0x28
    ctx->pc = 0x11bd6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x11bd70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11BD70u;
    {
        const bool branch_taken_0x11bd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD70u;
        // 0x11bd74: 0x93a401d1  lbu         $a0, 0x1D1($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd70) {
            ctx->pc = 0x11BD80u;
            goto label_11bd80;
        }
    }
    ctx->pc = 0x11BD78u;
label_11bd78:
    // 0x11bd78: 0x93a401d1  lbu         $a0, 0x1D1($sp)
    ctx->pc = 0x11bd78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x11bd7c: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x11bd7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_11bd80:
    // 0x11bd80: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x11BD80u;
    {
        const bool branch_taken_0x11bd80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD80u;
        // 0x11bd84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd80) {
            ctx->pc = 0x11BDC0u;
            goto label_11bdc0;
        }
    }
    ctx->pc = 0x11BD88u;
    // 0x11bd88: 0x27a401d1  addiu       $a0, $sp, 0x1D1
    ctx->pc = 0x11bd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 465));
    // 0x11bd8c: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x11bd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x11bd90: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x11bd90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x11bd94: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x11bd94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bd98: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11bd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11bd9c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11bd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11bda0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11bda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11bda4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11bda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11bda8: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11bda8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11bdac: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x11bdacu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11bdb0: 0x1480001c  bnez        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x11BDB0u;
    {
        const bool branch_taken_0x11bdb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BDB0u;
        // 0x11bdb4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bdb0) {
            ctx->pc = 0x11BE24u;
            goto label_11be24;
        }
    }
    ctx->pc = 0x11BDB8u;
    // 0x11bdb8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x11BDB8u;
    {
        const bool branch_taken_0x11bdb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BDB8u;
        // 0x11bdbc: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bdb8) {
            ctx->pc = 0x11BE0Cu;
            goto label_11be0c;
        }
    }
    ctx->pc = 0x11BDC0u;
label_11bdc0:
    // 0x11bdc0: 0x33c20002  andi        $v0, $fp, 0x2
    ctx->pc = 0x11bdc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)2);
    // 0x11bdc4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x11BDC4u;
    {
        const bool branch_taken_0x11bdc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BDC4u;
        // 0x11bdc8: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bdc4) {
            ctx->pc = 0x11BE28u;
            goto label_11be28;
        }
    }
    ctx->pc = 0x11BDCCu;
    // 0x11bdcc: 0xa3b701c1  sb          $s7, 0x1C1($sp)
    ctx->pc = 0x11bdccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 449), (uint8_t)GPR_U32(ctx, 23));
    // 0x11bdd0: 0xa3a301c0  sb          $v1, 0x1C0($sp)
    ctx->pc = 0x11bdd0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 448), (uint8_t)GPR_U32(ctx, 3));
    // 0x11bdd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11bdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11bdd8: 0x27a301c0  addiu       $v1, $sp, 0x1C0
    ctx->pc = 0x11bdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x11bddc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x11bddcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x11bde0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x11bde0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x11bde4: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x11bde4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bde8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x11bde8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11bdec: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11bdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11bdf0: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x11bdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x11bdf4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11bdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11bdf8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x11bdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x11bdfc: 0x28430008  slti        $v1, $v0, 0x8
    ctx->pc = 0x11bdfcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11be00: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x11BE00u;
    {
        const bool branch_taken_0x11be00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE00u;
        // 0x11be04: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be00) {
            ctx->pc = 0x11BE24u;
            goto label_11be24;
        }
    }
    ctx->pc = 0x11BE08u;
    // 0x11be08: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11be08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_11be0c:
    // 0x11be0c: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11BE0Cu;
    SET_GPR_U32(ctx, 31, 0x11BE14u);
    ctx->pc = 0x11BE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BE0Cu;
    // 0x11be10: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11BE0Cu, 0x11BE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BE14u;
label_11be14:
    // 0x11be14: 0x14400290  bnez        $v0, . + 4 + (0x290 << 2)
    ctx->pc = 0x11BE14u;
    {
        const bool branch_taken_0x11be14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE14u;
        // 0x11be18: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be14) {
            ctx->pc = 0x11C858u;
            goto label_11c858;
        }
    }
    ctx->pc = 0x11BE1Cu;
    // 0x11be1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11BE1Cu;
    {
        const bool branch_taken_0x11be1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE1Cu;
        // 0x11be20: 0x27b20028  addiu       $s2, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be1c) {
            ctx->pc = 0x11BE28u;
            goto label_11be28;
        }
    }
    ctx->pc = 0x11BE24u;
label_11be24:
    // 0x11be24: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x11be24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_11be28:
    // 0x11be28: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x11be28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x11be2c: 0x16c20035  bne         $s6, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x11BE2Cu;
    {
        const bool branch_taken_0x11be2c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x11BE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE2Cu;
        // 0x11be30: 0x8fa6020c  lw          $a2, 0x20C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be2c) {
            ctx->pc = 0x11BF04u;
            goto label_11bf04;
        }
    }
    ctx->pc = 0x11BE34u;
    // 0x11be34: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x11be34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x11be38: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x11be38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x11be3c: 0x858023  subu        $s0, $a0, $a1
    ctx->pc = 0x11be3cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x11be40: 0x1a000030  blez        $s0, . + 4 + (0x30 << 2)
    ctx->pc = 0x11BE40u;
    {
        const bool branch_taken_0x11be40 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x11BE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE40u;
        // 0x11be44: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be40) {
            ctx->pc = 0x11BF04u;
            goto label_11bf04;
        }
    }
    ctx->pc = 0x11BE48u;
    // 0x11be48: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x11BE48u;
    {
        const bool branch_taken_0x11be48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE48u;
        // 0x11be4c: 0x3c16003b  lui         $s6, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be48) {
            ctx->pc = 0x11BEB0u;
            goto label_11beb0;
        }
    }
    ctx->pc = 0x11BE50u;
    // 0x11be50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11BE50u;
    {
        const bool branch_taken_0x11be50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE50u;
        // 0x11be54: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be50) {
            ctx->pc = 0x11BE5Cu;
            goto label_11be5c;
        }
    }
    ctx->pc = 0x11BE58u;
label_11be58:
    // 0x11be58: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x11be58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_11be5c:
    // 0x11be5c: 0x26c4db30  addiu       $a0, $s6, -0x24D0
    ctx->pc = 0x11be5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294957872));
    // 0x11be60: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x11be60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x11be64: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x11be64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x11be68: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x11be68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11be6c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11be6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11be70: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11be70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11be74: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x11be74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x11be78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11be78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11be7c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11be7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11be80: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x11be80u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11be84: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11BE84u;
    {
        const bool branch_taken_0x11be84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE84u;
        // 0x11be88: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be84) {
            ctx->pc = 0x11BEA0u;
            goto label_11bea0;
        }
    }
    ctx->pc = 0x11BE8Cu;
    // 0x11be8c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11be8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11be90: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11BE90u;
    SET_GPR_U32(ctx, 31, 0x11BE98u);
    ctx->pc = 0x11BE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BE90u;
    // 0x11be94: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11BE90u, 0x11BE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BE98u;
label_11be98:
    // 0x11be98: 0x1440026f  bnez        $v0, . + 4 + (0x26F << 2)
    ctx->pc = 0x11BE98u;
    {
        const bool branch_taken_0x11be98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE98u;
        // 0x11be9c: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be98) {
            ctx->pc = 0x11C858u;
            goto label_11c858;
        }
    }
    ctx->pc = 0x11BEA0u;
label_11bea0:
    // 0x11bea0: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x11bea0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x11bea4: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x11bea4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x11bea8: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x11BEA8u;
    {
        const bool branch_taken_0x11bea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BEA8u;
        // 0x11beac: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bea8) {
            ctx->pc = 0x11BE58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11be58;
        }
    }
    ctx->pc = 0x11BEB0u;
label_11beb0:
    // 0x11beb0: 0x26c2db30  addiu       $v0, $s6, -0x24D0
    ctx->pc = 0x11beb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294957872));
    // 0x11beb4: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x11beb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x11beb8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11beb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11bebc: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11bebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11bec0: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x11bec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bec4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11bec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11bec8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11bec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11becc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x11beccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x11bed0: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x11bed0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11bed4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11bed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11bed8: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11BED8u;
    {
        const bool branch_taken_0x11bed8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BED8u;
        // 0x11bedc: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bed8) {
            ctx->pc = 0x11BEFCu;
            goto label_11befc;
        }
    }
    ctx->pc = 0x11BEE0u;
    // 0x11bee0: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11bee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11bee4: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11BEE4u;
    SET_GPR_U32(ctx, 31, 0x11BEECu);
    ctx->pc = 0x11BEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BEE4u;
    // 0x11bee8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11BEE4u, 0x11BEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BEECu;
label_11beec:
    // 0x11beec: 0x1440025a  bnez        $v0, . + 4 + (0x25A << 2)
    ctx->pc = 0x11BEECu;
    {
        const bool branch_taken_0x11beec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BEECu;
        // 0x11bef0: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11beec) {
            ctx->pc = 0x11C858u;
            goto label_11c858;
        }
    }
    ctx->pc = 0x11BEF4u;
    // 0x11bef4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11BEF4u;
    {
        const bool branch_taken_0x11bef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BEF4u;
        // 0x11bef8: 0x27b20028  addiu       $s2, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bef4) {
            ctx->pc = 0x11BF00u;
            goto label_11bf00;
        }
    }
    ctx->pc = 0x11BEFCu;
label_11befc:
    // 0x11befc: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x11befcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_11bf00:
    // 0x11bf00: 0x8fa6020c  lw          $a2, 0x20C($sp)
    ctx->pc = 0x11bf00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_11bf04:
    // 0x11bf04: 0xd58023  subu        $s0, $a2, $s5
    ctx->pc = 0x11bf04u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
    // 0x11bf08: 0x1a00002f  blez        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x11BF08u;
    {
        const bool branch_taken_0x11bf08 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x11BF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF08u;
        // 0x11bf0c: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf08) {
            ctx->pc = 0x11BFC8u;
            goto label_11bfc8;
        }
    }
    ctx->pc = 0x11BF10u;
    // 0x11bf10: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x11BF10u;
    {
        const bool branch_taken_0x11bf10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF10u;
        // 0x11bf14: 0x3c16003b  lui         $s6, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf10) {
            ctx->pc = 0x11BF78u;
            goto label_11bf78;
        }
    }
    ctx->pc = 0x11BF18u;
    // 0x11bf18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11BF18u;
    {
        const bool branch_taken_0x11bf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF18u;
        // 0x11bf1c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf18) {
            ctx->pc = 0x11BF24u;
            goto label_11bf24;
        }
    }
    ctx->pc = 0x11BF20u;
label_11bf20:
    // 0x11bf20: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x11bf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_11bf24:
    // 0x11bf24: 0x26c4db30  addiu       $a0, $s6, -0x24D0
    ctx->pc = 0x11bf24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294957872));
    // 0x11bf28: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x11bf28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x11bf2c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x11bf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x11bf30: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x11bf30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bf34: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11bf34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11bf38: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11bf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11bf3c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x11bf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x11bf40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11bf44: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11bf44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11bf48: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x11bf48u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11bf4c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11BF4Cu;
    {
        const bool branch_taken_0x11bf4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF4Cu;
        // 0x11bf50: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf4c) {
            ctx->pc = 0x11BF68u;
            goto label_11bf68;
        }
    }
    ctx->pc = 0x11BF54u;
    // 0x11bf54: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11bf54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11bf58: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11BF58u;
    SET_GPR_U32(ctx, 31, 0x11BF60u);
    ctx->pc = 0x11BF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BF58u;
    // 0x11bf5c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11BF58u, 0x11BF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BF60u;
label_11bf60:
    // 0x11bf60: 0x1440023d  bnez        $v0, . + 4 + (0x23D << 2)
    ctx->pc = 0x11BF60u;
    {
        const bool branch_taken_0x11bf60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF60u;
        // 0x11bf64: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf60) {
            ctx->pc = 0x11C858u;
            goto label_11c858;
        }
    }
    ctx->pc = 0x11BF68u;
label_11bf68:
    // 0x11bf68: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x11bf68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x11bf6c: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x11bf6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x11bf70: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x11BF70u;
    {
        const bool branch_taken_0x11bf70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF70u;
        // 0x11bf74: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf70) {
            ctx->pc = 0x11BF20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11bf20;
        }
    }
    ctx->pc = 0x11BF78u;
label_11bf78:
    // 0x11bf78: 0x26c2db30  addiu       $v0, $s6, -0x24D0
    ctx->pc = 0x11bf78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294957872));
    // 0x11bf7c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x11bf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x11bf80: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11bf80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11bf84: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11bf84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11bf88: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x11bf88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bf8c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11bf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11bf90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11bf94: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x11bf94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x11bf98: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x11bf98u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11bf9c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11bf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11bfa0: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11BFA0u;
    {
        const bool branch_taken_0x11bfa0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BFA0u;
        // 0x11bfa4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bfa0) {
            ctx->pc = 0x11BFC4u;
            goto label_11bfc4;
        }
    }
    ctx->pc = 0x11BFA8u;
    // 0x11bfa8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11bfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11bfac: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11BFACu;
    SET_GPR_U32(ctx, 31, 0x11BFB4u);
    ctx->pc = 0x11BFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BFACu;
    // 0x11bfb0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11BFACu, 0x11BFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BFB4u;
label_11bfb4:
    // 0x11bfb4: 0x14400228  bnez        $v0, . + 4 + (0x228 << 2)
    ctx->pc = 0x11BFB4u;
    {
        const bool branch_taken_0x11bfb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BFB4u;
        // 0x11bfb8: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bfb4) {
            ctx->pc = 0x11C858u;
            goto label_11c858;
        }
    }
    ctx->pc = 0x11BFBCu;
    // 0x11bfbc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11BFBCu;
    {
        const bool branch_taken_0x11bfbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BFBCu;
        // 0x11bfc0: 0x27b20028  addiu       $s2, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bfbc) {
            ctx->pc = 0x11BFC8u;
            goto label_11bfc8;
        }
    }
    ctx->pc = 0x11BFC4u;
label_11bfc4:
    // 0x11bfc4: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x11bfc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_11bfc8:
    // 0x11bfc8: 0x33c20100  andi        $v0, $fp, 0x100
    ctx->pc = 0x11bfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)256);
    // 0x11bfcc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x11BFCCu;
    {
        const bool branch_taken_0x11bfcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11bfcc) {
            ctx->pc = 0x11BFD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11BFCCu;
            // 0x11bfd0: 0x2ae20066  slti        $v0, $s7, 0x66 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)102) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11BFF0u;
            goto label_11bff0;
        }
    }
    ctx->pc = 0x11BFD4u;
    // 0x11bfd4: 0xae350004  sw          $s5, 0x4($s1)
    ctx->pc = 0x11bfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 21));
    // 0x11bfd8: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x11bfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x11bfdc: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x11bfdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bfe0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x11bfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11bfe4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x11bfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11bfe8: 0x100001c3  b           . + 4 + (0x1C3 << 2)
    ctx->pc = 0x11BFE8u;
    {
        const bool branch_taken_0x11bfe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BFE8u;
        // 0x11bfec: 0x551021  addu        $v0, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bfe8) {
            ctx->pc = 0x11C6F8u;
            goto label_11c6f8;
        }
    }
    ctx->pc = 0x11BFF0u;
label_11bff0:
    // 0x11bff0: 0x1440014e  bnez        $v0, . + 4 + (0x14E << 2)
    ctx->pc = 0x11BFF0u;
    {
        const bool branch_taken_0x11bff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BFF0u;
        // 0x11bff4: 0x8fa201e0  lw          $v0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bff0) {
            ctx->pc = 0x11C52Cu;
            goto label_11c52c;
        }
    }
    ctx->pc = 0x11BFF8u;
    // 0x11bff8: 0xdfa40200  ld          $a0, 0x200($sp)
    ctx->pc = 0x11bff8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x11bffc: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x11BFFCu;
    SET_GPR_U32(ctx, 31, 0x11C004u);
    ctx->pc = 0x11C000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BFFCu;
    // 0x11c000: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x11BFFCu, 0x11C004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C004u;
label_11c004:
    // 0x11c004: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x11C004u;
    {
        const bool branch_taken_0x11c004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C004u;
        // 0x11c008: 0x8fa301dc  lw          $v1, 0x1DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c004) {
            ctx->pc = 0x11C168u;
            goto label_11c168;
        }
    }
    ctx->pc = 0x11C00Cu;
    // 0x11c00c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11c00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x11c010: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x11c010u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c014: 0x2442dba8  addiu       $v0, $v0, -0x2458
    ctx->pc = 0x11c014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957992));
    // 0x11c018: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x11c018u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x11c01c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11c01cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11c020: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11c020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c024: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x11c024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c028: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11c028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c02c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c030: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11c030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11c034: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x11c034u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c038: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11c038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11c03c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C03Cu;
    {
        const bool branch_taken_0x11c03c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C03Cu;
        // 0x11c040: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c03c) {
            ctx->pc = 0x11C058u;
            goto label_11c058;
        }
    }
    ctx->pc = 0x11C044u;
    // 0x11c044: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11c044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11c048: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11C048u;
    SET_GPR_U32(ctx, 31, 0x11C050u);
    ctx->pc = 0x11C04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C048u;
    // 0x11c04c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11C048u, 0x11C050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C050u;
label_11c050:
    // 0x11c050: 0x14400201  bnez        $v0, . + 4 + (0x201 << 2)
    ctx->pc = 0x11C050u;
    {
        const bool branch_taken_0x11c050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C050u;
        // 0x11c054: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c050) {
            ctx->pc = 0x11C858u;
            goto label_11c858;
        }
    }
    ctx->pc = 0x11C058u;
label_11c058:
    // 0x11c058: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x11c058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x11c05c: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x11c05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x11c060: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x11c060u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11c064: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11C064u;
    {
        const bool branch_taken_0x11c064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11c064) {
            ctx->pc = 0x11C068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C064u;
            // 0x11c068: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C07Cu;
            goto label_11c07c;
        }
    }
    ctx->pc = 0x11C06Cu;
    // 0x11c06c: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x11c06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x11c070: 0x104001ad  beqz        $v0, . + 4 + (0x1AD << 2)
    ctx->pc = 0x11C070u;
    {
        const bool branch_taken_0x11c070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C070u;
        // 0x11c074: 0x33c20004  andi        $v0, $fp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c070) {
            ctx->pc = 0x11C728u;
            goto label_11c728;
        }
    }
    ctx->pc = 0x11C078u;
    // 0x11c078: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x11c078u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_11c07c:
    // 0x11c07c: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x11c07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x11c080: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11c080u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11c084: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x11c084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c088: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x11c088u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11c08c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x11c08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c090: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c094: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11c094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11c098: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x11c098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x11c09c: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x11c09cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c0a0: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C0A0u;
    {
        const bool branch_taken_0x11c0a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C0A0u;
        // 0x11c0a4: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c0a0) {
            ctx->pc = 0x11C0BCu;
            goto label_11c0bc;
        }
    }
    ctx->pc = 0x11C0A8u;
    // 0x11c0a8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11c0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11c0ac: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11C0ACu;
    SET_GPR_U32(ctx, 31, 0x11C0B4u);
    ctx->pc = 0x11C0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C0ACu;
    // 0x11c0b0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11C0ACu, 0x11C0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C0B4u;
label_11c0b4:
    // 0x11c0b4: 0x144001e8  bnez        $v0, . + 4 + (0x1E8 << 2)
    ctx->pc = 0x11C0B4u;
    {
        const bool branch_taken_0x11c0b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C0B4u;
        // 0x11c0b8: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c0b4) {
            ctx->pc = 0x11C858u;
            goto label_11c858;
        }
    }
    ctx->pc = 0x11C0BCu;
label_11c0bc:
    // 0x11c0bc: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x11c0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x11c0c0: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x11c0c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11c0c4: 0x1a000197  blez        $s0, . + 4 + (0x197 << 2)
    ctx->pc = 0x11C0C4u;
    {
        const bool branch_taken_0x11c0c4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x11C0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C0C4u;
        // 0x11c0c8: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c0c4) {
            ctx->pc = 0x11C724u;
            goto label_11c724;
        }
    }
    ctx->pc = 0x11C0CCu;
    // 0x11c0cc: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x11C0CCu;
    {
        const bool branch_taken_0x11c0cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C0CCu;
        // 0x11c0d0: 0x3c16003b  lui         $s6, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c0cc) {
            ctx->pc = 0x11C138u;
            goto label_11c138;
        }
    }
    ctx->pc = 0x11C0D4u;
    // 0x11c0d4: 0x0  nop
    ctx->pc = 0x11c0d4u;
    // NOP
label_11c0d8:
    // 0x11c0d8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x11c0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11c0dc: 0x26c4db30  addiu       $a0, $s6, -0x24D0
    ctx->pc = 0x11c0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294957872));
    // 0x11c0e0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x11c0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x11c0e4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x11c0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x11c0e8: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x11c0e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11c0ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11c0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c0f0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11c0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c0f4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x11c0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x11c0f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c0fc: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11c0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11c100: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x11c100u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c104: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C104u;
    {
        const bool branch_taken_0x11c104 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C104u;
        // 0x11c108: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c104) {
            ctx->pc = 0x11C120u;
            goto label_11c120;
        }
    }
    ctx->pc = 0x11C10Cu;
    // 0x11c10c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11c10cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11c110: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11C110u;
    SET_GPR_U32(ctx, 31, 0x11C118u);
    ctx->pc = 0x11C114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C110u;
    // 0x11c114: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11C110u, 0x11C118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C118u;
label_11c118:
    // 0x11c118: 0x144001cf  bnez        $v0, . + 4 + (0x1CF << 2)
    ctx->pc = 0x11C118u;
    {
        const bool branch_taken_0x11c118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C118u;
        // 0x11c11c: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c118) {
            ctx->pc = 0x11C858u;
            goto label_11c858;
        }
    }
    ctx->pc = 0x11C120u;
label_11c120:
    // 0x11c120: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x11c120u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x11c124: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x11c124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x11c128: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x11C128u;
    {
        const bool branch_taken_0x11c128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C128u;
        // 0x11c12c: 0x26c2db30  addiu       $v0, $s6, -0x24D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294957872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c128) {
            ctx->pc = 0x11C0D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c0d8;
        }
    }
    ctx->pc = 0x11C130u;
    // 0x11c130: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11C130u;
    {
        const bool branch_taken_0x11c130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C130u;
        // 0x11c134: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c130) {
            ctx->pc = 0x11C140u;
            goto label_11c140;
        }
    }
    ctx->pc = 0x11C138u;
label_11c138:
    // 0x11c138: 0x26c2db30  addiu       $v0, $s6, -0x24D0
    ctx->pc = 0x11c138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294957872));
    // 0x11c13c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x11c13cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_11c140:
    // 0x11c140: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11c140u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11c144: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11c144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c148: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x11c148u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11c14c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11c14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c150: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c154: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x11c154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x11c158: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x11c158u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c15c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11c15cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11c160: 0x10000169  b           . + 4 + (0x169 << 2)
    ctx->pc = 0x11C160u;
    {
        const bool branch_taken_0x11c160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C160u;
        // 0x11c164: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c160) {
            ctx->pc = 0x11C708u;
            goto label_11c708;
        }
    }
    ctx->pc = 0x11C168u;
label_11c168:
    // 0x11c168: 0x1c600063  bgtz        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x11C168u;
    {
        const bool branch_taken_0x11c168 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x11C16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C168u;
        // 0x11c16c: 0x8fa401e0  lw          $a0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c168) {
            ctx->pc = 0x11C2F8u;
            goto label_11c2f8;
        }
    }
    ctx->pc = 0x11C170u;
    // 0x11c170: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11c170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x11c174: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x11c174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c178: 0x2442dba8  addiu       $v0, $v0, -0x2458
    ctx->pc = 0x11c178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957992));
    // 0x11c17c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x11c17cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x11c180: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11c180u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11c184: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11c184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c188: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x11c188u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c18c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11c18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c190: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c194: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11c194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11c198: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x11c198u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c19c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11c19cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11c1a0: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C1A0u;
    {
        const bool branch_taken_0x11c1a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C1A0u;
        // 0x11c1a4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c1a0) {
            ctx->pc = 0x11C1BCu;
            goto label_11c1bc;
        }
    }
    ctx->pc = 0x11C1A8u;
    // 0x11c1a8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11c1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11c1ac: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11C1ACu;
    SET_GPR_U32(ctx, 31, 0x11C1B4u);
    ctx->pc = 0x11C1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C1ACu;
    // 0x11c1b0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11C1ACu, 0x11C1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C1B4u;
label_11c1b4:
    // 0x11c1b4: 0x144001a8  bnez        $v0, . + 4 + (0x1A8 << 2)
    ctx->pc = 0x11C1B4u;
    {
        const bool branch_taken_0x11c1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C1B4u;
        // 0x11c1b8: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c1b4) {
            ctx->pc = 0x11C858u;
            goto label_11c858;
        }
    }
    ctx->pc = 0x11C1BCu;
label_11c1bc:
    // 0x11c1bc: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x11c1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x11c1c0: 0x8fa301f8  lw          $v1, 0x1F8($sp)
    ctx->pc = 0x11c1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x11c1c4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x11c1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x11c1c8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x11c1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c1cc: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x11c1ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11c1d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x11c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c1d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11c1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11c1d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c1dc: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x11c1dcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c1e0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x11c1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x11c1e4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C1E4u;
    {
        const bool branch_taken_0x11c1e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C1E4u;
        // 0x11c1e8: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c1e4) {
            ctx->pc = 0x11C200u;
            goto label_11c200;
        }
    }
    ctx->pc = 0x11C1ECu;
    // 0x11c1ec: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11c1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11c1f0: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11C1F0u;
    SET_GPR_U32(ctx, 31, 0x11C1F8u);
    ctx->pc = 0x11C1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C1F0u;
    // 0x11c1f4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11C1F0u, 0x11C1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C1F8u;
label_11c1f8:
    // 0x11c1f8: 0x14400197  bnez        $v0, . + 4 + (0x197 << 2)
    ctx->pc = 0x11C1F8u;
    {
        const bool branch_taken_0x11c1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C1F8u;
        // 0x11c1fc: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c1f8) {
            ctx->pc = 0x11C858u;
            goto label_11c858;
        }
    }
    ctx->pc = 0x11C200u;
label_11c200:
    // 0x11c200: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x11c200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x11c204: 0x28023  negu        $s0, $v0
    ctx->pc = 0x11c204u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x11c208: 0x1a00002c  blez        $s0, . + 4 + (0x2C << 2)
    ctx->pc = 0x11C208u;
    {
        const bool branch_taken_0x11c208 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x11C20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C208u;
        // 0x11c20c: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c208) {
            ctx->pc = 0x11C2BCu;
            goto label_11c2bc;
        }
    }
    ctx->pc = 0x11C210u;
    // 0x11c210: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x11C210u;
    {
        const bool branch_taken_0x11c210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C210u;
        // 0x11c214: 0x3c16003b  lui         $s6, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c210) {
            ctx->pc = 0x11C278u;
            goto label_11c278;
        }
    }
    ctx->pc = 0x11C218u;
label_11c218:
    // 0x11c218: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x11c218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11c21c: 0x26c4db30  addiu       $a0, $s6, -0x24D0
    ctx->pc = 0x11c21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294957872));
    // 0x11c220: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x11c220u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x11c224: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x11c224u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x11c228: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x11c228u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11c22c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11c22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c230: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11c230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c234: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x11c234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x11c238: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c23c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11c23cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11c240: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x11c240u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c244: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C244u;
    {
        const bool branch_taken_0x11c244 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C244u;
        // 0x11c248: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c244) {
            ctx->pc = 0x11C260u;
            goto label_11c260;
        }
    }
    ctx->pc = 0x11C24Cu;
    // 0x11c24c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11c24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11c250: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11C250u;
    SET_GPR_U32(ctx, 31, 0x11C258u);
    ctx->pc = 0x11C254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C250u;
    // 0x11c254: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11C250u, 0x11C258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C258u;
label_11c258:
    // 0x11c258: 0x1440017f  bnez        $v0, . + 4 + (0x17F << 2)
    ctx->pc = 0x11C258u;
    {
        const bool branch_taken_0x11c258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C258u;
        // 0x11c25c: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c258) {
            ctx->pc = 0x11C858u;
            goto label_11c858;
        }
    }
    ctx->pc = 0x11C260u;
label_11c260:
    // 0x11c260: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x11c260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x11c264: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x11c264u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x11c268: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x11C268u;
    {
        const bool branch_taken_0x11c268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C268u;
        // 0x11c26c: 0x26c2db30  addiu       $v0, $s6, -0x24D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294957872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c268) {
            ctx->pc = 0x11C218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c218;
        }
    }
    ctx->pc = 0x11C270u;
    // 0x11c270: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11C270u;
    {
        const bool branch_taken_0x11c270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C270u;
        // 0x11c274: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c270) {
            ctx->pc = 0x11C280u;
            goto label_11c280;
        }
    }
    ctx->pc = 0x11C278u;
label_11c278:
    // 0x11c278: 0x26c2db30  addiu       $v0, $s6, -0x24D0
    ctx->pc = 0x11c278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294957872));
    // 0x11c27c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x11c27cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_11c280:
    // 0x11c280: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11c280u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11c284: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11c284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c288: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x11c288u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11c28c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11c28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c290: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c294: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x11c294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x11c298: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x11c298u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c29c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11c29cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11c2a0: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C2A0u;
    {
        const bool branch_taken_0x11c2a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C2A0u;
        // 0x11c2a4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c2a0) {
            ctx->pc = 0x11C2BCu;
            goto label_11c2bc;
        }
    }
    ctx->pc = 0x11C2A8u;
    // 0x11c2a8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11c2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11c2ac: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11C2ACu;
    SET_GPR_U32(ctx, 31, 0x11C2B4u);
    ctx->pc = 0x11C2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C2ACu;
    // 0x11c2b0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11C2ACu, 0x11C2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C2B4u;
label_11c2b4:
    // 0x11c2b4: 0x14400168  bnez        $v0, . + 4 + (0x168 << 2)
    ctx->pc = 0x11C2B4u;
    {
        const bool branch_taken_0x11c2b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C2B4u;
        // 0x11c2b8: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c2b4) {
            ctx->pc = 0x11C858u;
            goto label_11c858;
        }
    }
    ctx->pc = 0x11C2BCu;
label_11c2bc:
    // 0x11c2bc: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x11c2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x11c2c0: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x11c2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x11c2c4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x11c2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x11c2c8: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x11c2c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11c2cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11c2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c2d0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c2d4: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x11c2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x11c2d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c2dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x11c2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11c2e0: 0x28450008  slti        $a1, $v0, 0x8
    ctx->pc = 0x11c2e0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c2e4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11c2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11c2e8: 0x14a0010e  bnez        $a1, . + 4 + (0x10E << 2)
    ctx->pc = 0x11C2E8u;
    {
        const bool branch_taken_0x11c2e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C2E8u;
        // 0x11c2ec: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c2e8) {
            ctx->pc = 0x11C724u;
            goto label_11c724;
        }
    }
    ctx->pc = 0x11C2F0u;
    // 0x11c2f0: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x11C2F0u;
    {
        const bool branch_taken_0x11c2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C2F0u;
        // 0x11c2f4: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c2f0) {
            ctx->pc = 0x11C714u;
            goto label_11c714;
        }
    }
    ctx->pc = 0x11C2F8u;
label_11c2f8:
    // 0x11c2f8: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x11c2f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x11c2fc: 0x54400053  bnel        $v0, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x11C2FCu;
    {
        const bool branch_taken_0x11c2fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11c2fc) {
            ctx->pc = 0x11C300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C2FCu;
            // 0x11c300: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C44Cu;
            goto label_11c44c;
        }
    }
    ctx->pc = 0x11C304u;
    // 0x11c304: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x11c304u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x11c308: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x11c308u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x11c30c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x11c30cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c310: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x11c310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c314: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x11c314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c318: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x11c318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x11c31c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11c31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11c320: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x11c320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11c324: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x11c324u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c328: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x11c328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x11c32c: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11C32Cu;
    {
        const bool branch_taken_0x11c32c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C32Cu;
        // 0x11c330: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c32c) {
            ctx->pc = 0x11C34Cu;
            goto label_11c34c;
        }
    }
    ctx->pc = 0x11C334u;
    // 0x11c334: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11c334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11c338: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11C338u;
    SET_GPR_U32(ctx, 31, 0x11C340u);
    ctx->pc = 0x11C33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C338u;
    // 0x11c33c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11C338u, 0x11C340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C340u;
label_11c340:
    // 0x11c340: 0x14400145  bnez        $v0, . + 4 + (0x145 << 2)
    ctx->pc = 0x11C340u;
    {
        const bool branch_taken_0x11c340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C340u;
        // 0x11c344: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c340) {
            ctx->pc = 0x11C858u;
            goto label_11c858;
        }
    }
    ctx->pc = 0x11C348u;
    // 0x11c348: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x11c348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_11c34c:
    // 0x11c34c: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x11c34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x11c350: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x11c350u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11c354: 0x1a00002d  blez        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x11C354u;
    {
        const bool branch_taken_0x11c354 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x11C358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C354u;
        // 0x11c358: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c354) {
            ctx->pc = 0x11C40Cu;
            goto label_11c40c;
        }
    }
    ctx->pc = 0x11C35Cu;
    // 0x11c35c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x11C35Cu;
    {
        const bool branch_taken_0x11c35c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C35Cu;
        // 0x11c360: 0x3c16003b  lui         $s6, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c35c) {
            ctx->pc = 0x11C3C8u;
            goto label_11c3c8;
        }
    }
    ctx->pc = 0x11C364u;
    // 0x11c364: 0x0  nop
    ctx->pc = 0x11c364u;
    // NOP
label_11c368:
    // 0x11c368: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x11c368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11c36c: 0x26c4db30  addiu       $a0, $s6, -0x24D0
    ctx->pc = 0x11c36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294957872));
    // 0x11c370: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x11c370u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x11c374: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x11c374u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x11c378: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x11c378u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11c37c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11c37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c380: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11c380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c384: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x11c384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x11c388: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c38c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11c38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11c390: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x11c390u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c394: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C394u;
    {
        const bool branch_taken_0x11c394 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C394u;
        // 0x11c398: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c394) {
            ctx->pc = 0x11C3B0u;
            goto label_11c3b0;
        }
    }
    ctx->pc = 0x11C39Cu;
    // 0x11c39c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11c39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11c3a0: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11C3A0u;
    SET_GPR_U32(ctx, 31, 0x11C3A8u);
    ctx->pc = 0x11C3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C3A0u;
    // 0x11c3a4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11C3A0u, 0x11C3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C3A8u;
label_11c3a8:
    // 0x11c3a8: 0x1440012b  bnez        $v0, . + 4 + (0x12B << 2)
    ctx->pc = 0x11C3A8u;
    {
        const bool branch_taken_0x11c3a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C3A8u;
        // 0x11c3ac: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c3a8) {
            ctx->pc = 0x11C858u;
            goto label_11c858;
        }
    }
    ctx->pc = 0x11C3B0u;
label_11c3b0:
    // 0x11c3b0: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x11c3b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x11c3b4: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x11c3b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x11c3b8: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x11C3B8u;
    {
        const bool branch_taken_0x11c3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C3B8u;
        // 0x11c3bc: 0x26c2db30  addiu       $v0, $s6, -0x24D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294957872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c3b8) {
            ctx->pc = 0x11C368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c368;
        }
    }
    ctx->pc = 0x11C3C0u;
    // 0x11c3c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11C3C0u;
    {
        const bool branch_taken_0x11c3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C3C0u;
        // 0x11c3c4: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c3c0) {
            ctx->pc = 0x11C3D0u;
            goto label_11c3d0;
        }
    }
    ctx->pc = 0x11C3C8u;
label_11c3c8:
    // 0x11c3c8: 0x26c2db30  addiu       $v0, $s6, -0x24D0
    ctx->pc = 0x11c3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294957872));
    // 0x11c3cc: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x11c3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_11c3d0:
    // 0x11c3d0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11c3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11c3d4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11c3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c3d8: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x11c3d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11c3dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11c3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c3e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c3e4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x11c3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x11c3e8: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x11c3e8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c3ec: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11c3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11c3f0: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C3F0u;
    {
        const bool branch_taken_0x11c3f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C3F0u;
        // 0x11c3f4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c3f0) {
            ctx->pc = 0x11C40Cu;
            goto label_11c40c;
        }
    }
    ctx->pc = 0x11C3F8u;
    // 0x11c3f8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11c3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11c3fc: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11C3FCu;
    SET_GPR_U32(ctx, 31, 0x11C404u);
    ctx->pc = 0x11C400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C3FCu;
    // 0x11c400: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11C3FCu, 0x11C404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C404u;
label_11c404:
    // 0x11c404: 0x14400114  bnez        $v0, . + 4 + (0x114 << 2)
    ctx->pc = 0x11C404u;
    {
        const bool branch_taken_0x11c404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C404u;
        // 0x11c408: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c404) {
            ctx->pc = 0x11C858u;
            goto label_11c858;
        }
    }
    ctx->pc = 0x11C40Cu;
label_11c40c:
    // 0x11c40c: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x11c40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x11c410: 0x104000c4  beqz        $v0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x11C410u;
    {
        const bool branch_taken_0x11c410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C410u;
        // 0x11c414: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c410) {
            ctx->pc = 0x11C724u;
            goto label_11c724;
        }
    }
    ctx->pc = 0x11C418u;
    // 0x11c418: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11c418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c41c: 0x2442dbb0  addiu       $v0, $v0, -0x2450
    ctx->pc = 0x11c41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958000));
    // 0x11c420: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x11c420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x11c424: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11c424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11c428: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11c428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c42c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x11c42cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11c430: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11c430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c434: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c438: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11c438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11c43c: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x11c43cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c440: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11c440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11c444: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x11C444u;
    {
        const bool branch_taken_0x11c444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C444u;
        // 0x11c448: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c444) {
            ctx->pc = 0x11C708u;
            goto label_11c708;
        }
    }
    ctx->pc = 0x11C44Cu;
label_11c44c:
    // 0x11c44c: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x11c44cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x11c450: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x11c450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c454: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x11c454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c458: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x11c458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c45c: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x11c45cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x11c460: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11c460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11c464: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x11c464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11c468: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x11c468u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c46c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x11c46cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x11c470: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11C470u;
    {
        const bool branch_taken_0x11c470 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C470u;
        // 0x11c474: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c470) {
            ctx->pc = 0x11C490u;
            goto label_11c490;
        }
    }
    ctx->pc = 0x11C478u;
    // 0x11c478: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11c478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11c47c: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11C47Cu;
    SET_GPR_U32(ctx, 31, 0x11C484u);
    ctx->pc = 0x11C480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C47Cu;
    // 0x11c480: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11C47Cu, 0x11C484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C484u;
label_11c484:
    // 0x11c484: 0x144000f4  bnez        $v0, . + 4 + (0xF4 << 2)
    ctx->pc = 0x11C484u;
    {
        const bool branch_taken_0x11c484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C484u;
        // 0x11c488: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c484) {
            ctx->pc = 0x11C858u;
            goto label_11c858;
        }
    }
    ctx->pc = 0x11C48Cu;
    // 0x11c48c: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x11c48cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_11c490:
    // 0x11c490: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11c490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x11c494: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11c494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c498: 0x2442dbb0  addiu       $v0, $v0, -0x2450
    ctx->pc = 0x11c498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958000));
    // 0x11c49c: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x11c49cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x11c4a0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11c4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11c4a4: 0x2659821  addu        $s3, $s3, $a1
    ctx->pc = 0x11c4a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x11c4a8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11c4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c4ac: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x11c4acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11c4b0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11c4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c4b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c4b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11c4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11c4bc: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x11c4bcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c4c0: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11c4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11c4c4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C4C4u;
    {
        const bool branch_taken_0x11c4c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C4C4u;
        // 0x11c4c8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c4c4) {
            ctx->pc = 0x11C4E0u;
            goto label_11c4e0;
        }
    }
    ctx->pc = 0x11C4CCu;
    // 0x11c4cc: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11c4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11c4d0: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11C4D0u;
    SET_GPR_U32(ctx, 31, 0x11C4D8u);
    ctx->pc = 0x11C4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C4D0u;
    // 0x11c4d4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11C4D0u, 0x11C4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C4D8u;
label_11c4d8:
    // 0x11c4d8: 0x144000df  bnez        $v0, . + 4 + (0xDF << 2)
    ctx->pc = 0x11C4D8u;
    {
        const bool branch_taken_0x11c4d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C4D8u;
        // 0x11c4dc: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c4d8) {
            ctx->pc = 0x11C858u;
            goto label_11c858;
        }
    }
    ctx->pc = 0x11C4E0u;
label_11c4e0:
    // 0x11c4e0: 0x8fa301dc  lw          $v1, 0x1DC($sp)
    ctx->pc = 0x11c4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x11c4e4: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x11c4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x11c4e8: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x11c4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x11c4ec: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x11c4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11c4f0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x11c4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x11c4f4: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x11c4f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11c4f8: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x11c4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x11c4fc: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x11c4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x11c500: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x11c500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c504: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11c504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c508: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x11c508u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11c50c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x11c50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11c510: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c514: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x11c514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x11c518: 0x28430008  slti        $v1, $v0, 0x8
    ctx->pc = 0x11c518u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c51c: 0x14600081  bnez        $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x11C51Cu;
    {
        const bool branch_taken_0x11c51c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C51Cu;
        // 0x11c520: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c51c) {
            ctx->pc = 0x11C724u;
            goto label_11c724;
        }
    }
    ctx->pc = 0x11C524u;
    // 0x11c524: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x11C524u;
    {
        const bool branch_taken_0x11c524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C524u;
        // 0x11c528: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c524) {
            ctx->pc = 0x11C714u;
            goto label_11c714;
        }
    }
    ctx->pc = 0x11C52Cu;
label_11c52c:
    // 0x11c52c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x11c52cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11c530: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C530u;
    {
        const bool branch_taken_0x11c530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C530u;
        // 0x11c534: 0x33c20001  andi        $v0, $fp, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c530) {
            ctx->pc = 0x11C540u;
            goto label_11c540;
        }
    }
    ctx->pc = 0x11C538u;
    // 0x11c538: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x11C538u;
    {
        const bool branch_taken_0x11c538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C538u;
        // 0x11c53c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c538) {
            ctx->pc = 0x11C698u;
            goto label_11c698;
        }
    }
    ctx->pc = 0x11C540u;
label_11c540:
    // 0x11c540: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x11c540u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x11c544: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x11c544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x11c548: 0xa3a201c1  sb          $v0, 0x1C1($sp)
    ctx->pc = 0x11c548u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 449), (uint8_t)GPR_U32(ctx, 2));
    // 0x11c54c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x11c54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11c550: 0xa3a401c0  sb          $a0, 0x1C0($sp)
    ctx->pc = 0x11c550u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 448), (uint8_t)GPR_U32(ctx, 4));
    // 0x11c554: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x11c554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x11c558: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x11c558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x11c55c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x11c55cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x11c560: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11c560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11c564: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11c564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c568: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x11c568u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c56c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11c56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c570: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c574: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x11c574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x11c578: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x11c578u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c57c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11c57cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11c580: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C580u;
    {
        const bool branch_taken_0x11c580 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C580u;
        // 0x11c584: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c580) {
            ctx->pc = 0x11C59Cu;
            goto label_11c59c;
        }
    }
    ctx->pc = 0x11C588u;
    // 0x11c588: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11c588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11c58c: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11C58Cu;
    SET_GPR_U32(ctx, 31, 0x11C594u);
    ctx->pc = 0x11C590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C58Cu;
    // 0x11c590: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11C58Cu, 0x11C594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C594u;
label_11c594:
    // 0x11c594: 0x144000b0  bnez        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x11C594u;
    {
        const bool branch_taken_0x11c594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C594u;
        // 0x11c598: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c594) {
            ctx->pc = 0x11C858u;
            goto label_11c858;
        }
    }
    ctx->pc = 0x11C59Cu;
label_11c59c:
    // 0x11c59c: 0xdfa40200  ld          $a0, 0x200($sp)
    ctx->pc = 0x11c59cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x11c5a0: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x11C5A0u;
    SET_GPR_U32(ctx, 31, 0x11C5A8u);
    ctx->pc = 0x11C5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C5A0u;
    // 0x11c5a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x11C5A0u, 0x11C5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C5A8u;
label_11c5a8:
    // 0x11c5a8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x11C5A8u;
    {
        const bool branch_taken_0x11c5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C5A8u;
        // 0x11c5ac: 0x8fa201e0  lw          $v0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c5a8) {
            ctx->pc = 0x11C5F0u;
            goto label_11c5f0;
        }
    }
    ctx->pc = 0x11C5B0u;
    // 0x11c5b0: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x11c5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x11c5b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11c5b8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x11c5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x11c5bc: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x11c5bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11c5c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x11c5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c5c4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x11c5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c5c8: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x11c5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x11c5cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11c5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11c5d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11c5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11c5d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x11c5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11c5d8: 0x28650008  slti        $a1, $v1, 0x8
    ctx->pc = 0x11c5d8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c5dc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x11c5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x11c5e0: 0x14a0003e  bnez        $a1, . + 4 + (0x3E << 2)
    ctx->pc = 0x11C5E0u;
    {
        const bool branch_taken_0x11c5e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C5E0u;
        // 0x11c5e4: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c5e0) {
            ctx->pc = 0x11C6DCu;
            goto label_11c6dc;
        }
    }
    ctx->pc = 0x11C5E8u;
    // 0x11c5e8: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x11C5E8u;
    {
        const bool branch_taken_0x11c5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C5E8u;
        // 0x11c5ec: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c5e8) {
            ctx->pc = 0x11C6CCu;
            goto label_11c6cc;
        }
    }
    ctx->pc = 0x11C5F0u;
label_11c5f0:
    // 0x11c5f0: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x11c5f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11c5f4: 0x1a000039  blez        $s0, . + 4 + (0x39 << 2)
    ctx->pc = 0x11C5F4u;
    {
        const bool branch_taken_0x11c5f4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x11C5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C5F4u;
        // 0x11c5f8: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c5f4) {
            ctx->pc = 0x11C6DCu;
            goto label_11c6dc;
        }
    }
    ctx->pc = 0x11C5FCu;
    // 0x11c5fc: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x11C5FCu;
    {
        const bool branch_taken_0x11c5fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C5FCu;
        // 0x11c600: 0x3c16003b  lui         $s6, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c5fc) {
            ctx->pc = 0x11C668u;
            goto label_11c668;
        }
    }
    ctx->pc = 0x11C604u;
    // 0x11c604: 0x0  nop
    ctx->pc = 0x11c604u;
    // NOP
label_11c608:
    // 0x11c608: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x11c608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11c60c: 0x26c4db30  addiu       $a0, $s6, -0x24D0
    ctx->pc = 0x11c60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294957872));
    // 0x11c610: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x11c610u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x11c614: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x11c614u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x11c618: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x11c618u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11c61c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11c61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c620: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11c620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c624: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x11c624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x11c628: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c62c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11c62cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11c630: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x11c630u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c634: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C634u;
    {
        const bool branch_taken_0x11c634 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C634u;
        // 0x11c638: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c634) {
            ctx->pc = 0x11C650u;
            goto label_11c650;
        }
    }
    ctx->pc = 0x11C63Cu;
    // 0x11c63c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11c63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11c640: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11C640u;
    SET_GPR_U32(ctx, 31, 0x11C648u);
    ctx->pc = 0x11C644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C640u;
    // 0x11c644: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11C640u, 0x11C648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C648u;
label_11c648:
    // 0x11c648: 0x14400083  bnez        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x11C648u;
    {
        const bool branch_taken_0x11c648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C648u;
        // 0x11c64c: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c648) {
            ctx->pc = 0x11C858u;
            goto label_11c858;
        }
    }
    ctx->pc = 0x11C650u;
label_11c650:
    // 0x11c650: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x11c650u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x11c654: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x11c654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x11c658: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x11C658u;
    {
        const bool branch_taken_0x11c658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C658u;
        // 0x11c65c: 0x26c2db30  addiu       $v0, $s6, -0x24D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294957872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c658) {
            ctx->pc = 0x11C608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c608;
        }
    }
    ctx->pc = 0x11C660u;
    // 0x11c660: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11C660u;
    {
        const bool branch_taken_0x11c660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C660u;
        // 0x11c664: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c660) {
            ctx->pc = 0x11C670u;
            goto label_11c670;
        }
    }
    ctx->pc = 0x11C668u;
label_11c668:
    // 0x11c668: 0x26c2db30  addiu       $v0, $s6, -0x24D0
    ctx->pc = 0x11c668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294957872));
    // 0x11c66c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x11c66cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_11c670:
    // 0x11c670: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11c670u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11c674: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11c674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c678: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x11c678u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11c67c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11c67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c680: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c684: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x11c684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x11c688: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x11c688u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c68c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11c68cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11c690: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x11C690u;
    {
        const bool branch_taken_0x11c690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C690u;
        // 0x11c694: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c690) {
            ctx->pc = 0x11C6C0u;
            goto label_11c6c0;
        }
    }
    ctx->pc = 0x11C698u;
label_11c698:
    // 0x11c698: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x11c698u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x11c69c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x11c69cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x11c6a0: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x11c6a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c6a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x11c6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c6a8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x11c6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c6ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c6b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11c6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11c6b4: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x11c6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x11c6b8: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x11c6b8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c6bc: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x11c6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_11c6c0:
    // 0x11c6c0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11C6C0u;
    {
        const bool branch_taken_0x11c6c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C6C0u;
        // 0x11c6c4: 0x8fa40208  lw          $a0, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c6c0) {
            ctx->pc = 0x11C6E0u;
            goto label_11c6e0;
        }
    }
    ctx->pc = 0x11C6C8u;
    // 0x11c6c8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11c6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_11c6cc:
    // 0x11c6cc: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11C6CCu;
    SET_GPR_U32(ctx, 31, 0x11C6D4u);
    ctx->pc = 0x11C6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C6CCu;
    // 0x11c6d0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11C6CCu, 0x11C6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C6D4u;
label_11c6d4:
    // 0x11c6d4: 0x14400060  bnez        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x11C6D4u;
    {
        const bool branch_taken_0x11c6d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C6D4u;
        // 0x11c6d8: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c6d4) {
            ctx->pc = 0x11C858u;
            goto label_11c858;
        }
    }
    ctx->pc = 0x11C6DCu;
label_11c6dc:
    // 0x11c6dc: 0x8fa40208  lw          $a0, 0x208($sp)
    ctx->pc = 0x11c6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_11c6e0:
    // 0x11c6e0: 0xae3d0000  sw          $sp, 0x0($s1)
    ctx->pc = 0x11c6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 29));
    // 0x11c6e4: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x11c6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x11c6e8: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x11c6e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11c6ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x11c6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c6f0: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x11c6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c6f4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x11c6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_11c6f8:
    // 0x11c6f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11c6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11c6fc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x11c6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x11c700: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x11c700u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c704: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x11c704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_11c708:
    // 0x11c708: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11C708u;
    {
        const bool branch_taken_0x11c708 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C708u;
        // 0x11c70c: 0x33c20004  andi        $v0, $fp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c708) {
            ctx->pc = 0x11C728u;
            goto label_11c728;
        }
    }
    ctx->pc = 0x11C710u;
    // 0x11c710: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11c710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_11c714:
    // 0x11c714: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11C714u;
    SET_GPR_U32(ctx, 31, 0x11C71Cu);
    ctx->pc = 0x11C718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C714u;
    // 0x11c718: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11C714u, 0x11C71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C71Cu;
label_11c71c:
    // 0x11c71c: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x11C71Cu;
    {
        const bool branch_taken_0x11c71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C71Cu;
        // 0x11c720: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c71c) {
            ctx->pc = 0x11C858u;
            goto label_11c858;
        }
    }
    ctx->pc = 0x11C724u;
label_11c724:
    // 0x11c724: 0x33c20004  andi        $v0, $fp, 0x4
    ctx->pc = 0x11c724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)4);
label_11c728:
    // 0x11c728: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x11C728u;
    {
        const bool branch_taken_0x11c728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C728u;
        // 0x11c72c: 0x8fa501f4  lw          $a1, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c728) {
            ctx->pc = 0x11C7F0u;
            goto label_11c7f0;
        }
    }
    ctx->pc = 0x11C730u;
    // 0x11c730: 0x8fa60210  lw          $a2, 0x210($sp)
    ctx->pc = 0x11c730u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x11c734: 0xa68023  subu        $s0, $a1, $a2
    ctx->pc = 0x11c734u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x11c738: 0x1a00002d  blez        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x11C738u;
    {
        const bool branch_taken_0x11c738 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x11C73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C738u;
        // 0x11c73c: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c738) {
            ctx->pc = 0x11C7F0u;
            goto label_11c7f0;
        }
    }
    ctx->pc = 0x11C740u;
    // 0x11c740: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x11C740u;
    {
        const bool branch_taken_0x11c740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C740u;
        // 0x11c744: 0x3c06003b  lui         $a2, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c740) {
            ctx->pc = 0x11C7B0u;
            goto label_11c7b0;
        }
    }
    ctx->pc = 0x11C748u;
label_11c748:
    // 0x11c748: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x11c748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11c74c: 0x24c4db20  addiu       $a0, $a2, -0x24E0
    ctx->pc = 0x11c74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957856));
    // 0x11c750: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x11c750u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x11c754: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x11c754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x11c758: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x11c758u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11c75c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11c75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c760: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11c760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c764: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x11c764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x11c768: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c76c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11c76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11c770: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x11c770u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c774: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11C774u;
    {
        const bool branch_taken_0x11c774 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C774u;
        // 0x11c778: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c774) {
            ctx->pc = 0x11C798u;
            goto label_11c798;
        }
    }
    ctx->pc = 0x11C77Cu;
    // 0x11c77c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11c77cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11c780: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x11c780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11c784: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11C784u;
    SET_GPR_U32(ctx, 31, 0x11C78Cu);
    ctx->pc = 0x11C788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C784u;
    // 0x11c788: 0x7fa60220  sq          $a2, 0x220($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11C784u, 0x11C78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C78Cu;
label_11c78c:
    // 0x11c78c: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x11C78Cu;
    {
        const bool branch_taken_0x11c78c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C78Cu;
        // 0x11c790: 0x7ba60220  lq          $a2, 0x220($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c78c) {
            ctx->pc = 0x11C858u;
            goto label_11c858;
        }
    }
    ctx->pc = 0x11C794u;
    // 0x11c794: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x11c794u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_11c798:
    // 0x11c798: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x11c798u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x11c79c: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x11c79cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x11c7a0: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x11C7A0u;
    {
        const bool branch_taken_0x11c7a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C7A0u;
        // 0x11c7a4: 0x24c2db20  addiu       $v0, $a2, -0x24E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c7a0) {
            ctx->pc = 0x11C748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c748;
        }
    }
    ctx->pc = 0x11C7A8u;
    // 0x11c7a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11C7A8u;
    {
        const bool branch_taken_0x11c7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C7A8u;
        // 0x11c7ac: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c7a8) {
            ctx->pc = 0x11C7B8u;
            goto label_11c7b8;
        }
    }
    ctx->pc = 0x11C7B0u;
label_11c7b0:
    // 0x11c7b0: 0x24c2db20  addiu       $v0, $a2, -0x24E0
    ctx->pc = 0x11c7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957856));
    // 0x11c7b4: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x11c7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_11c7b8:
    // 0x11c7b8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11c7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11c7bc: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11c7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c7c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11c7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c7c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c7c8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x11c7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x11c7cc: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x11c7ccu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c7d0: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11c7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11c7d4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C7D4u;
    {
        const bool branch_taken_0x11c7d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C7D4u;
        // 0x11c7d8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c7d4) {
            ctx->pc = 0x11C7F0u;
            goto label_11c7f0;
        }
    }
    ctx->pc = 0x11C7DCu;
    // 0x11c7dc: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11c7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11c7e0: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11C7E0u;
    SET_GPR_U32(ctx, 31, 0x11C7E8u);
    ctx->pc = 0x11C7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C7E0u;
    // 0x11c7e4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11C7E0u, 0x11C7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C7E8u;
label_11c7e8:
    // 0x11c7e8: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x11C7E8u;
    {
        const bool branch_taken_0x11c7e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C7E8u;
        // 0x11c7ec: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c7e8) {
            ctx->pc = 0x11C85Cu;
            goto label_11c85c;
        }
    }
    ctx->pc = 0x11C7F0u;
label_11c7f0:
    // 0x11c7f0: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x11c7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x11c7f4: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x11c7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x11c7f8: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x11c7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x11c7fc: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x11c7fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x11c800: 0x8fa601f0  lw          $a2, 0x1F0($sp)
    ctx->pc = 0x11c800u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x11c804: 0xa2200a  movz        $a0, $a1, $v0
    ctx->pc = 0x11c804u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x11c808: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11c808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c80c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x11c80cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x11c810: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C810u;
    {
        const bool branch_taken_0x11c810 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C810u;
        // 0x11c814: 0xafa601f0  sw          $a2, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c810) {
            ctx->pc = 0x11C82Cu;
            goto label_11c82c;
        }
    }
    ctx->pc = 0x11C818u;
    // 0x11c818: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11c818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11c81c: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11C81Cu;
    SET_GPR_U32(ctx, 31, 0x11C824u);
    ctx->pc = 0x11C820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C81Cu;
    // 0x11c820: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11C81Cu, 0x11C824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C824u;
label_11c824:
    // 0x11c824: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11C824u;
    {
        const bool branch_taken_0x11c824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C824u;
        // 0x11c828: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c824) {
            ctx->pc = 0x11C85Cu;
            goto label_11c85c;
        }
    }
    ctx->pc = 0x11C82Cu;
label_11c82c:
    // 0x11c82c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x11c82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x11c830: 0x1000fb0d  b           . + 4 + (-0x4F3 << 2)
    ctx->pc = 0x11C830u;
    {
        const bool branch_taken_0x11c830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C830u;
        // 0x11c834: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c830) {
            ctx->pc = 0x11B468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b468;
        }
    }
    ctx->pc = 0x11C838u;
label_11c838:
    // 0x11c838: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x11c838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c83c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11C83Cu;
    {
        const bool branch_taken_0x11c83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C83Cu;
        // 0x11c840: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c83c) {
            ctx->pc = 0x11C854u;
            goto label_11c854;
        }
    }
    ctx->pc = 0x11C844u;
    // 0x11c844: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11C844u;
    SET_GPR_U32(ctx, 31, 0x11C84Cu);
    ctx->pc = 0x11C848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C844u;
    // 0x11c848: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11C844u, 0x11C84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C84Cu;
label_11c84c:
    // 0x11c84c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C84Cu;
    {
        const bool branch_taken_0x11c84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C84Cu;
        // 0x11c850: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c84c) {
            ctx->pc = 0x11C85Cu;
            goto label_11c85c;
        }
    }
    ctx->pc = 0x11C854u;
label_11c854:
    // 0x11c854: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x11c854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_11c858:
    // 0x11c858: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x11c858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_11c85c:
    // 0x11c85c: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x11c85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x11c860: 0x9443000c  lhu         $v1, 0xC($v0)
    ctx->pc = 0x11c860u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x11c864: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11c864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11c868: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x11c868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x11c86c: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x11c86cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_11c870:
    // 0x11c870: 0xdfbf02c0  ld          $ra, 0x2C0($sp)
    ctx->pc = 0x11c870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 704)));
label_11c874:
    // 0x11c874: 0xdfbe02b0  ld          $fp, 0x2B0($sp)
    ctx->pc = 0x11c874u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x11c878: 0xdfb702a0  ld          $s7, 0x2A0($sp)
    ctx->pc = 0x11c878u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x11c87c: 0xdfb60290  ld          $s6, 0x290($sp)
    ctx->pc = 0x11c87cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x11c880: 0xdfb50280  ld          $s5, 0x280($sp)
    ctx->pc = 0x11c880u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x11c884: 0xdfb40270  ld          $s4, 0x270($sp)
    ctx->pc = 0x11c884u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x11c888: 0xdfb30260  ld          $s3, 0x260($sp)
    ctx->pc = 0x11c888u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x11c88c: 0xdfb20250  ld          $s2, 0x250($sp)
    ctx->pc = 0x11c88cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x11c890: 0xdfb10240  ld          $s1, 0x240($sp)
    ctx->pc = 0x11c890u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x11c894: 0xdfb00230  ld          $s0, 0x230($sp)
    ctx->pc = 0x11c894u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x11c898: 0x3e00008  jr          $ra
    ctx->pc = 0x11C898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C898u;
        // 0x11c89c: 0x27bd02d0  addiu       $sp, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C8A0u;
}
