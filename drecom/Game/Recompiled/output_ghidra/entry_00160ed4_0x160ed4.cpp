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

// Function: entry_00160ed4
// Address: 0x160ed4 - 0x160f4c
void entry_00160ed4_0x160ed4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160ed4_0x160ed4");
#endif

    switch (ctx->pc) {
        case 0x160f18u: goto label_160f18;
        default: break;
    }

    ctx->pc = 0x160ed4u;

    // 0x160ed4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x160ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x160ed8: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x160ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x160edc: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x160edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x160ee0: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x160EE0u;
    {
        const bool branch_taken_0x160ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160ee0) {
            ctx->pc = 0x160FBCu;
            return;
        }
    }
    ctx->pc = 0x160EE8u;
    // 0x160ee8: 0xc6011388  lwc1        $f1, 0x1388($s0)
    ctx->pc = 0x160ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160eec: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x160eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x160ef0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160ef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160ef4: 0x0  nop
    ctx->pc = 0x160ef4u;
    // NOP
    // 0x160ef8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x160ef8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160efc: 0x0  nop
    ctx->pc = 0x160efcu;
    // NOP
    // 0x160f00: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x160F00u;
    {
        const bool branch_taken_0x160f00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x160f00) {
            ctx->pc = 0x160F98u;
            return;
        }
    }
    ctx->pc = 0x160F08u;
    // 0x160f08: 0xc60c00d4  lwc1        $f12, 0xD4($s0)
    ctx->pc = 0x160f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x160f0c: 0xc60d1380  lwc1        $f13, 0x1380($s0)
    ctx->pc = 0x160f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x160f10: 0xc058f20  jal         func_163C80
    ctx->pc = 0x160F10u;
    SET_GPR_U32(ctx, 31, 0x160F18u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x160F10u, 0x160F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160F18u;
label_160f18:
    // 0x160f18: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x160f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x160f1c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x160f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160f20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x160f20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160f24: 0x0  nop
    ctx->pc = 0x160f24u;
    // NOP
    // 0x160f28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x160f28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160f2c: 0x0  nop
    ctx->pc = 0x160f2cu;
    // NOP
    // 0x160f30: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x160F30u;
    {
        const bool branch_taken_0x160f30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x160f30) {
            ctx->pc = 0x160F4Cu;
            return;
        }
    }
    ctx->pc = 0x160F38u;
    // 0x160f38: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x160f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x160f3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x160f3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160f40: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x160f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160f44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x160f44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x160f48: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x160f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->pc = 0x160f4cu;
}
