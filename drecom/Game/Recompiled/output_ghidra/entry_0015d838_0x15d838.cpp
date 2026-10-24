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

// Function: entry_0015d838
// Address: 0x15d838 - 0x15d8b0
void entry_0015d838_0x15d838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d838_0x15d838");
#endif

    switch (ctx->pc) {
        case 0x15d84cu: goto label_15d84c;
        case 0x15d864u: goto label_15d864;
        default: break;
    }

    ctx->pc = 0x15d838u;

    // 0x15d838: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d83c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x15d83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15d840: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x15d840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x15d844: 0xc040c9e  jal         func_103278
    ctx->pc = 0x15D844u;
    SET_GPR_U32(ctx, 31, 0x15D84Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x15D84Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15D84Cu) { return; }
    ctx->pc = 0x15D84Cu;
label_15d84c:
    // 0x15d84c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d850: 0xc4400174  lwc1        $f0, 0x174($v0)
    ctx->pc = 0x15d850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d854: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x15d854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x15d858: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x15d858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15d85c: 0xc057a80  jal         func_15EA00
    ctx->pc = 0x15D85Cu;
    SET_GPR_U32(ctx, 31, 0x15D864u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x15D85Cu, 0x15D864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D864u;
label_15d864:
    // 0x15d864: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x15d864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x15d868: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d86c: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x15d86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d870: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x15d870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x15d874: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15d874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d878: 0x0  nop
    ctx->pc = 0x15d878u;
    // NOP
    // 0x15d87c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x15d87cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15d880: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x15d880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d884: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15d884u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15d888: 0x0  nop
    ctx->pc = 0x15d888u;
    // NOP
    // 0x15d88c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x15D88Cu;
    {
        const bool branch_taken_0x15d88c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15d88c) {
            ctx->pc = 0x15D8B0u;
            return;
        }
    }
    ctx->pc = 0x15D894u;
    // 0x15d894: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x15d894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d898: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x15d898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x15d89c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15d89cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d8a0: 0x0  nop
    ctx->pc = 0x15d8a0u;
    // NOP
    // 0x15d8a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x15d8a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15d8a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d8ac: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x15d8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x15d8b0u;
}
