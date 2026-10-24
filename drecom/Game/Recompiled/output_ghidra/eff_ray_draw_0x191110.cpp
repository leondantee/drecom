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

// Function: eff_ray_draw
// Address: 0x191110 - 0x191aec
void eff_ray_draw_0x191110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eff_ray_draw_0x191110");
#endif

    switch (ctx->pc) {
        case 0x1911f4u: goto label_1911f4;
        case 0x19121cu: goto label_19121c;
        case 0x19124cu: goto label_19124c;
        case 0x191484u: goto label_191484;
        case 0x1915a8u: goto label_1915a8;
        case 0x1915b4u: goto label_1915b4;
        case 0x1915c0u: goto label_1915c0;
        case 0x1915ccu: goto label_1915cc;
        case 0x1916d8u: goto label_1916d8;
        case 0x1916ecu: goto label_1916ec;
        case 0x1916fcu: goto label_1916fc;
        case 0x191708u: goto label_191708;
        case 0x19172cu: goto label_19172c;
        case 0x191748u: goto label_191748;
        case 0x19176cu: goto label_19176c;
        case 0x1917b0u: goto label_1917b0;
        case 0x191998u: goto label_191998;
        case 0x191a74u: goto label_191a74;
        case 0x191aa0u: goto label_191aa0;
        default: break;
    }

    ctx->pc = 0x191110u;

    // 0x191110: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x191110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x191114: 0x7fbf0080  sq          $ra, 0x80($sp)
    ctx->pc = 0x191114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
    // 0x191118: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x191118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x19111c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x19111cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x191120: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x191120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x191124: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x191124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x191128: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x191128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x19112c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x19112cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x191130: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x191130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x191134: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x191134u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x191138: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x191138u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19113c: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x19113cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x191140: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x191140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x191144: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x191144u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x191148: 0x24440160  addiu       $a0, $v0, 0x160
    ctx->pc = 0x191148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
    // 0x19114c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19114cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x191150: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x191150u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x191154: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x191154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x191158: 0x21c80  sll         $v1, $v0, 18
    ctx->pc = 0x191158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 18));
    // 0x19115c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x19115cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x191160: 0x24422580  addiu       $v0, $v0, 0x2580
    ctx->pc = 0x191160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9600));
    // 0x191164: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191168: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x191168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
    // 0x19116c: 0x3421fffc  ori         $at, $at, 0xFFFC
    ctx->pc = 0x19116cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65532);
    // 0x191170: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x191170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x191174: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x191174u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x191178: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x191178u;
    {
        const bool branch_taken_0x191178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191178) {
            ctx->pc = 0x19118Cu;
            goto label_19118c;
        }
    }
    ctx->pc = 0x191180u;
    // 0x191180: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x191180u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x191184: 0x1000024c  b           . + 4 + (0x24C << 2)
    ctx->pc = 0x191184u;
    {
        const bool branch_taken_0x191184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191184) {
            ctx->pc = 0x191AB8u;
            goto label_191ab8;
        }
    }
    ctx->pc = 0x19118Cu;
label_19118c:
    // 0x19118c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19118cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x191190: 0x8c320af0  lw          $s2, 0xAF0($at)
    ctx->pc = 0x191190u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x191194: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x191194u;
    {
        const bool branch_taken_0x191194 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x191194) {
            ctx->pc = 0x1911ACu;
            goto label_1911ac;
        }
    }
    ctx->pc = 0x19119Cu;
    // 0x19119c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x19119cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1911a0: 0x2455df50  addiu       $s5, $v0, -0x20B0
    ctx->pc = 0x1911a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958928));
    // 0x1911a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1911A4u;
    {
        const bool branch_taken_0x1911a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1911a4) {
            ctx->pc = 0x1911B4u;
            goto label_1911b4;
        }
    }
    ctx->pc = 0x1911ACu;
label_1911ac:
    // 0x1911ac: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1911acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1911b0: 0x2455e550  addiu       $s5, $v0, -0x1AB0
    ctx->pc = 0x1911b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
label_1911b4:
    // 0x1911b4: 0x8e2201fc  lw          $v0, 0x1FC($s1)
    ctx->pc = 0x1911b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 508)));
    // 0x1911b8: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x1911b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x1911bc: 0x8c560010  lw          $s6, 0x10($v0)
    ctx->pc = 0x1911bcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1911c0: 0x92220210  lbu         $v0, 0x210($s1)
    ctx->pc = 0x1911c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x1911c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1911c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1911c8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1911c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1911cc: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x1911ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1911d0: 0x262200b0  addiu       $v0, $s1, 0xB0
    ctx->pc = 0x1911d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x1911d4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1911d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1911d8: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1911d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1911dc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1911dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1911e0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1911e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1911e4: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x1911e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1911e8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1911e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1911ec: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1911ECu;
    SET_GPR_U32(ctx, 31, 0x1911F4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1911F4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1911F4u) { return; }
    ctx->pc = 0x1911F4u;
