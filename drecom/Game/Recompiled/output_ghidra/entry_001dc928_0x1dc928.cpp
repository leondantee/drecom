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

// Function: entry_001dc928
// Address: 0x1dc928 - 0x1dc958
void entry_001dc928_0x1dc928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dc928_0x1dc928");
#endif

    ctx->pc = 0x1dc928u;

    // 0x1dc928: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x1dc928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc92c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1dc92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1dc930: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dc930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc934: 0x0  nop
    ctx->pc = 0x1dc934u;
    // NOP
    // 0x1dc938: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dc938u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dc93c: 0x0  nop
    ctx->pc = 0x1dc93cu;
    // NOP
    // 0x1dc940: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1DC940u;
    {
        const bool branch_taken_0x1dc940 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dc940) {
            ctx->pc = 0x1DC958u;
            return;
        }
    }
    ctx->pc = 0x1DC948u;
    // 0x1dc948: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1dc948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1dc94c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dc94cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc950: 0x0  nop
    ctx->pc = 0x1dc950u;
    // NOP
    // 0x1dc954: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1dc954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    ctx->pc = 0x1dc958u;
}
