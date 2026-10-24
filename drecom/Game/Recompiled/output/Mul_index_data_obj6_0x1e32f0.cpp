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

// Function: Mul_index_data_obj6
// Address: 0x1e32f0 - 0x1e3870
void Mul_index_data_obj6_0x1e32f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Mul_index_data_obj6_0x1e32f0");
#endif

    switch (ctx->pc) {
        case 0x1e33c0u: goto label_1e33c0;
        case 0x1e33d4u: goto label_1e33d4;
        case 0x1e33d8u: goto label_1e33d8;
        case 0x1e3408u: goto label_1e3408;
        case 0x1e357cu: goto label_1e357c;
        case 0x1e360cu: goto label_1e360c;
        case 0x1e3694u: goto label_1e3694;
        case 0x1e36acu: goto label_1e36ac;
        case 0x1e36c4u: goto label_1e36c4;
        case 0x1e372cu: goto label_1e372c;
        case 0x1e3794u: goto label_1e3794;
        case 0x1e3804u: goto label_1e3804;
        default: break;
    }

    ctx->pc = 0x1e32f0u;

    // 0x1e32f0: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x1e32f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
    // 0x1e32f4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x1e32f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1e32f8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1e32f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1e32fc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1e32fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1e3300: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e3300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1e3304: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e3304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1e3308: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e3308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e330c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e330cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e3310: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e3310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e3314: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e3314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e3318: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e3318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e331c: 0xafa401e0  sw          $a0, 0x1E0($sp)
    ctx->pc = 0x1e331cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 4));
    // 0x1e3320: 0xafa501e8  sw          $a1, 0x1E8($sp)
    ctx->pc = 0x1e3320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 5));
    // 0x1e3324: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1e3324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1e3328: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x1e3328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x1e332c: 0xafa201d0  sw          $v0, 0x1D0($sp)
    ctx->pc = 0x1e332cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
    // 0x1e3330: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1e3330u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e3334: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x1e3334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1e3338: 0x8c500068  lw          $s0, 0x68($v0)
    ctx->pc = 0x1e3338u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1e333c: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x1e333cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1e3340: 0x8c530028  lw          $s3, 0x28($v0)
    ctx->pc = 0x1e3340u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e3344: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x1e3344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1e3348: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x1e3348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1e334c: 0xafa201d4  sw          $v0, 0x1D4($sp)
    ctx->pc = 0x1e334cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 2));
    // 0x1e3350: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x1e3350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1e3354: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x1e3354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1e3358: 0xafa201d8  sw          $v0, 0x1D8($sp)
    ctx->pc = 0x1e3358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 2));
    // 0x1e335c: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x1e335cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1e3360: 0x8c57006c  lw          $s7, 0x6C($v0)
    ctx->pc = 0x1e3360u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1e3364: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x1e3364u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e3368: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1e3368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1e336c: 0x8c420134  lw          $v0, 0x134($v0)
    ctx->pc = 0x1e336cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x1e3370: 0xafa201dc  sw          $v0, 0x1DC($sp)
    ctx->pc = 0x1e3370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 2));
    // 0x1e3374: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1e3374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1e3378: 0x8c5e0134  lw          $fp, 0x134($v0)
    ctx->pc = 0x1e3378u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x1e337c: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1e337cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1e3380: 0x8c540130  lw          $s4, 0x130($v0)
    ctx->pc = 0x1e3380u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1e3384: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e3384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e3388: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e3388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e338c: 0x0  nop
    ctx->pc = 0x1e338cu;
    // NOP
    // 0x1e3390: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1e3390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1e3394: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e3394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e3398: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e3398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e339c: 0x0  nop
    ctx->pc = 0x1e339cu;
    // NOP
    // 0x1e33a0: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1e33a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1e33a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e33a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e33a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e33a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e33ac: 0x0  nop
    ctx->pc = 0x1e33acu;
    // NOP
    // 0x1e33b0: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1e33b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1e33b4: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x1e33b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1e33b8: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1E33B8u;
    SET_GPR_U32(ctx, 31, 0x1E33C0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1E33C0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E33C0u) { return; }
    ctx->pc = 0x1E33C0u;
label_1e33c0:
    // 0x1e33c0: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x1e33c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1e33c4: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1e33c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1e33c8: 0x260600d0  addiu       $a2, $s0, 0xD0
    ctx->pc = 0x1e33c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x1e33cc: 0xc040d62  jal         func_103588
    ctx->pc = 0x1E33CCu;
    SET_GPR_U32(ctx, 31, 0x1E33D4u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x1E33D4u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E33D4u) { return; }
    ctx->pc = 0x1E33D4u;
