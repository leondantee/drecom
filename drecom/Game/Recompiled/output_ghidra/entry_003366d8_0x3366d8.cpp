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

// Function: entry_003366d8
// Address: 0x3366d8 - 0x336728
void entry_003366d8_0x3366d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003366d8_0x3366d8");
#endif

    switch (ctx->pc) {
        case 0x3366e8u: goto label_3366e8;
        default: break;
    }

    ctx->pc = 0x3366d8u;

    // 0x3366d8: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x3366d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3366dc: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x3366dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3366e0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x3366E0u;
    SET_GPR_U32(ctx, 31, 0x3366E8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x3366E0u, 0x3366E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3366E8u;
label_3366e8:
    // 0x3366e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3366e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3366ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3366ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3366f0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3366f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3366f4: 0xc4203428  lwc1        $f0, 0x3428($at)
    ctx->pc = 0x3366f4u;
    { uint32_t bits = FAST_READ32(0x893428u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3366f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3366f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3366fc: 0xe6005e00  swc1        $f0, 0x5E00($s0)
    ctx->pc = 0x3366fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24064), bits); }
    // 0x336700: 0xc6015e00  lwc1        $f1, 0x5E00($s0)
    ctx->pc = 0x336700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x336704: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x336704u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336708: 0x0  nop
    ctx->pc = 0x336708u;
    // NOP
    // 0x33670c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x33670cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x336710: 0x0  nop
    ctx->pc = 0x336710u;
    // NOP
    // 0x336714: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x336714u;
    {
        const bool branch_taken_0x336714 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x336714) {
            ctx->pc = 0x336728u;
            return;
        }
    }
    ctx->pc = 0x33671Cu;
    // 0x33671c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33671cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336720: 0x0  nop
    ctx->pc = 0x336720u;
    // NOP
    // 0x336724: 0xe6005e00  swc1        $f0, 0x5E00($s0)
    ctx->pc = 0x336724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24064), bits); }
    ctx->pc = 0x336728u;
}
