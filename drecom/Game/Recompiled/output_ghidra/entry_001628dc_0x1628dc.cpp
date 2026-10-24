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

// Function: entry_001628dc
// Address: 0x1628dc - 0x16290c
void entry_001628dc_0x1628dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001628dc_0x1628dc");
#endif

    ctx->pc = 0x1628dcu;

    // 0x1628dc: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x1628dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1628e0: 0x3c02403c  lui         $v0, 0x403C
    ctx->pc = 0x1628e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16444 << 16));
    // 0x1628e4: 0x34427edd  ori         $v0, $v0, 0x7EDD
    ctx->pc = 0x1628e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32477);
    // 0x1628e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1628e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1628ec: 0x0  nop
    ctx->pc = 0x1628ecu;
    // NOP
    // 0x1628f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1628f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1628f4: 0x0  nop
    ctx->pc = 0x1628f4u;
    // NOP
    // 0x1628f8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1628F8u;
    {
        const bool branch_taken_0x1628f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1628f8) {
            ctx->pc = 0x16290Cu;
            return;
        }
    }
    ctx->pc = 0x162900u;
    // 0x162900: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x162900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x162904: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x162904u;
    {
        const bool branch_taken_0x162904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162904) {
            ctx->pc = 0x162A7Cu;
            return;
        }
    }
    ctx->pc = 0x16290Cu;
}
