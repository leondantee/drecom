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

// Function: entry_001c733c
// Address: 0x1c733c - 0x1c7388
void entry_001c733c_0x1c733c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c733c_0x1c733c");
#endif

    switch (ctx->pc) {
        case 0x1c7354u: goto label_1c7354;
        default: break;
    }

    ctx->pc = 0x1c733cu;

    // 0x1c733c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c733cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7340: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7344: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x1c7344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c7348: 0xc48d1380  lwc1        $f13, 0x1380($a0)
    ctx->pc = 0x1c7348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c734c: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C734Cu;
    SET_GPR_U32(ctx, 31, 0x1C7354u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C734Cu, 0x1C7354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7354u;
label_1c7354:
    // 0x1c7354: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1c7354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1c7358: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1c7358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c735c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c735cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7360: 0x0  nop
    ctx->pc = 0x1c7360u;
    // NOP
    // 0x1c7364: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c7364u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c7368: 0x0  nop
    ctx->pc = 0x1c7368u;
    // NOP
    // 0x1c736c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1C736Cu;
    {
        const bool branch_taken_0x1c736c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c736c) {
            ctx->pc = 0x1C7388u;
            return;
        }
    }
    ctx->pc = 0x1C7374u;
    // 0x1c7374: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1c7374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1c7378: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c7378u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c737c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1c737cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7380: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c7380u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c7384: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1c7384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->pc = 0x1c7388u;
}
