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

// Function: entry_00232bf0
// Address: 0x232bf0 - 0x232c18
void entry_00232bf0_0x232bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00232bf0_0x232bf0");
#endif

    ctx->pc = 0x232bf0u;

    // 0x232bf0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232bf4: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x232bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232bf8: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x232bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232bfc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x232bfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232c00: 0x0  nop
    ctx->pc = 0x232c00u;
    // NOP
    // 0x232c04: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x232C04u;
    {
        const bool branch_taken_0x232c04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x232c04) {
            ctx->pc = 0x232C18u;
            return;
        }
    }
    ctx->pc = 0x232C0Cu;
    // 0x232c0c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x232c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232c10: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232c14: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x232c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x232c18u;
}
