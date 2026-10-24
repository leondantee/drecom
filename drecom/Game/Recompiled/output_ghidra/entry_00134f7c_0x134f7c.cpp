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

// Function: entry_00134f7c
// Address: 0x134f7c - 0x135038
void entry_00134f7c_0x134f7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134f7c_0x134f7c");
#endif

    switch (ctx->pc) {
        case 0x134f8cu: goto label_134f8c;
        case 0x134fd0u: goto label_134fd0;
        case 0x134fecu: goto label_134fec;
        default: break;
    }

    ctx->pc = 0x134f7cu;

    // 0x134f7c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x134f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x134f80: 0xc60c0034  lwc1        $f12, 0x34($s0)
    ctx->pc = 0x134f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x134f84: 0xc067844  jal         func_19E110
    ctx->pc = 0x134F84u;
    SET_GPR_U32(ctx, 31, 0x134F8Cu);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x134F84u, 0x134F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134F8Cu;
label_134f8c:
    // 0x134f8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134f8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134f90: 0x0  nop
    ctx->pc = 0x134f90u;
    // NOP
    // 0x134f94: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x134f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x134f98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134f98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134f9c: 0x0  nop
    ctx->pc = 0x134f9cu;
    // NOP
    // 0x134fa0: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x134fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x134fa4: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x134fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134fa8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x134fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x134fac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x134facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x134fb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x134fb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134fb4: 0x0  nop
    ctx->pc = 0x134fb4u;
    // NOP
    // 0x134fb8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x134fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x134fbc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x134fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x134fc0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x134fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x134fc4: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x134fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x134fc8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x134FC8u;
    SET_GPR_U32(ctx, 31, 0x134FD0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x134FD0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x134FD0u) { return; }
    ctx->pc = 0x134FD0u;
label_134fd0:
    // 0x134fd0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x134fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x134fd4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x134fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x134fd8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x134fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x134fdc: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x134fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x134fe0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x134fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x134fe4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x134FE4u;
    SET_GPR_U32(ctx, 31, 0x134FECu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x134FE4u, 0x134FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134FECu;
label_134fec:
    // 0x134fec: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x134fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134ff0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x134ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x134ff4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134ff4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134ff8: 0x0  nop
    ctx->pc = 0x134ff8u;
    // NOP
    // 0x134ffc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x134ffcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x135000: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x135000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x135004: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x135004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135008: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x135008u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13500c: 0x0  nop
    ctx->pc = 0x13500cu;
    // NOP
    // 0x135010: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x135010u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135014: 0x0  nop
    ctx->pc = 0x135014u;
    // NOP
    // 0x135018: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x135018u;
    {
        const bool branch_taken_0x135018 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x135018) {
            ctx->pc = 0x135038u;
            return;
        }
    }
    ctx->pc = 0x135020u;
    // 0x135020: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x135020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x135024: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x135024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x135028: 0x3c03ffef  lui         $v1, 0xFFEF
    ctx->pc = 0x135028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65519 << 16));
    // 0x13502c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x13502cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x135030: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x135030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x135034: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x135034u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x135038u;
}
