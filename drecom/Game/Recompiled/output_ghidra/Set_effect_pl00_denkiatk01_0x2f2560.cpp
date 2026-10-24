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

// Function: Set_effect_pl00_denkiatk01
// Address: 0x2f2560 - 0x2f2770
void Set_effect_pl00_denkiatk01_0x2f2560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_pl00_denkiatk01_0x2f2560");
#endif

    switch (ctx->pc) {
        case 0x2f25e0u: goto label_2f25e0;
        case 0x2f262cu: goto label_2f262c;
        case 0x2f2654u: goto label_2f2654;
        case 0x2f2664u: goto label_2f2664;
        case 0x2f2670u: goto label_2f2670;
        case 0x2f26ccu: goto label_2f26cc;
        case 0x2f26f4u: goto label_2f26f4;
        case 0x2f2704u: goto label_2f2704;
        case 0x2f2710u: goto label_2f2710;
        case 0x2f275cu: goto label_2f275c;
        default: break;
    }

    ctx->pc = 0x2f2560u;

    // 0x2f2560: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2f2560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2f2564: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2f2564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2f2568: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f2568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f256c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x2f256cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x2f2570: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2f2570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2f2574: 0xafa60048  sw          $a2, 0x48($sp)
    ctx->pc = 0x2f2574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 6));
    // 0x2f2578: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x2f2578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x2f257c: 0xafa80058  sw          $t0, 0x58($sp)
    ctx->pc = 0x2f257cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 8));
    // 0x2f2580: 0xafa90060  sw          $t1, 0x60($sp)
    ctx->pc = 0x2f2580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 9));
    // 0x2f2584: 0xe7ac0068  swc1        $f12, 0x68($sp)
    ctx->pc = 0x2f2584u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2f2588: 0xe7ad0070  swc1        $f13, 0x70($sp)
    ctx->pc = 0x2f2588u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2f258c: 0xe7ae0078  swc1        $f14, 0x78($sp)
    ctx->pc = 0x2f258cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2f2590: 0xafaa0080  sw          $t2, 0x80($sp)
    ctx->pc = 0x2f2590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 10));
    // 0x2f2594: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2f2594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f2598: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f2598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2f259c: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x2f259cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x2f25a0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2f25a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2f25a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f25a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f25a8: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2f25a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f25ac: 0x46000b82  mul.s       $f14, $f1, $f0
    ctx->pc = 0x2f25acu;
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f25b0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2f25b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2f25b4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2f25b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f25b8: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x2f25b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f25bc: 0x8fa70050  lw          $a3, 0x50($sp)
    ctx->pc = 0x2f25bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f25c0: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x2f25c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f25c4: 0x8fa90060  lw          $t1, 0x60($sp)
    ctx->pc = 0x2f25c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f25c8: 0xc7ac0068  lwc1        $f12, 0x68($sp)
    ctx->pc = 0x2f25c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f25cc: 0xc7ad0070  lwc1        $f13, 0x70($sp)
    ctx->pc = 0x2f25ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2f25d0: 0x8faa0080  lw          $t2, 0x80($sp)
    ctx->pc = 0x2f25d0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f25d4: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f25d4u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f25d8: 0xc0bc860  jal         func_2F2180
    ctx->pc = 0x2F25D8u;
    SET_GPR_U32(ctx, 31, 0x2F25E0u);
    ctx->pc = 0x2F2180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2180u, 0x2F25D8u, 0x2F25E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F25E0u;
label_2f25e0:
    // 0x2f25e0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2f25e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f25e4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f25e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2f25e8: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2f25e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x2f25ec: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2f25ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2f25f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f25f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f25f4: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2f25f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f25f8: 0x46000b82  mul.s       $f14, $f1, $f0
    ctx->pc = 0x2f25f8u;
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f25fc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2f25fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2f2600: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2f2600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f2604: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x2f2604u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f2608: 0x8fa70050  lw          $a3, 0x50($sp)
    ctx->pc = 0x2f2608u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f260c: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x2f260cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f2610: 0x8fa90060  lw          $t1, 0x60($sp)
    ctx->pc = 0x2f2610u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f2614: 0xc7ac0068  lwc1        $f12, 0x68($sp)
    ctx->pc = 0x2f2614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f2618: 0xc7ad0070  lwc1        $f13, 0x70($sp)
    ctx->pc = 0x2f2618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2f261c: 0x8faa0080  lw          $t2, 0x80($sp)
    ctx->pc = 0x2f261cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f2620: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f2620u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f2624: 0xc0bc860  jal         func_2F2180
    ctx->pc = 0x2F2624u;
    SET_GPR_U32(ctx, 31, 0x2F262Cu);
    ctx->pc = 0x2F2180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2180u, 0x2F2624u, 0x2F262Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F262Cu;
