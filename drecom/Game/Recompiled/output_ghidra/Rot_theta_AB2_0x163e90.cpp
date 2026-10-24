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

// Function: Rot_theta_AB2
// Address: 0x163e90 - 0x163fb0
void Rot_theta_AB2_0x163e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Rot_theta_AB2_0x163e90");
#endif

    ctx->pc = 0x163e90u;

    // 0x163e90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x163e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x163e94: 0xe7ac0018  swc1        $f12, 0x18($sp)
    ctx->pc = 0x163e94u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x163e98: 0xe7ad0020  swc1        $f13, 0x20($sp)
    ctx->pc = 0x163e98u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x163e9c: 0xe7ae0028  swc1        $f14, 0x28($sp)
    ctx->pc = 0x163e9cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x163ea0: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x163ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163ea4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x163ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163ea8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x163ea8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x163eac: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x163eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x163eb0: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x163eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163eb4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x163eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x163eb8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x163ebc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163ebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163ec0: 0x0  nop
    ctx->pc = 0x163ec0u;
    // NOP
    // 0x163ec4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x163ec4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163ec8: 0x0  nop
    ctx->pc = 0x163ec8u;
    // NOP
    // 0x163ecc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x163ECCu;
    {
        const bool branch_taken_0x163ecc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163ecc) {
            ctx->pc = 0x163EF0u;
            goto label_163ef0;
        }
    }
    ctx->pc = 0x163ED4u;
    // 0x163ed4: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x163ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163ed8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x163ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x163edc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x163ee0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163ee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163ee4: 0x0  nop
    ctx->pc = 0x163ee4u;
    // NOP
    // 0x163ee8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x163ee8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x163eec: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x163eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_163ef0:
    // 0x163ef0: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x163ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163ef4: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x163ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x163ef8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x163efc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163efcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163f00: 0x0  nop
    ctx->pc = 0x163f00u;
    // NOP
    // 0x163f04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x163f04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163f08: 0x0  nop
    ctx->pc = 0x163f08u;
    // NOP
    // 0x163f0c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x163F0Cu;
    {
        const bool branch_taken_0x163f0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x163f0c) {
            ctx->pc = 0x163F30u;
            goto label_163f30;
        }
    }
    ctx->pc = 0x163F14u;
    // 0x163f14: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x163f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163f18: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x163f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x163f1c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x163f20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163f20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163f24: 0x0  nop
    ctx->pc = 0x163f24u;
    // NOP
    // 0x163f28: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x163f28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x163f2c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x163f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_163f30:
    // 0x163f30: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x163f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163f34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x163f34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163f38: 0x0  nop
    ctx->pc = 0x163f38u;
    // NOP
    // 0x163f3c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x163f3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163f40: 0x0  nop
    ctx->pc = 0x163f40u;
    // NOP
    // 0x163f44: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x163F44u;
    {
        const bool branch_taken_0x163f44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163f44) {
            ctx->pc = 0x163F70u;
            goto label_163f70;
        }
    }
    ctx->pc = 0x163F4Cu;
    // 0x163f4c: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x163f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163f50: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x163f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163f54: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x163f54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163f58: 0x0  nop
    ctx->pc = 0x163f58u;
    // NOP
    // 0x163f5c: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x163F5Cu;
    {
        const bool branch_taken_0x163f5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163f5c) {
            ctx->pc = 0x163F9Cu;
            goto label_163f9c;
        }
    }
    ctx->pc = 0x163F64u;
    // 0x163f64: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x163f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163f68: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x163F68u;
    {
        const bool branch_taken_0x163f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163f68) {
            ctx->pc = 0x163FA4u;
            goto label_163fa4;
        }
    }
    ctx->pc = 0x163F70u;
label_163f70:
    // 0x163f70: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x163f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163f74: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x163f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163f78: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x163f78u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x163f7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x163f7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163f80: 0x0  nop
    ctx->pc = 0x163f80u;
    // NOP
    // 0x163f84: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x163F84u;
    {
        const bool branch_taken_0x163f84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x163f84) {
            ctx->pc = 0x163F9Cu;
            goto label_163f9c;
        }
    }
    ctx->pc = 0x163F8Cu;
    // 0x163f8c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x163f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163f90: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x163f90u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x163f94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x163F94u;
    {
        const bool branch_taken_0x163f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163f94) {
            ctx->pc = 0x163FA4u;
            goto label_163fa4;
        }
    }
    ctx->pc = 0x163F9Cu;
label_163f9c:
    // 0x163f9c: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x163f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163fa0: 0x0  nop
    ctx->pc = 0x163fa0u;
    // NOP
label_163fa4:
    // 0x163fa4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x163fa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x163fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x163FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163FB0u;
}
