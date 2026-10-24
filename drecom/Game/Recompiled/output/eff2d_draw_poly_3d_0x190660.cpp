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

// Function: eff2d_draw_poly_3d
// Address: 0x190660 - 0x19110c
void eff2d_draw_poly_3d_0x190660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eff2d_draw_poly_3d_0x190660");
#endif

    switch (ctx->pc) {
        case 0x190744u: goto label_190744;
        case 0x19076cu: goto label_19076c;
        case 0x19079cu: goto label_19079c;
        case 0x1909fcu: goto label_1909fc;
        case 0x190a90u: goto label_190a90;
        case 0x190a9cu: goto label_190a9c;
        case 0x190aa8u: goto label_190aa8;
        case 0x190ab4u: goto label_190ab4;
        case 0x190bc0u: goto label_190bc0;
        case 0x190bd4u: goto label_190bd4;
        case 0x190be4u: goto label_190be4;
        case 0x190bf0u: goto label_190bf0;
        case 0x190c14u: goto label_190c14;
        case 0x190c30u: goto label_190c30;
        case 0x190c54u: goto label_190c54;
        case 0x190cf0u: goto label_190cf0;
        case 0x190fb8u: goto label_190fb8;
        case 0x191094u: goto label_191094;
        case 0x1910c0u: goto label_1910c0;
        default: break;
    }

    ctx->pc = 0x190660u;

    // 0x190660: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x190660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x190664: 0x7fbf0080  sq          $ra, 0x80($sp)
    ctx->pc = 0x190664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
    // 0x190668: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x190668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x19066c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x19066cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x190670: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x190670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x190674: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x190674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x190678: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x190678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x19067c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x19067cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x190680: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x190680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x190684: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x190684u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x190688: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x190688u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19068c: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x19068cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x190690: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x190690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x190694: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x190694u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x190698: 0x24440160  addiu       $a0, $v0, 0x160
    ctx->pc = 0x190698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
    // 0x19069c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19069cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1906a0: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1906a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1906a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1906a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1906a8: 0x21c80  sll         $v1, $v0, 18
    ctx->pc = 0x1906a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 18));
    // 0x1906ac: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1906acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x1906b0: 0x24422580  addiu       $v0, $v0, 0x2580
    ctx->pc = 0x1906b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9600));
    // 0x1906b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1906b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1906b8: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x1906b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
    // 0x1906bc: 0x3421fffc  ori         $at, $at, 0xFFFC
    ctx->pc = 0x1906bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65532);
    // 0x1906c0: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x1906c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1906c4: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1906c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1906c8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1906C8u;
    {
        const bool branch_taken_0x1906c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1906c8) {
            ctx->pc = 0x1906DCu;
            goto label_1906dc;
        }
    }
    ctx->pc = 0x1906D0u;
    // 0x1906d0: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1906d0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1906d4: 0x10000280  b           . + 4 + (0x280 << 2)
    ctx->pc = 0x1906D4u;
    {
        const bool branch_taken_0x1906d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1906d4) {
            ctx->pc = 0x1910D8u;
            goto label_1910d8;
        }
    }
    ctx->pc = 0x1906DCu;
label_1906dc:
    // 0x1906dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1906dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1906e0: 0x8c320af0  lw          $s2, 0xAF0($at)
    ctx->pc = 0x1906e0u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1906e4: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1906E4u;
    {
        const bool branch_taken_0x1906e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1906e4) {
            ctx->pc = 0x1906FCu;
            goto label_1906fc;
        }
    }
    ctx->pc = 0x1906ECu;
    // 0x1906ec: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1906ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1906f0: 0x2455df50  addiu       $s5, $v0, -0x20B0
    ctx->pc = 0x1906f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958928));
    // 0x1906f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1906F4u;
    {
        const bool branch_taken_0x1906f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1906f4) {
            ctx->pc = 0x190704u;
            goto label_190704;
        }
    }
    ctx->pc = 0x1906FCu;
label_1906fc:
    // 0x1906fc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1906fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x190700: 0x2455e550  addiu       $s5, $v0, -0x1AB0
    ctx->pc = 0x190700u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
label_190704:
    // 0x190704: 0x8e2201fc  lw          $v0, 0x1FC($s1)
    ctx->pc = 0x190704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 508)));
    // 0x190708: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x190708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x19070c: 0x8c560010  lw          $s6, 0x10($v0)
    ctx->pc = 0x19070cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x190710: 0x92220210  lbu         $v0, 0x210($s1)
    ctx->pc = 0x190710u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x190714: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x190714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x190718: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x190718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x19071c: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x19071cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x190720: 0x262200b0  addiu       $v0, $s1, 0xB0
    ctx->pc = 0x190720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x190724: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x190724u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190728: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x190728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x19072c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x19072cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x190730: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x190730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x190734: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x190734u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x190738: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x190738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x19073c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x19073Cu;
    SET_GPR_U32(ctx, 31, 0x190744u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x190744u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x190744u) { return; }
    ctx->pc = 0x190744u;
