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

// Function: entry_001aa594
// Address: 0x1aa594 - 0x1aa5d8
void entry_001aa594_0x1aa594(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa594_0x1aa594");
#endif

    ctx->pc = 0x1aa594u;

    // 0x1aa594: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa598: 0xc4610094  lwc1        $f1, 0x94($v1)
    ctx->pc = 0x1aa598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa59c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa5a0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1aa5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa5a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1aa5a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa5a8: 0x0  nop
    ctx->pc = 0x1aa5a8u;
    // NOP
    // 0x1aa5ac: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1AA5ACu;
    {
        const bool branch_taken_0x1aa5ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aa5ac) {
            ctx->pc = 0x1AA5D8u;
            return;
        }
    }
    ctx->pc = 0x1AA5B4u;
    // 0x1aa5b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa5b8: 0xc4600094  lwc1        $f0, 0x94($v1)
    ctx->pc = 0x1aa5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa5bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa5c0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1aa5c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1aa5c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1aa5c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1aa5c8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1aa5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1aa5cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1aa5ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aa5d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa5d4: 0xe46000a4  swc1        $f0, 0xA4($v1)
    ctx->pc = 0x1aa5d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 164), bits); }
    ctx->pc = 0x1aa5d8u;
}
