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

// Function: Em02_R1_mv01
// Address: 0x29e510 - 0x29e8b4
void Em02_R1_mv01_0x29e510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em02_R1_mv01_0x29e510");
#endif

    switch (ctx->pc) {
        case 0x29e5a8u: goto label_29e5a8;
        case 0x29e5dcu: goto label_29e5dc;
        case 0x29e5ecu: goto label_29e5ec;
        case 0x29e620u: goto label_29e620;
        case 0x29e628u: goto label_29e628;
        case 0x29e6d8u: goto label_29e6d8;
        case 0x29e6f4u: goto label_29e6f4;
        case 0x29e70cu: goto label_29e70c;
        case 0x29e718u: goto label_29e718;
        case 0x29e728u: goto label_29e728;
        case 0x29e734u: goto label_29e734;
        case 0x29e740u: goto label_29e740;
        case 0x29e790u: goto label_29e790;
        default: break;
    }

    ctx->pc = 0x29e510u;

    // 0x29e510: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x29e510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29e514: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x29e514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x29e518: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29e518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29e51c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29e51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29e520: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x29e520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x29e524: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29e524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e528: 0x8c7102d0  lw          $s1, 0x2D0($v1)
    ctx->pc = 0x29e528u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x29e52c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x29e52cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x29e530: 0x24636b38  addiu       $v1, $v1, 0x6B38
    ctx->pc = 0x29e530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27448));
    // 0x29e534: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x29e534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x29e538: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x29e538u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x396B38u));
    // 0x29e53c: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x29e53cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x29e540: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x29e540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x29e544: 0x24636b40  addiu       $v1, $v1, 0x6B40
    ctx->pc = 0x29e544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27456));
    // 0x29e548: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x29e548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29e54c: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x29e54cu;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x396B40u));
    // 0x29e550: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x29e550u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x29e554: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29e554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e558: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x29e558u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x29e55c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x29e55cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29e560: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29e560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e564: 0x10830051  beq         $a0, $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x29E564u;
    {
        const bool branch_taken_0x29e564 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29e564) {
            ctx->pc = 0x29E6ACu;
            goto label_29e6ac;
        }
    }
    ctx->pc = 0x29E56Cu;
    // 0x29e56c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29E56Cu;
    {
        const bool branch_taken_0x29e56c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e56c) {
            ctx->pc = 0x29E57Cu;
            goto label_29e57c;
        }
    }
    ctx->pc = 0x29E574u;
    // 0x29e574: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x29E574u;
    {
        const bool branch_taken_0x29e574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e574) {
            ctx->pc = 0x29E89Cu;
            goto label_29e89c;
        }
    }
    ctx->pc = 0x29E57Cu;