label_190744:
    // 0x190744: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x190744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190748: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x190748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x19074c: 0x96220118  lhu         $v0, 0x118($s1)
    ctx->pc = 0x19074cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x190750: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x190750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x190754: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x190754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x190758: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x190758u;
    {
        const bool branch_taken_0x190758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190758) {
            ctx->pc = 0x190790u;
            goto label_190790;
        }
    }
    ctx->pc = 0x190760u;
    // 0x190760: 0xc7ac009c  lwc1        $f12, 0x9C($sp)
    ctx->pc = 0x190760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x190764: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x190764u;
    SET_GPR_U32(ctx, 31, 0x19076Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x190764u, 0x19076Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19076Cu;
label_19076c:
    // 0x19076c: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x19076cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x190770: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x190770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x190774: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x190774u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x190778: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x190778u;
    {
        const bool branch_taken_0x190778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190778) {
            ctx->pc = 0x190784u;
            goto label_190784;
        }
    }
    ctx->pc = 0x190780u;
    // 0x190780: 0x3413ffff  ori         $s3, $zero, 0xFFFF
    ctx->pc = 0x190780u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_190784:
    // 0x190784: 0x139a02  srl         $s3, $s3, 8
    ctx->pc = 0x190784u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), 8));
    // 0x190788: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x190788u;
    {
        const bool branch_taken_0x190788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190788) {
            ctx->pc = 0x1907B8u;
            goto label_1907b8;
        }
    }
    ctx->pc = 0x190790u;
label_190790:
    // 0x190790: 0xc7ac009c  lwc1        $f12, 0x9C($sp)
    ctx->pc = 0x190790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x190794: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x190794u;
    SET_GPR_U32(ctx, 31, 0x19079Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x190794u, 0x19079Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19079Cu;
label_19079c:
    // 0x19079c: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x19079cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1907a0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1907a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1907a4: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1907a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1907a8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1907A8u;
    {
        const bool branch_taken_0x1907a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1907a8) {
            ctx->pc = 0x1907B4u;
            goto label_1907b4;
        }
    }
    ctx->pc = 0x1907B0u;
    // 0x1907b0: 0x3413ffff  ori         $s3, $zero, 0xFFFF
    ctx->pc = 0x1907b0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1907b4:
    // 0x1907b4: 0x139982  srl         $s3, $s3, 6
    ctx->pc = 0x1907b4u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
label_1907b8:
    // 0x1907b8: 0x96220118  lhu         $v0, 0x118($s1)
    ctx->pc = 0x1907b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x1907bc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1907bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1907c0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1907c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1907c4: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1907C4u;
    {
        const bool branch_taken_0x1907c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1907c4) {
            ctx->pc = 0x190810u;
            goto label_190810;
        }
    }
    ctx->pc = 0x1907CCu;
    // 0x1907cc: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1907ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x1907d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1907d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1907d4: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x1907d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1907d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1907d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1907dc: 0x0  nop
    ctx->pc = 0x1907dcu;
    // NOP
    // 0x1907e0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1907E0u;
    {
        const bool branch_taken_0x1907e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1907e0) {
            ctx->pc = 0x190804u;
            goto label_190804;
        }
    }
    ctx->pc = 0x1907E8u;
    // 0x1907e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1907e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1907ec: 0xc421fd70  lwc1        $f1, -0x290($at)
    ctx->pc = 0x1907ecu;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1907f0: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x1907f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1907f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1907f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1907f8: 0x0  nop
    ctx->pc = 0x1907f8u;
    // NOP
    // 0x1907fc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1907FCu;
    {
        const bool branch_taken_0x1907fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1907fc) {
            ctx->pc = 0x190810u;
            goto label_190810;
        }
    }
    ctx->pc = 0x190804u;
label_190804:
    // 0x190804: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x190804u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x190808: 0x10000233  b           . + 4 + (0x233 << 2)
    ctx->pc = 0x190808u;
    {
        const bool branch_taken_0x190808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190808) {
            ctx->pc = 0x1910D8u;
            goto label_1910d8;
        }
    }
    ctx->pc = 0x190810u;
label_190810:
    // 0x190810: 0x96220118  lhu         $v0, 0x118($s1)
    ctx->pc = 0x190810u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x190814: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x190814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x190818: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x190818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x19081c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19081Cu;
    {
        const bool branch_taken_0x19081c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19081c) {
            ctx->pc = 0x190834u;
            goto label_190834;
        }
    }
    ctx->pc = 0x190824u;
    // 0x190824: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x190824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x190828: 0x8c30a600  lw          $s0, -0x5A00($at)
    ctx->pc = 0x190828u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A600u));
    // 0x19082c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19082Cu;
    {
        const bool branch_taken_0x19082c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19082c) {
            ctx->pc = 0x190840u;
            goto label_190840;
        }
    }
    ctx->pc = 0x190834u;
label_190834:
    // 0x190834: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x190834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x190838: 0x8c302580  lw          $s0, 0x2580($at)
    ctx->pc = 0x190838u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x532580u));
    // 0x19083c: 0x0  nop
    ctx->pc = 0x19083cu;
    // NOP
