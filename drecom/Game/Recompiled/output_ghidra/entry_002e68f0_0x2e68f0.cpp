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

// Function: entry_002e68f0
// Address: 0x2e68f0 - 0x2e6920
void entry_002e68f0_0x2e68f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e68f0_0x2e68f0");
#endif

    ctx->pc = 0x2e68f0u;

    // 0x2e68f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e68f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e68f4: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x2e68f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e68f8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2e68f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2e68fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e68fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6900: 0x0  nop
    ctx->pc = 0x2e6900u;
    // NOP
    // 0x2e6904: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e6904u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e6908: 0x0  nop
    ctx->pc = 0x2e6908u;
    // NOP
    // 0x2e690c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2E690Cu;
    {
        const bool branch_taken_0x2e690c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e690c) {
            ctx->pc = 0x2E6920u;
            return;
        }
    }
    ctx->pc = 0x2E6914u;
    // 0x2e6914: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e6914u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6918: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e6918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e691c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2e691cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    ctx->pc = 0x2e6920u;
}
