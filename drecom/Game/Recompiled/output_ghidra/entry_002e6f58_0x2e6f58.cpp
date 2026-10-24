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

// Function: entry_002e6f58
// Address: 0x2e6f58 - 0x2e6f88
void entry_002e6f58_0x2e6f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e6f58_0x2e6f58");
#endif

    ctx->pc = 0x2e6f58u;

    // 0x2e6f58: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e6f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6f5c: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x2e6f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6f60: 0x3c05bf80  lui         $a1, 0xBF80
    ctx->pc = 0x2e6f60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49024 << 16));
    // 0x2e6f64: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2e6f64u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6f68: 0x0  nop
    ctx->pc = 0x2e6f68u;
    // NOP
    // 0x2e6f6c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e6f6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e6f70: 0x0  nop
    ctx->pc = 0x2e6f70u;
    // NOP
    // 0x2e6f74: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2E6F74u;
    {
        const bool branch_taken_0x2e6f74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6f74) {
            ctx->pc = 0x2E6F88u;
            return;
        }
    }
    ctx->pc = 0x2E6F7Cu;
    // 0x2e6f7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e6f7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6f80: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e6f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6f84: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x2e6f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    ctx->pc = 0x2e6f88u;
}