label_190840:
    // 0x190840: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x190840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x190844: 0x34430015  ori         $v1, $v0, 0x15
    ctx->pc = 0x190844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21);
    // 0x190848: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x190848u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19084c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x19084cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x190850: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x190850u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x190854: 0x7200a628  paddub      $s4, $s0, $zero
    ctx->pc = 0x190854u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x190858: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x190858u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19085c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x19085cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x190860: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x190860u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x190864: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x190864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x190868: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x190868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x19086c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19086cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190870: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x190870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x190874: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x190874u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x190878: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x190878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x19087c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x19087cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x190880: 0x3c020eee  lui         $v0, 0xEEE
    ctx->pc = 0x190880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3822 << 16));
    // 0x190884: 0x3443eeee  ori         $v1, $v0, 0xEEEE
    ctx->pc = 0x190884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61166);
    // 0x190888: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x190888u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19088c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x19088cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x190890: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x190890u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x190894: 0xde2301d0  ld          $v1, 0x1D0($s1)
    ctx->pc = 0x190894u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 464)));
    // 0x190898: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x190898u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19089c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x19089cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1908a0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1908a0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1908a4: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x1908a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1908a8: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x1908a8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1908ac: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x1908acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1908b0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1908b0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1908b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1908b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1908b8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1908b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1908bc: 0x3c020a00  lui         $v0, 0xA00
    ctx->pc = 0x1908bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2560 << 16));
    // 0x1908c0: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x1908c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x1908c4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1908c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1908c8: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x1908c8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1908cc: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x1908ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1908d0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1908d0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1908d4: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x1908d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1908d8: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x1908d8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1908dc: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x1908dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1908e0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1908e0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1908e4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1908e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1908e8: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x1908e8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1908ec: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x1908ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1908f0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1908f0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1908f4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1908f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1908f8: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x1908f8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1908fc: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x1908fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x190900: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x190900u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x190904: 0xde2301e8  ld          $v1, 0x1E8($s1)
    ctx->pc = 0x190904u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 488)));
    // 0x190908: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x190908u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19090c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x19090cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x190910: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x190910u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x190914: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x190914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x190918: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x190918u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19091c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x19091cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x190920: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x190920u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x190924: 0xde2301e0  ld          $v1, 0x1E0($s1)
    ctx->pc = 0x190924u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 480)));
    // 0x190928: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x190928u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19092c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x19092cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x190930: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x190930u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x190934: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x190934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x190938: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x190938u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19093c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x19093cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x190940: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x190940u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x190944: 0xde2301d8  ld          $v1, 0x1D8($s1)
    ctx->pc = 0x190944u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 472)));
    // 0x190948: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x190948u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19094c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x19094cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x190950: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x190950u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x190954: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x190954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x190958: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x190958u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19095c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x19095cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x190960: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x190960u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x190964: 0xde2301f0  ld          $v1, 0x1F0($s1)
    ctx->pc = 0x190964u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 496)));
    // 0x190968: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x190968u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19096c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x19096cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x190970: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x190970u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x190974: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x190974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x190978: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x190978u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19097c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x19097cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x190980: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x190980u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x190984: 0x3c02c02a  lui         $v0, 0xC02A
    ctx->pc = 0x190984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49194 << 16));
    // 0x190988: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x190988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x19098c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x19098cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x190990: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x190990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x190994: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x190994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x190998: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x190998u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19099c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x19099cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1909a0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1909a0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1909a4: 0x24024124  addiu       $v0, $zero, 0x4124
    ctx->pc = 0x1909a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16676));
    // 0x1909a8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1909a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1909ac: 0x3c021241  lui         $v0, 0x1241
    ctx->pc = 0x1909acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4673 << 16));
    // 0x1909b0: 0x34422412  ori         $v0, $v0, 0x2412
    ctx->pc = 0x1909b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9234);
    // 0x1909b4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1909b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1909b8: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x1909b8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1909bc: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x1909bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1909c0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1909c0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1909c4: 0x96220118  lhu         $v0, 0x118($s1)
    ctx->pc = 0x1909c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x1909c8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1909c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1909cc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1909ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1909d0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1909D0u;
    {
        const bool branch_taken_0x1909d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1909d0) {
            ctx->pc = 0x190A04u;
            goto label_190a04;
        }
    }
    ctx->pc = 0x1909D8u;
    // 0x1909d8: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x1909d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1909dc: 0xc64001b4  lwc1        $f0, 0x1B4($s2)
    ctx->pc = 0x1909dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1909e0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1909e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1909e4: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1909e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1909e8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1909e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1909ec: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1909ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1909f0: 0xc7ac0160  lwc1        $f12, 0x160($sp)
    ctx->pc = 0x1909f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1909f4: 0xc040c60  jal         func_103180
    ctx->pc = 0x1909F4u;
    SET_GPR_U32(ctx, 31, 0x1909FCu);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x1909FCu;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1909FCu) { return; }
    ctx->pc = 0x1909FCu;
label_1909fc:
    // 0x1909fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1909FCu;
    {
        const bool branch_taken_0x1909fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1909fc) {
            ctx->pc = 0x190A0Cu;
            goto label_190a0c;
        }
    }
    ctx->pc = 0x190A04u;
