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

// Function: default
// Address: 0x1629c0 - 0x162a00
void ps2_default_0x1629c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x1629c0");
#endif

    ctx->pc = 0x1629c0u;

    // 0x1629c0: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x1629c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1629c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1629c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1629c8: 0x0  nop
    ctx->pc = 0x1629c8u;
    // NOP
    // 0x1629cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1629ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1629d0: 0x0  nop
    ctx->pc = 0x1629d0u;
    // NOP
    // 0x1629d4: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1629D4u;
    {
        const bool branch_taken_0x1629d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1629d4) {
            ctx->pc = 0x162A30u;
            return;
        }
    }
    ctx->pc = 0x1629DCu;
    // 0x1629dc: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x1629dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1629e0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1629e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1629e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1629e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1629e8: 0x0  nop
    ctx->pc = 0x1629e8u;
    // NOP
    // 0x1629ec: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1629ECu;
    {
        const bool branch_taken_0x1629ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1629ec) {
            ctx->pc = 0x162A00u;
            return;
        }
    }
    ctx->pc = 0x1629F4u;
    // 0x1629f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1629f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1629f8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1629F8u;
    {
        const bool branch_taken_0x1629f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1629f8) {
            ctx->pc = 0x162A7Cu;
            return;
        }
    }
    ctx->pc = 0x162A00u;
}
