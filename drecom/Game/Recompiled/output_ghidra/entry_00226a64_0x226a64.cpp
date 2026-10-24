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

// Function: entry_00226a64
// Address: 0x226a64 - 0x226ab0
void entry_00226a64_0x226a64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226a64_0x226a64");
#endif

    ctx->pc = 0x226a64u;

    // 0x226a64: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x226a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x226a68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x226a68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226a6c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226a70: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x226a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x226a74: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x226a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x226a78: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226a7c: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x226a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226a80: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x226a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x226a84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x226a84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226a88: 0x0  nop
    ctx->pc = 0x226a88u;
    // NOP
    // 0x226a8c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x226a8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x226a90: 0x0  nop
    ctx->pc = 0x226a90u;
    // NOP
    // 0x226a94: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x226A94u;
    {
        const bool branch_taken_0x226a94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x226a94) {
            ctx->pc = 0x226AB0u;
            return;
        }
    }
    ctx->pc = 0x226A9Cu;
    // 0x226a9c: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x226a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x226aa0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x226aa0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226aa4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226aa8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x226aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x226aac: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x226aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    ctx->pc = 0x226ab0u;
}
