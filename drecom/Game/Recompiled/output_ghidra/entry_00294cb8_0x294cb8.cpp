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

// Function: entry_00294cb8
// Address: 0x294cb8 - 0x294ce8
void entry_00294cb8_0x294cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00294cb8_0x294cb8");
#endif

    ctx->pc = 0x294cb8u;

    // 0x294cb8: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x294cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294cbc: 0x3c0343e0  lui         $v1, 0x43E0
    ctx->pc = 0x294cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17376 << 16));
    // 0x294cc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x294cc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294cc4: 0x0  nop
    ctx->pc = 0x294cc4u;
    // NOP
    // 0x294cc8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x294cc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x294ccc: 0x0  nop
    ctx->pc = 0x294cccu;
    // NOP
    // 0x294cd0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x294CD0u;
    {
        const bool branch_taken_0x294cd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x294cd0) {
            ctx->pc = 0x294CE8u;
            return;
        }
    }
    ctx->pc = 0x294CD8u;
    // 0x294cd8: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x294cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x294cdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x294cdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294ce0: 0x0  nop
    ctx->pc = 0x294ce0u;
    // NOP
    // 0x294ce4: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x294ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    ctx->pc = 0x294ce8u;
}
