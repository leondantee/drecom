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

// Function: entry_0026ce28
// Address: 0x26ce28 - 0x26ce90
void entry_0026ce28_0x26ce28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026ce28_0x26ce28");
#endif

    switch (ctx->pc) {
        case 0x26ce38u: goto label_26ce38;
        default: break;
    }

    ctx->pc = 0x26ce28u;

    // 0x26ce28: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26ce28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26ce2c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x26ce2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x26ce30: 0xc057a80  jal         func_15EA00
    ctx->pc = 0x26CE30u;
    SET_GPR_U32(ctx, 31, 0x26CE38u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x26CE30u, 0x26CE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CE38u;
label_26ce38:
    // 0x26ce38: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x26ce38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x26ce3c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26ce3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26ce40: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x26ce40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ce44: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x26ce44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
    // 0x26ce48: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x26ce48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x26ce4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26ce4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ce50: 0x0  nop
    ctx->pc = 0x26ce50u;
    // NOP
    // 0x26ce54: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x26ce54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26ce58: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x26ce58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x26ce5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26ce5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ce60: 0x0  nop
    ctx->pc = 0x26ce60u;
    // NOP
    // 0x26ce64: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x26ce64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26ce68: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x26ce68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ce6c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x26ce6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ce70: 0x0  nop
    ctx->pc = 0x26ce70u;
    // NOP
    // 0x26ce74: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x26CE74u;
    {
        const bool branch_taken_0x26ce74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ce74) {
            ctx->pc = 0x26CE90u;
            return;
        }
    }
    ctx->pc = 0x26CE7Cu;
    // 0x26ce7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26ce7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ce80: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26ce80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26ce84: 0xac431b64  sw          $v1, 0x1B64($v0)
    ctx->pc = 0x26ce84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7012), GPR_U32(ctx, 3));
    // 0x26ce88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26CE88u;
    {
        const bool branch_taken_0x26ce88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ce88) {
            ctx->pc = 0x26CE98u;
            return;
        }
    }
    ctx->pc = 0x26CE90u;
}
