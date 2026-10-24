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

// Function: entry_0023e32c
// Address: 0x23e32c - 0x23e364
void entry_0023e32c_0x23e32c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023e32c_0x23e32c");
#endif

    ctx->pc = 0x23e32cu;

    // 0x23e32c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e330: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x23e330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e334: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x23e334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x23e338: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23e338u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e33c: 0x0  nop
    ctx->pc = 0x23e33cu;
    // NOP
    // 0x23e340: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23e340u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e344: 0x0  nop
    ctx->pc = 0x23e344u;
    // NOP
    // 0x23e348: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x23E348u;
    {
        const bool branch_taken_0x23e348 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e348) {
            ctx->pc = 0x23E364u;
            return;
        }
    }
    ctx->pc = 0x23E350u;
    // 0x23e350: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x23e350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x23e354: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23e354u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e358: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x23e358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e35c: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x23e35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x23e360: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x23e360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    ctx->pc = 0x23e364u;
}
