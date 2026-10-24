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

// Function: entry_00375df0
// Address: 0x375df0 - 0x375e2c
void entry_00375df0_0x375df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00375df0_0x375df0");
#endif

    ctx->pc = 0x375df0u;

    // 0x375df0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375df4: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x375df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375df8: 0x3c02be86  lui         $v0, 0xBE86
    ctx->pc = 0x375df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48774 << 16));
    // 0x375dfc: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x375dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x375e00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375e04: 0x0  nop
    ctx->pc = 0x375e04u;
    // NOP
    // 0x375e08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x375e08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x375e0c: 0x0  nop
    ctx->pc = 0x375e0cu;
    // NOP
    // 0x375e10: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x375E10u;
    {
        const bool branch_taken_0x375e10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x375e10) {
            ctx->pc = 0x375E2Cu;
            return;
        }
    }
    ctx->pc = 0x375E18u;
    // 0x375e18: 0x3c02be86  lui         $v0, 0xBE86
    ctx->pc = 0x375e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48774 << 16));
    // 0x375e1c: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x375e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x375e20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375e20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375e24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375e28: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x375e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    ctx->pc = 0x375e2cu;
}
