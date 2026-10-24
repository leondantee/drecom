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

// Function: entry_001bc66c
// Address: 0x1bc66c - 0x1bc6b8
void entry_001bc66c_0x1bc66c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc66c_0x1bc66c");
#endif

    switch (ctx->pc) {
        case 0x1bc684u: goto label_1bc684;
        default: break;
    }

    ctx->pc = 0x1bc66cu;

    // 0x1bc66c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bc66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc670: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc674: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1bc674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bc678: 0xc48d1380  lwc1        $f13, 0x1380($a0)
    ctx->pc = 0x1bc678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bc67c: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1BC67Cu;
    SET_GPR_U32(ctx, 31, 0x1BC684u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1BC67Cu, 0x1BC684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC684u;
label_1bc684:
    // 0x1bc684: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1bc684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1bc688: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1bc688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bc68c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1bc68cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc690: 0x0  nop
    ctx->pc = 0x1bc690u;
    // NOP
    // 0x1bc694: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bc694u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bc698: 0x0  nop
    ctx->pc = 0x1bc698u;
    // NOP
    // 0x1bc69c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1BC69Cu;
    {
        const bool branch_taken_0x1bc69c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bc69c) {
            ctx->pc = 0x1BC6B8u;
            return;
        }
    }
    ctx->pc = 0x1BC6A4u;
    // 0x1bc6a4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1bc6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1bc6a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bc6a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bc6ac: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1bc6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bc6b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1bc6b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1bc6b4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1bc6b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->pc = 0x1bc6b8u;
}
