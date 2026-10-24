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

// Function: caseD_6
// Address: 0x31c828 - 0x31c880
void caseD_6_0x31c828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x31c828");
#endif

    switch (ctx->pc) {
        case 0x31c834u: goto label_31c834;
        default: break;
    }

    ctx->pc = 0x31c828u;

    // 0x31c828: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31c828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c82c: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x31C82Cu;
    SET_GPR_U32(ctx, 31, 0x31C834u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x31C82Cu, 0x31C834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C834u;
label_31c834:
    // 0x31c834: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c838: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x31c838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31c83c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x31c83cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x31c840: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31c840u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c844: 0x0  nop
    ctx->pc = 0x31c844u;
    // NOP
    // 0x31c848: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31c848u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31c84c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x31c84cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x31c850: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c854: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x31c854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31c858: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31c858u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c85c: 0x0  nop
    ctx->pc = 0x31c85cu;
    // NOP
    // 0x31c860: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31c860u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31c864: 0x0  nop
    ctx->pc = 0x31c864u;
    // NOP
    // 0x31c868: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x31C868u;
    {
        const bool branch_taken_0x31c868 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31c868) {
            ctx->pc = 0x31C880u;
            return;
        }
    }
    ctx->pc = 0x31C870u;
    // 0x31c870: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c874: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x31c874u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x31c878: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31c878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31c87c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x31c87cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x31c880u;
}
