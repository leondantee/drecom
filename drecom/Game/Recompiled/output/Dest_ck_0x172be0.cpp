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

// Function: Dest_ck
// Address: 0x172be0 - 0x172ea8
void Dest_ck_0x172be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Dest_ck_0x172be0");
#endif

    switch (ctx->pc) {
        case 0x172c60u: goto label_172c60;
        default: break;
    }

    ctx->pc = 0x172be0u;

    // 0x172be0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x172be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x172be4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x172be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x172be8: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x172be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x172bec: 0xe7ac0048  swc1        $f12, 0x48($sp)
    ctx->pc = 0x172becu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x172bf0: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x172bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x172bf4: 0xe7ad0058  swc1        $f13, 0x58($sp)
    ctx->pc = 0x172bf4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x172bf8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x172bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x172bfc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x172bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172c00: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x172c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172c04: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x172c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172c08: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x172c08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x172c0c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x172c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x172c10: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x172c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x172c14: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x172c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172c18: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x172c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172c1c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x172c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172c20: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x172c20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x172c24: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x172c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x172c28: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x172c28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x172c2c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x172c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172c30: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x172c30u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172c34: 0x0  nop
    ctx->pc = 0x172c34u;
    // NOP
    // 0x172c38: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x172C38u;
    {
        const bool branch_taken_0x172c38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172c38) {
            ctx->pc = 0x172CA4u;
            goto label_172ca4;
        }
    }
    ctx->pc = 0x172C40u;
    // 0x172c40: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x172c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172c44: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x172c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172c48: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x172c48u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x172c4c: 0x0  nop
    ctx->pc = 0x172c4cu;
    // NOP
    // 0x172c50: 0x0  nop
    ctx->pc = 0x172c50u;
    // NOP
    // 0x172c54: 0x0  nop
    ctx->pc = 0x172c54u;
    // NOP
    // 0x172c58: 0xc045330  jal         func_114CC0
    ctx->pc = 0x172C58u;
    SET_GPR_U32(ctx, 31, 0x172C60u);
    ctx->pc = 0x114CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114CC0u, 0x172C58u, 0x172C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172C60u;
label_172c60:
    // 0x172c60: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x172c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x172c64: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x172c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172c68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x172c68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172c6c: 0x0  nop
    ctx->pc = 0x172c6cu;
    // NOP
    // 0x172c70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x172c70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172c74: 0x0  nop
    ctx->pc = 0x172c74u;
    // NOP
    // 0x172c78: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x172C78u;
    {
        const bool branch_taken_0x172c78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x172c78) {
            ctx->pc = 0x172CF8u;
            goto label_172cf8;
        }
    }
    ctx->pc = 0x172C80u;
    // 0x172c80: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x172c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172c84: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x172c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x172c88: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x172c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x172c8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172c8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172c90: 0x0  nop
    ctx->pc = 0x172c90u;
    // NOP
    // 0x172c94: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x172c94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x172c98: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x172c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x172c9c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x172C9Cu;
    {
        const bool branch_taken_0x172c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172c9c) {
            ctx->pc = 0x172CF8u;
            goto label_172cf8;
        }
    }
    ctx->pc = 0x172CA4u;
label_172ca4:
    // 0x172ca4: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x172ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172ca8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x172ca8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172cac: 0x0  nop
    ctx->pc = 0x172cacu;
    // NOP
    // 0x172cb0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172cb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172cb4: 0x0  nop
    ctx->pc = 0x172cb4u;
    // NOP
    // 0x172cb8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x172CB8u;
    {
        const bool branch_taken_0x172cb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172cb8) {
            ctx->pc = 0x172CDCu;
            goto label_172cdc;
        }
    }
    ctx->pc = 0x172CC0u;
    // 0x172cc0: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x172cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x172cc4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x172cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x172cc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172cc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172ccc: 0x0  nop
    ctx->pc = 0x172cccu;
    // NOP
    // 0x172cd0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x172cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x172cd4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x172CD4u;
    {
        const bool branch_taken_0x172cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172cd4) {
            ctx->pc = 0x172CF0u;
            goto label_172cf0;
        }
    }
    ctx->pc = 0x172CDCu;
