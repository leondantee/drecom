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

// Function: R10a_stained_glass_fall00
// Address: 0x273780 - 0x2741b4
void R10a_stained_glass_fall00_0x273780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R10a_stained_glass_fall00_0x273780");
#endif

    switch (ctx->pc) {
        case 0x2737c8u: goto label_2737c8;
        case 0x2737e4u: goto label_2737e4;
        case 0x273800u: goto label_273800;
        case 0x27387cu: goto label_27387c;
        case 0x27389cu: goto label_27389c;
        case 0x2738c4u: goto label_2738c4;
        case 0x2738e0u: goto label_2738e0;
        case 0x2738f0u: goto label_2738f0;
        case 0x273908u: goto label_273908;
        case 0x27391cu: goto label_27391c;
        case 0x27392cu: goto label_27392c;
        case 0x2739c0u: goto label_2739c0;
        case 0x2739f0u: goto label_2739f0;
        case 0x273a98u: goto label_273a98;
        case 0x273ac8u: goto label_273ac8;
        case 0x273b3cu: goto label_273b3c;
        case 0x273b88u: goto label_273b88;
        case 0x273bd4u: goto label_273bd4;
        case 0x273c98u: goto label_273c98;
        case 0x273cdcu: goto label_273cdc;
        case 0x273d38u: goto label_273d38;
        default: break;
    }

    ctx->pc = 0x273780u;

    // 0x273780: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x273780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x273784: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x273784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x273788: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x273788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x27378c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x27378cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x273790: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x273790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x273794: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x273794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x273798: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x273798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x27379c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27379cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2737a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2737a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2737a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2737a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2737a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2737a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2737ac: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x2737acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x2737b0: 0x24a3fe00  addiu       $v1, $a1, -0x200
    ctx->pc = 0x2737b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966784));
    // 0x2737b4: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x2737b4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2737b8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2737b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x2737bc: 0x2464fd80  addiu       $a0, $v1, -0x280
    ctx->pc = 0x2737bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966656));
    // 0x2737c0: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x2737C0u;
    SET_GPR_U32(ctx, 31, 0x2737C8u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x2737C8u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2737C8u) { return; }
    ctx->pc = 0x2737C8u;
label_2737c8:
    // 0x2737c8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2737c8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2737cc: 0x8e631bf0  lw          $v1, 0x1BF0($s3)
    ctx->pc = 0x2737ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 7152)));
    // 0x2737d0: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x2737D0u;
    {
        const bool branch_taken_0x2737d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2737d0) {
            ctx->pc = 0x273880u;
            goto label_273880;
        }
    }
    ctx->pc = 0x2737D8u;
    // 0x2737d8: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2737d8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2737dc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2737DCu;
    {
        const bool branch_taken_0x2737dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2737dc) {
            ctx->pc = 0x273868u;
            goto label_273868;
        }
    }
    ctx->pc = 0x2737E4u;
label_2737e4:
    // 0x2737e4: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x2737e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2737e8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2737e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x2737ec: 0x2463e650  addiu       $v1, $v1, -0x19B0
    ctx->pc = 0x2737ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960720));
    // 0x2737f0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2737f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2737f4: 0x8c641390  lw          $a0, 0x1390($v1)
    ctx->pc = 0x2737f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5008)));
    // 0x2737f8: 0xc096558  jal         func_259560
    ctx->pc = 0x2737F8u;
    SET_GPR_U32(ctx, 31, 0x273800u);
    ctx->pc = 0x259560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259560u, 0x2737F8u, 0x273800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273800u;
label_273800:
    // 0x273800: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x273800u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x273804: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x273804u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x273808: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x273808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x27380c: 0x2463e650  addiu       $v1, $v1, -0x19B0
    ctx->pc = 0x27380cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960720));
    // 0x273810: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x273810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x273814: 0x8c831390  lw          $v1, 0x1390($a0)
    ctx->pc = 0x273814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5008)));
    // 0x273818: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x273818u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x27381c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x27381cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x273820: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x273820u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x273824: 0x3c04462f  lui         $a0, 0x462F
    ctx->pc = 0x273824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17967 << 16));
    // 0x273828: 0x3483c800  ori         $v1, $a0, 0xC800
    ctx->pc = 0x273828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)51200);
    // 0x27382c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27382cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273830: 0x0  nop
    ctx->pc = 0x273830u;
    // NOP
    // 0x273834: 0xe6200120  swc1        $f0, 0x120($s1)
    ctx->pc = 0x273834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 288), bits); }
    // 0x273838: 0x3c034622  lui         $v1, 0x4622
    ctx->pc = 0x273838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17954 << 16));
    // 0x27383c: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x27383cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x273840: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x273840u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273844: 0x0  nop
    ctx->pc = 0x273844u;
    // NOP
    // 0x273848: 0xe6200124  swc1        $f0, 0x124($s1)
    ctx->pc = 0x273848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x27384c: 0x3c03c5a4  lui         $v1, 0xC5A4
    ctx->pc = 0x27384cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50596 << 16));
    // 0x273850: 0x34640800  ori         $a0, $v1, 0x800
    ctx->pc = 0x273850u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x273854: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x273854u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273858: 0x0  nop
    ctx->pc = 0x273858u;
    // NOP
    // 0x27385c: 0xe6200128  swc1        $f0, 0x128($s1)
    ctx->pc = 0x27385cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x273860: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x273860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x273864: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x273864u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_273868:
    // 0x273868: 0x2a430006  slti        $v1, $s2, 0x6
    ctx->pc = 0x273868u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x27386c: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x27386Cu;
    {
        const bool branch_taken_0x27386c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27386c) {
            ctx->pc = 0x2737E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2737e4;
        }
    }
    ctx->pc = 0x273874u;
    // 0x273874: 0xc09d070  jal         func_2741C0
    ctx->pc = 0x273874u;
    SET_GPR_U32(ctx, 31, 0x27387Cu);
    ctx->pc = 0x2741C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2741C0u, 0x273874u, 0x27387Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27387Cu;
