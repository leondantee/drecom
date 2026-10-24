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

// Function: entry_0022da4c
// Address: 0x22da4c - 0x22dac0
void entry_0022da4c_0x22da4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022da4c_0x22da4c");
#endif

    ctx->pc = 0x22da4cu;

    // 0x22da4c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22da4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22da50: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22da50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22da54: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22da54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22da58: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22da58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22da5c: 0xc46100a0  lwc1        $f1, 0xA0($v1)
    ctx->pc = 0x22da5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22da60: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x22da60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22da64: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x22da64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22da68: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x22da68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x22da6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22da6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22da70: 0x0  nop
    ctx->pc = 0x22da70u;
    // NOP
    // 0x22da74: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22da74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22da78: 0x0  nop
    ctx->pc = 0x22da78u;
    // NOP
    // 0x22da7c: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x22DA7Cu;
    {
        const bool branch_taken_0x22da7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22da7c) {
            ctx->pc = 0x22DAC0u;
            return;
        }
    }
    ctx->pc = 0x22DA84u;
    // 0x22da84: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22da84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22da88: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x22da88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x22da8c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22DA8Cu;
    {
        const bool branch_taken_0x22da8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22da8c) {
            ctx->pc = 0x22DAC0u;
            return;
        }
    }
    ctx->pc = 0x22DA94u;
    // 0x22da94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22da94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22da98: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22da98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22da9c: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x22da9cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x22daa0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22daa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22daa4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x22daa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22daa8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22daa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22daac: 0x24067802  addiu       $a2, $zero, 0x7802
    ctx->pc = 0x22daacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30722));
    // 0x22dab0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22dab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22dab4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22dab4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22dab8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22DAB8u;
    SET_GPR_U32(ctx, 31, 0x22DAC0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22DAB8u, 0x22DAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DAC0u;
}
