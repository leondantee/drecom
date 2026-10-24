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

// Function: entry_00169a68
// Address: 0x169a68 - 0x169b50
void entry_00169a68_0x169a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169a68_0x169a68");
#endif

    switch (ctx->pc) {
        case 0x169ad8u: goto label_169ad8;
        case 0x169ae8u: goto label_169ae8;
        case 0x169af8u: goto label_169af8;
        default: break;
    }

    ctx->pc = 0x169a68u;

    // 0x169a68: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169a6c: 0x8c22bb30  lw          $v0, -0x44D0($at)
    ctx->pc = 0x169a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB30u));
    // 0x169a70: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x169A70u;
    {
        const bool branch_taken_0x169a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169a70) {
            ctx->pc = 0x169B50u;
            return;
        }
    }
    ctx->pc = 0x169A78u;
    // 0x169a78: 0x3c025015  lui         $v0, 0x5015
    ctx->pc = 0x169a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20501 << 16));
    // 0x169a7c: 0x344202f9  ori         $v0, $v0, 0x2F9
    ctx->pc = 0x169a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)761);
    // 0x169a80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169a80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169a84: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169a88: 0xe420ab00  swc1        $f0, -0x5500($at)
    ctx->pc = 0x169a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AB00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB00u, _value); } while (0); }
    // 0x169a8c: 0x26020120  addiu       $v0, $s0, 0x120
    ctx->pc = 0x169a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x169a90: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x169a90u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169a94: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x169a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x169a98: 0x2442aad0  addiu       $v0, $v0, -0x5530
    ctx->pc = 0x169a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x169a9c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x169a9cu;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x47AAD0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x47AAD0u, _value); } while (0);
    // 0x169aa0: 0x26020120  addiu       $v0, $s0, 0x120
    ctx->pc = 0x169aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x169aa4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x169aa4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169aa8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x169aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x169aac: 0x2442aae0  addiu       $v0, $v0, -0x5520
    ctx->pc = 0x169aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
    // 0x169ab0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x169ab0u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x47AAE0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x47AAE0u, _value); } while (0);
    // 0x169ab4: 0xc60111e4  lwc1        $f1, 0x11E4($s0)
    ctx->pc = 0x169ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169ab8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169abc: 0xc420aae4  lwc1        $f0, -0x551C($at)
    ctx->pc = 0x169abcu;
    { uint32_t bits = FAST_READ32(0x47AAE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169ac0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x169ac0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x169ac4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169ac8: 0xe420aae4  swc1        $f0, -0x551C($at)
    ctx->pc = 0x169ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AAE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AAE4u, _value); } while (0); }
    // 0x169acc: 0xc60c11e0  lwc1        $f12, 0x11E0($s0)
    ctx->pc = 0x169accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x169ad0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x169AD0u;
    SET_GPR_U32(ctx, 31, 0x169AD8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x169AD0u, 0x169AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169AD8u;
label_169ad8:
    // 0x169ad8: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x169ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x169adc: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x169adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x169ae0: 0xc05a76c  jal         func_169DB0
    ctx->pc = 0x169AE0u;
    SET_GPR_U32(ctx, 31, 0x169AE8u);
    ctx->pc = 0x169DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169DB0u, 0x169AE0u, 0x169AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169AE8u;
label_169ae8:
    // 0x169ae8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x169ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x169aec: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x169aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x169af0: 0xc05b068  jal         func_16C1A0
    ctx->pc = 0x169AF0u;
    SET_GPR_U32(ctx, 31, 0x169AF8u);
    ctx->pc = 0x16C1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C1A0u, 0x169AF0u, 0x169AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169AF8u;
label_169af8:
    // 0x169af8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x169af8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x169afc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169b00: 0xc420ab00  lwc1        $f0, -0x5500($at)
    ctx->pc = 0x169b00u;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169b04: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x169b04u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x169b08: 0x0  nop
    ctx->pc = 0x169b08u;
    // NOP
    // 0x169b0c: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x169B0Cu;
    {
        const bool branch_taken_0x169b0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x169b0c) {
            ctx->pc = 0x169B50u;
            return;
        }
    }
    ctx->pc = 0x169B14u;
    // 0x169b14: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169b18: 0xc422ab00  lwc1        $f2, -0x5500($at)
    ctx->pc = 0x169b18u;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x169b1c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169b20: 0xc421ab08  lwc1        $f1, -0x54F8($at)
    ctx->pc = 0x169b20u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169b24: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169b28: 0xc420ab08  lwc1        $f0, -0x54F8($at)
    ctx->pc = 0x169b28u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169b2c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x169b2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x169b30: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x169b30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x169b34: 0x0  nop
    ctx->pc = 0x169b34u;
    // NOP
    // 0x169b38: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x169B38u;
    {
        const bool branch_taken_0x169b38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x169b38) {
            ctx->pc = 0x169B50u;
            return;
        }
    }
    ctx->pc = 0x169B40u;
    // 0x169b40: 0xc6001314  lwc1        $f0, 0x1314($s0)
    ctx->pc = 0x169b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169b44: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x169b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x169b48: 0xc6001318  lwc1        $f0, 0x1318($s0)
    ctx->pc = 0x169b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169b4c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x169b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    ctx->pc = 0x169b50u;
}
