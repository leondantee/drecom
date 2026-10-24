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

// Function: entry_00199444
// Address: 0x199444 - 0x199478
void entry_00199444_0x199444(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199444_0x199444");
#endif

    ctx->pc = 0x199444u;

    // 0x199444: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199448: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x199448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19944c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x19944cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x199450: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199454: 0x0  nop
    ctx->pc = 0x199454u;
    // NOP
    // 0x199458: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x199458u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19945c: 0x0  nop
    ctx->pc = 0x19945cu;
    // NOP
    // 0x199460: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x199460u;
    {
        const bool branch_taken_0x199460 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x199460) {
            ctx->pc = 0x199478u;
            return;
        }
    }
    ctx->pc = 0x199468u;
    // 0x199468: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x199468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x19946c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19946cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199470: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199474: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x199474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    ctx->pc = 0x199478u;
}
