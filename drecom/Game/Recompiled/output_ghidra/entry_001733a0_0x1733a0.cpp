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

// Function: entry_001733a0
// Address: 0x1733a0 - 0x1733c8
void entry_001733a0_0x1733a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001733a0_0x1733a0");
#endif

    ctx->pc = 0x1733a0u;

    // 0x1733a0: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1733a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1733a4: 0x3c024016  lui         $v0, 0x4016
    ctx->pc = 0x1733a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16406 << 16));
    // 0x1733a8: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x1733a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x1733ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1733acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1733b0: 0x0  nop
    ctx->pc = 0x1733b0u;
    // NOP
    // 0x1733b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1733b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1733b8: 0x0  nop
    ctx->pc = 0x1733b8u;
    // NOP
    // 0x1733bc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1733BCu;
    {
        const bool branch_taken_0x1733bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1733bc) {
            ctx->pc = 0x1733C8u;
            return;
        }
    }
    ctx->pc = 0x1733C4u;
    // 0x1733c4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1733c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1733c8u;
}
