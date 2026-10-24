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

// Function: entry_0016e304
// Address: 0x16e304 - 0x16e33c
void entry_0016e304_0x16e304(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e304_0x16e304");
#endif

    ctx->pc = 0x16e304u;

    // 0x16e304: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x16e304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e308: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16e308u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e30c: 0x0  nop
    ctx->pc = 0x16e30cu;
    // NOP
    // 0x16e310: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16e310u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e314: 0x0  nop
    ctx->pc = 0x16e314u;
    // NOP
    // 0x16e318: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x16E318u;
    {
        const bool branch_taken_0x16e318 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e318) {
            ctx->pc = 0x16E33Cu;
            return;
        }
    }
    ctx->pc = 0x16E320u;
    // 0x16e320: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x16e320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16e324: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x16e324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x16e328: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x16e328u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16e32c: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x16e32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x16e330: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x16e330u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x16e334: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x16E334u;
    {
        const bool branch_taken_0x16e334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e334) {
            ctx->pc = 0x16E3A0u;
            return;
        }
    }
    ctx->pc = 0x16E33Cu;
}