label_27387c:
    // 0x27387c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x27387cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_273880:
    // 0x273880: 0x8e631bf0  lw          $v1, 0x1BF0($s3)
    ctx->pc = 0x273880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 7152)));
    // 0x273884: 0x2c61000f  sltiu       $at, $v1, 0xF
    ctx->pc = 0x273884u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x273888: 0x10200046  beqz        $at, . + 4 + (0x46 << 2)
    ctx->pc = 0x273888u;
    {
        const bool branch_taken_0x273888 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x273888) {
            ctx->pc = 0x2739A4u;
            goto label_2739a4;
        }
    }
    ctx->pc = 0x273890u;
    // 0x273890: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x273890u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x273894: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x273894u;
    {
        const bool branch_taken_0x273894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273894) {
            ctx->pc = 0x273990u;
            goto label_273990;
        }
    }
    ctx->pc = 0x27389Cu;
label_27389c:
    // 0x27389c: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x27389cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2738a0: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2738A0u;
    {
        const bool branch_taken_0x2738a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2738a0) {
            ctx->pc = 0x2738B4u;
            goto label_2738b4;
        }
    }
    ctx->pc = 0x2738A8u;
    // 0x2738a8: 0x7000f628  paddub      $fp, $zero, $zero
    ctx->pc = 0x2738a8u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2738ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2738ACu;
    {
        const bool branch_taken_0x2738ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2738ac) {
            ctx->pc = 0x2738B8u;
            goto label_2738b8;
        }
    }
    ctx->pc = 0x2738B4u;
label_2738b4:
    // 0x2738b4: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x2738b4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2738b8:
    // 0x2738b8: 0x73c08628  paddub      $s0, $fp, $zero
    ctx->pc = 0x2738b8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x2738bc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2738BCu;
    {
        const bool branch_taken_0x2738bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2738bc) {
            ctx->pc = 0x273958u;
            goto label_273958;
        }
    }
    ctx->pc = 0x2738C4u;
label_2738c4:
    // 0x2738c4: 0x1219c0  sll         $v1, $s2, 7
    ctx->pc = 0x2738c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x2738c8: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x2738c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2738cc: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x2738ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2738d0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2738d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2738d4: 0xc46c1830  lwc1        $f12, 0x1830($v1)
    ctx->pc = 0x2738d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2738d8: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x2738D8u;
    SET_GPR_U32(ctx, 31, 0x2738E0u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2738D8u, 0x2738E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2738E0u;
label_2738e0:
    // 0x2738e0: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2738e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x2738e4: 0x8e641bf0  lw          $a0, 0x1BF0($s3)
    ctx->pc = 0x2738e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 7152)));
    // 0x2738e8: 0xc040044  jal         func_100110
    ctx->pc = 0x2738E8u;
    SET_GPR_U32(ctx, 31, 0x2738F0u);
    ctx->pc = 0x100110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100110u, 0x2738E8u, 0x2738F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2738F0u;
label_2738f0:
    // 0x2738f0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2738f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2738f4: 0x3c034095  lui         $v1, 0x4095
    ctx->pc = 0x2738f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16533 << 16));
    // 0x2738f8: 0x3466b800  ori         $a2, $v1, 0xB800
    ctx->pc = 0x2738f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47104);
    // 0x2738fc: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x2738fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x273900: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x273900u;
    SET_GPR_U32(ctx, 31, 0x273908u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x273900u, 0x273908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273908u;
label_273908:
    // 0x273908: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x273908u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27390c: 0x3c03402e  lui         $v1, 0x402E
    ctx->pc = 0x27390cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16430 << 16));
    // 0x273910: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x273910u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x273914: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x273914u;
    SET_GPR_U32(ctx, 31, 0x27391Cu);
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x273914u, 0x27391Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27391Cu;
label_27391c:
    // 0x27391c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x27391cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x273920: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x273920u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x273924: 0xc040048  jal         func_100120
    ctx->pc = 0x273924u;
    SET_GPR_U32(ctx, 31, 0x27392Cu);
    ctx->pc = 0x100120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100120u, 0x273924u, 0x27392Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27392Cu;
label_27392c:
    // 0x27392c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x27392cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x273930: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x273930u;
    {
        const bool branch_taken_0x273930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x273930) {
            ctx->pc = 0x273950u;
            goto label_273950;
        }
    }
    ctx->pc = 0x273938u;
    // 0x273938: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x273938u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27393c: 0x123140  sll         $a2, $s2, 5
    ctx->pc = 0x27393cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x273940: 0x2661821  addu        $v1, $s3, $a2
    ctx->pc = 0x273940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x273944: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x273944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273948: 0xa0671b30  sb          $a3, 0x1B30($v1)
    ctx->pc = 0x273948u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6960), (uint8_t)GPR_U32(ctx, 7));
    // 0x27394c: 0x0  nop
    ctx->pc = 0x27394cu;
    // NOP
label_273950:
    // 0x273950: 0x26070001  addiu       $a3, $s0, 0x1
    ctx->pc = 0x273950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x273954: 0x70e08628  paddub      $s0, $a3, $zero
    ctx->pc = 0x273954u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_273958:
    // 0x273958: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x273958u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x27395c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x27395Cu;
    {
        const bool branch_taken_0x27395c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x27395c) {
            ctx->pc = 0x273970u;
            goto label_273970;
        }
    }
    ctx->pc = 0x273964u;
    // 0x273964: 0x2414001d  addiu       $s4, $zero, 0x1D
    ctx->pc = 0x273964u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x273968: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x273968u;
    {
        const bool branch_taken_0x273968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273968) {
            ctx->pc = 0x273978u;
            goto label_273978;
        }
    }
    ctx->pc = 0x273970u;