label_1911f4:
    // 0x1911f4: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x1911f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1911f8: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x1911f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x1911fc: 0x96220118  lhu         $v0, 0x118($s1)
    ctx->pc = 0x1911fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x191200: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x191200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x191204: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x191204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x191208: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x191208u;
    {
        const bool branch_taken_0x191208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191208) {
            ctx->pc = 0x191240u;
            goto label_191240;
        }
    }
    ctx->pc = 0x191210u;
    // 0x191210: 0xc7ac009c  lwc1        $f12, 0x9C($sp)
    ctx->pc = 0x191210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x191214: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x191214u;
    SET_GPR_U32(ctx, 31, 0x19121Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x191214u, 0x19121Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19121Cu;
label_19121c:
    // 0x19121c: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x19121cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x191220: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x191220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x191224: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x191224u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x191228: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x191228u;
    {
        const bool branch_taken_0x191228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191228) {
            ctx->pc = 0x191234u;
            goto label_191234;
        }
    }
    ctx->pc = 0x191230u;
    // 0x191230: 0x3413ffff  ori         $s3, $zero, 0xFFFF
    ctx->pc = 0x191230u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_191234:
    // 0x191234: 0x139a02  srl         $s3, $s3, 8
    ctx->pc = 0x191234u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), 8));
    // 0x191238: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x191238u;
    {
        const bool branch_taken_0x191238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191238) {
            ctx->pc = 0x191268u;
            goto label_191268;
        }
    }
    ctx->pc = 0x191240u;
label_191240:
    // 0x191240: 0xc7ac009c  lwc1        $f12, 0x9C($sp)
    ctx->pc = 0x191240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x191244: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x191244u;
    SET_GPR_U32(ctx, 31, 0x19124Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x191244u, 0x19124Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19124Cu;
label_19124c:
    // 0x19124c: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x19124cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x191250: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x191250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x191254: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x191254u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x191258: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x191258u;
    {
        const bool branch_taken_0x191258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191258) {
            ctx->pc = 0x191264u;
            goto label_191264;
        }
    }
    ctx->pc = 0x191260u;
    // 0x191260: 0x3413ffff  ori         $s3, $zero, 0xFFFF
    ctx->pc = 0x191260u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_191264:
    // 0x191264: 0x139982  srl         $s3, $s3, 6
    ctx->pc = 0x191264u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
label_191268:
    // 0x191268: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x191268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x19126c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19126cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x191270: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x191270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191274: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x191274u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191278: 0x0  nop
    ctx->pc = 0x191278u;
    // NOP
    // 0x19127c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x19127Cu;
    {
        const bool branch_taken_0x19127c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19127c) {
            ctx->pc = 0x1912A0u;
            goto label_1912a0;
        }
    }
    ctx->pc = 0x191284u;
    // 0x191284: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x191284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x191288: 0xc421fd70  lwc1        $f1, -0x290($at)
    ctx->pc = 0x191288u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19128c: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x19128cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191290: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x191290u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191294: 0x0  nop
    ctx->pc = 0x191294u;
    // NOP
    // 0x191298: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x191298u;
    {
        const bool branch_taken_0x191298 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x191298) {
            ctx->pc = 0x1912ACu;
            goto label_1912ac;
        }
    }
    ctx->pc = 0x1912A0u;
label_1912a0:
    // 0x1912a0: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1912a0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1912a4: 0x10000204  b           . + 4 + (0x204 << 2)
    ctx->pc = 0x1912A4u;
    {
        const bool branch_taken_0x1912a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1912a4) {
            ctx->pc = 0x191AB8u;
            goto label_191ab8;
        }
    }
    ctx->pc = 0x1912ACu;
label_1912ac:
    // 0x1912ac: 0x96220118  lhu         $v0, 0x118($s1)
    ctx->pc = 0x1912acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x1912b0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1912b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1912b4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1912b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1912b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1912B8u;
    {
        const bool branch_taken_0x1912b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1912b8) {
            ctx->pc = 0x1912D0u;
            goto label_1912d0;
        }
    }
    ctx->pc = 0x1912C0u;
    // 0x1912c0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1912c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1912c4: 0x8c30a600  lw          $s0, -0x5A00($at)
    ctx->pc = 0x1912c4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A600u));
    // 0x1912c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1912C8u;
    {
        const bool branch_taken_0x1912c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1912c8) {
            ctx->pc = 0x1912DCu;
            goto label_1912dc;
        }
    }
    ctx->pc = 0x1912D0u;
