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

// Function: entry_00311a54
// Address: 0x311a54 - 0x311a84
void entry_00311a54_0x311a54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00311a54_0x311a54");
#endif

    ctx->pc = 0x311a54u;

    // 0x311a54: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x311a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311a58: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x311a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x311a5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311a5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311a60: 0x0  nop
    ctx->pc = 0x311a60u;
    // NOP
    // 0x311a64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x311a64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311a68: 0x0  nop
    ctx->pc = 0x311a68u;
    // NOP
    // 0x311a6c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x311A6Cu;
    {
        const bool branch_taken_0x311a6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x311a6c) {
            ctx->pc = 0x311A84u;
            return;
        }
    }
    ctx->pc = 0x311A74u;
    // 0x311a74: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x311a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x311a78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311a78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311a7c: 0x0  nop
    ctx->pc = 0x311a7cu;
    // NOP
    // 0x311a80: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x311a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->pc = 0x311a84u;
}
