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

// Function: entry_002c8770
// Address: 0x2c8770 - 0x2c87ac
void entry_002c8770_0x2c8770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c8770_0x2c8770");
#endif

    ctx->pc = 0x2c8770u;

    // 0x2c8770: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c8770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8774: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c8774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c8778: 0xc4410040  lwc1        $f1, 0x40($v0)
    ctx->pc = 0x2c8778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c877c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2c877cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2c8780: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c8780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8784: 0x0  nop
    ctx->pc = 0x2c8784u;
    // NOP
    // 0x2c8788: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c8788u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c878c: 0x0  nop
    ctx->pc = 0x2c878cu;
    // NOP
    // 0x2c8790: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2C8790u;
    {
        const bool branch_taken_0x2c8790 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8790) {
            ctx->pc = 0x2C87ACu;
            return;
        }
    }
    ctx->pc = 0x2C8798u;
    // 0x2c8798: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2c8798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2c879c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c879cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c87a0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c87a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c87a4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c87a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c87a8: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2c87a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    ctx->pc = 0x2c87acu;
}
