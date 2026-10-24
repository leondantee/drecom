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

// Function: entry_00247004
// Address: 0x247004 - 0x247044
void entry_00247004_0x247004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00247004_0x247004");
#endif

    ctx->pc = 0x247004u;

    // 0x247004: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x247004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x247008: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x247008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24700c: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x24700cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x247010: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247014: 0x0  nop
    ctx->pc = 0x247014u;
    // NOP
    // 0x247018: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x247018u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24701c: 0x0  nop
    ctx->pc = 0x24701cu;
    // NOP
    // 0x247020: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x247020u;
    {
        const bool branch_taken_0x247020 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x247020) {
            ctx->pc = 0x247044u;
            return;
        }
    }
    ctx->pc = 0x247028u;
    // 0x247028: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x247028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x24702c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24702cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247030: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x247030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x247034: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x247034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247038: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x247038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x24703c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x24703Cu;
    {
        const bool branch_taken_0x24703c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24703c) {
            ctx->pc = 0x247094u;
            return;
        }
    }
    ctx->pc = 0x247044u;
}
