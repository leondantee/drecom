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

// Function: entry_0026d194
// Address: 0x26d194 - 0x26d1c8
void entry_0026d194_0x26d194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026d194_0x26d194");
#endif

    ctx->pc = 0x26d194u;

    // 0x26d194: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26d194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d198: 0xc4411388  lwc1        $f1, 0x1388($v0)
    ctx->pc = 0x26d198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d19c: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x26d19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x26d1a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26d1a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d1a4: 0x0  nop
    ctx->pc = 0x26d1a4u;
    // NOP
    // 0x26d1a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26d1a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d1ac: 0x0  nop
    ctx->pc = 0x26d1acu;
    // NOP
    // 0x26d1b0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x26D1B0u;
    {
        const bool branch_taken_0x26d1b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d1b0) {
            ctx->pc = 0x26D1C8u;
            return;
        }
    }
    ctx->pc = 0x26D1B8u;
    // 0x26d1b8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26d1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d1bc: 0xc4401380  lwc1        $f0, 0x1380($v0)
    ctx->pc = 0x26d1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d1c0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26d1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d1c4: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x26d1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    ctx->pc = 0x26d1c8u;
}
