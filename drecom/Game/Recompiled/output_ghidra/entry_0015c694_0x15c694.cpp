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

// Function: entry_0015c694
// Address: 0x15c694 - 0x15c6d0
void entry_0015c694_0x15c694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c694_0x15c694");
#endif

    ctx->pc = 0x15c694u;

    // 0x15c694: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x15c694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c698: 0xc4611564  lwc1        $f1, 0x1564($v1)
    ctx->pc = 0x15c698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c69c: 0x3c03bf86  lui         $v1, 0xBF86
    ctx->pc = 0x15c69cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49030 << 16));
    // 0x15c6a0: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x15c6a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x15c6a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15c6a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15c6a8: 0x0  nop
    ctx->pc = 0x15c6a8u;
    // NOP
    // 0x15c6ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15c6acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c6b0: 0x0  nop
    ctx->pc = 0x15c6b0u;
    // NOP
    // 0x15c6b4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x15C6B4u;
    {
        const bool branch_taken_0x15c6b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15c6b4) {
            ctx->pc = 0x15C6D0u;
            return;
        }
    }
    ctx->pc = 0x15C6BCu;
    // 0x15c6bc: 0x3c03bf86  lui         $v1, 0xBF86
    ctx->pc = 0x15c6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49030 << 16));
    // 0x15c6c0: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x15c6c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x15c6c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15c6c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15c6c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x15c6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c6cc: 0xe4601564  swc1        $f0, 0x1564($v1)
    ctx->pc = 0x15c6ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5476), bits); }
    ctx->pc = 0x15c6d0u;
}