label_29e57c:
    // 0x29e57c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29e57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e580: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29e580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e584: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x29e584u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x29e588: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29e588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e58c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29e58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29e590: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x29e590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x29e594: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x29e594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x29e598: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x29E598u;
    {
        const bool branch_taken_0x29e598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e598) {
            ctx->pc = 0x29E5E4u;
            goto label_29e5e4;
        }
    }
    ctx->pc = 0x29E5A0u;
    // 0x29e5a0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29E5A0u;
    SET_GPR_U32(ctx, 31, 0x29E5A8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29E5A0u, 0x29E5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E5A8u;
label_29e5a8:
    // 0x29e5a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29e5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29e5ac: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x29e5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x29e5b0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x29e5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x29e5b4: 0x90420038  lbu         $v0, 0x38($v0)
    ctx->pc = 0x29e5b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x29e5b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29e5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29e5bc: 0x34460800  ori         $a2, $v0, 0x800
    ctx->pc = 0x29e5bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x29e5c0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29e5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e5c4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29e5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e5c8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x29e5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x29e5cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x29e5ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e5d0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x29e5d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x29e5d4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x29E5D4u;
    SET_GPR_U32(ctx, 31, 0x29E5DCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x29E5D4u, 0x29E5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E5DCu;
label_29e5dc:
    // 0x29e5dc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x29E5DCu;
    {
        const bool branch_taken_0x29e5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e5dc) {
            ctx->pc = 0x29E620u;
            goto label_29e620;
        }
    }
    ctx->pc = 0x29E5E4u;
label_29e5e4:
    // 0x29e5e4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29E5E4u;
    SET_GPR_U32(ctx, 31, 0x29E5ECu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29E5E4u, 0x29E5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E5ECu;
label_29e5ec:
    // 0x29e5ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29e5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29e5f0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x29e5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x29e5f4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x29e5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x29e5f8: 0x90420040  lbu         $v0, 0x40($v0)
    ctx->pc = 0x29e5f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x29e5fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29e5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29e600: 0x34460800  ori         $a2, $v0, 0x800
    ctx->pc = 0x29e600u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x29e604: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29e604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e608: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29e608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e60c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x29e60cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x29e610: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x29e610u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e614: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x29e614u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x29e618: 0xc0965d0  jal         func_259740
    ctx->pc = 0x29E618u;
    SET_GPR_U32(ctx, 31, 0x29E620u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x29E618u, 0x29E620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E620u;
label_29e620:
    // 0x29e620: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29E620u;
    SET_GPR_U32(ctx, 31, 0x29E628u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29E620u, 0x29E628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E628u;
label_29e628:
    // 0x29e628: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29e628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29e62c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x29e62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x29e630: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x29e630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    // 0x29e634: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x29e634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29e638: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x29e638u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x29e63c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29e63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e640: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x29e640u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x29e644: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x29e644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x29e648: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x29e648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x29e64c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29e64cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29e650: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29e650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e654: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29e654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29e658: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x29e658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x29e65c: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x29e65cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x29e660: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29e660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29e664: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29E664u;
    {
        const bool branch_taken_0x29e664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29e664) {
            ctx->pc = 0x29E684u;
            goto label_29e684;
        }
    }
    ctx->pc = 0x29E66Cu;
    // 0x29e66c: 0x3c023d0e  lui         $v0, 0x3D0E
    ctx->pc = 0x29e66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15630 << 16));
    // 0x29e670: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x29e670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x29e674: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29e674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29e678: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29e678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e67c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29e67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29e680: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x29e680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_29e684:
    // 0x29e684: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x29e684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x29e688: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x29e688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29e68c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29E68Cu;
    {
        const bool branch_taken_0x29e68c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29e68c) {
            ctx->pc = 0x29E6ACu;
            goto label_29e6ac;
        }
    }
    ctx->pc = 0x29E694u;
    // 0x29e694: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x29e694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x29e698: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x29e698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x29e69c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29e69cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29e6a0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29e6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e6a4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29e6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29e6a8: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x29e6a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_29e6ac:
    // 0x29e6ac: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29e6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e6b0: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x29e6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e6b4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29e6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e6b8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x29e6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29e6bc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x29e6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x29e6c0: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x29e6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29e6c4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x29e6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x29e6c8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x29e6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x29e6cc: 0xc46d0018  lwc1        $f13, 0x18($v1)
    ctx->pc = 0x29e6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x29e6d0: 0xc05c848  jal         func_172120
    ctx->pc = 0x29E6D0u;
    SET_GPR_U32(ctx, 31, 0x29E6D8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x29E6D0u, 0x29E6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E6D8u;
label_29e6d8:
    // 0x29e6d8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x29e6d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x29e6dc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e6e0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x29e6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29e6e4: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x29e6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e6e8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x29e6e8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29e6ec: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x29E6ECu;
    SET_GPR_U32(ctx, 31, 0x29E6F4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x29E6ECu, 0x29E6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E6F4u;
label_29e6f4:
    // 0x29e6f4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29e6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e6f8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x29e6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x29e6fc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29e6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e700: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x29e700u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29e704: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x29E704u;
    SET_GPR_U32(ctx, 31, 0x29E70Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x29E704u, 0x29E70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E70Cu;
label_29e70c:
    // 0x29e70c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29e70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e710: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x29E710u;
    SET_GPR_U32(ctx, 31, 0x29E718u);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x29E710u, 0x29E718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E718u;
label_29e718:
    // 0x29e718: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29e718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e71c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x29e71cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29e720: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x29E720u;
    SET_GPR_U32(ctx, 31, 0x29E728u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x29E720u, 0x29E728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E728u;
label_29e728:
    // 0x29e728: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29e728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e72c: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x29E72Cu;
    SET_GPR_U32(ctx, 31, 0x29E734u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x29E72Cu, 0x29E734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E734u;
label_29e734:
    // 0x29e734: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29e734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e738: 0xc0aa354  jal         func_2A8D50
    ctx->pc = 0x29E738u;
    SET_GPR_U32(ctx, 31, 0x29E740u);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x29E738u, 0x29E740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E740u;
label_29e740:
    // 0x29e740: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x29e740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e744: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x29e744u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x29e748: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x29e748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x29e74c: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x29e74cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x29e750: 0x14800052  bnez        $a0, . + 4 + (0x52 << 2)
    ctx->pc = 0x29E750u;
    {
        const bool branch_taken_0x29e750 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e750) {
            ctx->pc = 0x29E89Cu;
            goto label_29e89c;
        }
    }
    ctx->pc = 0x29E758u;
    // 0x29e758: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29e758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e75c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29e75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e760: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x29e760u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x29e764: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29e764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29e768: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29e768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e76c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x29e76cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x29e770: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29e770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e774: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x29e774u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e778: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29e778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e77c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x29e77cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e780: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29e780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e784: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x29e784u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x29e788: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29E788u;
    SET_GPR_U32(ctx, 31, 0x29E790u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29E788u, 0x29E790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E790u;
label_29e790:
    // 0x29e790: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29e790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29e794: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29e794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x29e798: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x29E798u;
    {
        const bool branch_taken_0x29e798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e798) {
            ctx->pc = 0x29E7D0u;
            goto label_29e7d0;
        }
    }
    ctx->pc = 0x29E7A0u;
    // 0x29e7a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29e7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e7a4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29e7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e7a8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29e7a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e7ac: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x29e7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29e7b0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29e7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e7b4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29e7b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e7b8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29e7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e7bc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29e7bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e7c0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29e7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e7c4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29e7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e7c8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29e7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e7cc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29e7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_29e7d0:
    // 0x29e7d0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29e7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e7d4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29e7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29e7d8: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x29e7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x29e7dc: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x29e7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x29e7e0: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x29E7E0u;
    {
        const bool branch_taken_0x29e7e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e7e0) {
            ctx->pc = 0x29E844u;
            goto label_29e844;
        }
    }
    ctx->pc = 0x29E7E8u;
    // 0x29e7e8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29e7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e7ec: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x29e7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29e7f0: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x29e7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x29e7f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29e7f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29e7f8: 0x0  nop
    ctx->pc = 0x29e7f8u;
    // NOP
    // 0x29e7fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29e7fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29e800: 0x0  nop
    ctx->pc = 0x29e800u;
    // NOP
    // 0x29e804: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x29E804u;
    {
        const bool branch_taken_0x29e804 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29e804) {
            ctx->pc = 0x29E89Cu;
            goto label_29e89c;
        }
    }
    ctx->pc = 0x29E80Cu;
    // 0x29e80c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29e80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e810: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29e810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e814: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29e814u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e818: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x29e818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29e81c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29e81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e820: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29e820u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e824: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29e824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e828: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29e828u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e82c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29e82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e830: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29e830u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e834: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29e834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e838: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29e838u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x29e83c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x29E83Cu;
    {
        const bool branch_taken_0x29e83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e83c) {
            ctx->pc = 0x29E89Cu;
            goto label_29e89c;
        }
    }
    ctx->pc = 0x29E844u;
label_29e844:
    // 0x29e844: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29e844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e848: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x29e848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29e84c: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x29e84cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x29e850: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x29e850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x29e854: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29e854u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29e858: 0x0  nop
    ctx->pc = 0x29e858u;
    // NOP
    // 0x29e85c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29e85cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29e860: 0x0  nop
    ctx->pc = 0x29e860u;
    // NOP
    // 0x29e864: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x29E864u;
    {
        const bool branch_taken_0x29e864 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29e864) {
            ctx->pc = 0x29E89Cu;
            goto label_29e89c;
        }
    }
    ctx->pc = 0x29E86Cu;
    // 0x29e86c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29e86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e870: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29e870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e874: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29e874u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e878: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x29e878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29e87c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29e87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e880: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29e880u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e884: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29e884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e888: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29e888u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e88c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29e88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e890: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29e890u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e894: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29e894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e898: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29e898u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_29e89c:
    // 0x29e89c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x29e89cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29e8a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29e8a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29e8a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29e8a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29e8a8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x29e8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29e8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x29E8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E8ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E8B4u;
}
