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

// Function: BTL_cam_trans
// Address: 0x185e80 - 0x186124
void BTL_cam_trans_0x185e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BTL_cam_trans_0x185e80");
#endif

    switch (ctx->pc) {
        case 0x186028u: goto label_186028;
        case 0x186050u: goto label_186050;
        case 0x186074u: goto label_186074;
        case 0x1860e8u: goto label_1860e8;
        case 0x18610cu: goto label_18610c;
        default: break;
    }

    ctx->pc = 0x185e80u;

    // 0x185e80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x185e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x185e84: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x185e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x185e88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x185e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x185e8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x185e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x185e90: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x185e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x185e94: 0x24512380  addiu       $s1, $v0, 0x2380
    ctx->pc = 0x185e94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 9088));
    // 0x185e98: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x185e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x185e9c: 0x8c300af0  lw          $s0, 0xAF0($at)
    ctx->pc = 0x185e9cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x185ea0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185ea4: 0xc4210324  lwc1        $f1, 0x324($at)
    ctx->pc = 0x185ea4u;
    { uint32_t bits = FAST_READ32(0x480324u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185ea8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185eac: 0xc420032c  lwc1        $f0, 0x32C($at)
    ctx->pc = 0x185eacu;
    { uint32_t bits = FAST_READ32(0x48032Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185eb0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x185eb0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185eb4: 0x0  nop
    ctx->pc = 0x185eb4u;
    // NOP
    // 0x185eb8: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x185EB8u;
    {
        const bool branch_taken_0x185eb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185eb8) {
            ctx->pc = 0x185EFCu;
            goto label_185efc;
        }
    }
    ctx->pc = 0x185EC0u;
    // 0x185ec0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185ec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185ec4: 0xc4200324  lwc1        $f0, 0x324($at)
    ctx->pc = 0x185ec4u;
    { uint32_t bits = FAST_READ32(0x480324u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185ec8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185ecc: 0xe420032c  swc1        $f0, 0x32C($at)
    ctx->pc = 0x185eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x48032Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48032Cu, _value); } while (0); }
    // 0x185ed0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185ed4: 0xc4210324  lwc1        $f1, 0x324($at)
    ctx->pc = 0x185ed4u;
    { uint32_t bits = FAST_READ32(0x480324u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185ed8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185edc: 0xc4200328  lwc1        $f0, 0x328($at)
    ctx->pc = 0x185edcu;
    { uint32_t bits = FAST_READ32(0x480328u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185ee0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x185ee0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x185ee4: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x185ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x185ee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185ee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185eec: 0x0  nop
    ctx->pc = 0x185eecu;
    // NOP
    // 0x185ef0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x185ef0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x185ef4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185ef8: 0xe4200330  swc1        $f0, 0x330($at)
    ctx->pc = 0x185ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x480330u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480330u, _value); } while (0); }
label_185efc:
    // 0x185efc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185f00: 0xc4210324  lwc1        $f1, 0x324($at)
    ctx->pc = 0x185f00u;
    { uint32_t bits = FAST_READ32(0x480324u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185f04: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185f08: 0xc4200328  lwc1        $f0, 0x328($at)
    ctx->pc = 0x185f08u;
    { uint32_t bits = FAST_READ32(0x480328u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185f0c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x185f0cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185f10: 0x0  nop
    ctx->pc = 0x185f10u;
    // NOP
    // 0x185f14: 0x45010041  bc1t        . + 4 + (0x41 << 2)
    ctx->pc = 0x185F14u;
    {
        const bool branch_taken_0x185f14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185f14) {
            ctx->pc = 0x18601Cu;
            goto label_18601c;
        }
    }
    ctx->pc = 0x185F1Cu;
    // 0x185f1c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185f20: 0xc4210324  lwc1        $f1, 0x324($at)
    ctx->pc = 0x185f20u;
    { uint32_t bits = FAST_READ32(0x480324u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185f24: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185f28: 0xc4200328  lwc1        $f0, 0x328($at)
    ctx->pc = 0x185f28u;
    { uint32_t bits = FAST_READ32(0x480328u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185f2c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x185f2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185f30: 0x0  nop
    ctx->pc = 0x185f30u;
    // NOP
    // 0x185f34: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x185F34u;
    {
        const bool branch_taken_0x185f34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185f34) {
            ctx->pc = 0x185FA4u;
            goto label_185fa4;
        }
    }
    ctx->pc = 0x185F3Cu;
    // 0x185f3c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185f40: 0xc421032c  lwc1        $f1, 0x32C($at)
    ctx->pc = 0x185f40u;
    { uint32_t bits = FAST_READ32(0x48032Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185f44: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185f48: 0xc4200328  lwc1        $f0, 0x328($at)
    ctx->pc = 0x185f48u;
    { uint32_t bits = FAST_READ32(0x480328u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185f4c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x185f4cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x185f50: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185f54: 0xc4200330  lwc1        $f0, 0x330($at)
    ctx->pc = 0x185f54u;
    { uint32_t bits = FAST_READ32(0x480330u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185f58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x185f58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185f5c: 0x0  nop
    ctx->pc = 0x185f5cu;
    // NOP
    // 0x185f60: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x185F60u;
    {
        const bool branch_taken_0x185f60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x185f60) {
            ctx->pc = 0x185F88u;
            goto label_185f88;
        }
    }
    ctx->pc = 0x185F68u;
    // 0x185f68: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185f6c: 0xc421032c  lwc1        $f1, 0x32C($at)
    ctx->pc = 0x185f6cu;
    { uint32_t bits = FAST_READ32(0x48032Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185f70: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185f74: 0xc4200328  lwc1        $f0, 0x328($at)
    ctx->pc = 0x185f74u;
    { uint32_t bits = FAST_READ32(0x480328u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185f78: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x185f78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x185f7c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x185f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x185f80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x185F80u;
    {
        const bool branch_taken_0x185f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185f80) {
            ctx->pc = 0x185F94u;
            goto label_185f94;
        }
    }
    ctx->pc = 0x185F88u;
label_185f88:
    // 0x185f88: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185f8c: 0xc4200330  lwc1        $f0, 0x330($at)
    ctx->pc = 0x185f8cu;
    { uint32_t bits = FAST_READ32(0x480330u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185f90: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x185f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_185f94:
    // 0x185f94: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x185f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185f98: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x185f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x185f9c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x185F9Cu;
    {
        const bool branch_taken_0x185f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185f9c) {
            ctx->pc = 0x186004u;
            goto label_186004;
        }
    }
    ctx->pc = 0x185FA4u;
label_185fa4:
    // 0x185fa4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185fa8: 0xc421032c  lwc1        $f1, 0x32C($at)
    ctx->pc = 0x185fa8u;
    { uint32_t bits = FAST_READ32(0x48032Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185fac: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185fb0: 0xc4200328  lwc1        $f0, 0x328($at)
    ctx->pc = 0x185fb0u;
    { uint32_t bits = FAST_READ32(0x480328u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185fb4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x185fb4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x185fb8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185fbc: 0xc4200330  lwc1        $f0, 0x330($at)
    ctx->pc = 0x185fbcu;
    { uint32_t bits = FAST_READ32(0x480330u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185fc0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x185fc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185fc4: 0x0  nop
    ctx->pc = 0x185fc4u;
    // NOP
    // 0x185fc8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x185FC8u;
    {
        const bool branch_taken_0x185fc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185fc8) {
            ctx->pc = 0x185FF0u;
            goto label_185ff0;
        }
    }
    ctx->pc = 0x185FD0u;
    // 0x185fd0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185fd4: 0xc421032c  lwc1        $f1, 0x32C($at)
    ctx->pc = 0x185fd4u;
    { uint32_t bits = FAST_READ32(0x48032Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185fd8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185fdc: 0xc4200328  lwc1        $f0, 0x328($at)
    ctx->pc = 0x185fdcu;
    { uint32_t bits = FAST_READ32(0x480328u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185fe0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x185fe0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x185fe4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x185fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x185fe8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x185FE8u;
    {
        const bool branch_taken_0x185fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185fe8) {
            ctx->pc = 0x185FFCu;
            goto label_185ffc;
        }
    }
    ctx->pc = 0x185FF0u;
label_185ff0:
    // 0x185ff0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185ff4: 0xc4200330  lwc1        $f0, 0x330($at)
    ctx->pc = 0x185ff4u;
    { uint32_t bits = FAST_READ32(0x480330u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185ff8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x185ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_185ffc:
    // 0x185ffc: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x185ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186000: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x186000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_186004:
    // 0x186004: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x186004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x186008: 0xc4210328  lwc1        $f1, 0x328($at)
    ctx->pc = 0x186008u;
    { uint32_t bits = FAST_READ32(0x480328u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18600c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x18600cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186010: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x186010u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x186014: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x186014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x186018: 0xe4200328  swc1        $f0, 0x328($at)
    ctx->pc = 0x186018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x480328u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480328u, _value); } while (0); }
label_18601c:
    // 0x18601c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18601cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x186020: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x186020u;
    SET_GPR_U32(ctx, 31, 0x186028u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x186020u, 0x186028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186028u;
label_186028:
    // 0x186028: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x186028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18602c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18602cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186030: 0x0  nop
    ctx->pc = 0x186030u;
    // NOP
    // 0x186034: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x186034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x186038: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x186038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18603c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x18603cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x186040: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x186040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x186044: 0x244602f0  addiu       $a2, $v0, 0x2F0
    ctx->pc = 0x186044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 752));
    // 0x186048: 0xc040c12  jal         func_103048
    ctx->pc = 0x186048u;
    SET_GPR_U32(ctx, 31, 0x186050u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x186050u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x186050u) { return; }
    ctx->pc = 0x186050u;
label_186050:
    // 0x186050: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x186050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x186054: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186058: 0x0  nop
    ctx->pc = 0x186058u;
    // NOP
    // 0x18605c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x18605cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x186060: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x186060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x186064: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x186064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x186068: 0x244502d0  addiu       $a1, $v0, 0x2D0
    ctx->pc = 0x186068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x18606c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x18606Cu;
    SET_GPR_U32(ctx, 31, 0x186074u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x186074u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x186074u) { return; }
    ctx->pc = 0x186074u;
label_186074:
    // 0x186074: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x186074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x186078: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x186078u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x18607c: 0x30420140  andi        $v0, $v0, 0x140
    ctx->pc = 0x18607cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)320);
    // 0x186080: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x186080u;
    {
        const bool branch_taken_0x186080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186080) {
            ctx->pc = 0x1860C4u;
            goto label_1860c4;
        }
    }
    ctx->pc = 0x186088u;
    // 0x186088: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x186088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x18608c: 0x8c23dbc8  lw          $v1, -0x2438($at)
    ctx->pc = 0x18608cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x186090: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x186090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x186094: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x186094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x186098: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x186098u;
    {
        const bool branch_taken_0x186098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186098) {
            ctx->pc = 0x1860C4u;
            goto label_1860c4;
        }
    }
    ctx->pc = 0x1860A0u;
    // 0x1860a0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1860a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1860a4: 0xc4200338  lwc1        $f0, 0x338($at)
    ctx->pc = 0x1860a4u;
    { uint32_t bits = FAST_READ32(0x480338u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1860a8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1860a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1860ac: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x1860acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1860b0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1860b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1860b4: 0xe42002c4  swc1        $f0, 0x2C4($at)
    ctx->pc = 0x1860b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x4802C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4802C4u, _value); } while (0); }
    // 0x1860b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1860b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1860bc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1860bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1860c0: 0xe4200328  swc1        $f0, 0x328($at)
    ctx->pc = 0x1860c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x480328u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480328u, _value); } while (0); }
label_1860c4:
    // 0x1860c4: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1860c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x1860c8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1860c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1860cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1860ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1860d0: 0x26040190  addiu       $a0, $s0, 0x190
    ctx->pc = 0x1860d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x1860d4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1860d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1860d8: 0x244502c0  addiu       $a1, $v0, 0x2C0
    ctx->pc = 0x1860d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    // 0x1860dc: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x1860dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x1860e0: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x1860E0u;
    SET_GPR_U32(ctx, 31, 0x1860E8u);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x1860E8u;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1860E8u) { return; }
    ctx->pc = 0x1860E8u;
label_1860e8:
    // 0x1860e8: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1860e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x1860ec: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1860ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1860f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1860f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1860f4: 0x260401a0  addiu       $a0, $s0, 0x1A0
    ctx->pc = 0x1860f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x1860f8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1860f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1860fc: 0x244502d0  addiu       $a1, $v0, 0x2D0
    ctx->pc = 0x1860fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x186100: 0x260601a0  addiu       $a2, $s0, 0x1A0
    ctx->pc = 0x186100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x186104: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x186104u;
    SET_GPR_U32(ctx, 31, 0x18610Cu);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x18610Cu;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18610Cu) { return; }
    ctx->pc = 0x18610Cu;
label_18610c:
    // 0x18610c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x18610cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186110: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x186110u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186114: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186114u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186118: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x186118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18611c: 0x3e00008  jr          $ra
    ctx->pc = 0x18611Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18611Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186124u;
}