label_1e33d4:
    // 0x1e33d4: 0xafa001cc  sw          $zero, 0x1CC($sp)
    ctx->pc = 0x1e33d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 0));
label_1e33d8:
    // 0x1e33d8: 0x32e30001  andi        $v1, $s7, 0x1
    ctx->pc = 0x1e33d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x1e33dc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1E33DCu;
    {
        const bool branch_taken_0x1e33dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e33dc) {
            ctx->pc = 0x1E3410u;
            goto label_1e3410;
        }
    }
    ctx->pc = 0x1E33E4u;
    // 0x1e33e4: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x1e33e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e33e8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1e33e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1e33ec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e33ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e33f0: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e33f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x1e33f4: 0x34118000  ori         $s1, $zero, 0x8000
    ctx->pc = 0x1e33f4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e33f8: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x1e33f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e33fc: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1e33fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1e3400: 0xc077fc8  jal         func_1DFF20
    ctx->pc = 0x1E3400u;
    SET_GPR_U32(ctx, 31, 0x1E3408u);
    ctx->pc = 0x1DFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFF20u, 0x1E3400u, 0x1E3408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3408u;
label_1e3408:
    // 0x1e3408: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1e3408u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1e340c: 0x0  nop
    ctx->pc = 0x1e340cu;
    // NOP
label_1e3410:
    // 0x1e3410: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x1e3410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e3414: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1e3414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1e3418: 0x106000fb  beqz        $v1, . + 4 + (0xFB << 2)
    ctx->pc = 0x1E3418u;
    {
        const bool branch_taken_0x1e3418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3418) {
            ctx->pc = 0x1E3808u;
            goto label_1e3808;
        }
    }
    ctx->pc = 0x1E3420u;
    // 0x1e3420: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e3420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e3424: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1e3424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1e3428: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3428u;
    {
        const bool branch_taken_0x1e3428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3428) {
            ctx->pc = 0x1E3438u;
            goto label_1e3438;
        }
    }
    ctx->pc = 0x1E3430u;
    // 0x1e3430: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1e3430u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1e3434: 0x0  nop
    ctx->pc = 0x1e3434u;
    // NOP
label_1e3438:
    // 0x1e3438: 0x96020100  lhu         $v0, 0x100($s0)
    ctx->pc = 0x1e3438u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1e343c: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x1e343cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e3440: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1e3440u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e3444: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1e3444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1e3448: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1e3448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e344c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e344cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e3450: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e3450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e3454: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e3454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3458: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1e3458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1e345c: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1e345cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1e3460: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1e3460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e3464: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e3464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e3468: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e3468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e346c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1e346cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3470: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1e3470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1e3474: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1e3474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1e3478: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1e3478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e347c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e347cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e3480: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e3480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e3484: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1e3484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3488: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1e3488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1e348c: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1e348cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1e3490: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1e3490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e3494: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e3494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e3498: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e3498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e349c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1e349cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e34a0: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1e34a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1e34a4: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1e34a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1e34a8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1e34a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e34ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e34acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e34b0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e34b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e34b4: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1e34b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e34b8: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1e34b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1e34bc: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1e34bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1e34c0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1e34c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e34c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e34c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e34c8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e34c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e34cc: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1e34ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e34d0: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1e34d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1e34d4: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1e34d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1e34d8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1e34d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e34dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e34dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e34e0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e34e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e34e4: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1e34e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e34e8: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1e34e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1e34ec: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1e34ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1e34f0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1e34f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e34f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e34f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e34f8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e34f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e34fc: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1e34fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3500: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1e3500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1e3504: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1e3504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1e3508: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1e3508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e350c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e350cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e3510: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e3510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e3514: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1e3514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3518: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1e3518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1e351c: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e351cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e3520: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1e3520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1e3524: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1E3524u;
    {
        const bool branch_taken_0x1e3524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3524) {
            ctx->pc = 0x1E35F8u;
            goto label_1e35f8;
        }
    }
    ctx->pc = 0x1E352Cu;
    // 0x1e352c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1e352cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1e3530: 0x8fa201d4  lw          $v0, 0x1D4($sp)
    ctx->pc = 0x1e3530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x1e3534: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e3534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e3538: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1e3538u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1e353c: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x1e353cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e3540: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1e3540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1e3544: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x1e3544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x1e3548: 0x151082  srl         $v0, $s5, 2
    ctx->pc = 0x1e3548u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 2));
    // 0x1e354c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e354cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e3550: 0x62f021  addu        $fp, $v1, $v0
    ctx->pc = 0x1e3550u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e3554: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1e3554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1e3558: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1e3558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1e355c: 0x151082  srl         $v0, $s5, 2
    ctx->pc = 0x1e355cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 2));
    // 0x1e3560: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e3560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e3564: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x1e3564u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e3568: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e3568u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e356c: 0x73c02e28  paddub      $a1, $fp, $zero
    ctx->pc = 0x1e356cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x1e3570: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1e3570u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e3574: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E3574u;
    SET_GPR_U32(ctx, 31, 0x1E357Cu);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E3574u, 0x1E357Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E357Cu;
