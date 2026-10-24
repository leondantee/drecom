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

// Function: entry_00375b74
// Address: 0x375b74 - 0x375bb0
void entry_00375b74_0x375b74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00375b74_0x375b74");
#endif

    ctx->pc = 0x375b74u;

    // 0x375b74: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375b78: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x375b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375b7c: 0x3c02be86  lui         $v0, 0xBE86
    ctx->pc = 0x375b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48774 << 16));
    // 0x375b80: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x375b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x375b84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375b84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375b88: 0x0  nop
    ctx->pc = 0x375b88u;
    // NOP
    // 0x375b8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x375b8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x375b90: 0x0  nop
    ctx->pc = 0x375b90u;
    // NOP
    // 0x375b94: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x375B94u;
    {
        const bool branch_taken_0x375b94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x375b94) {
            ctx->pc = 0x375BB0u;
            return;
        }
    }
    ctx->pc = 0x375B9Cu;
    // 0x375b9c: 0x3c02be86  lui         $v0, 0xBE86
    ctx->pc = 0x375b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48774 << 16));
    // 0x375ba0: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x375ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x375ba4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375ba8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375bac: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x375bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    ctx->pc = 0x375bb0u;
}