label_273970:
    // 0x273970: 0x2414001e  addiu       $s4, $zero, 0x1E
    ctx->pc = 0x273970u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x273974: 0x0  nop
    ctx->pc = 0x273974u;
    // NOP
label_273978:
    // 0x273978: 0x214302a  slt         $a2, $s0, $s4
    ctx->pc = 0x273978u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x27397c: 0x14c0ffd1  bnez        $a2, . + 4 + (-0x2F << 2)
    ctx->pc = 0x27397Cu;
    {
        const bool branch_taken_0x27397c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x27397c) {
            ctx->pc = 0x2738C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2738c4;
        }
    }
    ctx->pc = 0x273984u;
    // 0x273984: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x273984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x273988: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x273988u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x27398c: 0x0  nop
    ctx->pc = 0x27398cu;
    // NOP
label_273990:
    // 0x273990: 0x2a430006  slti        $v1, $s2, 0x6
    ctx->pc = 0x273990u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x273994: 0x1460ffc1  bnez        $v1, . + 4 + (-0x3F << 2)
    ctx->pc = 0x273994u;
    {
        const bool branch_taken_0x273994 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x273994) {
            ctx->pc = 0x27389Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27389c;
        }
    }
    ctx->pc = 0x27399Cu;
    // 0x27399c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x27399Cu;
    {
        const bool branch_taken_0x27399c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27399c) {
            ctx->pc = 0x273B30u;
            goto label_273b30;
        }
    }
    ctx->pc = 0x2739A4u;
label_2739a4:
    // 0x2739a4: 0x8e631bf0  lw          $v1, 0x1BF0($s3)
    ctx->pc = 0x2739a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 7152)));
    // 0x2739a8: 0x2c61001e  sltiu       $at, $v1, 0x1E
    ctx->pc = 0x2739a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x2739ac: 0x10200037  beqz        $at, . + 4 + (0x37 << 2)
    ctx->pc = 0x2739ACu;
    {
        const bool branch_taken_0x2739ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2739ac) {
            ctx->pc = 0x273A8Cu;
            goto label_273a8c;
        }
    }
    ctx->pc = 0x2739B4u;
    // 0x2739b4: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2739b4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2739b8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2739B8u;
    {
        const bool branch_taken_0x2739b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2739b8) {
            ctx->pc = 0x273A78u;
            goto label_273a78;
        }
    }
    ctx->pc = 0x2739C0u;
label_2739c0:
    // 0x2739c0: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x2739c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2739c4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2739C4u;
    {
        const bool branch_taken_0x2739c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2739c4) {
            ctx->pc = 0x2739D8u;
            goto label_2739d8;
        }
    }
    ctx->pc = 0x2739CCu;
    // 0x2739cc: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x2739ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x2739d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2739D0u;
    {
        const bool branch_taken_0x2739d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2739d0) {
            ctx->pc = 0x2739E0u;
            goto label_2739e0;
        }
    }
    ctx->pc = 0x2739D8u;
label_2739d8:
    // 0x2739d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2739d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2739dc: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x2739dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
label_2739e0:
    // 0x2739e0: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x2739e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2739e4: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x2739e4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2739e8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2739E8u;
    {
        const bool branch_taken_0x2739e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2739e8) {
            ctx->pc = 0x273A40u;
            goto label_273a40;
        }
    }
    ctx->pc = 0x2739F0u;
label_2739f0:
    // 0x2739f0: 0x1219c0  sll         $v1, $s2, 7
    ctx->pc = 0x2739f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x2739f4: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x2739f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2739f8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2739f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2739fc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2739fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x273a00: 0xc4611830  lwc1        $f1, 0x1830($v1)
    ctx->pc = 0x273a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273a04: 0x3c034498  lui         $v1, 0x4498
    ctx->pc = 0x273a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17560 << 16));
    // 0x273a08: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x273a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x273a0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x273a0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273a10: 0x0  nop
    ctx->pc = 0x273a10u;
    // NOP
    // 0x273a14: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x273a14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273a18: 0x0  nop
    ctx->pc = 0x273a18u;
    // NOP
    // 0x273a1c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x273A1Cu;
    {
        const bool branch_taken_0x273a1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x273a1c) {
            ctx->pc = 0x273A38u;
            goto label_273a38;
        }
    }
    ctx->pc = 0x273A24u;
    // 0x273a24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x273a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273a28: 0x122140  sll         $a0, $s2, 5
    ctx->pc = 0x273a28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x273a2c: 0x2641821  addu        $v1, $s3, $a0
    ctx->pc = 0x273a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x273a30: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x273a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273a34: 0xa0651b30  sb          $a1, 0x1B30($v1)
    ctx->pc = 0x273a34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6960), (uint8_t)GPR_U32(ctx, 5));
label_273a38:
    // 0x273a38: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x273a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x273a3c: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x273a3cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_273a40:
    // 0x273a40: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x273a40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x273a44: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x273A44u;
    {
        const bool branch_taken_0x273a44 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x273a44) {
            ctx->pc = 0x273A58u;
            goto label_273a58;
        }
    }
    ctx->pc = 0x273A4Cu;
    // 0x273a4c: 0x2415001d  addiu       $s5, $zero, 0x1D
    ctx->pc = 0x273a4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x273a50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x273A50u;
    {
        const bool branch_taken_0x273a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273a50) {
            ctx->pc = 0x273A60u;
            goto label_273a60;
        }
    }
    ctx->pc = 0x273A58u;
label_273a58:
    // 0x273a58: 0x2415001e  addiu       $s5, $zero, 0x1E
    ctx->pc = 0x273a58u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x273a5c: 0x0  nop
    ctx->pc = 0x273a5cu;
    // NOP
