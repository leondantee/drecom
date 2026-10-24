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

// Function: entry_0031fc30
// Address: 0x31fc30 - 0x31fd20
void entry_0031fc30_0x31fc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031fc30_0x31fc30");
#endif

    switch (ctx->pc) {
        case 0x31fc68u: goto label_31fc68;
        case 0x31fc88u: goto label_31fc88;
        case 0x31fca0u: goto label_31fca0;
        case 0x31fcbcu: goto label_31fcbc;
        default: break;
    }

    ctx->pc = 0x31fc30u;

    // 0x31fc30: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fc34: 0x94630340  lhu         $v1, 0x340($v1)
    ctx->pc = 0x31fc34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 832)));
    // 0x31fc38: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x31fc38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x31fc3c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x31fc3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x31fc40: 0x106000a3  beqz        $v1, . + 4 + (0xA3 << 2)
    ctx->pc = 0x31FC40u;
    {
        const bool branch_taken_0x31fc40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fc40) {
            ctx->pc = 0x31FED0u;
            return;
        }
    }
    ctx->pc = 0x31FC48u;
    // 0x31fc48: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31fc48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fc4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fc50: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31fc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fc54: 0x248402f0  addiu       $a0, $a0, 0x2F0
    ctx->pc = 0x31fc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 752));
    // 0x31fc58: 0x246502f0  addiu       $a1, $v1, 0x2F0
    ctx->pc = 0x31fc58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 752));
    // 0x31fc5c: 0x24460300  addiu       $a2, $v0, 0x300
    ctx->pc = 0x31fc5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x31fc60: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x31FC60u;
    SET_GPR_U32(ctx, 31, 0x31FC68u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x31FC60u, 0x31FC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FC68u;
label_31fc68:
    // 0x31fc68: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31fc68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fc6c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fc70: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31fc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fc74: 0x248402b0  addiu       $a0, $a0, 0x2B0
    ctx->pc = 0x31fc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 688));
    // 0x31fc78: 0x246502f0  addiu       $a1, $v1, 0x2F0
    ctx->pc = 0x31fc78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 752));
    // 0x31fc7c: 0x244602b0  addiu       $a2, $v0, 0x2B0
    ctx->pc = 0x31fc7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x31fc80: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x31FC80u;
    SET_GPR_U32(ctx, 31, 0x31FC88u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x31FC80u, 0x31FC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FC88u;
label_31fc88:
    // 0x31fc88: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fc8c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fc90: 0x246403c0  addiu       $a0, $v1, 0x3C0
    ctx->pc = 0x31fc90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
    // 0x31fc94: 0x8c450324  lw          $a1, 0x324($v0)
    ctx->pc = 0x31fc94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
    // 0x31fc98: 0xc040ca2  jal         func_103288
    ctx->pc = 0x31FC98u;
    SET_GPR_U32(ctx, 31, 0x31FCA0u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x31FCA0u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31FCA0u) { return; }
    ctx->pc = 0x31FCA0u;
label_31fca0:
    // 0x31fca0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fca4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31fca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fca8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x31fca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31fcac: 0x246503c0  addiu       $a1, $v1, 0x3C0
    ctx->pc = 0x31fcacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
    // 0x31fcb0: 0x244602b0  addiu       $a2, $v0, 0x2B0
    ctx->pc = 0x31fcb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x31fcb4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x31FCB4u;
    SET_GPR_U32(ctx, 31, 0x31FCBCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x31FCBCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31FCBCu) { return; }
    ctx->pc = 0x31FCBCu;
label_31fcbc:
    // 0x31fcbc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x31fcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x31fcc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31fcc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31fcc4: 0x0  nop
    ctx->pc = 0x31fcc4u;
    // NOP
    // 0x31fcc8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x31fcc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x31fccc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fcd0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x31fcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31fcd4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x31fcd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31fcd8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x31fcd8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31fcdc: 0x0  nop
    ctx->pc = 0x31fcdcu;
    // NOP
    // 0x31fce0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x31FCE0u;
    {
        const bool branch_taken_0x31fce0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31fce0) {
            ctx->pc = 0x31FD20u;
            return;
        }
    }
    ctx->pc = 0x31FCE8u;
    // 0x31fce8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fcec: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x31fcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31fcf0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x31fcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31fcf4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x31fcf4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31fcf8: 0x0  nop
    ctx->pc = 0x31fcf8u;
    // NOP
    // 0x31fcfc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x31FCFCu;
    {
        const bool branch_taken_0x31fcfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31fcfc) {
            ctx->pc = 0x31FD20u;
            return;
        }
    }
    ctx->pc = 0x31FD04u;
    // 0x31fd04: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fd08: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x31fd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31fd0c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x31fd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31fd10: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x31fd10u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31fd14: 0x0  nop
    ctx->pc = 0x31fd14u;
    // NOP
    // 0x31fd18: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x31FD18u;
    {
        const bool branch_taken_0x31fd18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31fd18) {
            ctx->pc = 0x31FD58u;
            return;
        }
    }
    ctx->pc = 0x31FD20u;
}