label_1912d0:
    // 0x1912d0: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1912d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x1912d4: 0x8c302580  lw          $s0, 0x2580($at)
    ctx->pc = 0x1912d4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x532580u));
    // 0x1912d8: 0x0  nop
    ctx->pc = 0x1912d8u;
    // NOP
label_1912dc:
    // 0x1912dc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1912dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1912e0: 0x34430015  ori         $v1, $v0, 0x15
    ctx->pc = 0x1912e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21);
    // 0x1912e4: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x1912e4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1912e8: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x1912e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1912ec: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1912ecu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1912f0: 0x7200a628  paddub      $s4, $s0, $zero
    ctx->pc = 0x1912f0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1912f4: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x1912f4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1912f8: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x1912f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1912fc: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x1912fcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x191300: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x191300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x191304: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x191304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x191308: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x191308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19130c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x19130cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x191310: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x191310u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x191314: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x191314u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x191318: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x191318u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x19131c: 0x3c020eee  lui         $v0, 0xEEE
    ctx->pc = 0x19131cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3822 << 16));
    // 0x191320: 0x3443eeee  ori         $v1, $v0, 0xEEEE
    ctx->pc = 0x191320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61166);
    // 0x191324: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x191324u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x191328: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x191328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x19132c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x19132cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x191330: 0xde2301d0  ld          $v1, 0x1D0($s1)
    ctx->pc = 0x191330u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 464)));
    // 0x191334: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x191334u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x191338: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x191338u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x19133c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x19133cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x191340: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x191340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x191344: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x191344u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x191348: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x191348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x19134c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x19134cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x191350: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x191350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191354: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x191354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x191358: 0x3c020a00  lui         $v0, 0xA00
    ctx->pc = 0x191358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2560 << 16));
    // 0x19135c: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x19135cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x191360: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x191360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x191364: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x191364u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x191368: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x191368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x19136c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x19136cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x191370: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x191370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x191374: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x191374u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x191378: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x191378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x19137c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x19137cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x191380: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x191380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x191384: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x191384u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x191388: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x191388u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x19138c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x19138cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x191390: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x191390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x191394: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x191394u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x191398: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x191398u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x19139c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x19139cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1913a0: 0xde2301e8  ld          $v1, 0x1E8($s1)
    ctx->pc = 0x1913a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 488)));
    // 0x1913a4: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x1913a4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1913a8: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x1913a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1913ac: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1913acu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1913b0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1913b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1913b4: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x1913b4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1913b8: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x1913b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1913bc: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1913bcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1913c0: 0xde2301e0  ld          $v1, 0x1E0($s1)
    ctx->pc = 0x1913c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 480)));
    // 0x1913c4: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x1913c4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1913c8: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x1913c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1913cc: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1913ccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1913d0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1913d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1913d4: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x1913d4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1913d8: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x1913d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1913dc: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1913dcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1913e0: 0xde2301d8  ld          $v1, 0x1D8($s1)
    ctx->pc = 0x1913e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 472)));
    // 0x1913e4: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x1913e4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1913e8: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x1913e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1913ec: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1913ecu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1913f0: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x1913f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1913f4: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x1913f4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1913f8: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x1913f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1913fc: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1913fcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x191400: 0xde2301f0  ld          $v1, 0x1F0($s1)
    ctx->pc = 0x191400u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 496)));
    // 0x191404: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x191404u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x191408: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x191408u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x19140c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x19140cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x191410: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x191410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x191414: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x191414u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x191418: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x191418u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x19141c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x19141cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x191420: 0x3c02c02a  lui         $v0, 0xC02A
    ctx->pc = 0x191420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49194 << 16));
    // 0x191424: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x191424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x191428: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x191428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x19142c: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x19142cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x191430: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x191430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x191434: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x191434u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x191438: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x191438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x19143c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x19143cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x191440: 0x24024124  addiu       $v0, $zero, 0x4124
    ctx->pc = 0x191440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16676));
    // 0x191444: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x191444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x191448: 0x3c021241  lui         $v0, 0x1241
    ctx->pc = 0x191448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4673 << 16));
    // 0x19144c: 0x34422412  ori         $v0, $v0, 0x2412
    ctx->pc = 0x19144cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9234);
    // 0x191450: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x191450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x191454: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x191454u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x191458: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x191458u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x19145c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x19145cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x191460: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x191460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191464: 0xc64001b4  lwc1        $f0, 0x1B4($s2)
    ctx->pc = 0x191464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191468: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x191468u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19146c: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x19146cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x191470: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x191470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x191474: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x191474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x191478: 0xc7ac0160  lwc1        $f12, 0x160($sp)
    ctx->pc = 0x191478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19147c: 0xc040c60  jal         func_103180
    ctx->pc = 0x19147Cu;
    SET_GPR_U32(ctx, 31, 0x191484u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x191484u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x191484u) { return; }
    ctx->pc = 0x191484u;
