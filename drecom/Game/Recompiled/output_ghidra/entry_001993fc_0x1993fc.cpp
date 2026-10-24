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

// Function: entry_001993fc
// Address: 0x1993fc - 0x199444
void entry_001993fc_0x1993fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001993fc_0x1993fc");
#endif

    ctx->pc = 0x1993fcu;

    // 0x1993fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1993fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199400: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x199400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199404: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x199404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199408: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x199408u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19940c: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x19940cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x199410: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199414: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x199414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199418: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x199418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x19941c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19941cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199420: 0x0  nop
    ctx->pc = 0x199420u;
    // NOP
    // 0x199424: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x199424u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x199428: 0x0  nop
    ctx->pc = 0x199428u;
    // NOP
    // 0x19942c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x19942Cu;
    {
        const bool branch_taken_0x19942c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19942c) {
            ctx->pc = 0x199444u;
            return;
        }
    }
    ctx->pc = 0x199434u;
    // 0x199434: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x199434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x199438: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19943c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19943cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199440: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x199440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    ctx->pc = 0x199444u;
}
