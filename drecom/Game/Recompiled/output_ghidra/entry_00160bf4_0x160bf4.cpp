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

// Function: entry_00160bf4
// Address: 0x160bf4 - 0x160c6c
void entry_00160bf4_0x160bf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160bf4_0x160bf4");
#endif

    switch (ctx->pc) {
        case 0x160c38u: goto label_160c38;
        default: break;
    }

    ctx->pc = 0x160bf4u;

    // 0x160bf4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x160bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x160bf8: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x160bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x160bfc: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x160bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x160c00: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x160C00u;
    {
        const bool branch_taken_0x160c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160c00) {
            ctx->pc = 0x160CDCu;
            return;
        }
    }
    ctx->pc = 0x160C08u;
    // 0x160c08: 0xc6011b5c  lwc1        $f1, 0x1B5C($s0)
    ctx->pc = 0x160c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160c0c: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x160c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x160c10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160c10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160c14: 0x0  nop
    ctx->pc = 0x160c14u;
    // NOP
    // 0x160c18: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x160c18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160c1c: 0x0  nop
    ctx->pc = 0x160c1cu;
    // NOP
    // 0x160c20: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x160C20u;
    {
        const bool branch_taken_0x160c20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x160c20) {
            ctx->pc = 0x160CB8u;
            return;
        }
    }
    ctx->pc = 0x160C28u;
    // 0x160c28: 0xc60c00d4  lwc1        $f12, 0xD4($s0)
    ctx->pc = 0x160c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x160c2c: 0xc60d1380  lwc1        $f13, 0x1380($s0)
    ctx->pc = 0x160c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x160c30: 0xc058f20  jal         func_163C80
    ctx->pc = 0x160C30u;
    SET_GPR_U32(ctx, 31, 0x160C38u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x160C30u, 0x160C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160C38u;
label_160c38:
    // 0x160c38: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x160c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x160c3c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x160c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160c40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x160c40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160c44: 0x0  nop
    ctx->pc = 0x160c44u;
    // NOP
    // 0x160c48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x160c48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160c4c: 0x0  nop
    ctx->pc = 0x160c4cu;
    // NOP
    // 0x160c50: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x160C50u;
    {
        const bool branch_taken_0x160c50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x160c50) {
            ctx->pc = 0x160C6Cu;
            return;
        }
    }
    ctx->pc = 0x160C58u;
    // 0x160c58: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x160c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x160c5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x160c5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160c60: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x160c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160c64: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x160c64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x160c68: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x160c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->pc = 0x160c6cu;
}
