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

// Function: entry_001dcd1c
// Address: 0x1dcd1c - 0x1dcd4c
void entry_001dcd1c_0x1dcd1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dcd1c_0x1dcd1c");
#endif

    ctx->pc = 0x1dcd1cu;

    // 0x1dcd1c: 0xc7a10140  lwc1        $f1, 0x140($sp)
    ctx->pc = 0x1dcd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcd20: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1dcd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1dcd24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dcd24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dcd28: 0x0  nop
    ctx->pc = 0x1dcd28u;
    // NOP
    // 0x1dcd2c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dcd2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dcd30: 0x0  nop
    ctx->pc = 0x1dcd30u;
    // NOP
    // 0x1dcd34: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1DCD34u;
    {
        const bool branch_taken_0x1dcd34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dcd34) {
            ctx->pc = 0x1DCD4Cu;
            return;
        }
    }
    ctx->pc = 0x1DCD3Cu;
    // 0x1dcd3c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1dcd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1dcd40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dcd40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dcd44: 0x0  nop
    ctx->pc = 0x1dcd44u;
    // NOP
    // 0x1dcd48: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1dcd48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    ctx->pc = 0x1dcd4cu;
}