label_191484:
    // 0x191484: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x191484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191488: 0x3c0244c7  lui         $v0, 0x44C7
    ctx->pc = 0x191488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17607 << 16));
    // 0x19148c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19148cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191490: 0x0  nop
    ctx->pc = 0x191490u;
    // NOP
    // 0x191494: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x191494u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191498: 0x0  nop
    ctx->pc = 0x191498u;
    // NOP
    // 0x19149c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x19149Cu;
    {
        const bool branch_taken_0x19149c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19149c) {
            ctx->pc = 0x1914C8u;
            goto label_1914c8;
        }
    }
    ctx->pc = 0x1914A4u;
    // 0x1914a4: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x1914a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1914a8: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x1914a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x1914ac: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1914acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1914b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1914b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1914b4: 0x0  nop
    ctx->pc = 0x1914b4u;
    // NOP
    // 0x1914b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1914b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1914bc: 0x0  nop
    ctx->pc = 0x1914bcu;
    // NOP
    // 0x1914c0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1914C0u;
    {
        const bool branch_taken_0x1914c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1914c0) {
            ctx->pc = 0x1914D4u;
            goto label_1914d4;
        }
    }
    ctx->pc = 0x1914C8u;
label_1914c8:
    // 0x1914c8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1914c8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1914cc: 0x1000017a  b           . + 4 + (0x17A << 2)
    ctx->pc = 0x1914CCu;
    {
        const bool branch_taken_0x1914cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1914cc) {
            ctx->pc = 0x191AB8u;
            goto label_191ab8;
        }
    }
    ctx->pc = 0x1914D4u;
label_1914d4:
    // 0x1914d4: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x1914d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1914d8: 0x3c0244d9  lui         $v0, 0x44D9
    ctx->pc = 0x1914d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17625 << 16));
    // 0x1914dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1914dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1914e0: 0x0  nop
    ctx->pc = 0x1914e0u;
    // NOP
    // 0x1914e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1914e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1914e8: 0x0  nop
    ctx->pc = 0x1914e8u;
    // NOP
    // 0x1914ec: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1914ECu;
    {
        const bool branch_taken_0x1914ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1914ec) {
            ctx->pc = 0x191518u;
            goto label_191518;
        }
    }
    ctx->pc = 0x1914F4u;
    // 0x1914f4: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x1914f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1914f8: 0x3c024513  lui         $v0, 0x4513
    ctx->pc = 0x1914f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17683 << 16));
    // 0x1914fc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1914fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x191500: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191504: 0x0  nop
    ctx->pc = 0x191504u;
    // NOP
    // 0x191508: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x191508u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19150c: 0x0  nop
    ctx->pc = 0x19150cu;
    // NOP
    // 0x191510: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x191510u;
    {
        const bool branch_taken_0x191510 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x191510) {
            ctx->pc = 0x191524u;
            goto label_191524;
        }
    }
    ctx->pc = 0x191518u;
label_191518:
    // 0x191518: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x191518u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19151c: 0x10000166  b           . + 4 + (0x166 << 2)
    ctx->pc = 0x19151Cu;
    {
        const bool branch_taken_0x19151c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19151c) {
            ctx->pc = 0x191AB8u;
            goto label_191ab8;
        }
    }
    ctx->pc = 0x191524u;
