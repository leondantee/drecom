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

// Function: entry_001b3258
// Address: 0x1b3258 - 0x1b32b8
void entry_001b3258_0x1b3258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3258_0x1b3258");
#endif

    ctx->pc = 0x1b3258u;

    // 0x1b3258: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1b3258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1b325c: 0xc421ee44  lwc1        $f1, -0x11BC($at)
    ctx->pc = 0x1b325cu;
    { uint32_t bits = FAST_READ32(0x3EEE44u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3260: 0x3c02c307  lui         $v0, 0xC307
    ctx->pc = 0x1b3260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49927 << 16));
    // 0x1b3264: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3264u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3268: 0x0  nop
    ctx->pc = 0x1b3268u;
    // NOP
    // 0x1b326c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b326cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b3270: 0x0  nop
    ctx->pc = 0x1b3270u;
    // NOP
    // 0x1b3274: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x1B3274u;
    {
        const bool branch_taken_0x1b3274 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b3274) {
            ctx->pc = 0x1B32E0u;
            return;
        }
    }
    ctx->pc = 0x1B327Cu;
    // 0x1b327c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1b327cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1b3280: 0xc421ee44  lwc1        $f1, -0x11BC($at)
    ctx->pc = 0x1b3280u;
    { uint32_t bits = FAST_READ32(0x3EEE44u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3284: 0x3c02c334  lui         $v0, 0xC334
    ctx->pc = 0x1b3284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49972 << 16));
    // 0x1b3288: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b328c: 0x0  nop
    ctx->pc = 0x1b328cu;
    // NOP
    // 0x1b3290: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b3290u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b3294: 0x0  nop
    ctx->pc = 0x1b3294u;
    // NOP
    // 0x1b3298: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1B3298u;
    {
        const bool branch_taken_0x1b3298 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b3298) {
            ctx->pc = 0x1B32B8u;
            return;
        }
    }
    ctx->pc = 0x1B32A0u;
    // 0x1b32a0: 0x860311f2  lh          $v1, 0x11F2($s0)
    ctx->pc = 0x1b32a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4594)));
    // 0x1b32a4: 0x860211f2  lh          $v0, 0x11F2($s0)
    ctx->pc = 0x1b32a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4594)));
    // 0x1b32a8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1b32a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b32ac: 0xa60211f2  sh          $v0, 0x11F2($s0)
    ctx->pc = 0x1b32acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4594), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b32b0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1B32B0u;
    {
        const bool branch_taken_0x1b32b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b32b0) {
            ctx->pc = 0x1B32E0u;
            return;
        }
    }
    ctx->pc = 0x1B32B8u;
}
