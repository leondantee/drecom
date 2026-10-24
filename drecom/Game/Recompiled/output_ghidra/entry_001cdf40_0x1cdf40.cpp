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

// Function: entry_001cdf40
// Address: 0x1cdf40 - 0x1cdfec
void entry_001cdf40_0x1cdf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdf40_0x1cdf40");
#endif

    switch (ctx->pc) {
        case 0x1cdfb8u: goto label_1cdfb8;
        default: break;
    }

    ctx->pc = 0x1cdf40u;

    // 0x1cdf40: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cdf40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdf44: 0x908309df  lbu         $v1, 0x9DF($a0)
    ctx->pc = 0x1cdf44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2527)));
    // 0x1cdf48: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1cdf48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1cdf4c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1cdf4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1cdf50: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x1CDF50u;
    {
        const bool branch_taken_0x1cdf50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdf50) {
            ctx->pc = 0x1CE01Cu;
            return;
        }
    }
    ctx->pc = 0x1CDF58u;
    // 0x1cdf58: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1cdf58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1cdf5c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1cdf5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1cdf60: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x1CDF60u;
    {
        const bool branch_taken_0x1cdf60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdf60) {
            ctx->pc = 0x1CE01Cu;
            return;
        }
    }
    ctx->pc = 0x1CDF68u;
    // 0x1cdf68: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1cdf68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdf6c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1cdf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1cdf70: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1cdf70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1cdf74: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1cdf74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1cdf78: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1cdf78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1cdf7c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdf80: 0xc4611388  lwc1        $f1, 0x1388($v1)
    ctx->pc = 0x1cdf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cdf84: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x1cdf84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x1cdf88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cdf88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cdf8c: 0x0  nop
    ctx->pc = 0x1cdf8cu;
    // NOP
    // 0x1cdf90: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cdf90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cdf94: 0x0  nop
    ctx->pc = 0x1cdf94u;
    // NOP
    // 0x1cdf98: 0x45010020  bc1t        . + 4 + (0x20 << 2)
    ctx->pc = 0x1CDF98u;
    {
        const bool branch_taken_0x1cdf98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cdf98) {
            ctx->pc = 0x1CE01Cu;
            return;
        }
    }
    ctx->pc = 0x1CDFA0u;
    // 0x1cdfa0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cdfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdfa4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdfa8: 0xc48c00d4  lwc1        $f12, 0xD4($a0)
    ctx->pc = 0x1cdfa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cdfac: 0xc46d1380  lwc1        $f13, 0x1380($v1)
    ctx->pc = 0x1cdfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cdfb0: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1CDFB0u;
    SET_GPR_U32(ctx, 31, 0x1CDFB8u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1CDFB0u, 0x1CDFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDFB8u;
label_1cdfb8:
    // 0x1cdfb8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1cdfb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1cdfbc: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1cdfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cdfc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cdfc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cdfc4: 0x0  nop
    ctx->pc = 0x1cdfc4u;
    // NOP
    // 0x1cdfc8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cdfc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cdfcc: 0x0  nop
    ctx->pc = 0x1cdfccu;
    // NOP
    // 0x1cdfd0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1CDFD0u;
    {
        const bool branch_taken_0x1cdfd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cdfd0) {
            ctx->pc = 0x1CDFECu;
            return;
        }
    }
    ctx->pc = 0x1CDFD8u;
    // 0x1cdfd8: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x1cdfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
    // 0x1cdfdc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1cdfdcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cdfe0: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1cdfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdfe4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cdfe4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cdfe8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1cdfe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->pc = 0x1cdfecu;
}
