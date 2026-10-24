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

// Function: entry_001de2a0
// Address: 0x1de2a0 - 0x1de2d0
void entry_001de2a0_0x1de2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de2a0_0x1de2a0");
#endif

    ctx->pc = 0x1de2a0u;

    // 0x1de2a0: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x1de2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de2a4: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1de2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1de2a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de2a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de2ac: 0x0  nop
    ctx->pc = 0x1de2acu;
    // NOP
    // 0x1de2b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1de2b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de2b4: 0x0  nop
    ctx->pc = 0x1de2b4u;
    // NOP
    // 0x1de2b8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1DE2B8u;
    {
        const bool branch_taken_0x1de2b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de2b8) {
            ctx->pc = 0x1DE2D0u;
            return;
        }
    }
    ctx->pc = 0x1DE2C0u;
    // 0x1de2c0: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1de2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1de2c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de2c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de2c8: 0x0  nop
    ctx->pc = 0x1de2c8u;
    // NOP
    // 0x1de2cc: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1de2ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    ctx->pc = 0x1de2d0u;
}
