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

// Function: entry_00191268
// Address: 0x191268 - 0x1912a0
void entry_00191268_0x191268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191268_0x191268");
#endif

    ctx->pc = 0x191268u;

    // 0x191268: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x191268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x19126c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19126cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x191270: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x191270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191274: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x191274u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191278: 0x0  nop
    ctx->pc = 0x191278u;
    // NOP
    // 0x19127c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x19127Cu;
    {
        const bool branch_taken_0x19127c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19127c) {
            ctx->pc = 0x1912A0u;
            return;
        }
    }
    ctx->pc = 0x191284u;
    // 0x191284: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x191284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x191288: 0xc421fd70  lwc1        $f1, -0x290($at)
    ctx->pc = 0x191288u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19128c: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x19128cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191290: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x191290u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191294: 0x0  nop
    ctx->pc = 0x191294u;
    // NOP
    // 0x191298: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x191298u;
    {
        const bool branch_taken_0x191298 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x191298) {
            ctx->pc = 0x1912ACu;
            return;
        }
    }
    ctx->pc = 0x1912A0u;
}