label_190a04:
    // 0x190a04: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x190a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190a08: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x190a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_190a0c:
    // 0x190a0c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x190a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x190a10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190a10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190a14: 0x0  nop
    ctx->pc = 0x190a14u;
    // NOP
    // 0x190a18: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x190a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x190a1c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x190a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x190a20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190a20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190a24: 0x0  nop
    ctx->pc = 0x190a24u;
    // NOP
    // 0x190a28: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x190a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x190a2c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x190a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x190a30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190a34: 0x0  nop
    ctx->pc = 0x190a34u;
    // NOP
    // 0x190a38: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x190a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x190a3c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x190a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x190a40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190a40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190a44: 0x0  nop
    ctx->pc = 0x190a44u;
    // NOP
    // 0x190a48: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x190a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x190a4c: 0xc62100f0  lwc1        $f1, 0xF0($s1)
    ctx->pc = 0x190a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190a50: 0xc6200108  lwc1        $f0, 0x108($s1)
    ctx->pc = 0x190a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190a54: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x190a54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x190a58: 0xc6c00014  lwc1        $f0, 0x14($s6)
    ctx->pc = 0x190a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190a5c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x190a5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x190a60: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x190a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190a64: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x190a64u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x190a68: 0xc62100f0  lwc1        $f1, 0xF0($s1)
    ctx->pc = 0x190a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190a6c: 0xc620010c  lwc1        $f0, 0x10C($s1)
    ctx->pc = 0x190a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190a70: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x190a70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x190a74: 0xc6c00010  lwc1        $f0, 0x10($s6)
    ctx->pc = 0x190a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190a78: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x190a78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x190a7c: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x190a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190a80: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x190a80u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x190a84: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x190a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x190a88: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x190A88u;
    SET_GPR_U32(ctx, 31, 0x190A90u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x190A88u, 0x190A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190A90u;
label_190a90:
    // 0x190a90: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x190a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x190a94: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x190A94u;
    SET_GPR_U32(ctx, 31, 0x190A9Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x190A94u, 0x190A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190A9Cu;
label_190a9c:
    // 0x190a9c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x190a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x190aa0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x190AA0u;
    SET_GPR_U32(ctx, 31, 0x190AA8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x190AA0u, 0x190AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190AA8u;
label_190aa8:
    // 0x190aa8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x190aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x190aac: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x190AACu;
    SET_GPR_U32(ctx, 31, 0x190AB4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x190AACu, 0x190AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190AB4u;
label_190ab4:
    // 0x190ab4: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x190ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x190ab8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x190ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190abc: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x190abcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x190ac0: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x190ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190ac4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x190ac4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x190ac8: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x190ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x190acc: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x190accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x190ad0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x190ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190ad4: 0x4600a842  mul.s       $f1, $f21, $f0
    ctx->pc = 0x190ad4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x190ad8: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x190ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190adc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x190adcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x190ae0: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x190ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x190ae4: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x190ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x190ae8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x190ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190aec: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x190aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x190af0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190af0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190af4: 0x0  nop
    ctx->pc = 0x190af4u;
    // NOP
    // 0x190af8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x190af8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x190afc: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x190afcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x190b00: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x190b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190b04: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x190b04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x190b08: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x190b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x190b0c: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x190b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x190b10: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x190b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190b14: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x190b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x190b18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190b18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190b1c: 0x0  nop
    ctx->pc = 0x190b1cu;
    // NOP
    // 0x190b20: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x190b20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x190b24: 0x4600a842  mul.s       $f1, $f21, $f0
    ctx->pc = 0x190b24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x190b28: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x190b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190b2c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x190b2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x190b30: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x190b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x190b34: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x190b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x190b38: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x190b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190b3c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x190b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x190b40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190b40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190b44: 0x0  nop
    ctx->pc = 0x190b44u;
    // NOP
    // 0x190b48: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x190b48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x190b4c: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x190b4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x190b50: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x190b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190b54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x190b54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x190b58: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x190b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x190b5c: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x190b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x190b60: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x190b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190b64: 0x4600a842  mul.s       $f1, $f21, $f0
    ctx->pc = 0x190b64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x190b68: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x190b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190b6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x190b6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x190b70: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x190b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x190b74: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x190b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x190b78: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x190b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190b7c: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x190b7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x190b80: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x190b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190b84: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x190b84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x190b88: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x190b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x190b8c: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x190b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x190b90: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x190b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190b94: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x190b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x190b98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190b98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190b9c: 0x0  nop
    ctx->pc = 0x190b9cu;
    // NOP
    // 0x190ba0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x190ba0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x190ba4: 0x4600a842  mul.s       $f1, $f21, $f0
    ctx->pc = 0x190ba4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x190ba8: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x190ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190bac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x190bacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x190bb0: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x190bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x190bb4: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x190bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x190bb8: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x190BB8u;
    SET_GPR_U32(ctx, 31, 0x190BC0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x190BC0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x190BC0u) { return; }
    ctx->pc = 0x190BC0u;
label_190bc0:
    // 0x190bc0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x190bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x190bc4: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x190bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x190bc8: 0x26260040  addiu       $a2, $s1, 0x40
    ctx->pc = 0x190bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x190bcc: 0xc040d62  jal         func_103588
    ctx->pc = 0x190BCCu;
    SET_GPR_U32(ctx, 31, 0x190BD4u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x190BD4u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x190BD4u) { return; }
    ctx->pc = 0x190BD4u;
label_190bd4:
    // 0x190bd4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x190bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x190bd8: 0x262500b0  addiu       $a1, $s1, 0xB0
    ctx->pc = 0x190bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x190bdc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x190BDCu;
    SET_GPR_U32(ctx, 31, 0x190BE4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x190BE4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x190BE4u) { return; }
    ctx->pc = 0x190BE4u;
label_190be4:
    // 0x190be4: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x190be4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x190be8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x190BE8u;
    {
        const bool branch_taken_0x190be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190be8) {
            ctx->pc = 0x190C18u;
            goto label_190c18;
        }
    }
    ctx->pc = 0x190BF0u;
label_190bf0:
    // 0x190bf0: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x190bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x190bf4: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x190bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190bf8: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x190bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x190bfc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x190bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190c00: 0x246400a0  addiu       $a0, $v1, 0xA0
    ctx->pc = 0x190c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x190c04: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x190c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x190c08: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x190c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x190c0c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x190C0Cu;
    SET_GPR_U32(ctx, 31, 0x190C14u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x190C14u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x190C14u) { return; }
    ctx->pc = 0x190C14u;
label_190c14:
    // 0x190c14: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x190c14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_190c18:
    // 0x190c18: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x190c18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x190c1c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x190C1Cu;
    {
        const bool branch_taken_0x190c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190c1c) {
            ctx->pc = 0x190BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190bf0;
        }
    }
    ctx->pc = 0x190C24u;
    // 0x190c24: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x190c24u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x190c28: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x190C28u;
    {
        const bool branch_taken_0x190c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190c28) {
            ctx->pc = 0x190DD0u;
            goto label_190dd0;
        }
    }
    ctx->pc = 0x190C30u;
label_190c30:
    // 0x190c30: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x190c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x190c34: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x190c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190c38: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x190c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x190c3c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x190c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190c40: 0x246400a0  addiu       $a0, $v1, 0xA0
    ctx->pc = 0x190c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x190c44: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x190c44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x190c48: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x190c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x190c4c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x190C4Cu;
    SET_GPR_U32(ctx, 31, 0x190C54u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x190C54u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x190C54u) { return; }
    ctx->pc = 0x190C54u;
label_190c54:
    // 0x190c54: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x190c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x190c58: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x190c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190c5c: 0xc44000ac  lwc1        $f0, 0xAC($v0)
    ctx->pc = 0x190c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190c60: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x190c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x190c64: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x190c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190c68: 0xe4400160  swc1        $f0, 0x160($v0)
    ctx->pc = 0x190c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 352), bits); }
    // 0x190c6c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x190c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x190c70: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x190c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190c74: 0xc4410160  lwc1        $f1, 0x160($v0)
    ctx->pc = 0x190c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190c78: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x190c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x190c7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190c7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190c80: 0x0  nop
    ctx->pc = 0x190c80u;
    // NOP
    // 0x190c84: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x190c84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x190c88: 0x0  nop
    ctx->pc = 0x190c88u;
    // NOP
    // 0x190c8c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x190C8Cu;
    {
        const bool branch_taken_0x190c8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x190c8c) {
            ctx->pc = 0x190CB8u;
            goto label_190cb8;
        }
    }
    ctx->pc = 0x190C94u;
    // 0x190c94: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x190c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x190c98: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x190c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190c9c: 0xc4410160  lwc1        $f1, 0x160($v0)
    ctx->pc = 0x190c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190ca0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x190ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x190ca4: 0xc420fd70  lwc1        $f0, -0x290($at)
    ctx->pc = 0x190ca4u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190ca8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x190ca8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x190cac: 0x0  nop
    ctx->pc = 0x190cacu;
    // NOP
    // 0x190cb0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x190CB0u;
    {
        const bool branch_taken_0x190cb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x190cb0) {
            ctx->pc = 0x190CC4u;
            goto label_190cc4;
        }
    }
    ctx->pc = 0x190CB8u;
