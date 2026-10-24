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

// Function: entry_0026bc48
// Address: 0x26bc48 - 0x26bc6c
void entry_0026bc48_0x26bc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026bc48_0x26bc48");
#endif

    ctx->pc = 0x26bc48u;

    // 0x26bc48: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26bc48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bc4c: 0xc4811b58  lwc1        $f1, 0x1B58($a0)
    ctx->pc = 0x26bc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26bc50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26bc50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26bc54: 0x0  nop
    ctx->pc = 0x26bc54u;
    // NOP
    // 0x26bc58: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26bc58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26bc5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26bc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26bc60: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x26BC60u;
    {
        const bool branch_taken_0x26bc60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26bc60) {
            ctx->pc = 0x26BC6Cu;
            return;
        }
    }
    ctx->pc = 0x26BC68u;
    // 0x26bc68: 0x70001e28  paddub      $v1, $zero, $zero
    ctx->pc = 0x26bc68u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x26bc6cu;
}