label_273a60:
    // 0x273a60: 0x215182a  slt         $v1, $s0, $s5
    ctx->pc = 0x273a60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x273a64: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x273A64u;
    {
        const bool branch_taken_0x273a64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x273a64) {
            ctx->pc = 0x2739F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2739f0;
        }
    }
    ctx->pc = 0x273A6Cu;
    // 0x273a6c: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x273a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x273a70: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x273a70u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x273a74: 0x0  nop
    ctx->pc = 0x273a74u;
    // NOP
label_273a78:
    // 0x273a78: 0x2a440006  slti        $a0, $s2, 0x6
    ctx->pc = 0x273a78u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x273a7c: 0x1480ffd0  bnez        $a0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x273A7Cu;
    {
        const bool branch_taken_0x273a7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x273a7c) {
            ctx->pc = 0x2739C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2739c0;
        }
    }
    ctx->pc = 0x273A84u;
    // 0x273a84: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x273A84u;
    {
        const bool branch_taken_0x273a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273a84) {
            ctx->pc = 0x273B30u;
            goto label_273b30;
        }
    }
    ctx->pc = 0x273A8Cu;
label_273a8c:
    // 0x273a8c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x273a8cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x273a90: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x273A90u;
    {
        const bool branch_taken_0x273a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273a90) {
            ctx->pc = 0x273B20u;
            goto label_273b20;
        }
    }
    ctx->pc = 0x273A98u;
label_273a98:
    // 0x273a98: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x273a98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x273a9c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x273A9Cu;
    {
        const bool branch_taken_0x273a9c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x273a9c) {
            ctx->pc = 0x273AB0u;
            goto label_273ab0;
        }
    }
    ctx->pc = 0x273AA4u;
    // 0x273aa4: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x273aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x273aa8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x273AA8u;
    {
        const bool branch_taken_0x273aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273aa8) {
            ctx->pc = 0x273AB8u;
            goto label_273ab8;
        }
    }
    ctx->pc = 0x273AB0u;
label_273ab0:
    // 0x273ab0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x273ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273ab4: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x273ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
label_273ab8:
    // 0x273ab8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x273ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x273abc: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x273abcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x273ac0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x273AC0u;
    {
        const bool branch_taken_0x273ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273ac0) {
            ctx->pc = 0x273AE8u;
            goto label_273ae8;
        }
    }
    ctx->pc = 0x273AC8u;
label_273ac8:
    // 0x273ac8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x273ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273acc: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x273accu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x273ad0: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x273ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x273ad4: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x273ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273ad8: 0xa0851b30  sb          $a1, 0x1B30($a0)
    ctx->pc = 0x273ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6960), (uint8_t)GPR_U32(ctx, 5));
    // 0x273adc: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x273adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x273ae0: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x273ae0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x273ae4: 0x0  nop
    ctx->pc = 0x273ae4u;
    // NOP
label_273ae8:
    // 0x273ae8: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x273ae8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x273aec: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x273AECu;
    {
        const bool branch_taken_0x273aec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x273aec) {
            ctx->pc = 0x273B00u;
            goto label_273b00;
        }
    }
    ctx->pc = 0x273AF4u;
    // 0x273af4: 0x2416001d  addiu       $s6, $zero, 0x1D
    ctx->pc = 0x273af4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x273af8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x273AF8u;
    {
        const bool branch_taken_0x273af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273af8) {
            ctx->pc = 0x273B08u;
            goto label_273b08;
        }
    }
    ctx->pc = 0x273B00u;
label_273b00:
    // 0x273b00: 0x2416001e  addiu       $s6, $zero, 0x1E
    ctx->pc = 0x273b00u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x273b04: 0x0  nop
    ctx->pc = 0x273b04u;
    // NOP
label_273b08:
    // 0x273b08: 0x216182a  slt         $v1, $s0, $s6
    ctx->pc = 0x273b08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x273b0c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x273B0Cu;
    {
        const bool branch_taken_0x273b0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x273b0c) {
            ctx->pc = 0x273AC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273ac8;
        }
    }
    ctx->pc = 0x273B14u;
    // 0x273b14: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x273b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x273b18: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x273b18u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x273b1c: 0x0  nop
    ctx->pc = 0x273b1cu;
    // NOP
label_273b20:
    // 0x273b20: 0x2a460006  slti        $a2, $s2, 0x6
    ctx->pc = 0x273b20u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x273b24: 0x14c0ffdc  bnez        $a2, . + 4 + (-0x24 << 2)
    ctx->pc = 0x273B24u;
    {
        const bool branch_taken_0x273b24 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x273b24) {
            ctx->pc = 0x273A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273a98;
        }
    }
    ctx->pc = 0x273B2Cu;
    // 0x273b2c: 0x0  nop
    ctx->pc = 0x273b2cu;
    // NOP
label_273b30:
    // 0x273b30: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x273b30u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x273b34: 0x1000018c  b           . + 4 + (0x18C << 2)
    ctx->pc = 0x273B34u;
    {
        const bool branch_taken_0x273b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273b34) {
            ctx->pc = 0x274168u;
            goto label_274168;
        }
    }
    ctx->pc = 0x273B3Cu;
label_273b3c:
    // 0x273b3c: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x273b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x273b40: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x273b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x273b44: 0x2464e650  addiu       $a0, $v1, -0x19B0
    ctx->pc = 0x273b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960720));
    // 0x273b48: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x273b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x273b4c: 0x8c631390  lw          $v1, 0x1390($v1)
    ctx->pc = 0x273b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5008)));
    // 0x273b50: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x273b50u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x273b54: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x273b54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x273b58: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x273B58u;
    {
        const bool branch_taken_0x273b58 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x273b58) {
            ctx->pc = 0x273B6Cu;
            goto label_273b6c;
        }
    }
    ctx->pc = 0x273B60u;
    // 0x273b60: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x273b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x273b64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x273B64u;
    {
        const bool branch_taken_0x273b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273b64) {
            ctx->pc = 0x273B78u;
            goto label_273b78;
        }
    }
    ctx->pc = 0x273B6Cu;