label_172cdc:
    // 0x172cdc: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x172cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x172ce0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x172ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x172ce4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172ce8: 0x0  nop
    ctx->pc = 0x172ce8u;
    // NOP
    // 0x172cec: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x172cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_172cf0:
    // 0x172cf0: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x172cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172cf4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x172cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_172cf8:
    // 0x172cf8: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x172cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172cfc: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x172cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172d00: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x172d00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x172d04: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x172d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x172d08: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x172d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172d0c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x172d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x172d10: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x172d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x172d14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172d18: 0x0  nop
    ctx->pc = 0x172d18u;
    // NOP
    // 0x172d1c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172d1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172d20: 0x0  nop
    ctx->pc = 0x172d20u;
    // NOP
    // 0x172d24: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x172D24u;
    {
        const bool branch_taken_0x172d24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172d24) {
            ctx->pc = 0x172D48u;
            goto label_172d48;
        }
    }
    ctx->pc = 0x172D2Cu;
    // 0x172d2c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x172d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172d30: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x172d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x172d34: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x172d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x172d38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172d38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172d3c: 0x0  nop
    ctx->pc = 0x172d3cu;
    // NOP
    // 0x172d40: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x172d40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x172d44: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x172d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_172d48:
    // 0x172d48: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x172d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172d4c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x172d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x172d50: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x172d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x172d54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172d54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172d58: 0x0  nop
    ctx->pc = 0x172d58u;
    // NOP
    // 0x172d5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x172d5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172d60: 0x0  nop
    ctx->pc = 0x172d60u;
    // NOP
    // 0x172d64: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x172D64u;
    {
        const bool branch_taken_0x172d64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x172d64) {
            ctx->pc = 0x172D88u;
            goto label_172d88;
        }
    }
    ctx->pc = 0x172D6Cu;
    // 0x172d6c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x172d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172d70: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x172d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x172d74: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x172d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x172d78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172d78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172d7c: 0x0  nop
    ctx->pc = 0x172d7cu;
    // NOP
    // 0x172d80: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x172d80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x172d84: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x172d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_172d88:
    // 0x172d88: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x172d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172d8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x172d8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172d90: 0x0  nop
    ctx->pc = 0x172d90u;
    // NOP
    // 0x172d94: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172d94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172d98: 0x0  nop
    ctx->pc = 0x172d98u;
    // NOP
    // 0x172d9c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x172D9Cu;
    {
        const bool branch_taken_0x172d9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172d9c) {
            ctx->pc = 0x172DBCu;
            goto label_172dbc;
        }
    }
    ctx->pc = 0x172DA4u;
    // 0x172da4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x172da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x172da8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172da8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172dac: 0x0  nop
    ctx->pc = 0x172dacu;
    // NOP
    // 0x172db0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x172db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x172db4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x172DB4u;
    {
        const bool branch_taken_0x172db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172db4) {
            ctx->pc = 0x172DCCu;
            goto label_172dcc;
        }
    }
    ctx->pc = 0x172DBCu;
label_172dbc:
    // 0x172dbc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x172dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x172dc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172dc4: 0x0  nop
    ctx->pc = 0x172dc4u;
    // NOP
    // 0x172dc8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x172dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_172dcc:
    // 0x172dcc: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x172dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172dd0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x172dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x172dd4: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x172dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172dd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x172dd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172ddc: 0x0  nop
    ctx->pc = 0x172ddcu;
    // NOP
    // 0x172de0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172de0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172de4: 0x0  nop
    ctx->pc = 0x172de4u;
    // NOP
    // 0x172de8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x172DE8u;
    {
        const bool branch_taken_0x172de8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172de8) {
            ctx->pc = 0x172E00u;
            goto label_172e00;
        }
    }
    ctx->pc = 0x172DF0u;
    // 0x172df0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x172df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172df4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x172df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x172df8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x172DF8u;
    {
        const bool branch_taken_0x172df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172df8) {
            ctx->pc = 0x172E0Cu;
            goto label_172e0c;
        }
    }
    ctx->pc = 0x172E00u;
label_172e00:
    // 0x172e00: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x172e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172e04: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x172e04u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x172e08: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x172e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_172e0c:
    // 0x172e0c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x172e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172e10: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x172e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172e14: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172e14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172e18: 0x0  nop
    ctx->pc = 0x172e18u;
    // NOP
    // 0x172e1c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x172E1Cu;
    {
        const bool branch_taken_0x172e1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172e1c) {
            ctx->pc = 0x172E34u;
            goto label_172e34;
        }
    }
    ctx->pc = 0x172E24u;
    // 0x172e24: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x172e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172e28: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x172e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x172e2c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x172E2Cu;
    {
        const bool branch_taken_0x172e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172e2c) {
            ctx->pc = 0x172E74u;
            goto label_172e74;
        }
    }
    ctx->pc = 0x172E34u;
label_172e34:
    // 0x172e34: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x172e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172e38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x172e38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172e3c: 0x0  nop
    ctx->pc = 0x172e3cu;
    // NOP
    // 0x172e40: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172e40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172e44: 0x0  nop
    ctx->pc = 0x172e44u;
    // NOP
    // 0x172e48: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x172E48u;
    {
        const bool branch_taken_0x172e48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172e48) {
            ctx->pc = 0x172E60u;
            goto label_172e60;
        }
    }
    ctx->pc = 0x172E50u;
    // 0x172e50: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x172e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172e54: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x172e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x172e58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x172E58u;
    {
        const bool branch_taken_0x172e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172e58) {
            ctx->pc = 0x172E6Cu;
            goto label_172e6c;
        }
    }
    ctx->pc = 0x172E60u;
label_172e60:
    // 0x172e60: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x172e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172e64: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x172e64u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x172e68: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x172e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_172e6c:
    // 0x172e6c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x172e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172e70: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x172e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_172e74:
    // 0x172e74: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x172e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172e78: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x172e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x172e7c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x172e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172e80: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x172e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172e84: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x172e84u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172e88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x172e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x172e8c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x172E8Cu;
    {
        const bool branch_taken_0x172e8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x172e8c) {
            ctx->pc = 0x172E98u;
            goto label_172e98;
        }
    }
    ctx->pc = 0x172E94u;
    // 0x172e94: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x172e94u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_172e98:
    // 0x172e98: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x172e98u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172e9c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x172e9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x172ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x172EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172EA8u;
}