label_190cb8:
    // 0x190cb8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x190cb8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x190cbc: 0x10000106  b           . + 4 + (0x106 << 2)
    ctx->pc = 0x190CBCu;
    {
        const bool branch_taken_0x190cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190cbc) {
            ctx->pc = 0x1910D8u;
            goto label_1910d8;
        }
    }
    ctx->pc = 0x190CC4u;
label_190cc4:
    // 0x190cc4: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x190cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x190cc8: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x190cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190ccc: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x190cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x190cd0: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x190cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190cd4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x190cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x190cd8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x190cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190cdc: 0x248400a0  addiu       $a0, $a0, 0xA0
    ctx->pc = 0x190cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x190ce0: 0x246500a0  addiu       $a1, $v1, 0xA0
    ctx->pc = 0x190ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x190ce4: 0xc44c0160  lwc1        $f12, 0x160($v0)
    ctx->pc = 0x190ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x190ce8: 0xc040c60  jal         func_103180
    ctx->pc = 0x190CE8u;
    SET_GPR_U32(ctx, 31, 0x190CF0u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x190CF0u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x190CF0u) { return; }
    ctx->pc = 0x190CF0u;
label_190cf0:
    // 0x190cf0: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x190cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x190cf4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x190cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190cf8: 0xc44100a0  lwc1        $f1, 0xA0($v0)
    ctx->pc = 0x190cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190cfc: 0x3c0244c7  lui         $v0, 0x44C7
    ctx->pc = 0x190cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17607 << 16));
    // 0x190d00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190d04: 0x0  nop
    ctx->pc = 0x190d04u;
    // NOP
    // 0x190d08: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x190d08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x190d0c: 0x0  nop
    ctx->pc = 0x190d0cu;
    // NOP
    // 0x190d10: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x190D10u;
    {
        const bool branch_taken_0x190d10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x190d10) {
            ctx->pc = 0x190D48u;
            goto label_190d48;
        }
    }
    ctx->pc = 0x190D18u;
    // 0x190d18: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x190d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x190d1c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x190d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190d20: 0xc44100a0  lwc1        $f1, 0xA0($v0)
    ctx->pc = 0x190d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190d24: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x190d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x190d28: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x190d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x190d2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190d2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190d30: 0x0  nop
    ctx->pc = 0x190d30u;
    // NOP
    // 0x190d34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x190d34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x190d38: 0x0  nop
    ctx->pc = 0x190d38u;
    // NOP
    // 0x190d3c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x190D3Cu;
    {
        const bool branch_taken_0x190d3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x190d3c) {
            ctx->pc = 0x190D54u;
            goto label_190d54;
        }
    }
    ctx->pc = 0x190D44u;
    // 0x190d44: 0x0  nop
    ctx->pc = 0x190d44u;
    // NOP
