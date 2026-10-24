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

// Function: Get_joystick_theta
// Address: 0x15e800 - 0x15e8b0
void Get_joystick_theta_0x15e800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get_joystick_theta_0x15e800");
#endif

    switch (ctx->pc) {
        case 0x15e860u: goto label_15e860;
        case 0x15e88cu: goto label_15e88c;
        default: break;
    }

    ctx->pc = 0x15e800u;

    // 0x15e800: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15e800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15e804: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x15e804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x15e808: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15e808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15e80c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x15e80cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x15e810: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x15e810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15e814: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x15e814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x15e818: 0x920200ae  lbu         $v0, 0xAE($s0)
    ctx->pc = 0x15e818u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x5D012Eu));
    // 0x15e81c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15e81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15e820: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x15e820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x15e824: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e828: 0x0  nop
    ctx->pc = 0x15e828u;
    // NOP
    // 0x15e82c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15e82cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15e830: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x15e830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x15e834: 0x920200af  lbu         $v0, 0xAF($s0)
    ctx->pc = 0x15e834u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x5D012Fu));
    // 0x15e838: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15e838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15e83c: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x15e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x15e840: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e844: 0x0  nop
    ctx->pc = 0x15e844u;
    // NOP
    // 0x15e848: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15e848u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15e84c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x15e84cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x15e850: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x15e850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15e854: 0xc7ad002c  lwc1        $f13, 0x2C($sp)
    ctx->pc = 0x15e854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15e858: 0xc0455e6  jal         func_115798
    ctx->pc = 0x15E858u;
    SET_GPR_U32(ctx, 31, 0x15E860u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x15E858u, 0x15E860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E860u;
label_15e860:
    // 0x15e860: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15e860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e864: 0xe4401384  swc1        $f0, 0x1384($v0)
    ctx->pc = 0x15e864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4996), bits); }
    // 0x15e868: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x15e868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15e86c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x15e86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e870: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x15e870u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15e874: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x15e874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15e878: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x15e878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e87c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15e87cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15e880: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x15e880u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15e884: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x15E884u;
    SET_GPR_U32(ctx, 31, 0x15E88Cu);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x15E884u, 0x15E88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E88Cu;
label_15e88c:
    // 0x15e88c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15e88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e890: 0xe4401388  swc1        $f0, 0x1388($v0)
    ctx->pc = 0x15e890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5000), bits); }
    // 0x15e894: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15e894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e898: 0xc4401384  lwc1        $f0, 0x1384($v0)
    ctx->pc = 0x15e898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e89c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x15e89cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e8a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15e8a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e8a4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x15e8a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15e8a8: 0x3e00008  jr          $ra
    ctx->pc = 0x15E8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E8A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E8B0u;
}
