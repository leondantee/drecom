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

// Function: entry_0014ca74
// Address: 0x14ca74 - 0x14cab8
void entry_0014ca74_0x14ca74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ca74_0x14ca74");
#endif

    switch (ctx->pc) {
        case 0x14ca8cu: goto label_14ca8c;
        default: break;
    }

    ctx->pc = 0x14ca74u;

    // 0x14ca74: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14ca74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ca78: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ca78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ca7c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x14ca7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14ca80: 0xc44d11f8  lwc1        $f13, 0x11F8($v0)
    ctx->pc = 0x14ca80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14ca84: 0xc058f20  jal         func_163C80
    ctx->pc = 0x14CA84u;
    SET_GPR_U32(ctx, 31, 0x14CA8Cu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x14CA84u, 0x14CA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CA8Cu;
label_14ca8c:
    // 0x14ca8c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x14ca8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x14ca90: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x14ca90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ca94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14ca94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ca98: 0x0  nop
    ctx->pc = 0x14ca98u;
    // NOP
    // 0x14ca9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14ca9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14caa0: 0x0  nop
    ctx->pc = 0x14caa0u;
    // NOP
    // 0x14caa4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x14CAA4u;
    {
        const bool branch_taken_0x14caa4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14caa4) {
            ctx->pc = 0x14CAB8u;
            return;
        }
    }
    ctx->pc = 0x14CAACu;
    // 0x14caac: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x14caacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14cab0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14cab0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x14cab4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x14cab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->pc = 0x14cab8u;
}