label_191524:
    // 0x191524: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x191524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x191528: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19152c: 0x0  nop
    ctx->pc = 0x19152cu;
    // NOP
    // 0x191530: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x191530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x191534: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x191534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x191538: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19153c: 0x0  nop
    ctx->pc = 0x19153cu;
    // NOP
    // 0x191540: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x191540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x191544: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x191544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x191548: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19154c: 0x0  nop
    ctx->pc = 0x19154cu;
    // NOP
    // 0x191550: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x191550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x191554: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x191554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x191558: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19155c: 0x0  nop
    ctx->pc = 0x19155cu;
    // NOP
    // 0x191560: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x191560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x191564: 0xc62100f0  lwc1        $f1, 0xF0($s1)
    ctx->pc = 0x191564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191568: 0xc6200108  lwc1        $f0, 0x108($s1)
    ctx->pc = 0x191568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19156c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x19156cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x191570: 0xc6c00014  lwc1        $f0, 0x14($s6)
    ctx->pc = 0x191570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191574: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x191574u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x191578: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x191578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19157c: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x19157cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x191580: 0xc62100f0  lwc1        $f1, 0xF0($s1)
    ctx->pc = 0x191580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191584: 0xc620010c  lwc1        $f0, 0x10C($s1)
    ctx->pc = 0x191584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191588: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x191588u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19158c: 0xc6c00010  lwc1        $f0, 0x10($s6)
    ctx->pc = 0x19158cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191590: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x191590u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x191594: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x191594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191598: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x191598u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x19159c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x19159cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1915a0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1915A0u;
    SET_GPR_U32(ctx, 31, 0x1915A8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1915A0u, 0x1915A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1915A8u;
label_1915a8:
    // 0x1915a8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1915a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1915ac: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1915ACu;
    SET_GPR_U32(ctx, 31, 0x1915B4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1915ACu, 0x1915B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1915B4u;
label_1915b4:
    // 0x1915b4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1915b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1915b8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1915B8u;
    SET_GPR_U32(ctx, 31, 0x1915C0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1915B8u, 0x1915C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1915C0u;
label_1915c0:
    // 0x1915c0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1915c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1915c4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1915C4u;
    SET_GPR_U32(ctx, 31, 0x1915CCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1915C4u, 0x1915CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1915CCu;
label_1915cc:
    // 0x1915cc: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x1915ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x1915d0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1915d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1915d4: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x1915d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1915d8: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1915d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1915dc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1915dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1915e0: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1915e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1915e4: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x1915e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x1915e8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1915e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1915ec: 0x4600a842  mul.s       $f1, $f21, $f0
    ctx->pc = 0x1915ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1915f0: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1915f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1915f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1915f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1915f8: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1915f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1915fc: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x1915fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x191600: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x191600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191604: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x191604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x191608: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19160c: 0x0  nop
    ctx->pc = 0x19160cu;
    // NOP
    // 0x191610: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x191610u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x191614: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x191614u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x191618: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x191618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19161c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19161cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x191620: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x191620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x191624: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x191624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x191628: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x191628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19162c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x19162cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x191630: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191634: 0x0  nop
    ctx->pc = 0x191634u;
    // NOP
    // 0x191638: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x191638u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x19163c: 0x4600a842  mul.s       $f1, $f21, $f0
    ctx->pc = 0x19163cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x191640: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x191640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191644: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x191644u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x191648: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x191648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x19164c: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x19164cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x191650: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x191650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191654: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x191654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x191658: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19165c: 0x0  nop
    ctx->pc = 0x19165cu;
    // NOP
    // 0x191660: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x191660u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x191664: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x191664u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x191668: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x191668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19166c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19166cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x191670: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x191670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x191674: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x191674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x191678: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x191678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19167c: 0x4600a842  mul.s       $f1, $f21, $f0
    ctx->pc = 0x19167cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x191680: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x191680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191684: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x191684u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x191688: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x191688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x19168c: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x19168cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x191690: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x191690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191694: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x191694u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x191698: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x191698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19169c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x19169cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1916a0: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1916a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1916a4: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x1916a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x1916a8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1916a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1916ac: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1916acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1916b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1916b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1916b4: 0x0  nop
    ctx->pc = 0x1916b4u;
    // NOP
    // 0x1916b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1916b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1916bc: 0x4600a842  mul.s       $f1, $f21, $f0
    ctx->pc = 0x1916bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1916c0: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x1916c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1916c4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1916c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1916c8: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1916c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1916cc: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1916ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1916d0: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1916D0u;
    SET_GPR_U32(ctx, 31, 0x1916D8u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1916D8u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1916D8u) { return; }
    ctx->pc = 0x1916D8u;
label_1916d8:
    // 0x1916d8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1916d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1916dc: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1916dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1916e0: 0x26260040  addiu       $a2, $s1, 0x40
    ctx->pc = 0x1916e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1916e4: 0xc040d62  jal         func_103588
    ctx->pc = 0x1916E4u;
    SET_GPR_U32(ctx, 31, 0x1916ECu);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x1916ECu;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1916ECu) { return; }
    ctx->pc = 0x1916ECu;
label_1916ec:
    // 0x1916ec: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1916ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1916f0: 0x262500b0  addiu       $a1, $s1, 0xB0
    ctx->pc = 0x1916f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x1916f4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1916F4u;
    SET_GPR_U32(ctx, 31, 0x1916FCu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1916FCu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1916FCu) { return; }
    ctx->pc = 0x1916FCu;
label_1916fc:
    // 0x1916fc: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1916fcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x191700: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x191700u;
    {
        const bool branch_taken_0x191700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191700) {
            ctx->pc = 0x191730u;
            goto label_191730;
        }
    }
    ctx->pc = 0x191708u;
label_191708:
    // 0x191708: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x191708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x19170c: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x19170cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x191710: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x191710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x191714: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x191714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x191718: 0x246400a0  addiu       $a0, $v1, 0xA0
    ctx->pc = 0x191718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x19171c: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x19171cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x191720: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x191720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x191724: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x191724u;
    SET_GPR_U32(ctx, 31, 0x19172Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x19172Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19172Cu) { return; }
    ctx->pc = 0x19172Cu;
label_19172c:
    // 0x19172c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19172cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_191730:
    // 0x191730: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x191730u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x191734: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x191734u;
    {
        const bool branch_taken_0x191734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191734) {
            ctx->pc = 0x191708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_191708;
        }
    }
    ctx->pc = 0x19173Cu;
    // 0x19173c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x19173cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x191740: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x191740u;
    {
        const bool branch_taken_0x191740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191740) {
            ctx->pc = 0x1917C8u;
            goto label_1917c8;
        }
    }
    ctx->pc = 0x191748u;
