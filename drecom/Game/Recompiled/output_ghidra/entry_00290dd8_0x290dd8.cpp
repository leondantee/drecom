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

// Function: entry_00290dd8
// Address: 0x290dd8 - 0x290e14
void entry_00290dd8_0x290dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00290dd8_0x290dd8");
#endif

    ctx->pc = 0x290dd8u;

    // 0x290dd8: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x290dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x290ddc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x290ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x290de0: 0x38843  sra         $s1, $v1, 1
    ctx->pc = 0x290de0u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 1));
    // 0x290de4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x290de4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x290de8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x290de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x290dec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x290decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290df0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x290df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290df4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x290df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290df8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x290df8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290dfc: 0x0  nop
    ctx->pc = 0x290dfcu;
    // NOP
    // 0x290e00: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x290E00u;
    {
        const bool branch_taken_0x290e00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x290e00) {
            ctx->pc = 0x290E14u;
            return;
        }
    }
    ctx->pc = 0x290E08u;
    // 0x290e08: 0x26300001  addiu       $s0, $s1, 0x1
    ctx->pc = 0x290e08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x290e0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x290E0Cu;
    {
        const bool branch_taken_0x290e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290e0c) {
            ctx->pc = 0x290E18u;
            return;
        }
    }
    ctx->pc = 0x290E14u;
}
