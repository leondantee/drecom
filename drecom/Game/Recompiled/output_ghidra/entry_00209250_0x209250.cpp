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

// Function: entry_00209250
// Address: 0x209250 - 0x209290
void entry_00209250_0x209250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209250_0x209250");
#endif

    ctx->pc = 0x209250u;

    // 0x209250: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x209250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x209254: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x209254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209258: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x209258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x20925c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20925cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209260: 0x0  nop
    ctx->pc = 0x209260u;
    // NOP
    // 0x209264: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x209264u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209268: 0x0  nop
    ctx->pc = 0x209268u;
    // NOP
    // 0x20926c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x20926Cu;
    {
        const bool branch_taken_0x20926c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20926c) {
            ctx->pc = 0x209290u;
            return;
        }
    }
    ctx->pc = 0x209274u;
    // 0x209274: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x209274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x209278: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x209278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20927c: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x20927cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x209280: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209284: 0x0  nop
    ctx->pc = 0x209284u;
    // NOP
    // 0x209288: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x209288u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20928c: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x20928cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    ctx->pc = 0x209290u;
}
