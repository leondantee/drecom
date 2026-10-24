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

// Function: Set_effect_pl00_denkiatk00
// Address: 0x2f2470 - 0x2f2558
void Set_effect_pl00_denkiatk00_0x2f2470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_pl00_denkiatk00_0x2f2470");
#endif

    switch (ctx->pc) {
        case 0x2f24fcu: goto label_2f24fc;
        case 0x2f2548u: goto label_2f2548;
        default: break;
    }

    ctx->pc = 0x2f2470u;

    // 0x2f2470: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2f2470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2f2474: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2f2474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2f2478: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2f2478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2f247c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2f247cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2f2480: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x2f2480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x2f2484: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x2f2484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x2f2488: 0xafa80048  sw          $t0, 0x48($sp)
    ctx->pc = 0x2f2488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 8));
    // 0x2f248c: 0xafa90050  sw          $t1, 0x50($sp)
    ctx->pc = 0x2f248cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 9));
    // 0x2f2490: 0xe7ac0058  swc1        $f12, 0x58($sp)
    ctx->pc = 0x2f2490u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2f2494: 0xe7ad0060  swc1        $f13, 0x60($sp)
    ctx->pc = 0x2f2494u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2f2498: 0xe7ae0068  swc1        $f14, 0x68($sp)
    ctx->pc = 0x2f2498u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2f249c: 0xafaa0070  sw          $t2, 0x70($sp)
    ctx->pc = 0x2f249cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 10));
    // 0x2f24a0: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x2f24a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x2f24a4: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2f24a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2f24a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f24a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f24ac: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2f24acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f24b0: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2f24b0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f24b4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2f24b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f24b8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f24b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2f24bc: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x2f24bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x2f24c0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2f24c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2f24c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f24c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f24c8: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2f24c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f24cc: 0x46000b82  mul.s       $f14, $f1, $f0
    ctx->pc = 0x2f24ccu;
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f24d0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2f24d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f24d4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2f24d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f24d8: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x2f24d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2f24dc: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x2f24dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f24e0: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x2f24e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f24e4: 0x8fa90050  lw          $t1, 0x50($sp)
    ctx->pc = 0x2f24e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f24e8: 0xc7ad0060  lwc1        $f13, 0x60($sp)
    ctx->pc = 0x2f24e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2f24ec: 0x8faa0070  lw          $t2, 0x70($sp)
    ctx->pc = 0x2f24ecu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f24f0: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f24f0u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f24f4: 0xc0bc860  jal         func_2F2180
    ctx->pc = 0x2F24F4u;
    SET_GPR_U32(ctx, 31, 0x2F24FCu);
    ctx->pc = 0x2F2180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2180u, 0x2F24F4u, 0x2F24FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F24FCu;
label_2f24fc:
    // 0x2f24fc: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2f24fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x2f2500: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2f2500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2f2504: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f2504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f2508: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2f2508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f250c: 0x46000b82  mul.s       $f14, $f1, $f0
    ctx->pc = 0x2f250cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f2510: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2f2510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f2514: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f2514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2f2518: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2f2518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f251c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2f251cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f2520: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x2f2520u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2f2524: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x2f2524u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f2528: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x2f2528u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f252c: 0x8fa90050  lw          $t1, 0x50($sp)
    ctx->pc = 0x2f252cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f2530: 0xc7ac0058  lwc1        $f12, 0x58($sp)
    ctx->pc = 0x2f2530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f2534: 0xc7ad0060  lwc1        $f13, 0x60($sp)
    ctx->pc = 0x2f2534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2f2538: 0x8faa0070  lw          $t2, 0x70($sp)
    ctx->pc = 0x2f2538u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f253c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f253cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f2540: 0xc0bc860  jal         func_2F2180
    ctx->pc = 0x2F2540u;
    SET_GPR_U32(ctx, 31, 0x2F2548u);
    ctx->pc = 0x2F2180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2180u, 0x2F2540u, 0x2F2548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2548u;
label_2f2548:
    // 0x2f2548: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2f2548u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f254c: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2f254cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2f2550: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F2558u;
}
