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

// Function: entry_001ef4c0
// Address: 0x1ef4c0 - 0x1ef50c
void entry_001ef4c0_0x1ef4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef4c0_0x1ef4c0");
#endif

    ctx->pc = 0x1ef4c0u;

    // 0x1ef4c0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1ef4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1ef4c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ef4c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef4c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ef4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef4cc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ef4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ef4d0: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1ef4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x1ef4d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ef4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef4d8: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x1ef4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef4dc: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1ef4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x1ef4e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ef4e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef4e4: 0x0  nop
    ctx->pc = 0x1ef4e4u;
    // NOP
    // 0x1ef4e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ef4e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef4ec: 0x0  nop
    ctx->pc = 0x1ef4ecu;
    // NOP
    // 0x1ef4f0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1EF4F0u;
    {
        const bool branch_taken_0x1ef4f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ef4f0) {
            ctx->pc = 0x1EF50Cu;
            return;
        }
    }
    ctx->pc = 0x1EF4F8u;
    // 0x1ef4f8: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x1ef4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x1ef4fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ef4fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef500: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ef500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef504: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ef504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ef508: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1ef508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    ctx->pc = 0x1ef50cu;
}
