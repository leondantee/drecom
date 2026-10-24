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

// Function: entry_00239fdc
// Address: 0x239fdc - 0x23a028
void entry_00239fdc_0x239fdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239fdc_0x239fdc");
#endif

    ctx->pc = 0x239fdcu;

    // 0x239fdc: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x239fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x239fe0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x239fe0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239fe4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239fe8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x239fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x239fec: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x239fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x239ff0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239ff4: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x239ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239ff8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x239ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x239ffc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x239ffcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a000: 0x0  nop
    ctx->pc = 0x23a000u;
    // NOP
    // 0x23a004: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23a004u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a008: 0x0  nop
    ctx->pc = 0x23a008u;
    // NOP
    // 0x23a00c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x23A00Cu;
    {
        const bool branch_taken_0x23a00c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a00c) {
            ctx->pc = 0x23A028u;
            return;
        }
    }
    ctx->pc = 0x23A014u;
    // 0x23a014: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x23a014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x23a018: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23a018u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a01c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a020: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23a020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23a024: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x23a024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    ctx->pc = 0x23a028u;
}