label_1e357c:
    // 0x1e357c: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e357cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e3580: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1e3580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1e3584: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e3584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x1e3588: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x1e3588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e358c: 0xc6800030  lwc1        $f0, 0x30($s4)
    ctx->pc = 0x1e358cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3590: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e3590u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e3594: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e3594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1e3598: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e3598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e359c: 0x0  nop
    ctx->pc = 0x1e359cu;
    // NOP
    // 0x1e35a0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e35a0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e35a4: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x1e35a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x1e35a8: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x1e35a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e35ac: 0xc6800034  lwc1        $f0, 0x34($s4)
    ctx->pc = 0x1e35acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e35b0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e35b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e35b4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e35b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1e35b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e35b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e35bc: 0x0  nop
    ctx->pc = 0x1e35bcu;
    // NOP
    // 0x1e35c0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1e35c0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e35c4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1e35c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1e35c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e35c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e35cc: 0x0  nop
    ctx->pc = 0x1e35ccu;
    // NOP
    // 0x1e35d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e35d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e35d4: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x1e35d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x1e35d8: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x1e35d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e35dc: 0xc6800038  lwc1        $f0, 0x38($s4)
    ctx->pc = 0x1e35dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e35e0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e35e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e35e4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e35e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1e35e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e35e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e35ec: 0x0  nop
    ctx->pc = 0x1e35ecu;
    // NOP
    // 0x1e35f0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e35f0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e35f4: 0xe60000c8  swc1        $f0, 0xC8($s0)
    ctx->pc = 0x1e35f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
label_1e35f8:
    // 0x1e35f8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e35f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e35fc: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1e35fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e3600: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x1e3600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1e3604: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E3604u;
    SET_GPR_U32(ctx, 31, 0x1E360Cu);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E3604u, 0x1E360Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E360Cu;
label_1e360c:
    // 0x1e360c: 0xc60100c0  lwc1        $f1, 0xC0($s0)
    ctx->pc = 0x1e360cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3610: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x1e3610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3614: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e3614u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e3618: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1e3618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1e361c: 0xc60100c4  lwc1        $f1, 0xC4($s0)
    ctx->pc = 0x1e361cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3620: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x1e3620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3624: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e3624u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e3628: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1e3628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1e362c: 0xc60100c8  lwc1        $f1, 0xC8($s0)
    ctx->pc = 0x1e362cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3630: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x1e3630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3634: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e3634u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e3638: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x1e3638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x1e363c: 0xc60100c4  lwc1        $f1, 0xC4($s0)
    ctx->pc = 0x1e363cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3640: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e3640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e3644: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e3644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e3648: 0x0  nop
    ctx->pc = 0x1e3648u;
    // NOP
    // 0x1e364c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e364cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e3650: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x1e3650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x1e3654: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x1e3654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3658: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e3658u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e365c: 0x0  nop
    ctx->pc = 0x1e365cu;
    // NOP
    // 0x1e3660: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e3660u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e3664: 0x0  nop
    ctx->pc = 0x1e3664u;
    // NOP
    // 0x1e3668: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1E3668u;
    {
        const bool branch_taken_0x1e3668 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e3668) {
            ctx->pc = 0x1E3680u;
            goto label_1e3680;
        }
    }
    ctx->pc = 0x1E3670u;
    // 0x1e3670: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e3670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e3674: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1e3674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1e3678: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e3678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x1e367c: 0x34118000  ori         $s1, $zero, 0x8000
    ctx->pc = 0x1e367cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1e3680:
    // 0x1e3680: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1e3680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e3684: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1e3684u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e3688: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x1e3688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1e368c: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E368Cu;
    SET_GPR_U32(ctx, 31, 0x1E3694u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E368Cu, 0x1E3694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3694u;
label_1e3694:
    // 0x1e3694: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1e3694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1e3698: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1e3698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1e369c: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1e369cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1e36a0: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x1e36a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e36a4: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E36A4u;
    SET_GPR_U32(ctx, 31, 0x1E36ACu);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E36A4u, 0x1E36ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E36ACu;
label_1e36ac:
    // 0x1e36ac: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1e36acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e36b0: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x1e36b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1e36b4: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1e36b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e36b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e36b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e36bc: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E36BCu;
    SET_GPR_U32(ctx, 31, 0x1E36C4u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E36C4u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E36C4u) { return; }
    ctx->pc = 0x1E36C4u;
label_1e36c4:
    // 0x1e36c4: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x1e36c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e36c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e36c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e36cc: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e36ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e36d0: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e36d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e36d4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E36D4u;
    {
        const bool branch_taken_0x1e36d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e36d4) {
            ctx->pc = 0x1E36F8u;
            goto label_1e36f8;
        }
    }
    ctx->pc = 0x1E36DCu;
    // 0x1e36dc: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x1e36dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x1e36e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e36e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e36e4: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e36e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e36e8: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e36e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e36ec: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E36ECu;
    {
        const bool branch_taken_0x1e36ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e36ec) {
            ctx->pc = 0x1E3700u;
            goto label_1e3700;
        }
    }
    ctx->pc = 0x1E36F4u;
    // 0x1e36f4: 0x0  nop
    ctx->pc = 0x1e36f4u;
    // NOP