label_191748:
    // 0x191748: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x191748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x19174c: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x19174cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x191750: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x191750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x191754: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x191754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x191758: 0x246400a0  addiu       $a0, $v1, 0xA0
    ctx->pc = 0x191758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x19175c: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x19175cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x191760: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x191760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x191764: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x191764u;
    SET_GPR_U32(ctx, 31, 0x19176Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x19176Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19176Cu) { return; }
    ctx->pc = 0x19176Cu;
label_19176c:
    // 0x19176c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19176cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x191770: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x191770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x191774: 0xc44000ac  lwc1        $f0, 0xAC($v0)
    ctx->pc = 0x191774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191778: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x191778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x19177c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x19177cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x191780: 0xe4400160  swc1        $f0, 0x160($v0)
    ctx->pc = 0x191780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 352), bits); }
    // 0x191784: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x191784u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x191788: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x191788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x19178c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19178cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x191790: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x191790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x191794: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x191794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x191798: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x191798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x19179c: 0x248400a0  addiu       $a0, $a0, 0xA0
    ctx->pc = 0x19179cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x1917a0: 0x246500a0  addiu       $a1, $v1, 0xA0
    ctx->pc = 0x1917a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x1917a4: 0xc44c0160  lwc1        $f12, 0x160($v0)
    ctx->pc = 0x1917a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1917a8: 0xc040c60  jal         func_103180
    ctx->pc = 0x1917A8u;
    SET_GPR_U32(ctx, 31, 0x1917B0u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x1917B0u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1917B0u) { return; }
    ctx->pc = 0x1917B0u;
