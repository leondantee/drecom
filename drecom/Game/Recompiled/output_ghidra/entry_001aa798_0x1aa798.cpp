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

// Function: entry_001aa798
// Address: 0x1aa798 - 0x1aa7d4
void entry_001aa798_0x1aa798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa798_0x1aa798");
#endif

    ctx->pc = 0x1aa798u;

    // 0x1aa798: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1aa798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aa79c: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x1aa79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa7a0: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1aa7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa7a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1aa7a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa7a8: 0x0  nop
    ctx->pc = 0x1aa7a8u;
    // NOP
    // 0x1aa7ac: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1AA7ACu;
    {
        const bool branch_taken_0x1aa7ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aa7ac) {
            ctx->pc = 0x1AA7D4u;
            return;
        }
    }
    ctx->pc = 0x1AA7B4u;
    // 0x1aa7b4: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1aa7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa7b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1aa7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aa7bc: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x1aa7bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x1aa7c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1aa7c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1aa7c4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1aa7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1aa7c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1aa7c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aa7cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1aa7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aa7d0: 0xe46000a8  swc1        $f0, 0xA8($v1)
    ctx->pc = 0x1aa7d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 168), bits); }
    ctx->pc = 0x1aa7d4u;
}
