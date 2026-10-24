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

// Function: entry_001cb0c4
// Address: 0x1cb0c4 - 0x1cb10c
void entry_001cb0c4_0x1cb0c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb0c4_0x1cb0c4");
#endif

    ctx->pc = 0x1cb0c4u;

    // 0x1cb0c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb0c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb0c8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb0cc: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x1cb0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    // 0x1cb0d0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb0d4: 0xc4411388  lwc1        $f1, 0x1388($v0)
    ctx->pc = 0x1cb0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb0d8: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1cb0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x1cb0dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb0dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb0e0: 0x0  nop
    ctx->pc = 0x1cb0e0u;
    // NOP
    // 0x1cb0e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cb0e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb0e8: 0x0  nop
    ctx->pc = 0x1cb0e8u;
    // NOP
    // 0x1cb0ec: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1CB0ECu;
    {
        const bool branch_taken_0x1cb0ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb0ec) {
            ctx->pc = 0x1CB10Cu;
            return;
        }
    }
    ctx->pc = 0x1CB0F4u;
    // 0x1cb0f4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb0f8: 0xc4401380  lwc1        $f0, 0x1380($v0)
    ctx->pc = 0x1cb0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb0fc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb100: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x1cb100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x1cb104: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CB104u;
    {
        const bool branch_taken_0x1cb104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb104) {
            ctx->pc = 0x1CB11Cu;
            return;
        }
    }
    ctx->pc = 0x1CB10Cu;
}