label_1917b0:
    // 0x1917b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1917b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1917b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1917b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1917b8: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1917b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1917bc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1917bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1917c0: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x1917c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x1917c4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1917c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1917c8:
    // 0x1917c8: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x1917c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1917cc: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1917CCu;
    {
        const bool branch_taken_0x1917cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1917cc) {
            ctx->pc = 0x191748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_191748;
        }
    }
    ctx->pc = 0x1917D4u;
    // 0x1917d4: 0xc62001c0  lwc1        $f0, 0x1C0($s1)
    ctx->pc = 0x1917d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1917d8: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1917d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1917dc: 0xc62001c4  lwc1        $f0, 0x1C4($s1)
    ctx->pc = 0x1917dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1917e0: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x1917e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x1917e4: 0xc62001c8  lwc1        $f0, 0x1C8($s1)
    ctx->pc = 0x1917e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1917e8: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x1917e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1917ec: 0xc62001cc  lwc1        $f0, 0x1CC($s1)
    ctx->pc = 0x1917ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1917f0: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x1917f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x1917f4: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x1917f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1917f8: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1917f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1917fc: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x1917fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191800: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x191800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x191804: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x191804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191808: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x191808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x19180c: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x19180cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191810: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x191810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x191814: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x191814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x191818: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x191818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19181c: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x19181cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x191820: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x191820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x191824: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x191824u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x191828: 0x0  nop
    ctx->pc = 0x191828u;
    // NOP
    // 0x19182c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x19182cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x191830: 0x4a6203bc  vdiv        $Q, $vf0w, $vf2x
    ctx->pc = 0x191830u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x191834: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x191834u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x191838: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x191838u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19183c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x19183cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x191840: 0x4be5197c  vftoi0.xyzw $vf5, $vf3
    ctx->pc = 0x191840u;
    { __m128 src = ctx->vu0_vf[3]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x191844: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x191844u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x191848: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x191848u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19184c: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x19184cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x191850: 0x4a0003bf  vwaitq
    ctx->pc = 0x191850u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x191854: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x191854u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x191858: 0xfa070000  sqc2        $vf7, 0x0($s0)
    ctx->pc = 0x191858u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x19185c: 0xfa050040  sqc2        $vf5, 0x40($s0)
    ctx->pc = 0x19185cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x191860: 0xfa050070  sqc2        $vf5, 0x70($s0)
    ctx->pc = 0x191860u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x191864: 0xfa0500a0  sqc2        $vf5, 0xA0($s0)
    ctx->pc = 0x191864u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x191868: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x191868u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x19186c: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x19186cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x191870: 0xc7a00168  lwc1        $f0, 0x168($sp)
    ctx->pc = 0x191870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191874: 0x26230090  addiu       $v1, $s1, 0x90
    ctx->pc = 0x191874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x191878: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x191878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x19187c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x19187cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x191880: 0x0  nop
    ctx->pc = 0x191880u;
    // NOP
    // 0x191884: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x191884u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x191888: 0x4a6203bc  vdiv        $Q, $vf0w, $vf2x
    ctx->pc = 0x191888u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x19188c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x19188cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x191890: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x191890u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x191894: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x191894u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x191898: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x191898u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x19189c: 0x4a0003bf  vwaitq
    ctx->pc = 0x19189cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1918a0: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x1918a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1918a4: 0xfa070000  sqc2        $vf7, 0x0($s0)
    ctx->pc = 0x1918a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1918a8: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x1918a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1918ac: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x1918acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1918b0: 0xc7a0016c  lwc1        $f0, 0x16C($sp)
    ctx->pc = 0x1918b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1918b4: 0x26230090  addiu       $v1, $s1, 0x90
    ctx->pc = 0x1918b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x1918b8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1918b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1918bc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1918bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1918c0: 0x0  nop
    ctx->pc = 0x1918c0u;
    // NOP
    // 0x1918c4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1918c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1918c8: 0x4a6203bc  vdiv        $Q, $vf0w, $vf2x
    ctx->pc = 0x1918c8u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1918cc: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1918ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1918d0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1918d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1918d4: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x1918d4u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1918d8: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x1918d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1918dc: 0x4a0003bf  vwaitq
    ctx->pc = 0x1918dcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1918e0: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x1918e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1918e4: 0xfa070000  sqc2        $vf7, 0x0($s0)
    ctx->pc = 0x1918e4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1918e8: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x1918e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1918ec: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x1918ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1918f0: 0xc7a00164  lwc1        $f0, 0x164($sp)
    ctx->pc = 0x1918f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1918f4: 0x26230090  addiu       $v1, $s1, 0x90
    ctx->pc = 0x1918f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x1918f8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1918f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1918fc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1918fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x191900: 0x0  nop
    ctx->pc = 0x191900u;
    // NOP
    // 0x191904: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x191904u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x191908: 0x4a6203bc  vdiv        $Q, $vf0w, $vf2x
    ctx->pc = 0x191908u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x19190c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x19190cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x191910: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x191910u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x191914: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x191914u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x191918: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x191918u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x19191c: 0x4a0003bf  vwaitq
    ctx->pc = 0x19191cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x191920: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x191920u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x191924: 0xfa070000  sqc2        $vf7, 0x0($s0)
    ctx->pc = 0x191924u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x191928: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x191928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x19192c: 0x96220118  lhu         $v0, 0x118($s1)
    ctx->pc = 0x19192cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x191930: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x191930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x191934: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x191934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x191938: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x191938u;
    {
        const bool branch_taken_0x191938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191938) {
            ctx->pc = 0x1919B8u;
            goto label_1919b8;
        }
    }
    ctx->pc = 0x191940u;
    // 0x191940: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x191940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x191944: 0x8c22a600  lw          $v0, -0x5A00($at)
    ctx->pc = 0x191944u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A600u));
    // 0x191948: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x191948u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x19194c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x19194cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x191950: 0x101082  srl         $v0, $s0, 2
    ctx->pc = 0x191950u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x191954: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x191954u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x191958: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x191958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x19195c: 0x8c22a600  lw          $v0, -0x5A00($at)
    ctx->pc = 0x19195cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A600u));
    // 0x191960: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x191960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191964: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x191964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x191968: 0x244225fc  addiu       $v0, $v0, 0x25FC
    ctx->pc = 0x191968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9724));
    // 0x19196c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x19196cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x191970: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x191970u;
    {
        const bool branch_taken_0x191970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191970) {
            ctx->pc = 0x191984u;
            goto label_191984;
        }
    }
    ctx->pc = 0x191978u;
    // 0x191978: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x191978u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19197c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x19197Cu;
    {
        const bool branch_taken_0x19197c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19197c) {
            ctx->pc = 0x191AB8u;
            goto label_191ab8;
        }
    }
    ctx->pc = 0x191984u;
label_191984:
    // 0x191984: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x191984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x191988: 0x8c24a600  lw          $a0, -0x5A00($at)
    ctx->pc = 0x191988u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A600u));
    // 0x19198c: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x19198cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x191990: 0xc06b018  jal         func_1AC060
    ctx->pc = 0x191990u;
    SET_GPR_U32(ctx, 31, 0x191998u);
    ctx->pc = 0x1AC060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC060u, 0x191990u, 0x191998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191998u;