label_1e36f8:
    // 0x1e36f8: 0x34118000  ori         $s1, $zero, 0x8000
    ctx->pc = 0x1e36f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e36fc: 0x0  nop
    ctx->pc = 0x1e36fcu;
    // NOP
label_1e3700:
    // 0x1e3700: 0x27a200d8  addiu       $v0, $sp, 0xD8
    ctx->pc = 0x1e3700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x1e3704: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e3704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3708: 0x2c4159d9  sltiu       $at, $v0, 0x59D9
    ctx->pc = 0x1e3708u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)23001) ? 1 : 0);
    // 0x1e370c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E370Cu;
    {
        const bool branch_taken_0x1e370c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e370c) {
            ctx->pc = 0x1E3718u;
            goto label_1e3718;
        }
    }
    ctx->pc = 0x1E3714u;
    // 0x1e3714: 0x34118000  ori         $s1, $zero, 0x8000
    ctx->pc = 0x1e3714u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1e3718:
    // 0x1e3718: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1e3718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e371c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1e371cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e3720: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e3720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3724: 0xc078340  jal         func_1E0D00
    ctx->pc = 0x1E3724u;
    SET_GPR_U32(ctx, 31, 0x1E372Cu);
    ctx->pc = 0x1E0D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0D00u, 0x1E3724u, 0x1E372Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E372Cu;
label_1e372c:
    // 0x1e372c: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x1e372cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e3730: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e3730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3734: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e3734u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e3738: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e3738u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e373c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E373Cu;
    {
        const bool branch_taken_0x1e373c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e373c) {
            ctx->pc = 0x1E3760u;
            goto label_1e3760;
        }
    }
    ctx->pc = 0x1E3744u;
    // 0x1e3744: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x1e3744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x1e3748: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e3748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e374c: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e374cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e3750: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e3750u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e3754: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E3754u;
    {
        const bool branch_taken_0x1e3754 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3754) {
            ctx->pc = 0x1E3768u;
            goto label_1e3768;
        }
    }
    ctx->pc = 0x1E375Cu;
    // 0x1e375c: 0x0  nop
    ctx->pc = 0x1e375cu;
    // NOP
label_1e3760:
    // 0x1e3760: 0x34118000  ori         $s1, $zero, 0x8000
    ctx->pc = 0x1e3760u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e3764: 0x0  nop
    ctx->pc = 0x1e3764u;
    // NOP
label_1e3768:
    // 0x1e3768: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x1e3768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x1e376c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e376cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3770: 0x2c4159d9  sltiu       $at, $v0, 0x59D9
    ctx->pc = 0x1e3770u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)23001) ? 1 : 0);
    // 0x1e3774: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E3774u;
    {
        const bool branch_taken_0x1e3774 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3774) {
            ctx->pc = 0x1E3780u;
            goto label_1e3780;
        }
    }
    ctx->pc = 0x1E377Cu;
    // 0x1e377c: 0x34118000  ori         $s1, $zero, 0x8000
    ctx->pc = 0x1e377cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1e3780:
    // 0x1e3780: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1e3780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e3784: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1e3784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e3788: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e3788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e378c: 0xc078340  jal         func_1E0D00
    ctx->pc = 0x1E378Cu;
    SET_GPR_U32(ctx, 31, 0x1E3794u);
    ctx->pc = 0x1E0D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0D00u, 0x1E378Cu, 0x1E3794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3794u;
