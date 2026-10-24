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

// Function: entry_003752f0
// Address: 0x3752f0 - 0x37532c
void entry_003752f0_0x3752f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003752f0_0x3752f0");
#endif

    ctx->pc = 0x3752f0u;

    // 0x3752f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3752f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3752f4: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x3752f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3752f8: 0x3c02be86  lui         $v0, 0xBE86
    ctx->pc = 0x3752f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48774 << 16));
    // 0x3752fc: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x3752fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x375300: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375304: 0x0  nop
    ctx->pc = 0x375304u;
    // NOP
    // 0x375308: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x375308u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37530c: 0x0  nop
    ctx->pc = 0x37530cu;
    // NOP
    // 0x375310: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x375310u;
    {
        const bool branch_taken_0x375310 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x375310) {
            ctx->pc = 0x37532Cu;
            return;
        }
    }
    ctx->pc = 0x375318u;
    // 0x375318: 0x3c02be86  lui         $v0, 0xBE86
    ctx->pc = 0x375318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48774 << 16));
    // 0x37531c: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x37531cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x375320: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375324: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375328: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x375328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    ctx->pc = 0x37532cu;
}
