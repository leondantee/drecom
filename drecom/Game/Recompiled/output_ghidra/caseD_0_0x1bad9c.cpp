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

// Function: caseD_0
// Address: 0x1bad9c - 0x1bae14
void caseD_0_0x1bad9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1bad9c");
#endif

    switch (ctx->pc) {
        case 0x1badc0u: goto label_1badc0;
        case 0x1bae00u: goto label_1bae00;
        default: break;
    }

    ctx->pc = 0x1bad9cu;

    // 0x1bad9c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1bad9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bada0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bada0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bada4: 0xa04410a8  sb          $a0, 0x10A8($v0)
    ctx->pc = 0x1bada4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bada8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bada8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1badac: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1badacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1badb0: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x1badb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1badb4: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1badb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1badb8: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1BADB8u;
    SET_GPR_U32(ctx, 31, 0x1BADC0u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1BADB8u, 0x1BADC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BADC0u;
label_1badc0:
    // 0x1badc0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1badc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1badc4: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1badc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1badc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1badc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1badcc: 0x0  nop
    ctx->pc = 0x1badccu;
    // NOP
    // 0x1badd0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1badd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1badd4: 0x0  nop
    ctx->pc = 0x1badd4u;
    // NOP
    // 0x1badd8: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1BADD8u;
    {
        const bool branch_taken_0x1badd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1badd8) {
            ctx->pc = 0x1BAE14u;
            return;
        }
    }
    ctx->pc = 0x1BADE0u;
    // 0x1bade0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bade0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bade4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bade4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bade8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1bade8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1badec: 0x24060093  addiu       $a2, $zero, 0x93
    ctx->pc = 0x1badecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
    // 0x1badf0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1badf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1badf4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1badf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1badf8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BADF8u;
    SET_GPR_U32(ctx, 31, 0x1BAE00u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BADF8u, 0x1BAE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAE00u;
label_1bae00:
    // 0x1bae00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bae00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bae04: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bae04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bae08: 0xac431b60  sw          $v1, 0x1B60($v0)
    ctx->pc = 0x1bae08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 3));
    // 0x1bae0c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1BAE0Cu;
    {
        const bool branch_taken_0x1bae0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bae0c) {
            ctx->pc = 0x1BAE40u;
            return;
        }
    }
    ctx->pc = 0x1BAE14u;
}