label_2f262c:
    // 0x2f262c: 0x3c023fd9  lui         $v0, 0x3FD9
    ctx->pc = 0x2f262cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16345 << 16));
    // 0x2f2630: 0x34429999  ori         $v0, $v0, 0x9999
    ctx->pc = 0x2f2630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39321);
    // 0x2f2634: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f2634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f2638: 0x34029999  ori         $v0, $zero, 0x9999
    ctx->pc = 0x2f2638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39321);
    // 0x2f263c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f263cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f2640: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2f2640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2f2644: 0x438025  or          $s0, $v0, $v1
    ctx->pc = 0x2f2644u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2f2648: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x2f2648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f264c: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x2F264Cu;
    SET_GPR_U32(ctx, 31, 0x2F2654u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2F264Cu, 0x2F2654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2654u;
label_2f2654:
    // 0x2f2654: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2f2654u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2f2658: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2f2658u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f265c: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x2F265Cu;
    SET_GPR_U32(ctx, 31, 0x2F2664u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x2F265Cu, 0x2F2664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2664u;
label_2f2664:
    // 0x2f2664: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2f2664u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f2668: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x2F2668u;
    SET_GPR_U32(ctx, 31, 0x2F2670u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x2F2668u, 0x2F2670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2670u;
label_2f2670:
    // 0x2f2670: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x2f2670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x2f2674: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2f2674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2f2678: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2f2678u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f267c: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x2f267cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f2680: 0x46011382  mul.s       $f14, $f2, $f1
    ctx->pc = 0x2f2680u;
    ctx->f[14] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2f2684: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2f2684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f2688: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f2688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2f268c: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x2f268cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x2f2690: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2f2690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2f2694: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2f2694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f2698: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x2f2698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f269c: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x2f269cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2f26a0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2f26a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2f26a4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2f26a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f26a8: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x2f26a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f26ac: 0x8fa70050  lw          $a3, 0x50($sp)
    ctx->pc = 0x2f26acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f26b0: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x2f26b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f26b4: 0x8fa90060  lw          $t1, 0x60($sp)
    ctx->pc = 0x2f26b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f26b8: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2f26b8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x2f26bc: 0x8faa0080  lw          $t2, 0x80($sp)
    ctx->pc = 0x2f26bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f26c0: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f26c0u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f26c4: 0xc0bc860  jal         func_2F2180
    ctx->pc = 0x2F26C4u;
    SET_GPR_U32(ctx, 31, 0x2F26CCu);
    ctx->pc = 0x2F2180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2180u, 0x2F26C4u, 0x2F26CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F26CCu;
label_2f26cc:
    // 0x2f26cc: 0x3c023fd9  lui         $v0, 0x3FD9
    ctx->pc = 0x2f26ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16345 << 16));
    // 0x2f26d0: 0x34429999  ori         $v0, $v0, 0x9999
    ctx->pc = 0x2f26d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39321);
    // 0x2f26d4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f26d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f26d8: 0x34029999  ori         $v0, $zero, 0x9999
    ctx->pc = 0x2f26d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39321);
    // 0x2f26dc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f26dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f26e0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2f26e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2f26e4: 0x438025  or          $s0, $v0, $v1
    ctx->pc = 0x2f26e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2f26e8: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x2f26e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f26ec: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x2F26ECu;
    SET_GPR_U32(ctx, 31, 0x2F26F4u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2F26ECu, 0x2F26F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F26F4u;
label_2f26f4:
    // 0x2f26f4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2f26f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2f26f8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2f26f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f26fc: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x2F26FCu;
    SET_GPR_U32(ctx, 31, 0x2F2704u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x2F26FCu, 0x2F2704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2704u;
label_2f2704:
    // 0x2f2704: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2f2704u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f2708: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x2F2708u;
    SET_GPR_U32(ctx, 31, 0x2F2710u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x2F2708u, 0x2F2710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2710u;
label_2f2710:
    // 0x2f2710: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2f2710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f2714: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f2714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2f2718: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2f2718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x2f271c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2f271cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2f2720: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2f2720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f2724: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x2f2724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f2728: 0x46011382  mul.s       $f14, $f2, $f1
    ctx->pc = 0x2f2728u;
    ctx->f[14] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2f272c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2f272cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2f2730: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2f2730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f2734: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x2f2734u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f2738: 0x8fa70050  lw          $a3, 0x50($sp)
    ctx->pc = 0x2f2738u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f273c: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x2f273cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f2740: 0x8fa90060  lw          $t1, 0x60($sp)
    ctx->pc = 0x2f2740u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f2744: 0xc7ac0068  lwc1        $f12, 0x68($sp)
    ctx->pc = 0x2f2744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f2748: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2f2748u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x2f274c: 0x8faa0080  lw          $t2, 0x80($sp)
    ctx->pc = 0x2f274cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f2750: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f2750u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f2754: 0xc0bc860  jal         func_2F2180
    ctx->pc = 0x2F2754u;
    SET_GPR_U32(ctx, 31, 0x2F275Cu);
    ctx->pc = 0x2F2180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2180u, 0x2F2754u, 0x2F275Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F275Cu;
label_2f275c:
    // 0x2f275c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2f275cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2760: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f2760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2764: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2f2764u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2f2768: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F2770u;
}
