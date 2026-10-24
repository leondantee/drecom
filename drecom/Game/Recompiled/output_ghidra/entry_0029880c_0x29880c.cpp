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

// Function: entry_0029880c
// Address: 0x29880c - 0x298854
void entry_0029880c_0x29880c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029880c_0x29880c");
#endif

    ctx->pc = 0x29880cu;

    // 0x29880c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x29880cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298810: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x298810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298814: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x298814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298818: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x298818u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29881c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x29881cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x298820: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x298820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298824: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x298824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298828: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x298828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
    // 0x29882c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29882cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298830: 0x0  nop
    ctx->pc = 0x298830u;
    // NOP
    // 0x298834: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x298834u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x298838: 0x0  nop
    ctx->pc = 0x298838u;
    // NOP
    // 0x29883c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x29883Cu;
    {
        const bool branch_taken_0x29883c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29883c) {
            ctx->pc = 0x298854u;
            return;
        }
    }
    ctx->pc = 0x298844u;
    // 0x298844: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x298844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
    // 0x298848: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29884c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x29884cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298850: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x298850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    ctx->pc = 0x298854u;
}
