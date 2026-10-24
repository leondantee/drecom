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

// Function: entry_00189a1c
// Address: 0x189a1c - 0x189a74
void entry_00189a1c_0x189a1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189a1c_0x189a1c");
#endif

    ctx->pc = 0x189a1cu;

    // 0x189a1c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189a20: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x189a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189a24: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x189a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189a28: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x189a28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x189a2c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x189a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x189a30: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189a34: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x189a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189a38: 0xc44000e4  lwc1        $f0, 0xE4($v0)
    ctx->pc = 0x189a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189a3c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x189a3cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x189a40: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x189a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x189a44: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x189a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189a48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x189a48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189a4c: 0x0  nop
    ctx->pc = 0x189a4cu;
    // NOP
    // 0x189a50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x189a50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189a54: 0x0  nop
    ctx->pc = 0x189a54u;
    // NOP
    // 0x189a58: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x189A58u;
    {
        const bool branch_taken_0x189a58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x189a58) {
            ctx->pc = 0x189A74u;
            return;
        }
    }
    ctx->pc = 0x189A60u;
    // 0x189a60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x189a60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189a64: 0x0  nop
    ctx->pc = 0x189a64u;
    // NOP
    // 0x189a68: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x189a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x189a6c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x189A6Cu;
    {
        const bool branch_taken_0x189a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189a6c) {
            ctx->pc = 0x189AB4u;
            return;
        }
    }
    ctx->pc = 0x189A74u;
}
