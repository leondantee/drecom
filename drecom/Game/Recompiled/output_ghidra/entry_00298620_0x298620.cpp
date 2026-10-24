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

// Function: entry_00298620
// Address: 0x298620 - 0x298668
void entry_00298620_0x298620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00298620_0x298620");
#endif

    ctx->pc = 0x298620u;

    // 0x298620: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x298620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298624: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x298624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298628: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x298628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29862c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29862cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x298630: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x298630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x298634: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x298634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298638: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x298638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29863c: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x29863cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
    // 0x298640: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298644: 0x0  nop
    ctx->pc = 0x298644u;
    // NOP
    // 0x298648: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x298648u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29864c: 0x0  nop
    ctx->pc = 0x29864cu;
    // NOP
    // 0x298650: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x298650u;
    {
        const bool branch_taken_0x298650 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x298650) {
            ctx->pc = 0x298668u;
            return;
        }
    }
    ctx->pc = 0x298658u;
    // 0x298658: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x298658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
    // 0x29865c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29865cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298660: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x298660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298664: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x298664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    ctx->pc = 0x298668u;
}