label_190d48:
    // 0x190d48: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x190d48u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x190d4c: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x190D4Cu;
    {
        const bool branch_taken_0x190d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190d4c) {
            ctx->pc = 0x1910D8u;
            goto label_1910d8;
        }
    }
    ctx->pc = 0x190D54u;
label_190d54:
    // 0x190d54: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x190d54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x190d58: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x190d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190d5c: 0xc44100a4  lwc1        $f1, 0xA4($v0)
    ctx->pc = 0x190d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190d60: 0x3c0244d9  lui         $v0, 0x44D9
    ctx->pc = 0x190d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17625 << 16));
    // 0x190d64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190d64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190d68: 0x0  nop
    ctx->pc = 0x190d68u;
    // NOP
    // 0x190d6c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x190d6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x190d70: 0x0  nop
    ctx->pc = 0x190d70u;
    // NOP
    // 0x190d74: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x190D74u;
    {
        const bool branch_taken_0x190d74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x190d74) {
            ctx->pc = 0x190DA8u;
            goto label_190da8;
        }
    }
    ctx->pc = 0x190D7Cu;
    // 0x190d7c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x190d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x190d80: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x190d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190d84: 0xc44100a4  lwc1        $f1, 0xA4($v0)
    ctx->pc = 0x190d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190d88: 0x3c024513  lui         $v0, 0x4513
    ctx->pc = 0x190d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17683 << 16));
    // 0x190d8c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x190d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x190d90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190d90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190d94: 0x0  nop
    ctx->pc = 0x190d94u;
    // NOP
    // 0x190d98: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x190d98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x190d9c: 0x0  nop
    ctx->pc = 0x190d9cu;
    // NOP
    // 0x190da0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x190DA0u;
    {
        const bool branch_taken_0x190da0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x190da0) {
            ctx->pc = 0x190DB4u;
            goto label_190db4;
        }
    }
    ctx->pc = 0x190DA8u;
label_190da8:
    // 0x190da8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x190da8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x190dac: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x190DACu;
    {
        const bool branch_taken_0x190dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190dac) {
            ctx->pc = 0x1910D8u;
            goto label_1910d8;
        }
    }
    ctx->pc = 0x190DB4u;
label_190db4:
    // 0x190db4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x190db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x190db8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190db8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190dbc: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x190dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x190dc0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x190dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190dc4: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x190dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x190dc8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x190dc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x190dcc: 0x0  nop
    ctx->pc = 0x190dccu;
    // NOP
