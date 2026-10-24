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

// Function: entry_0022d5a8
// Address: 0x22d5a8 - 0x22d5e4
void entry_0022d5a8_0x22d5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022d5a8_0x22d5a8");
#endif

    ctx->pc = 0x22d5a8u;

    // 0x22d5a8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d5ac: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22d5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22d5b0: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x22d5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d5b4: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x22d5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x22d5b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22d5b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d5bc: 0x0  nop
    ctx->pc = 0x22d5bcu;
    // NOP
    // 0x22d5c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22d5c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22d5c4: 0x0  nop
    ctx->pc = 0x22d5c4u;
    // NOP
    // 0x22d5c8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x22D5C8u;
    {
        const bool branch_taken_0x22d5c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d5c8) {
            ctx->pc = 0x22D5E4u;
            return;
        }
    }
    ctx->pc = 0x22D5D0u;
    // 0x22d5d0: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x22d5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x22d5d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22d5d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d5d8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d5dc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22d5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22d5e0: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x22d5e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    ctx->pc = 0x22d5e4u;
}
