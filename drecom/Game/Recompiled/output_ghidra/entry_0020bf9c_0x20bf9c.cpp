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

// Function: entry_0020bf9c
// Address: 0x20bf9c - 0x20c060
void entry_0020bf9c_0x20bf9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020bf9c_0x20bf9c");
#endif

    switch (ctx->pc) {
        case 0x20bfc0u: goto label_20bfc0;
        case 0x20bff4u: goto label_20bff4;
        case 0x20c044u: goto label_20c044;
        default: break;
    }

    ctx->pc = 0x20bf9cu;

    // 0x20bf9c: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x20bf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20bfa0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x20bfa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x20bfa4: 0xe420a2c4  swc1        $f0, -0x5D3C($at)
    ctx->pc = 0x20bfa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x38A2C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38A2C4u, _value); } while (0); }
    // 0x20bfa8: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x20bfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x20bfac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20bfacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20bfb0: 0x0  nop
    ctx->pc = 0x20bfb0u;
    // NOP
    // 0x20bfb4: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x20bfb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x20bfb8: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x20BFB8u;
    SET_GPR_U32(ctx, 31, 0x20BFC0u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x20BFB8u, 0x20BFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BFC0u;
label_20bfc0:
    // 0x20bfc0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x20bfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x20bfc4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20bfc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20bfc8: 0x0  nop
    ctx->pc = 0x20bfc8u;
    // NOP
    // 0x20bfcc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20bfccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20bfd0: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x20bfd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20bfd4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20bfd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20bfd8: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x20bfd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x20bfdc: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x20bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x20bfe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20bfe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20bfe4: 0x0  nop
    ctx->pc = 0x20bfe4u;
    // NOP
    // 0x20bfe8: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x20bfe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x20bfec: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x20BFECu;
    SET_GPR_U32(ctx, 31, 0x20BFF4u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x20BFECu, 0x20BFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BFF4u;
label_20bff4:
    // 0x20bff4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x20bff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x20bff8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20bff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20bffc: 0x0  nop
    ctx->pc = 0x20bffcu;
    // NOP
    // 0x20c000: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20c000u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20c004: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x20c004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c008: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20c008u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20c00c: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x20c00cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x20c010: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20c010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20c014: 0x2442a2c0  addiu       $v0, $v0, -0x5D40
    ctx->pc = 0x20c014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943424));
    // 0x20c018: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x20c018u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x38A2C0u));
    // 0x20c01c: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x20c01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x20c020: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x20c020u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x20c024: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x20c024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20c028: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x20c028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c02c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x20c02cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20c030: 0x0  nop
    ctx->pc = 0x20c030u;
    // NOP
    // 0x20c034: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x20C034u;
    {
        const bool branch_taken_0x20c034 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20c034) {
            ctx->pc = 0x20C060u;
            return;
        }
    }
    ctx->pc = 0x20C03Cu;
    // 0x20c03c: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x20C03Cu;
    SET_GPR_U32(ctx, 31, 0x20C044u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x20C03Cu, 0x20C044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C044u;
label_20c044:
    // 0x20c044: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x20c044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x20c048: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20c048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20c04c: 0x0  nop
    ctx->pc = 0x20c04cu;
    // NOP
    // 0x20c050: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20c050u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20c054: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x20c054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c058: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20c058u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x20c05c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x20c05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    ctx->pc = 0x20c060u;
}