label_273b6c:
    // 0x273b6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x273b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273b70: 0xafa500cc  sw          $a1, 0xCC($sp)
    ctx->pc = 0x273b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 5));
    // 0x273b74: 0x0  nop
    ctx->pc = 0x273b74u;
    // NOP
label_273b78:
    // 0x273b78: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x273b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x273b7c: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x273b7cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x273b80: 0x1000016b  b           . + 4 + (0x16B << 2)
    ctx->pc = 0x273B80u;
    {
        const bool branch_taken_0x273b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273b80) {
            ctx->pc = 0x274130u;
            goto label_274130;
        }
    }
    ctx->pc = 0x273B88u;
label_273b88:
    // 0x273b88: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x273b88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x273b8c: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x273b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x273b90: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x273b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x273b94: 0x90631b30  lbu         $v1, 0x1B30($v1)
    ctx->pc = 0x273b94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 6960)));
    // 0x273b98: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x273b98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x273b9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x273b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273ba0: 0x14a30161  bne         $a1, $v1, . + 4 + (0x161 << 2)
    ctx->pc = 0x273BA0u;
    {
        const bool branch_taken_0x273ba0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x273ba0) {
            ctx->pc = 0x274128u;
            goto label_274128;
        }
    }
    ctx->pc = 0x273BA8u;
    // 0x273ba8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x273ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x273bac: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x273bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273bb0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x273bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x273bb4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x273bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x273bb8: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x273bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x273bbc: 0x8e2302d0  lw          $v1, 0x2D0($s1)
    ctx->pc = 0x273bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x273bc0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x273bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x273bc4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x273bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x273bc8: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x273bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x273bcc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x273BCCu;
    SET_GPR_U32(ctx, 31, 0x273BD4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x273BD4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x273BD4u) { return; }
    ctx->pc = 0x273BD4u;
label_273bd4:
    // 0x273bd4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x273bd4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x273bd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x273bd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273bdc: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x273bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x273be0: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x273be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x273be4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x273be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x273be8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x273be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x273bec: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x273becu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x273bf0: 0x8e2302d0  lw          $v1, 0x2D0($s1)
    ctx->pc = 0x273bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x273bf4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x273bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x273bf8: 0xe4a00030  swc1        $f0, 0x30($a1)
    ctx->pc = 0x273bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x273bfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x273bfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273c00: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x273c00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x273c04: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x273c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273c08: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x273c08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x273c0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x273c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x273c10: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x273c10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x273c14: 0x8e2502d0  lw          $a1, 0x2D0($s1)
    ctx->pc = 0x273c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x273c18: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x273c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x273c1c: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x273c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x273c20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x273c20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273c24: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x273c24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x273c28: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x273c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273c2c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x273c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x273c30: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x273c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x273c34: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x273c34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x273c38: 0x8e3702d0  lw          $s7, 0x2D0($s1)
    ctx->pc = 0x273c38u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x273c3c: 0x2e3b821  addu        $s7, $s7, $v1
    ctx->pc = 0x273c3cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x273c40: 0xe6e00038  swc1        $f0, 0x38($s7)
    ctx->pc = 0x273c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 56), bits); }
    // 0x273c44: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x273c44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x273c48: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x273c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273c4c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x273c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x273c50: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x273c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x273c54: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x273c54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x273c58: 0x8e2202d0  lw          $v0, 0x2D0($s1)
    ctx->pc = 0x273c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x273c5c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x273c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x273c60: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x273c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x273c64: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x273c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x273c68: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x273c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x273c6c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x273c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x273c70: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x273c70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x273c74: 0x8e2202d0  lw          $v0, 0x2D0($s1)
    ctx->pc = 0x273c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x273c78: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x273c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x273c7c: 0x121240  sll         $v0, $s2, 9
    ctx->pc = 0x273c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 9));
    // 0x273c80: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x273c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x273c84: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x273c84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x273c88: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x273c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x273c8c: 0x24460c30  addiu       $a2, $v0, 0xC30
    ctx->pc = 0x273c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 3120));
    // 0x273c90: 0xc040d62  jal         func_103588
    ctx->pc = 0x273C90u;
    SET_GPR_U32(ctx, 31, 0x273C98u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x273C98u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x273C98u) { return; }
    ctx->pc = 0x273C98u;
label_273c98:
    // 0x273c98: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x273c98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x273c9c: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x273c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x273ca0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x273ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x273ca4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x273ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x273ca8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x273ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x273cac: 0x8e2202d0  lw          $v0, 0x2D0($s1)
    ctx->pc = 0x273cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x273cb0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x273cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x273cb4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x273cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x273cb8: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x273cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x273cbc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x273cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x273cc0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x273cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x273cc4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x273cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x273cc8: 0x8e2202d0  lw          $v0, 0x2D0($s1)
    ctx->pc = 0x273cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x273ccc: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x273cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x273cd0: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x273cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x273cd4: 0xc040c92  jal         func_103248
    ctx->pc = 0x273CD4u;
    SET_GPR_U32(ctx, 31, 0x273CDCu);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x273CDCu;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x273CDCu) { return; }
    ctx->pc = 0x273CDCu;
label_273cdc:
    // 0x273cdc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x273cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x273ce0: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x273ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x273ce4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x273ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x273ce8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x273ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x273cec: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x273cecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x273cf0: 0x8e2202d0  lw          $v0, 0x2D0($s1)
    ctx->pc = 0x273cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x273cf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x273cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x273cf8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x273cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x273cfc: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x273cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273d00: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x273d00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x273d04: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x273d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x273d08: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x273d08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x273d0c: 0x8e2302d0  lw          $v1, 0x2D0($s1)
    ctx->pc = 0x273d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x273d10: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x273d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x273d14: 0x121a40  sll         $v1, $s2, 9
    ctx->pc = 0x273d14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 9));
    // 0x273d18: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x273d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x273d1c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x273d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x273d20: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x273d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x273d24: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x273d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x273d28: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x273d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x273d2c: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x273d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x273d30: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x273D30u;
    SET_GPR_U32(ctx, 31, 0x273D38u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x273D38u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x273D38u) { return; }
    ctx->pc = 0x273D38u;
