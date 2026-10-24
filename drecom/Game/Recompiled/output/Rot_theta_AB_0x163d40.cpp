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

// Function: Rot_theta_AB
// Address: 0x163d40 - 0x163e84
void Rot_theta_AB_0x163d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Rot_theta_AB_0x163d40");
#endif

    switch (ctx->pc) {
        case 0x163e2cu: goto label_163e2c;
        case 0x163e64u: goto label_163e64;
        default: break;
    }

    ctx->pc = 0x163d40u;

    // 0x163d40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x163d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x163d44: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x163d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x163d48: 0xe7ac0028  swc1        $f12, 0x28($sp)
    ctx->pc = 0x163d48u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x163d4c: 0xe7ad0030  swc1        $f13, 0x30($sp)
    ctx->pc = 0x163d4cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x163d50: 0xe7ae0038  swc1        $f14, 0x38($sp)
    ctx->pc = 0x163d50u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x163d54: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x163d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163d58: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x163d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163d5c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x163d5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x163d60: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x163d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x163d64: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x163d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163d68: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x163d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x163d6c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x163d70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163d70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163d74: 0x0  nop
    ctx->pc = 0x163d74u;
    // NOP
    // 0x163d78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x163d78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163d7c: 0x0  nop
    ctx->pc = 0x163d7cu;
    // NOP
    // 0x163d80: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x163D80u;
    {
        const bool branch_taken_0x163d80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163d80) {
            ctx->pc = 0x163DA4u;
            goto label_163da4;
        }
    }
    ctx->pc = 0x163D88u;
    // 0x163d88: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x163d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163d8c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x163d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x163d90: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x163d94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163d94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163d98: 0x0  nop
    ctx->pc = 0x163d98u;
    // NOP
    // 0x163d9c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x163d9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x163da0: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x163da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_163da4:
    // 0x163da4: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x163da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163da8: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x163da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x163dac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x163db0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163db0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163db4: 0x0  nop
    ctx->pc = 0x163db4u;
    // NOP
    // 0x163db8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x163db8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163dbc: 0x0  nop
    ctx->pc = 0x163dbcu;
    // NOP
    // 0x163dc0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x163DC0u;
    {
        const bool branch_taken_0x163dc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x163dc0) {
            ctx->pc = 0x163DE4u;
            goto label_163de4;
        }
    }
    ctx->pc = 0x163DC8u;
    // 0x163dc8: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x163dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163dcc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x163dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x163dd0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x163dd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163dd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163dd8: 0x0  nop
    ctx->pc = 0x163dd8u;
    // NOP
    // 0x163ddc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x163ddcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x163de0: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x163de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_163de4:
    // 0x163de4: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x163de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163de8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x163de8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163dec: 0x0  nop
    ctx->pc = 0x163decu;
    // NOP
    // 0x163df0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x163df0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163df4: 0x0  nop
    ctx->pc = 0x163df4u;
    // NOP
    // 0x163df8: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x163DF8u;
    {
        const bool branch_taken_0x163df8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163df8) {
            ctx->pc = 0x163E34u;
            goto label_163e34;
        }
    }
    ctx->pc = 0x163E00u;
    // 0x163e00: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x163e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163e04: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x163e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163e08: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x163e08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163e0c: 0x0  nop
    ctx->pc = 0x163e0cu;
    // NOP
    // 0x163e10: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x163E10u;
    {
        const bool branch_taken_0x163e10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163e10) {
            ctx->pc = 0x163E6Cu;
            goto label_163e6c;
        }
    }
    ctx->pc = 0x163E18u;
    // 0x163e18: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x163e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163e1c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x163e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163e20: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x163e20u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x163e24: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x163E24u;
    SET_GPR_U32(ctx, 31, 0x163E2Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x163E24u, 0x163E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163E2Cu;
label_163e2c:
    // 0x163e2c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x163E2Cu;
    {
        const bool branch_taken_0x163e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163e2c) {
            ctx->pc = 0x163E74u;
            goto label_163e74;
        }
    }
    ctx->pc = 0x163E34u;
label_163e34:
    // 0x163e34: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x163e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163e38: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x163e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163e3c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x163e3cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x163e40: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x163e40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163e44: 0x0  nop
    ctx->pc = 0x163e44u;
    // NOP
    // 0x163e48: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x163E48u;
    {
        const bool branch_taken_0x163e48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x163e48) {
            ctx->pc = 0x163E6Cu;
            goto label_163e6c;
        }
    }
    ctx->pc = 0x163E50u;
    // 0x163e50: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x163e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163e54: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x163e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163e58: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x163e58u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x163e5c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x163E5Cu;
    SET_GPR_U32(ctx, 31, 0x163E64u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x163E5Cu, 0x163E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163E64u;
label_163e64:
    // 0x163e64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x163E64u;
    {
        const bool branch_taken_0x163e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163e64) {
            ctx->pc = 0x163E74u;
            goto label_163e74;
        }
    }
    ctx->pc = 0x163E6Cu;
label_163e6c:
    // 0x163e6c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x163e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163e70: 0x0  nop
    ctx->pc = 0x163e70u;
    // NOP
label_163e74:
    // 0x163e74: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x163e74u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163e78: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x163e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x163e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x163E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163E84u;
}
