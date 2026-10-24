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

// Function: set_eff_em18_denki_houden
// Address: 0x324510 - 0x324604
void set_eff_em18_denki_houden_0x324510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_eff_em18_denki_houden_0x324510");
#endif

    switch (ctx->pc) {
        case 0x324544u: goto label_324544;
        case 0x324558u: goto label_324558;
        case 0x32456cu: goto label_32456c;
        case 0x324598u: goto label_324598;
        case 0x3245f0u: goto label_3245f0;
        default: break;
    }

    ctx->pc = 0x324510u;

    // 0x324510: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x324510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x324514: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x324514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x324518: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x324518u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x32451c: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x32451cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x324520: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x324520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x324524: 0xe7ac0068  swc1        $f12, 0x68($sp)
    ctx->pc = 0x324524u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x324528: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x324528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x32452c: 0x2442a110  addiu       $v0, $v0, -0x5EF0
    ctx->pc = 0x32452cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942992));
    // 0x324530: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x324530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x324534: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x324534u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x39A110u));
    // 0x324538: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x324538u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x32453c: 0xc067648  jal         func_19D920
    ctx->pc = 0x32453Cu;
    SET_GPR_U32(ctx, 31, 0x324544u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x32453Cu, 0x324544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324544u;
label_324544:
    // 0x324544: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x324544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x324548: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x324548u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32454c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x32454cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x324550: 0xc067648  jal         func_19D920
    ctx->pc = 0x324550u;
    SET_GPR_U32(ctx, 31, 0x324558u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x324550u, 0x324558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324558u;
label_324558:
    // 0x324558: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x324558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32455c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x32455cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x324560: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x324560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x324564: 0xc067648  jal         func_19D920
    ctx->pc = 0x324564u;
    SET_GPR_U32(ctx, 31, 0x32456Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x324564u, 0x32456Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32456Cu;
label_32456c:
    // 0x32456c: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x32456cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x324570: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x324570u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x324574: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x324574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x324578: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x324578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x32457c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32457cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324580: 0x0  nop
    ctx->pc = 0x324580u;
    // NOP
    // 0x324584: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x324584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x324588: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x324588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x32458c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x32458cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x324590: 0xc067648  jal         func_19D920
    ctx->pc = 0x324590u;
    SET_GPR_U32(ctx, 31, 0x324598u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x324590u, 0x324598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324598u;
label_324598:
    // 0x324598: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x324598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x32459c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32459cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3245a0: 0x0  nop
    ctx->pc = 0x3245a0u;
    // NOP
    // 0x3245a4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3245a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3245a8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3245a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x3245ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3245acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3245b0: 0x0  nop
    ctx->pc = 0x3245b0u;
    // NOP
    // 0x3245b4: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x3245b4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3245b8: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x3245b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x3245bc: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x3245bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3245c0: 0x8fa80060  lw          $t0, 0x60($sp)
    ctx->pc = 0x3245c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3245c4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3245c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x3245c8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3245c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3245cc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3245ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3245d0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3245d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3245d4: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x3245d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3245d8: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x3245d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3245dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3245dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3245e0: 0x27aa0030  addiu       $t2, $sp, 0x30
    ctx->pc = 0x3245e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3245e4: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x3245e4u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3245e8: 0xc0c8be4  jal         func_322F90
    ctx->pc = 0x3245E8u;
    SET_GPR_U32(ctx, 31, 0x3245F0u);
    ctx->pc = 0x322F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322F90u, 0x3245E8u, 0x3245F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3245F0u;
label_3245f0:
    // 0x3245f0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x3245f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3245f4: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x3245f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3245f8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x3245f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3245fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3245FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3245FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324604u;
}