label_273d38:
    // 0x273d38: 0x121a40  sll         $v1, $s2, 9
    ctx->pc = 0x273d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 9));
    // 0x273d3c: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x273d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x273d40: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x273d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x273d44: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x273d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x273d48: 0xc4810034  lwc1        $f1, 0x34($a0)
    ctx->pc = 0x273d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273d4c: 0x3c033fae  lui         $v1, 0x3FAE
    ctx->pc = 0x273d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16302 << 16));
    // 0x273d50: 0x34635727  ori         $v1, $v1, 0x5727
    ctx->pc = 0x273d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)22311);
    // 0x273d54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x273d54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273d58: 0x0  nop
    ctx->pc = 0x273d58u;
    // NOP
    // 0x273d5c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x273d5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x273d60: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x273d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x273d64: 0x121a40  sll         $v1, $s2, 9
    ctx->pc = 0x273d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 9));
    // 0x273d68: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x273d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x273d6c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x273d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x273d70: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x273d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x273d74: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x273d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x273d78: 0x346320c5  ori         $v1, $v1, 0x20C5
    ctx->pc = 0x273d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8389);
    // 0x273d7c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x273d7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x273d80: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x273d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273d84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x273d84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x273d88: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x273d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x273d8c: 0x121a40  sll         $v1, $s2, 9
    ctx->pc = 0x273d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 9));
    // 0x273d90: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x273d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x273d94: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x273d94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x273d98: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x273d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x273d9c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x273d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x273da0: 0x346320c5  ori         $v1, $v1, 0x20C5
    ctx->pc = 0x273da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8389);
    // 0x273da4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x273da4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x273da8: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x273da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273dac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x273dacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x273db0: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x273db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x273db4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x273db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x273db8: 0x32040001  andi        $a0, $s0, 0x1
    ctx->pc = 0x273db8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x273dbc: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x273DBCu;
    {
        const bool branch_taken_0x273dbc = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x273dbc) {
            ctx->pc = 0x273DD0u;
            goto label_273dd0;
        }
    }
    ctx->pc = 0x273DC4u;
    // 0x273dc4: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x273DC4u;
    {
        const bool branch_taken_0x273dc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x273dc4) {
            ctx->pc = 0x273DD0u;
            goto label_273dd0;
        }
    }
    ctx->pc = 0x273DCCu;
    // 0x273dcc: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x273dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_273dd0:
    // 0x273dd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x273dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273dd4: 0x148300bf  bne         $a0, $v1, . + 4 + (0xBF << 2)
    ctx->pc = 0x273DD4u;
    {
        const bool branch_taken_0x273dd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x273dd4) {
            ctx->pc = 0x2740D4u;
            goto label_2740d4;
        }
    }
    ctx->pc = 0x273DDCu;
    // 0x273ddc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x273ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x273de0: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x273de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273de4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x273de4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x273de8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x273de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x273dec: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x273decu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x273df0: 0x8e2302d0  lw          $v1, 0x2D0($s1)
    ctx->pc = 0x273df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x273df4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x273df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x273df8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x273df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273dfc: 0x3c03bdcc  lui         $v1, 0xBDCC
    ctx->pc = 0x273dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48588 << 16));
    // 0x273e00: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x273e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x273e04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x273e04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273e08: 0x0  nop
    ctx->pc = 0x273e08u;
    // NOP
    // 0x273e0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x273e0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273e10: 0x0  nop
    ctx->pc = 0x273e10u;
    // NOP
    // 0x273e14: 0x45010028  bc1t        . + 4 + (0x28 << 2)
    ctx->pc = 0x273E14u;
    {
        const bool branch_taken_0x273e14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x273e14) {
            ctx->pc = 0x273EB8u;
            goto label_273eb8;
        }
    }
    ctx->pc = 0x273E1Cu;
    // 0x273e1c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x273e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x273e20: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x273e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273e24: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x273e24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x273e28: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x273e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x273e2c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x273e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x273e30: 0x8e2302d0  lw          $v1, 0x2D0($s1)
    ctx->pc = 0x273e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x273e34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x273e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x273e38: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x273e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273e3c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x273e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x273e40: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x273e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x273e44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x273e44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273e48: 0x0  nop
    ctx->pc = 0x273e48u;
    // NOP
    // 0x273e4c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x273e4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273e50: 0x0  nop
    ctx->pc = 0x273e50u;
    // NOP
    // 0x273e54: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x273E54u;
    {
        const bool branch_taken_0x273e54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x273e54) {
            ctx->pc = 0x273EB8u;
            goto label_273eb8;
        }
    }
    ctx->pc = 0x273E5Cu;
    // 0x273e5c: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x273e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x273e60: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x273e60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x273e64: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x273e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273e68: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x273e68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x273e6c: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x273e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x273e70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x273e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x273e74: 0xac650060  sw          $a1, 0x60($v1)
    ctx->pc = 0x273e74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 5));
    // 0x273e78: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x273e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x273e7c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x273e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x273e80: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x273e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273e84: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x273e84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x273e88: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x273e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x273e8c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x273e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x273e90: 0xac650064  sw          $a1, 0x64($v1)
    ctx->pc = 0x273e90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 5));
    // 0x273e94: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x273e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x273e98: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x273e98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x273e9c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x273e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273ea0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x273ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x273ea4: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x273ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x273ea8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x273ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x273eac: 0xac650068  sw          $a1, 0x68($v1)
    ctx->pc = 0x273eacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 5));
    // 0x273eb0: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x273EB0u;
    {
        const bool branch_taken_0x273eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273eb0) {
            ctx->pc = 0x274128u;
            goto label_274128;
        }
    }
    ctx->pc = 0x273EB8u;
