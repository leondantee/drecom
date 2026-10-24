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

// Function: entry_001fbb48
// Address: 0x1fbb48 - 0x1fbbf8
void entry_001fbb48_0x1fbb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fbb48_0x1fbb48");
#endif

    switch (ctx->pc) {
        case 0x1fbb50u: goto label_1fbb50;
        case 0x1fbb88u: goto label_1fbb88;
        case 0x1fbbc0u: goto label_1fbbc0;
        default: break;
    }

    ctx->pc = 0x1fbb48u;

    // 0x1fbb48: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FBB48u;
    SET_GPR_U32(ctx, 31, 0x1FBB50u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FBB48u, 0x1FBB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBB50u;
label_1fbb50:
    // 0x1fbb50: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fbb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbb54: 0xc46102a4  lwc1        $f1, 0x2A4($v1)
    ctx->pc = 0x1fbb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fbb58: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fbb58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fbb5c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fbb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fbb60: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fbb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbb64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fbb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fbb68: 0xc4600480  lwc1        $f0, 0x480($v1)
    ctx->pc = 0x1fbb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fbb6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fbb6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fbb70: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fbb70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fbb74: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fbb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbb78: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1fbb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fbb7c: 0xe4800480  swc1        $f0, 0x480($a0)
    ctx->pc = 0x1fbb7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1152), bits); }
    // 0x1fbb80: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FBB80u;
    SET_GPR_U32(ctx, 31, 0x1FBB88u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FBB80u, 0x1FBB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBB88u;
label_1fbb88:
    // 0x1fbb88: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fbb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbb8c: 0xc46102a4  lwc1        $f1, 0x2A4($v1)
    ctx->pc = 0x1fbb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fbb90: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fbb90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fbb94: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fbb94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fbb98: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fbb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbb9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fbb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fbba0: 0xc4600484  lwc1        $f0, 0x484($v1)
    ctx->pc = 0x1fbba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fbba4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fbba4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fbba8: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fbba8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fbbac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fbbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbbb0: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1fbbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fbbb4: 0xe4a00484  swc1        $f0, 0x484($a1)
    ctx->pc = 0x1fbbb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 1156), bits); }
    // 0x1fbbb8: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FBBB8u;
    SET_GPR_U32(ctx, 31, 0x1FBBC0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FBBB8u, 0x1FBBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBBC0u;
label_1fbbc0:
    // 0x1fbbc0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fbbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbbc4: 0xc46102a4  lwc1        $f1, 0x2A4($v1)
    ctx->pc = 0x1fbbc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fbbc8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fbbc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fbbcc: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fbbccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fbbd0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fbbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbbd4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1fbbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fbbd8: 0xc4a00488  lwc1        $f0, 0x488($a1)
    ctx->pc = 0x1fbbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fbbdc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fbbdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fbbe0: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fbbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fbbe4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fbbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbbe8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fbbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fbbec: 0xe4600488  swc1        $f0, 0x488($v1)
    ctx->pc = 0x1fbbecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1160), bits); }
    // 0x1fbbf0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fbbf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fbbf4: 0x0  nop
    ctx->pc = 0x1fbbf4u;
    // NOP
    ctx->pc = 0x1fbbf8u;
}
