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

// Function: entry_003506b8
// Address: 0x3506b8 - 0x3506f4
void entry_003506b8_0x3506b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003506b8_0x3506b8");
#endif

    ctx->pc = 0x3506b8u;

    // 0x3506b8: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x3506b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3506bc: 0x84a61278  lh          $a2, 0x1278($a1)
    ctx->pc = 0x3506bcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x3506c0: 0x24c7ffff  addiu       $a3, $a2, -0x1
    ctx->pc = 0x3506c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3506c4: 0xa4a71278  sh          $a3, 0x1278($a1)
    ctx->pc = 0x3506c4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 7));
    // 0x3506c8: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x3506C8u;
    {
        const bool branch_taken_0x3506c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3506c8) {
            ctx->pc = 0x3506F4u;
            return;
        }
    }
    ctx->pc = 0x3506D0u;
    // 0x3506d0: 0x8fa80088  lw          $t0, 0x88($sp)
    ctx->pc = 0x3506d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3506d4: 0xc501128c  lwc1        $f1, 0x128C($t0)
    ctx->pc = 0x3506d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3506d8: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x3506d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x3506dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3506dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3506e0: 0x0  nop
    ctx->pc = 0x3506e0u;
    // NOP
    // 0x3506e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3506e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3506e8: 0x0  nop
    ctx->pc = 0x3506e8u;
    // NOP
    // 0x3506ec: 0x4500008c  bc1f        . + 4 + (0x8C << 2)
    ctx->pc = 0x3506ECu;
    {
        const bool branch_taken_0x3506ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3506ec) {
            ctx->pc = 0x350920u;
            return;
        }
    }
    ctx->pc = 0x3506F4u;
}
