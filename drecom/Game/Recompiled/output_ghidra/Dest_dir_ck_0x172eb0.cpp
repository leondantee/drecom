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

// Function: Dest_dir_ck
// Address: 0x172eb0 - 0x173074
void Dest_dir_ck_0x172eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Dest_dir_ck_0x172eb0");
#endif

    ctx->pc = 0x172eb0u;

    // 0x172eb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x172eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x172eb4: 0xe7ac0028  swc1        $f12, 0x28($sp)
    ctx->pc = 0x172eb4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x172eb8: 0xe7ad0030  swc1        $f13, 0x30($sp)
    ctx->pc = 0x172eb8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x172ebc: 0xe7ae0038  swc1        $f14, 0x38($sp)
    ctx->pc = 0x172ebcu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x172ec0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x172ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172ec4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x172ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x172ec8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x172ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172ecc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x172eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172ed0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x172ed0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x172ed4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x172ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x172ed8: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x172ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172edc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x172edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x172ee0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x172ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x172ee4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172ee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172ee8: 0x0  nop
    ctx->pc = 0x172ee8u;
    // NOP
    // 0x172eec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172eecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172ef0: 0x0  nop
    ctx->pc = 0x172ef0u;
    // NOP
    // 0x172ef4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x172EF4u;
    {
        const bool branch_taken_0x172ef4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172ef4) {
            ctx->pc = 0x172F18u;
            goto label_172f18;
        }
    }
    ctx->pc = 0x172EFCu;
    // 0x172efc: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x172efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172f00: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x172f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x172f04: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x172f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x172f08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172f08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172f0c: 0x0  nop
    ctx->pc = 0x172f0cu;
    // NOP
    // 0x172f10: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x172f10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x172f14: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x172f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_172f18:
    // 0x172f18: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x172f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172f1c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x172f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x172f20: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x172f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x172f24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172f24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172f28: 0x0  nop
    ctx->pc = 0x172f28u;
    // NOP
    // 0x172f2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x172f2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172f30: 0x0  nop
    ctx->pc = 0x172f30u;
    // NOP
    // 0x172f34: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x172F34u;
    {
        const bool branch_taken_0x172f34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x172f34) {
            ctx->pc = 0x172F58u;
            goto label_172f58;
        }
    }
    ctx->pc = 0x172F3Cu;
    // 0x172f3c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x172f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172f40: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x172f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x172f44: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x172f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x172f48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172f48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172f4c: 0x0  nop
    ctx->pc = 0x172f4cu;
    // NOP
    // 0x172f50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x172f50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x172f54: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x172f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_172f58:
    // 0x172f58: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x172f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172f5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x172f5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172f60: 0x0  nop
    ctx->pc = 0x172f60u;
    // NOP
    // 0x172f64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172f64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172f68: 0x0  nop
    ctx->pc = 0x172f68u;
    // NOP
    // 0x172f6c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x172F6Cu;
    {
        const bool branch_taken_0x172f6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172f6c) {
            ctx->pc = 0x172F8Cu;
            goto label_172f8c;
        }
    }
    ctx->pc = 0x172F74u;
    // 0x172f74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x172f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x172f78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172f78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172f7c: 0x0  nop
    ctx->pc = 0x172f7cu;
    // NOP
    // 0x172f80: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x172f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x172f84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x172F84u;
    {
        const bool branch_taken_0x172f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172f84) {
            ctx->pc = 0x172F9Cu;
            goto label_172f9c;
        }
    }
    ctx->pc = 0x172F8Cu;
label_172f8c:
    // 0x172f8c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x172f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x172f90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172f90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172f94: 0x0  nop
    ctx->pc = 0x172f94u;
    // NOP
    // 0x172f98: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x172f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_172f9c:
    // 0x172f9c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x172f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172fa0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x172fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x172fa4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x172fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172fa8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x172fa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172fac: 0x0  nop
    ctx->pc = 0x172facu;
    // NOP
    // 0x172fb0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172fb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172fb4: 0x0  nop
    ctx->pc = 0x172fb4u;
    // NOP
    // 0x172fb8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x172FB8u;
    {
        const bool branch_taken_0x172fb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172fb8) {
            ctx->pc = 0x172FD0u;
            goto label_172fd0;
        }
    }
    ctx->pc = 0x172FC0u;
    // 0x172fc0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x172fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172fc4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x172fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x172fc8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x172FC8u;
    {
        const bool branch_taken_0x172fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172fc8) {
            ctx->pc = 0x172FDCu;
            goto label_172fdc;
        }
    }
    ctx->pc = 0x172FD0u;
label_172fd0:
    // 0x172fd0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x172fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172fd4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x172fd4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x172fd8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x172fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_172fdc:
    // 0x172fdc: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x172fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172fe0: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x172fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172fe4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172fe4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172fe8: 0x0  nop
    ctx->pc = 0x172fe8u;
    // NOP
    // 0x172fec: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x172FECu;
    {
        const bool branch_taken_0x172fec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172fec) {
            ctx->pc = 0x173004u;
            goto label_173004;
        }
    }
    ctx->pc = 0x172FF4u;
    // 0x172ff4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x172ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172ff8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x172ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x172ffc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x172FFCu;
    {
        const bool branch_taken_0x172ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172ffc) {
            ctx->pc = 0x173044u;
            goto label_173044;
        }
    }
    ctx->pc = 0x173004u;
label_173004:
    // 0x173004: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x173004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173008: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x173008u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17300c: 0x0  nop
    ctx->pc = 0x17300cu;
    // NOP
    // 0x173010: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x173010u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173014: 0x0  nop
    ctx->pc = 0x173014u;
    // NOP
    // 0x173018: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x173018u;
    {
        const bool branch_taken_0x173018 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x173018) {
            ctx->pc = 0x173030u;
            goto label_173030;
        }
    }
    ctx->pc = 0x173020u;
    // 0x173020: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x173020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173024: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x173024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x173028: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x173028u;
    {
        const bool branch_taken_0x173028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173028) {
            ctx->pc = 0x17303Cu;
            goto label_17303c;
        }
    }
    ctx->pc = 0x173030u;
label_173030:
    // 0x173030: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x173030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173034: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x173034u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x173038: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x173038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_17303c:
    // 0x17303c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x17303cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173040: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x173040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_173044:
    // 0x173044: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x173044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173048: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x173048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x17304c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x17304cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173050: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x173050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173054: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x173054u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173058: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x173058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17305c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x17305Cu;
    {
        const bool branch_taken_0x17305c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17305c) {
            ctx->pc = 0x173068u;
            goto label_173068;
        }
    }
    ctx->pc = 0x173064u;
    // 0x173064: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x173064u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_173068:
    // 0x173068: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x173068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17306c: 0x3e00008  jr          $ra
    ctx->pc = 0x17306Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17306Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173074u;
}
