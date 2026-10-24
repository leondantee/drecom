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

// Function: entry_0015f2d4
// Address: 0x15f2d4 - 0x15f30c
void entry_0015f2d4_0x15f2d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f2d4_0x15f2d4");
#endif

    ctx->pc = 0x15f2d4u;

    // 0x15f2d4: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x15f2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f2d8: 0x3c02452b  lui         $v0, 0x452B
    ctx->pc = 0x15f2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17707 << 16));
    // 0x15f2dc: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x15f2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x15f2e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f2e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f2e4: 0x0  nop
    ctx->pc = 0x15f2e4u;
    // NOP
    // 0x15f2e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15f2e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15f2ec: 0x0  nop
    ctx->pc = 0x15f2ecu;
    // NOP
    // 0x15f2f0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x15F2F0u;
    {
        const bool branch_taken_0x15f2f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15f2f0) {
            ctx->pc = 0x15F30Cu;
            return;
        }
    }
    ctx->pc = 0x15F2F8u;
    // 0x15f2f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15f2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15f2fc: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x15f2fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x15f300: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f304: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x15F304u;
    {
        const bool branch_taken_0x15f304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f304) {
            ctx->pc = 0x15F348u;
            return;
        }
    }
    ctx->pc = 0x15F30Cu;
}
