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

// Function: Om15_Pl_atari_ck
// Address: 0x31e1d0 - 0x31e2d0
void Om15_Pl_atari_ck_0x31e1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om15_Pl_atari_ck_0x31e1d0");
#endif

    switch (ctx->pc) {
        case 0x31e210u: goto label_31e210;
        case 0x31e284u: goto label_31e284;
        default: break;
    }

    ctx->pc = 0x31e1d0u;

    // 0x31e1d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x31e1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x31e1d4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x31e1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x31e1d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31e1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31e1dc: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x31e1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x31e1e0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x31e1e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x31e1e4: 0x8c30bb44  lw          $s0, -0x44BC($at)
    ctx->pc = 0x31e1e4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x47BB44u));
    // 0x31e1e8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x31e1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31e1ec: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x31e1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x31e1f0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x31e1f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31e1f4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x31e1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31e1f8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x31e1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x31e1fc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x31e1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31e200: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x31e200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31e204: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x31e204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x31e208: 0xc040c80  jal         func_103200
    ctx->pc = 0x31E208u;
    SET_GPR_U32(ctx, 31, 0x31E210u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x31E210u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31E210u) { return; }
    ctx->pc = 0x31E210u;
label_31e210:
    // 0x31e210: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x31e210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31e214: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x31e214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
    // 0x31e218: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x31e218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x31e21c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31e21cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e220: 0x0  nop
    ctx->pc = 0x31e220u;
    // NOP
    // 0x31e224: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x31e224u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31e228: 0x0  nop
    ctx->pc = 0x31e228u;
    // NOP
    // 0x31e22c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x31E22Cu;
    {
        const bool branch_taken_0x31e22c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31e22c) {
            ctx->pc = 0x31E254u;
            goto label_31e254;
        }
    }
    ctx->pc = 0x31E234u;
    // 0x31e234: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x31e234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31e238: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x31e238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x31e23c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31e23cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e240: 0x0  nop
    ctx->pc = 0x31e240u;
    // NOP
    // 0x31e244: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31e244u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31e248: 0x0  nop
    ctx->pc = 0x31e248u;
    // NOP
    // 0x31e24c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x31E24Cu;
    {
        const bool branch_taken_0x31e24c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31e24c) {
            ctx->pc = 0x31E260u;
            goto label_31e260;
        }
    }
    ctx->pc = 0x31E254u;
label_31e254:
    // 0x31e254: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x31e254u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31e258: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x31E258u;
    {
        const bool branch_taken_0x31e258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e258) {
            ctx->pc = 0x31E2BCu;
            goto label_31e2bc;
        }
    }
    ctx->pc = 0x31E260u;
label_31e260:
    // 0x31e260: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x31e260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31e264: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x31e264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e268: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x31e268u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31e26c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x31e26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31e270: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x31e270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e274: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31e274u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31e278: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x31e278u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x31e27c: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x31E27Cu;
    SET_GPR_U32(ctx, 31, 0x31E284u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x31E27Cu, 0x31E284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E284u;
label_31e284:
    // 0x31e284: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x31e284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x31e288: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x31e288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31e28c: 0x3c0244a2  lui         $v0, 0x44A2
    ctx->pc = 0x31e28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17570 << 16));
    // 0x31e290: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x31e290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x31e294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31e294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e298: 0x0  nop
    ctx->pc = 0x31e298u;
    // NOP
    // 0x31e29c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x31e29cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31e2a0: 0x0  nop
    ctx->pc = 0x31e2a0u;
    // NOP
    // 0x31e2a4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x31E2A4u;
    {
        const bool branch_taken_0x31e2a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31e2a4) {
            ctx->pc = 0x31E2B8u;
            goto label_31e2b8;
        }
    }
    ctx->pc = 0x31E2ACu;
    // 0x31e2ac: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x31e2acu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31e2b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31E2B0u;
    {
        const bool branch_taken_0x31e2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e2b0) {
            ctx->pc = 0x31E2BCu;
            goto label_31e2bc;
        }
    }
    ctx->pc = 0x31E2B8u;
label_31e2b8:
    // 0x31e2b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31e2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31e2bc:
    // 0x31e2bc: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x31e2bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31e2c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31e2c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31e2c4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x31e2c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31e2c8: 0x3e00008  jr          $ra
    ctx->pc = 0x31E2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E2D0u;
}
