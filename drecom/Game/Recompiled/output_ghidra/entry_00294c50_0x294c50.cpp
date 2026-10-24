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

// Function: entry_00294c50
// Address: 0x294c50 - 0x294c80
void entry_00294c50_0x294c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00294c50_0x294c50");
#endif

    ctx->pc = 0x294c50u;

    // 0x294c50: 0xc6010090  lwc1        $f1, 0x90($s0)
    ctx->pc = 0x294c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294c54: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x294c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x294c58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x294c58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294c5c: 0x0  nop
    ctx->pc = 0x294c5cu;
    // NOP
    // 0x294c60: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x294c60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x294c64: 0x0  nop
    ctx->pc = 0x294c64u;
    // NOP
    // 0x294c68: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x294C68u;
    {
        const bool branch_taken_0x294c68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x294c68) {
            ctx->pc = 0x294C80u;
            return;
        }
    }
    ctx->pc = 0x294C70u;
    // 0x294c70: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x294c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x294c74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x294c74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294c78: 0x0  nop
    ctx->pc = 0x294c78u;
    // NOP
    // 0x294c7c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x294c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    ctx->pc = 0x294c80u;
}