label_273eb8:
    // 0x273eb8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x273eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x273ebc: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x273ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273ec0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x273ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x273ec4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x273ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x273ec8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x273ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x273ecc: 0x8e2302d0  lw          $v1, 0x2D0($s1)
    ctx->pc = 0x273eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x273ed0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x273ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x273ed4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x273ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273ed8: 0x3c03be4c  lui         $v1, 0xBE4C
    ctx->pc = 0x273ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48716 << 16));
    // 0x273edc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x273edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x273ee0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x273ee0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273ee4: 0x0  nop
    ctx->pc = 0x273ee4u;
    // NOP
    // 0x273ee8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x273ee8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273eec: 0x0  nop
    ctx->pc = 0x273eecu;
    // NOP
    // 0x273ef0: 0x4501002a  bc1t        . + 4 + (0x2A << 2)
    ctx->pc = 0x273EF0u;
    {
        const bool branch_taken_0x273ef0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x273ef0) {
            ctx->pc = 0x273F9Cu;
            goto label_273f9c;
        }
    }
    ctx->pc = 0x273EF8u;
    // 0x273ef8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x273ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x273efc: 0x70f021  addu        $fp, $v1, $s0
    ctx->pc = 0x273efcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273f00: 0x1e1880  sll         $v1, $fp, 2
    ctx->pc = 0x273f00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x273f04: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x273f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x273f08: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x273f08u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x273f0c: 0x8e2302d0  lw          $v1, 0x2D0($s1)
    ctx->pc = 0x273f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x273f10: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x273f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x273f14: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x273f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x273f18: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x273f18u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x273f1c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x273f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273f20: 0x3c05bdcc  lui         $a1, 0xBDCC
    ctx->pc = 0x273f20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48588 << 16));
    // 0x273f24: 0x34a4cccd  ori         $a0, $a1, 0xCCCD
    ctx->pc = 0x273f24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x273f28: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x273f28u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273f2c: 0x0  nop
    ctx->pc = 0x273f2cu;
    // NOP
    // 0x273f30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x273f30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273f34: 0x0  nop
    ctx->pc = 0x273f34u;
    // NOP
    // 0x273f38: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x273F38u;
    {
        const bool branch_taken_0x273f38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x273f38) {
            ctx->pc = 0x273F9Cu;
            goto label_273f9c;
        }
    }
    ctx->pc = 0x273F40u;
    // 0x273f40: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x273f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x273f44: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x273f44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x273f48: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x273f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273f4c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x273f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x273f50: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x273f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x273f54: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x273f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x273f58: 0xaca60060  sw          $a2, 0x60($a1)
    ctx->pc = 0x273f58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 6));
    // 0x273f5c: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x273f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x273f60: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x273f60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x273f64: 0x703821  addu        $a3, $v1, $s0
    ctx->pc = 0x273f64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273f68: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x273f68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x273f6c: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x273f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x273f70: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x273f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x273f74: 0xac650064  sw          $a1, 0x64($v1)
    ctx->pc = 0x273f74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 5));
    // 0x273f78: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x273f78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x273f7c: 0x10a0c0  sll         $s4, $s0, 3
    ctx->pc = 0x273f7cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x273f80: 0x290a021  addu        $s4, $s4, $s0
    ctx->pc = 0x273f80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x273f84: 0x143100  sll         $a2, $s4, 4
    ctx->pc = 0x273f84u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x273f88: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x273f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x273f8c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x273f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x273f90: 0xac670068  sw          $a3, 0x68($v1)
    ctx->pc = 0x273f90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 7));
    // 0x273f94: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x273F94u;
    {
        const bool branch_taken_0x273f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273f94) {
            ctx->pc = 0x274128u;
            goto label_274128;
        }
    }
    ctx->pc = 0x273F9Cu;
label_273f9c:
    // 0x273f9c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x273f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x273fa0: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x273fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273fa4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x273fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x273fa8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x273fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x273fac: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x273facu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x273fb0: 0x8e2302d0  lw          $v1, 0x2D0($s1)
    ctx->pc = 0x273fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x273fb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x273fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x273fb8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x273fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273fbc: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x273fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x273fc0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x273fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x273fc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x273fc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273fc8: 0x0  nop
    ctx->pc = 0x273fc8u;
    // NOP
    // 0x273fcc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x273fccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273fd0: 0x0  nop
    ctx->pc = 0x273fd0u;
    // NOP
    // 0x273fd4: 0x45010028  bc1t        . + 4 + (0x28 << 2)
    ctx->pc = 0x273FD4u;
    {
        const bool branch_taken_0x273fd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x273fd4) {
            ctx->pc = 0x274078u;
            goto label_274078;
        }
    }
    ctx->pc = 0x273FDCu;
    // 0x273fdc: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x273fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x273fe0: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x273fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x273fe4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x273fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x273fe8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x273fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x273fec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x273fecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x273ff0: 0x8e3502d0  lw          $s5, 0x2D0($s1)
    ctx->pc = 0x273ff0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x273ff4: 0x2a3a821  addu        $s5, $s5, $v1
    ctx->pc = 0x273ff4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x273ff8: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x273ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273ffc: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x273ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x274000: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x274000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x274004: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x274004u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274008: 0x0  nop
    ctx->pc = 0x274008u;
    // NOP
    // 0x27400c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27400cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x274010: 0x0  nop
    ctx->pc = 0x274010u;
    // NOP
    // 0x274014: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x274014u;
    {
        const bool branch_taken_0x274014 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x274014) {
            ctx->pc = 0x274078u;
            goto label_274078;
        }
    }
    ctx->pc = 0x27401Cu;
    // 0x27401c: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x27401cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x274020: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x274020u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x274024: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x274024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x274028: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x274028u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x27402c: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x27402cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x274030: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x274030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x274034: 0xac640060  sw          $a0, 0x60($v1)
    ctx->pc = 0x274034u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
    // 0x274038: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x274038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x27403c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x27403cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x274040: 0x70b021  addu        $s6, $v1, $s0
    ctx->pc = 0x274040u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x274044: 0x16b100  sll         $s6, $s6, 4
    ctx->pc = 0x274044u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x274048: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x274048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x27404c: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x27404cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x274050: 0xac640064  sw          $a0, 0x64($v1)
    ctx->pc = 0x274050u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 4));
    // 0x274054: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x274054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x274058: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x274058u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x27405c: 0xb01821  addu        $v1, $a1, $s0
    ctx->pc = 0x27405cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x274060: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x274060u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x274064: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x274064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x274068: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x274068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27406c: 0xac660068  sw          $a2, 0x68($v1)
    ctx->pc = 0x27406cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 6));
    // 0x274070: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x274070u;
    {
        const bool branch_taken_0x274070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274070) {
            ctx->pc = 0x274128u;
            goto label_274128;
        }
    }
    ctx->pc = 0x274078u;
