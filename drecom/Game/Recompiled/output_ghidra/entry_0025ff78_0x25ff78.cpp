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

// Function: entry_0025ff78
// Address: 0x25ff78 - 0x25ffb0
void entry_0025ff78_0x25ff78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025ff78_0x25ff78");
#endif

    ctx->pc = 0x25ff78u;

    // 0x25ff78: 0xc7a10258  lwc1        $f1, 0x258($sp)
    ctx->pc = 0x25ff78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ff7c: 0x3c05c3fa  lui         $a1, 0xC3FA
    ctx->pc = 0x25ff7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50170 << 16));
    // 0x25ff80: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x25ff80u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ff84: 0x0  nop
    ctx->pc = 0x25ff84u;
    // NOP
    // 0x25ff88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25ff88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ff8c: 0x0  nop
    ctx->pc = 0x25ff8cu;
    // NOP
    // 0x25ff90: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x25FF90u;
    {
        const bool branch_taken_0x25ff90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25ff90) {
            ctx->pc = 0x25FFB0u;
            return;
        }
    }
    ctx->pc = 0x25FF98u;
    // 0x25ff98: 0x8fa60260  lw          $a2, 0x260($sp)
    ctx->pc = 0x25ff98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x25ff9c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x25ff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25ffa0: 0x8cc502d4  lw          $a1, 0x2D4($a2)
    ctx->pc = 0x25ffa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 724)));
    // 0x25ffa4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25ffa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25ffa8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x25ffa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ffac: 0xe7a00258  swc1        $f0, 0x258($sp)
    ctx->pc = 0x25ffacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
    ctx->pc = 0x25ffb0u;
}
