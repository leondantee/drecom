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

// Function: entry_002e6d54
// Address: 0x2e6d54 - 0x2e6d84
void entry_002e6d54_0x2e6d54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e6d54_0x2e6d54");
#endif

    ctx->pc = 0x2e6d54u;

    // 0x2e6d54: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e6d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6d58: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x2e6d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6d5c: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x2e6d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
    // 0x2e6d60: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e6d60u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6d64: 0x0  nop
    ctx->pc = 0x2e6d64u;
    // NOP
    // 0x2e6d68: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e6d68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e6d6c: 0x0  nop
    ctx->pc = 0x2e6d6cu;
    // NOP
    // 0x2e6d70: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2E6D70u;
    {
        const bool branch_taken_0x2e6d70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6d70) {
            ctx->pc = 0x2E6D84u;
            return;
        }
    }
    ctx->pc = 0x2E6D78u;
    // 0x2e6d78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e6d78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6d7c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e6d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6d80: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x2e6d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    ctx->pc = 0x2e6d84u;
}