label_190dd0:
    // 0x190dd0: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x190dd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x190dd4: 0x1440ff96  bnez        $v0, . + 4 + (-0x6A << 2)
    ctx->pc = 0x190DD4u;
    {
        const bool branch_taken_0x190dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190dd4) {
            ctx->pc = 0x190C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190c30;
        }
    }
    ctx->pc = 0x190DDCu;
    // 0x190ddc: 0xc62001c0  lwc1        $f0, 0x1C0($s1)
    ctx->pc = 0x190ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190de0: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x190de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x190de4: 0xc62001c4  lwc1        $f0, 0x1C4($s1)
    ctx->pc = 0x190de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190de8: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x190de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x190dec: 0xc62001c8  lwc1        $f0, 0x1C8($s1)
    ctx->pc = 0x190decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190df0: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x190df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x190df4: 0xc62001cc  lwc1        $f0, 0x1CC($s1)
    ctx->pc = 0x190df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190df8: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x190df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x190dfc: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x190dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190e00: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x190e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x190e04: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x190e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190e08: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x190e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x190e0c: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x190e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190e10: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x190e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x190e14: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x190e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190e18: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x190e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x190e1c: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x190e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x190e20: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x190e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190e24: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x190e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x190e28: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x190e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x190e2c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x190e2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x190e30: 0x0  nop
    ctx->pc = 0x190e30u;
    // NOP
    // 0x190e34: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x190e34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x190e38: 0x4a6203bc  vdiv        $Q, $vf0w, $vf2x
    ctx->pc = 0x190e38u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x190e3c: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x190e3cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x190e40: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x190e40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190e44: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x190e44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190e48: 0x4be5197c  vftoi0.xyzw $vf5, $vf3
    ctx->pc = 0x190e48u;
    { __m128 src = ctx->vu0_vf[3]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x190e4c: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x190e4cu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x190e50: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x190e50u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x190e54: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x190e54u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x190e58: 0x4a0003bf  vwaitq
    ctx->pc = 0x190e58u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x190e5c: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x190e5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x190e60: 0xfa070000  sqc2        $vf7, 0x0($s0)
    ctx->pc = 0x190e60u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x190e64: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x190e64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x190e68: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x190e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x190e6c: 0xc7a00168  lwc1        $f0, 0x168($sp)
    ctx->pc = 0x190e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190e70: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x190e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x190e74: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x190e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x190e78: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x190e78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x190e7c: 0x0  nop
    ctx->pc = 0x190e7cu;
    // NOP
    // 0x190e80: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x190e80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x190e84: 0x4a6203bc  vdiv        $Q, $vf0w, $vf2x
    ctx->pc = 0x190e84u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x190e88: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x190e88u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x190e8c: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x190e8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190e90: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x190e90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190e94: 0x4be5197c  vftoi0.xyzw $vf5, $vf3
    ctx->pc = 0x190e94u;
    { __m128 src = ctx->vu0_vf[3]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x190e98: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x190e98u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x190e9c: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x190e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x190ea0: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x190ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x190ea4: 0x4a0003bf  vwaitq
    ctx->pc = 0x190ea4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x190ea8: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x190ea8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x190eac: 0xfa070000  sqc2        $vf7, 0x0($s0)
    ctx->pc = 0x190eacu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x190eb0: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x190eb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x190eb4: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x190eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x190eb8: 0xc7a0016c  lwc1        $f0, 0x16C($sp)
    ctx->pc = 0x190eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190ebc: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x190ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x190ec0: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x190ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x190ec4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x190ec4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x190ec8: 0x0  nop
    ctx->pc = 0x190ec8u;
    // NOP
    // 0x190ecc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x190eccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x190ed0: 0x4a6203bc  vdiv        $Q, $vf0w, $vf2x
    ctx->pc = 0x190ed0u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x190ed4: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x190ed4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x190ed8: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x190ed8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190edc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x190edcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190ee0: 0x4be5197c  vftoi0.xyzw $vf5, $vf3
    ctx->pc = 0x190ee0u;
    { __m128 src = ctx->vu0_vf[3]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x190ee4: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x190ee4u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x190ee8: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x190ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x190eec: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x190eecu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x190ef0: 0x4a0003bf  vwaitq
    ctx->pc = 0x190ef0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x190ef4: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x190ef4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x190ef8: 0xfa070000  sqc2        $vf7, 0x0($s0)
    ctx->pc = 0x190ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x190efc: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x190efcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x190f00: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x190f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x190f04: 0xc7a00164  lwc1        $f0, 0x164($sp)
    ctx->pc = 0x190f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190f08: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x190f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x190f0c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x190f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x190f10: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x190f10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x190f14: 0x0  nop
    ctx->pc = 0x190f14u;
    // NOP
    // 0x190f18: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x190f18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x190f1c: 0x4a6203bc  vdiv        $Q, $vf0w, $vf2x
    ctx->pc = 0x190f1cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x190f20: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x190f20u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x190f24: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x190f24u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190f28: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x190f28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190f2c: 0x4be5197c  vftoi0.xyzw $vf5, $vf3
    ctx->pc = 0x190f2cu;
    { __m128 src = ctx->vu0_vf[3]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x190f30: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x190f30u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x190f34: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x190f34u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x190f38: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x190f38u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x190f3c: 0x4a0003bf  vwaitq
    ctx->pc = 0x190f3cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x190f40: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x190f40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x190f44: 0xfa070000  sqc2        $vf7, 0x0($s0)
    ctx->pc = 0x190f44u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x190f48: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x190f48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x190f4c: 0x96220118  lhu         $v0, 0x118($s1)
    ctx->pc = 0x190f4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x190f50: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x190f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x190f54: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x190f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x190f58: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x190F58u;
    {
        const bool branch_taken_0x190f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190f58) {
            ctx->pc = 0x190FD8u;
            goto label_190fd8;
        }
    }
    ctx->pc = 0x190F60u;
    // 0x190f60: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x190f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x190f64: 0x8c22a600  lw          $v0, -0x5A00($at)
    ctx->pc = 0x190f64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A600u));
    // 0x190f68: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x190f68u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x190f6c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x190f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x190f70: 0x101082  srl         $v0, $s0, 2
    ctx->pc = 0x190f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x190f74: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x190f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x190f78: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x190f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x190f7c: 0x8c22a600  lw          $v0, -0x5A00($at)
    ctx->pc = 0x190f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A600u));
    // 0x190f80: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x190f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x190f84: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x190f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x190f88: 0x244225fc  addiu       $v0, $v0, 0x25FC
    ctx->pc = 0x190f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9724));
    // 0x190f8c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x190f8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x190f90: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x190F90u;
    {
        const bool branch_taken_0x190f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190f90) {
            ctx->pc = 0x190FA4u;
            goto label_190fa4;
        }
    }
    ctx->pc = 0x190F98u;
    // 0x190f98: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x190f98u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x190f9c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x190F9Cu;
    {
        const bool branch_taken_0x190f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190f9c) {
            ctx->pc = 0x1910D8u;
            goto label_1910d8;
        }
    }
    ctx->pc = 0x190FA4u;