label_274078:
    // 0x274078: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x274078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x27407c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x27407cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x274080: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x274080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x274084: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x274084u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x274088: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x274088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x27408c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27408cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x274090: 0xac650060  sw          $a1, 0x60($v1)
    ctx->pc = 0x274090u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 5));
    // 0x274094: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x274094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x274098: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x274098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x27409c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x27409cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2740a0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2740a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2740a4: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x2740a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x2740a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2740a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2740ac: 0xac650064  sw          $a1, 0x64($v1)
    ctx->pc = 0x2740acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 5));
    // 0x2740b0: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2740b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2740b4: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2740b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2740b8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2740b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2740bc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2740bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2740c0: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x2740c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x2740c4: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x2740c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2740c8: 0xac660068  sw          $a2, 0x68($v1)
    ctx->pc = 0x2740c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 6));
    // 0x2740cc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2740CCu;
    {
        const bool branch_taken_0x2740cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2740cc) {
            ctx->pc = 0x274128u;
            goto label_274128;
        }
    }
    ctx->pc = 0x2740D4u;
label_2740d4:
    // 0x2740d4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2740d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2740d8: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x2740d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2740dc: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x2740dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2740e0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2740e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2740e4: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x2740e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x2740e8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2740e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2740ec: 0xac650060  sw          $a1, 0x60($v1)
    ctx->pc = 0x2740ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 5));
    // 0x2740f0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2740f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2740f4: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2740f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2740f8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2740f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2740fc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2740fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x274100: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x274100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x274104: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x274104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x274108: 0xac650064  sw          $a1, 0x64($v1)
    ctx->pc = 0x274108u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 5));
    // 0x27410c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x27410cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x274110: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x274110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x274114: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x274114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x274118: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x274118u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x27411c: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x27411cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x274120: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x274120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x274124: 0xac650068  sw          $a1, 0x68($v1)
    ctx->pc = 0x274124u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 5));
label_274128:
    // 0x274128: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x274128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27412c: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x27412cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_274130:
    // 0x274130: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x274130u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x274134: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x274134u;
    {
        const bool branch_taken_0x274134 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x274134) {
            ctx->pc = 0x274148u;
            goto label_274148;
        }
    }
    ctx->pc = 0x27413Cu;
    // 0x27413c: 0x2417001d  addiu       $s7, $zero, 0x1D
    ctx->pc = 0x27413cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x274140: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x274140u;
    {
        const bool branch_taken_0x274140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274140) {
            ctx->pc = 0x274150u;
            goto label_274150;
        }
    }
    ctx->pc = 0x274148u;
label_274148:
    // 0x274148: 0x2417001e  addiu       $s7, $zero, 0x1E
    ctx->pc = 0x274148u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x27414c: 0x0  nop
    ctx->pc = 0x27414cu;
    // NOP
label_274150:
    // 0x274150: 0x217182a  slt         $v1, $s0, $s7
    ctx->pc = 0x274150u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x274154: 0x1460fe8c  bnez        $v1, . + 4 + (-0x174 << 2)
    ctx->pc = 0x274154u;
    {
        const bool branch_taken_0x274154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x274154) {
            ctx->pc = 0x273B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273b88;
        }
    }
    ctx->pc = 0x27415Cu;
    // 0x27415c: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x27415cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x274160: 0x70809628  paddub      $s2, $a0, $zero
    ctx->pc = 0x274160u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x274164: 0x0  nop
    ctx->pc = 0x274164u;
    // NOP
label_274168:
    // 0x274168: 0x2a430006  slti        $v1, $s2, 0x6
    ctx->pc = 0x274168u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x27416c: 0x1460fe73  bnez        $v1, . + 4 + (-0x18D << 2)
    ctx->pc = 0x27416Cu;
    {
        const bool branch_taken_0x27416c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27416c) {
            ctx->pc = 0x273B3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273b3c;
        }
    }
    ctx->pc = 0x274174u;
    // 0x274174: 0x8e631bf0  lw          $v1, 0x1BF0($s3)
    ctx->pc = 0x274174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 7152)));
    // 0x274178: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x274178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x27417c: 0xae631bf0  sw          $v1, 0x1BF0($s3)
    ctx->pc = 0x27417cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 7152), GPR_U32(ctx, 3));
    // 0x274180: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x274180u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x274184: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x274184u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x274188: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x274188u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27418c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x27418cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x274190: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x274190u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x274194: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x274194u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x274198: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x274198u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27419c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27419cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2741a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2741a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2741a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2741a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2741a8: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x2741a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2741ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2741ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2741ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2741B4u;
}
