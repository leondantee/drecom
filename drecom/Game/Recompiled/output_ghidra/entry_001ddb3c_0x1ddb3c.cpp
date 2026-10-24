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

// Function: entry_001ddb3c
// Address: 0x1ddb3c - 0x1ddb6c
void entry_001ddb3c_0x1ddb3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ddb3c_0x1ddb3c");
#endif

    ctx->pc = 0x1ddb3cu;

    // 0x1ddb3c: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x1ddb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ddb40: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1ddb40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1ddb44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ddb44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ddb48: 0x0  nop
    ctx->pc = 0x1ddb48u;
    // NOP
    // 0x1ddb4c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ddb4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ddb50: 0x0  nop
    ctx->pc = 0x1ddb50u;
    // NOP
    // 0x1ddb54: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1DDB54u;
    {
        const bool branch_taken_0x1ddb54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ddb54) {
            ctx->pc = 0x1DDB6Cu;
            return;
        }
    }
    ctx->pc = 0x1DDB5Cu;
    // 0x1ddb5c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1ddb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1ddb60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ddb60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ddb64: 0x0  nop
    ctx->pc = 0x1ddb64u;
    // NOP
    // 0x1ddb68: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1ddb68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    ctx->pc = 0x1ddb6cu;
}
