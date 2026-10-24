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

// Function: entry_00311a24
// Address: 0x311a24 - 0x311a54
void entry_00311a24_0x311a24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00311a24_0x311a24");
#endif

    ctx->pc = 0x311a24u;

    // 0x311a24: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x311a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311a28: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x311a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x311a2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311a30: 0x0  nop
    ctx->pc = 0x311a30u;
    // NOP
    // 0x311a34: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x311a34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311a38: 0x0  nop
    ctx->pc = 0x311a38u;
    // NOP
    // 0x311a3c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x311A3Cu;
    {
        const bool branch_taken_0x311a3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x311a3c) {
            ctx->pc = 0x311A54u;
            return;
        }
    }
    ctx->pc = 0x311A44u;
    // 0x311a44: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x311a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x311a48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311a48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311a4c: 0x0  nop
    ctx->pc = 0x311a4cu;
    // NOP
    // 0x311a50: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x311a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->pc = 0x311a54u;
}
