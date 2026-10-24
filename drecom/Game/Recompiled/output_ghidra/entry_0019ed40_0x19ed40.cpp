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

// Function: entry_0019ed40
// Address: 0x19ed40 - 0x19ee54
void entry_0019ed40_0x19ed40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ed40_0x19ed40");
#endif

    switch (ctx->pc) {
        case 0x19ed7cu: goto label_19ed7c;
        case 0x19edb4u: goto label_19edb4;
        case 0x19ee00u: goto label_19ee00;
        case 0x19ee10u: goto label_19ee10;
        case 0x19ee20u: goto label_19ee20;
        default: break;
    }

    ctx->pc = 0x19ed40u;

    // 0x19ed40: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19ed40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19ed44: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x19ed44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x19ed48: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x19ed48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x19ed4c: 0x146000c3  bnez        $v1, . + 4 + (0xC3 << 2)
    ctx->pc = 0x19ED4Cu;
    {
        const bool branch_taken_0x19ed4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ed4c) {
            ctx->pc = 0x19F05Cu;
            return;
        }
    }
    ctx->pc = 0x19ED54u;
    // 0x19ed54: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19ed54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19ed58: 0x8c231a40  lw          $v1, 0x1A40($at)
    ctx->pc = 0x19ed58u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A40u));
    // 0x19ed5c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x19ed5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x19ed60: 0x146000be  bnez        $v1, . + 4 + (0xBE << 2)
    ctx->pc = 0x19ED60u;
    {
        const bool branch_taken_0x19ed60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ed60) {
            ctx->pc = 0x19F05Cu;
            return;
        }
    }
    ctx->pc = 0x19ED68u;
    // 0x19ed68: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19ed68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x19ed6c: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x19ed6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x19ed70: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x19ed70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19ed74: 0xc0ce8fc  jal         func_33A3F0
    ctx->pc = 0x19ED74u;
    SET_GPR_U32(ctx, 31, 0x19ED7Cu);
    ctx->pc = 0x33A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A3F0u, 0x19ED74u, 0x19ED7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ED7Cu;
label_19ed7c:
    // 0x19ed7c: 0x104000b7  beqz        $v0, . + 4 + (0xB7 << 2)
    ctx->pc = 0x19ED7Cu;
    {
        const bool branch_taken_0x19ed7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ed7c) {
            ctx->pc = 0x19F05Cu;
            return;
        }
    }
    ctx->pc = 0x19ED84u;
    // 0x19ed84: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x19ed84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x19ed88: 0xac30c560  sw          $s0, -0x3AA0($at)
    ctx->pc = 0x19ed88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x5FC560u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC560u, _value); } while (0);
    // 0x19ed8c: 0x97a200e0  lhu         $v0, 0xE0($sp)
    ctx->pc = 0x19ed8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x19ed90: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x19ed90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19ed94: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x19ed94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x19ed98: 0xac22c564  sw          $v0, -0x3A9C($at)
    ctx->pc = 0x19ed98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC564u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC564u, _value); } while (0);
    // 0x19ed9c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x19ed9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19eda0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x19eda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x19eda4: 0x2445c520  addiu       $a1, $v0, -0x3AE0
    ctx->pc = 0x19eda4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952224));
    // 0x19eda8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19eda8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19edac: 0xc0762e8  jal         func_1D8BA0
    ctx->pc = 0x19EDACu;
    SET_GPR_U32(ctx, 31, 0x19EDB4u);
    ctx->pc = 0x1D8BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BA0u, 0x19EDACu, 0x19EDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EDB4u;
label_19edb4:
    // 0x19edb4: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x19edb4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x19edb8: 0x82e20005  lb          $v0, 0x5($s7)
    ctx->pc = 0x19edb8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 5)));
    // 0x19edbc: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x19edbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x19edc0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x19edc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x19edc4: 0x2442007f  addiu       $v0, $v0, 0x7F
    ctx->pc = 0x19edc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
    // 0x19edc8: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x19edc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x19edcc: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x19edccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x19edd0: 0x29e3c  dsll32      $s3, $v0, 24
    ctx->pc = 0x19edd0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 24));
    // 0x19edd4: 0x139e3f  dsra32      $s3, $s3, 24
    ctx->pc = 0x19edd4u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 24));
    // 0x19edd8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x19edd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x19eddc: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x19EDDCu;
    {
        const bool branch_taken_0x19eddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19eddc) {
            ctx->pc = 0x19EFDCu;
            return;
        }
    }
    ctx->pc = 0x19EDE4u;
    // 0x19ede4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x19ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x19ede8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x19ede8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19edec: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x19edecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x19edf0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x19edf0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x19edf4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x19edf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x19edf8: 0xc056a78  jal         func_15A9E0
    ctx->pc = 0x19EDF8u;
    SET_GPR_U32(ctx, 31, 0x19EE00u);
    ctx->pc = 0x15A9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A9E0u, 0x19EDF8u, 0x19EE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EE00u;
label_19ee00:
    // 0x19ee00: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x19ee00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x19ee04: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x19ee04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x19ee08: 0xc05f7ac  jal         func_17DEB0
    ctx->pc = 0x19EE08u;
    SET_GPR_U32(ctx, 31, 0x19EE10u);
    ctx->pc = 0x17DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DEB0u, 0x19EE08u, 0x19EE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EE10u;
label_19ee10:
    // 0x19ee10: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x19ee10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x19ee14: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x19ee14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x19ee18: 0xc056a38  jal         func_15A8E0
    ctx->pc = 0x19EE18u;
    SET_GPR_U32(ctx, 31, 0x19EE20u);
    ctx->pc = 0x15A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A8E0u, 0x19EE18u, 0x19EE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EE20u;
label_19ee20:
    // 0x19ee20: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x19ee20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x19ee24: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x19ee24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19ee28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19ee28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ee2c: 0x0  nop
    ctx->pc = 0x19ee2cu;
    // NOP
    // 0x19ee30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19ee30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19ee34: 0x0  nop
    ctx->pc = 0x19ee34u;
    // NOP
    // 0x19ee38: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x19EE38u;
    {
        const bool branch_taken_0x19ee38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19ee38) {
            ctx->pc = 0x19EE54u;
            return;
        }
    }
    ctx->pc = 0x19EE40u;
    // 0x19ee40: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x19ee40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ee44: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19ee44u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x19ee48: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x19ee48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x19ee4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19EE4Cu;
    {
        const bool branch_taken_0x19ee4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ee4c) {
            ctx->pc = 0x19EE5Cu;
            return;
        }
    }
    ctx->pc = 0x19EE54u;
}