label_1e3794:
    // 0x1e3794: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x1e3794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e3798: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e3798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e379c: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e379cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e37a0: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e37a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e37a4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E37A4u;
    {
        const bool branch_taken_0x1e37a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e37a4) {
            ctx->pc = 0x1E37C8u;
            goto label_1e37c8;
        }
    }
    ctx->pc = 0x1E37ACu;
    // 0x1e37ac: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x1e37acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x1e37b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e37b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e37b4: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e37b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e37b8: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e37b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e37bc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E37BCu;
    {
        const bool branch_taken_0x1e37bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e37bc) {
            ctx->pc = 0x1E37D0u;
            goto label_1e37d0;
        }
    }
    ctx->pc = 0x1E37C4u;
    // 0x1e37c4: 0x0  nop
    ctx->pc = 0x1e37c4u;
    // NOP
label_1e37c8:
    // 0x1e37c8: 0x34118000  ori         $s1, $zero, 0x8000
    ctx->pc = 0x1e37c8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e37cc: 0x0  nop
    ctx->pc = 0x1e37ccu;
    // NOP
label_1e37d0:
    // 0x1e37d0: 0x27a200f8  addiu       $v0, $sp, 0xF8
    ctx->pc = 0x1e37d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x1e37d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e37d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e37d8: 0x2c4159d9  sltiu       $at, $v0, 0x59D9
    ctx->pc = 0x1e37d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)23001) ? 1 : 0);
    // 0x1e37dc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E37DCu;
    {
        const bool branch_taken_0x1e37dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e37dc) {
            ctx->pc = 0x1E37E8u;
            goto label_1e37e8;
        }
    }
    ctx->pc = 0x1E37E4u;
    // 0x1e37e4: 0x34118000  ori         $s1, $zero, 0x8000
    ctx->pc = 0x1e37e4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1e37e8:
    // 0x1e37e8: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x1e37e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e37ec: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1e37ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e37f0: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1e37f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e37f4: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x1e37f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e37f8: 0x72204628  paddub      $t0, $s1, $zero
    ctx->pc = 0x1e37f8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1e37fc: 0xc077f60  jal         func_1DFD80
    ctx->pc = 0x1E37FCu;
    SET_GPR_U32(ctx, 31, 0x1E3804u);
    ctx->pc = 0x1DFD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFD80u, 0x1E37FCu, 0x1E3804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3804u;
label_1e3804:
    // 0x1e3804: 0x0  nop
    ctx->pc = 0x1e3804u;
    // NOP
label_1e3808:
    // 0x1e3808: 0x26100110  addiu       $s0, $s0, 0x110
    ctx->pc = 0x1e3808u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1e380c: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x1e380cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x1e3810: 0x16e0fef1  bnez        $s7, . + 4 + (-0x10F << 2)
    ctx->pc = 0x1E3810u;
    {
        const bool branch_taken_0x1e3810 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3810) {
            ctx->pc = 0x1E33D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e33d8;
        }
    }
    ctx->pc = 0x1E3818u;
    // 0x1e3818: 0x8fa301e8  lw          $v1, 0x1E8($sp)
    ctx->pc = 0x1e3818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1e381c: 0x8c63006c  lw          $v1, 0x6C($v1)
    ctx->pc = 0x1e381cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1e3820: 0x16c30006  bne         $s6, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E3820u;
    {
        const bool branch_taken_0x1e3820 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e3820) {
            ctx->pc = 0x1E383Cu;
            goto label_1e383c;
        }
    }
    ctx->pc = 0x1E3828u;
    // 0x1e3828: 0x8fa501e8  lw          $a1, 0x1E8($sp)
    ctx->pc = 0x1e3828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1e382c: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x1e382cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1e3830: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1e3830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1e3834: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1e3834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1e3838: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x1e3838u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
label_1e383c:
    // 0x1e383c: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1e383cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e3840: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1e3840u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e3844: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1e3844u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e3848: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e3848u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e384c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e384cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e3850: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e3850u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e3854: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e3854u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e3858: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e3858u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e385c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e385cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3860: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3864: 0x27bd0200  addiu       $sp, $sp, 0x200
    ctx->pc = 0x1e3864u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1e3868: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3870u;
}
