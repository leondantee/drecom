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

// Function: entry_001bc764
// Address: 0x1bc764 - 0x1bc7b8
void entry_001bc764_0x1bc764(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc764_0x1bc764");
#endif

    ctx->pc = 0x1bc764u;

    // 0x1bc764: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bc764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc768: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x1bc768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bc76c: 0x3c123dcc  lui         $s2, 0x3DCC
    ctx->pc = 0x1bc76cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)15820 << 16));
    // 0x1bc770: 0x3643cccd  ori         $v1, $s2, 0xCCCD
    ctx->pc = 0x1bc770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)52429);
    // 0x1bc774: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bc774u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc778: 0x0  nop
    ctx->pc = 0x1bc778u;
    // NOP
    // 0x1bc77c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1bc77cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1bc780: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x1bc780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    // 0x1bc784: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc788: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1bc788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bc78c: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x1bc78cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
    // 0x1bc790: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1bc790u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc794: 0x0  nop
    ctx->pc = 0x1bc794u;
    // NOP
    // 0x1bc798: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bc798u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bc79c: 0x0  nop
    ctx->pc = 0x1bc79cu;
    // NOP
    // 0x1bc7a0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC7A0u;
    {
        const bool branch_taken_0x1bc7a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bc7a0) {
            ctx->pc = 0x1BC7B8u;
            return;
        }
    }
    ctx->pc = 0x1BC7A8u;
    // 0x1bc7a8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1bc7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1bc7ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bc7acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc7b0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc7b4: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1bc7b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    ctx->pc = 0x1bc7b8u;
}