label_191998:
    // 0x191998: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x191998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x19199c: 0x8c22a600  lw          $v0, -0x5A00($at)
    ctx->pc = 0x19199cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A600u));
    // 0x1919a0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1919a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1919a4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1919a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1919a8: 0xac22a600  sw          $v0, -0x5A00($at)
    ctx->pc = 0x1919a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A600u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A600u, _value); } while (0);
    // 0x1919ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1919acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1919b0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1919B0u;
    {
        const bool branch_taken_0x1919b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1919b0) {
            ctx->pc = 0x191AB8u;
            goto label_191ab8;
        }
    }
    ctx->pc = 0x1919B8u;
label_1919b8:
    // 0x1919b8: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1919b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x1919bc: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x1919bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x1919c0: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x1919c0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1919c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1919c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1919c8: 0x101082  srl         $v0, $s0, 2
    ctx->pc = 0x1919c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x1919cc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1919ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1919d0: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1919d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x1919d4: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x1919d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x1919d8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1919d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1919dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1919dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1919e0: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1919e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1919e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1919e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1919e8: 0x21c80  sll         $v1, $v0, 18
    ctx->pc = 0x1919e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 18));
    // 0x1919ec: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1919ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x1919f0: 0x24422580  addiu       $v0, $v0, 0x2580
    ctx->pc = 0x1919f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9600));
    // 0x1919f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1919f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1919f8: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x1919f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
    // 0x1919fc: 0x3421fffc  ori         $at, $at, 0xFFFC
    ctx->pc = 0x1919fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65532);
    // 0x191a00: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x191a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x191a04: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x191a04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x191a08: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x191A08u;
    {
        const bool branch_taken_0x191a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191a08) {
            ctx->pc = 0x191A1Cu;
            goto label_191a1c;
        }
    }
    ctx->pc = 0x191A10u;
    // 0x191a10: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x191a10u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x191a14: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x191A14u;
    {
        const bool branch_taken_0x191a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191a14) {
            ctx->pc = 0x191AB8u;
            goto label_191ab8;
        }
    }
    ctx->pc = 0x191A1Cu;
label_191a1c:
    // 0x191a1c: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x191a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x191a20: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x191a20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x191a24: 0x2603fff0  addiu       $v1, $s0, -0x10
    ctx->pc = 0x191a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x191a28: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x191a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x191a2c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x191a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x191a30: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x191a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x191a34: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x191a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x191a38: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x191a38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x191a3c: 0x96220118  lhu         $v0, 0x118($s1)
    ctx->pc = 0x191a3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x191a40: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x191a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x191a44: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x191a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x191a48: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x191A48u;
    {
        const bool branch_taken_0x191a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191a48) {
            ctx->pc = 0x191A7Cu;
            goto label_191a7c;
        }
    }
    ctx->pc = 0x191A50u;
    // 0x191a50: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x191a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x191a54: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x191a54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x191a58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x191a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x191a5c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x191a5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x191a60: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x191a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x191a64: 0x8c242580  lw          $a0, 0x2580($at)
    ctx->pc = 0x191a64u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x532580u));
    // 0x191a68: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x191a68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x191a6c: 0xc06af4c  jal         func_1ABD30
    ctx->pc = 0x191A6Cu;
    SET_GPR_U32(ctx, 31, 0x191A74u);
    ctx->pc = 0x1ABD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABD30u, 0x191A6Cu, 0x191A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191A74u;
label_191a74:
    // 0x191a74: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x191A74u;
    {
        const bool branch_taken_0x191a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191a74) {
            ctx->pc = 0x191AA0u;
            goto label_191aa0;
        }
    }
    ctx->pc = 0x191A7Cu;
label_191a7c:
    // 0x191a7c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x191a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x191a80: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x191a80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x191a84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x191a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x191a88: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x191a88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x191a8c: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x191a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x191a90: 0x8c242580  lw          $a0, 0x2580($at)
    ctx->pc = 0x191a90u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x532580u));
    // 0x191a94: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x191a94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x191a98: 0xc06af20  jal         func_1ABC80
    ctx->pc = 0x191A98u;
    SET_GPR_U32(ctx, 31, 0x191AA0u);
    ctx->pc = 0x1ABC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABC80u, 0x191A98u, 0x191AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191AA0u;
label_191aa0:
    // 0x191aa0: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x191aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x191aa4: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x191aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x191aa8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x191aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x191aac: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x191aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x191ab0: 0xac222580  sw          $v0, 0x2580($at)
    ctx->pc = 0x191ab0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x532580u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x532580u, _value); } while (0);
    // 0x191ab4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x191ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_191ab8:
    // 0x191ab8: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x191ab8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x191abc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x191abcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x191ac0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x191ac0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x191ac4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x191ac4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x191ac8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x191ac8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x191acc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x191accu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x191ad0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x191ad0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x191ad4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x191ad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191ad8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x191ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x191adc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x191adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x191ae0: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x191ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x191ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x191AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191AECu;
}