label_190fa4:
    // 0x190fa4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x190fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x190fa8: 0x8c24a600  lw          $a0, -0x5A00($at)
    ctx->pc = 0x190fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A600u));
    // 0x190fac: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x190facu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x190fb0: 0xc06b018  jal         func_1AC060
    ctx->pc = 0x190FB0u;
    SET_GPR_U32(ctx, 31, 0x190FB8u);
    ctx->pc = 0x1AC060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC060u, 0x190FB0u, 0x190FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190FB8u;
label_190fb8:
    // 0x190fb8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x190fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x190fbc: 0x8c22a600  lw          $v0, -0x5A00($at)
    ctx->pc = 0x190fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A600u));
    // 0x190fc0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x190fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x190fc4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x190fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x190fc8: 0xac22a600  sw          $v0, -0x5A00($at)
    ctx->pc = 0x190fc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A600u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A600u, _value); } while (0);
    // 0x190fcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x190fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190fd0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x190FD0u;
    {
        const bool branch_taken_0x190fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190fd0) {
            ctx->pc = 0x1910D8u;
            goto label_1910d8;
        }
    }
    ctx->pc = 0x190FD8u;
label_190fd8:
    // 0x190fd8: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x190fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x190fdc: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x190fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x190fe0: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x190fe0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x190fe4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x190fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x190fe8: 0x101082  srl         $v0, $s0, 2
    ctx->pc = 0x190fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x190fec: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x190fecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x190ff0: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x190ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x190ff4: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x190ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x190ff8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x190ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x190ffc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x190ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x191000: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x191000u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x191004: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x191004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x191008: 0x21c80  sll         $v1, $v0, 18
    ctx->pc = 0x191008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 18));
    // 0x19100c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x19100cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x191010: 0x24422580  addiu       $v0, $v0, 0x2580
    ctx->pc = 0x191010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9600));
    // 0x191014: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191018: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x191018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
    // 0x19101c: 0x3421fffc  ori         $at, $at, 0xFFFC
    ctx->pc = 0x19101cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65532);
    // 0x191020: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x191020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x191024: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x191024u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x191028: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x191028u;
    {
        const bool branch_taken_0x191028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191028) {
            ctx->pc = 0x19103Cu;
            goto label_19103c;
        }
    }
    ctx->pc = 0x191030u;
    // 0x191030: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x191030u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x191034: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x191034u;
    {
        const bool branch_taken_0x191034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191034) {
            ctx->pc = 0x1910D8u;
            goto label_1910d8;
        }
    }
    ctx->pc = 0x19103Cu;
label_19103c:
    // 0x19103c: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x19103cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x191040: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x191040u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x191044: 0x2603fff0  addiu       $v1, $s0, -0x10
    ctx->pc = 0x191044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x191048: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x191048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x19104c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x19104cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x191050: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x191050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x191054: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x191054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x191058: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x191058u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x19105c: 0x96220118  lhu         $v0, 0x118($s1)
    ctx->pc = 0x19105cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x191060: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x191060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x191064: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x191064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x191068: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x191068u;
    {
        const bool branch_taken_0x191068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191068) {
            ctx->pc = 0x19109Cu;
            goto label_19109c;
        }
    }
    ctx->pc = 0x191070u;
    // 0x191070: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x191070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x191074: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x191074u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x191078: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x191078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19107c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x19107cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x191080: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x191080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x191084: 0x8c242580  lw          $a0, 0x2580($at)
    ctx->pc = 0x191084u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x532580u));
    // 0x191088: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x191088u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x19108c: 0xc06af4c  jal         func_1ABD30
    ctx->pc = 0x19108Cu;
    SET_GPR_U32(ctx, 31, 0x191094u);
    ctx->pc = 0x1ABD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABD30u, 0x19108Cu, 0x191094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191094u;
label_191094:
    // 0x191094: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x191094u;
    {
        const bool branch_taken_0x191094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191094) {
            ctx->pc = 0x1910C0u;
            goto label_1910c0;
        }
    }
    ctx->pc = 0x19109Cu;
label_19109c:
    // 0x19109c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19109cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1910a0: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1910a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1910a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1910a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1910a8: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1910a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1910ac: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1910acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x1910b0: 0x8c242580  lw          $a0, 0x2580($at)
    ctx->pc = 0x1910b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x532580u));
    // 0x1910b4: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x1910b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1910b8: 0xc06af20  jal         func_1ABC80
    ctx->pc = 0x1910B8u;
    SET_GPR_U32(ctx, 31, 0x1910C0u);
    ctx->pc = 0x1ABC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABC80u, 0x1910B8u, 0x1910C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1910C0u;
label_1910c0:
    // 0x1910c0: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1910c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x1910c4: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x1910c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x1910c8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1910c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1910cc: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1910ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x1910d0: 0xac222580  sw          $v0, 0x2580($at)
    ctx->pc = 0x1910d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x532580u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x532580u, _value); } while (0);
    // 0x1910d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1910d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1910d8:
    // 0x1910d8: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x1910d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1910dc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1910dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1910e0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1910e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1910e4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1910e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1910e8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1910e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1910ec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1910ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1910f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1910f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1910f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1910f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1910f8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1910f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1910fc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1910fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x191100: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x191100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x191104: 0x3e00008  jr          $ra
    ctx->pc = 0x191104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19110Cu;
}
