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

// Function: entry_00189bc4
// Address: 0x189bc4 - 0x189cc0
void entry_00189bc4_0x189bc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189bc4_0x189bc4");
#endif

    switch (ctx->pc) {
        case 0x189c50u: goto label_189c50;
        default: break;
    }

    ctx->pc = 0x189bc4u;

    // 0x189bc4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189bc8: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x189bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189bcc: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189bd0: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x189bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189bd4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x189bd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x189bd8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x189bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x189bdc: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189be0: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x189be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189be4: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189be8: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x189be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189bec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x189becu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x189bf0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x189bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x189bf4: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x189bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189bf8: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x189bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189bfc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x189bfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x189c00: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x189c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x189c04: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189c08: 0x8c4200e8  lw          $v0, 0xE8($v0)
    ctx->pc = 0x189c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x189c0c: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x189C0Cu;
    {
        const bool branch_taken_0x189c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189c0c) {
            ctx->pc = 0x189D44u;
            return;
        }
    }
    ctx->pc = 0x189C14u;
    // 0x189c14: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189c18: 0x8c4200e8  lw          $v0, 0xE8($v0)
    ctx->pc = 0x189c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x189c1c: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x189C1Cu;
    {
        const bool branch_taken_0x189c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189c1c) {
            ctx->pc = 0x189D44u;
            return;
        }
    }
    ctx->pc = 0x189C24u;
    // 0x189c24: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x189c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189c28: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x189c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189c2c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x189c2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x189c30: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x189c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189c34: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x189c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189c38: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x189c38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x189c3c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x189c3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x189c40: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x189c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x189c44: 0xc7ac00ac  lwc1        $f12, 0xAC($sp)
    ctx->pc = 0x189c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x189c48: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x189C48u;
    SET_GPR_U32(ctx, 31, 0x189C50u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x189C48u, 0x189C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189C50u;
label_189c50:
    // 0x189c50: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x189c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x189c54: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x189c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189c58: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x189c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189c5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x189c5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189c60: 0x0  nop
    ctx->pc = 0x189c60u;
    // NOP
    // 0x189c64: 0x45000102  bc1f        . + 4 + (0x102 << 2)
    ctx->pc = 0x189C64u;
    {
        const bool branch_taken_0x189c64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x189c64) {
            ctx->pc = 0x18A070u;
            return;
        }
    }
    ctx->pc = 0x189C6Cu;
    // 0x189c6c: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x189c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189c70: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x189c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189c74: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x189c74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x189c78: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x189c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x189c7c: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x189c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189c80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x189c80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189c84: 0x0  nop
    ctx->pc = 0x189c84u;
    // NOP
    // 0x189c88: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x189c88u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189c8c: 0x0  nop
    ctx->pc = 0x189c8cu;
    // NOP
    // 0x189c90: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x189C90u;
    {
        const bool branch_taken_0x189c90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x189c90) {
            ctx->pc = 0x189CC0u;
            return;
        }
    }
    ctx->pc = 0x189C98u;
    // 0x189c98: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x189c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189c9c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x189c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189ca0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x189ca0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x189ca4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189ca8: 0xe44000c0  swc1        $f0, 0xC0($v0)
    ctx->pc = 0x189ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
    // 0x189cac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x189cacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189cb0: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189cb4: 0xe44000c8  swc1        $f0, 0xC8($v0)
    ctx->pc = 0x189cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 200), bits); }
    // 0x189cb8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x189CB8u;
    {
        const bool branch_taken_0x189cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189cb8) {
            ctx->pc = 0x189D28u;
            return;
        }
    }
    ctx->pc = 0x189CC0u;
}
