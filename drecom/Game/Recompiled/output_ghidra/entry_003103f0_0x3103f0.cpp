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

// Function: entry_003103f0
// Address: 0x3103f0 - 0x310454
void entry_003103f0_0x3103f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003103f0_0x3103f0");
#endif

    ctx->pc = 0x3103f0u;

    // 0x3103f0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3103f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3103f4: 0x24421354  addiu       $v0, $v0, 0x1354
    ctx->pc = 0x3103f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4948));
    // 0x3103f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3103f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3103fc: 0xc4610104  lwc1        $f1, 0x104($v1)
    ctx->pc = 0x3103fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310400: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x310400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x310404: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x310404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x310408: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x310408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31040c: 0x0  nop
    ctx->pc = 0x31040cu;
    // NOP
    // 0x310410: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x310410u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x310414: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x310414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x310418: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x310418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31041c: 0x24421354  addiu       $v0, $v0, 0x1354
    ctx->pc = 0x31041cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4948));
    // 0x310420: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x310420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x310424: 0xc4410104  lwc1        $f1, 0x104($v0)
    ctx->pc = 0x310424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310428: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x310428u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31042c: 0x0  nop
    ctx->pc = 0x31042cu;
    // NOP
    // 0x310430: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x310430u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310434: 0x0  nop
    ctx->pc = 0x310434u;
    // NOP
    // 0x310438: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x310438u;
    {
        const bool branch_taken_0x310438 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x310438) {
            ctx->pc = 0x310454u;
            return;
        }
    }
    ctx->pc = 0x310440u;
    // 0x310440: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x310440u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310444: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x310444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310448: 0x24421354  addiu       $v0, $v0, 0x1354
    ctx->pc = 0x310448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4948));
    // 0x31044c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x31044cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x310450: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x310450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    ctx->pc = 0x310454u;
}
