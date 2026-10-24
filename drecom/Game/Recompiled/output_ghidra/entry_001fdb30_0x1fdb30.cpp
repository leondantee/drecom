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

// Function: entry_001fdb30
// Address: 0x1fdb30 - 0x1fdbc8
void entry_001fdb30_0x1fdb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fdb30_0x1fdb30");
#endif

    switch (ctx->pc) {
        case 0x1fdb40u: goto label_1fdb40;
        case 0x1fdb70u: goto label_1fdb70;
        case 0x1fdba0u: goto label_1fdba0;
        default: break;
    }

    ctx->pc = 0x1fdb30u;

    // 0x1fdb30: 0x12400025  beqz        $s2, . + 4 + (0x25 << 2)
    ctx->pc = 0x1FDB30u;
    {
        const bool branch_taken_0x1fdb30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdb30) {
            ctx->pc = 0x1FDBC8u;
            return;
        }
    }
    ctx->pc = 0x1FDB38u;
    // 0x1fdb38: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FDB38u;
    SET_GPR_U32(ctx, 31, 0x1FDB40u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FDB38u, 0x1FDB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDB40u;
label_1fdb40:
    // 0x1fdb40: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fdb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdb44: 0xc4410270  lwc1        $f1, 0x270($v0)
    ctx->pc = 0x1fdb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fdb48: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fdb48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fdb4c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fdb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdb50: 0xc4400280  lwc1        $f0, 0x280($v0)
    ctx->pc = 0x1fdb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fdb54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fdb54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fdb58: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1fdb58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1fdb5c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fdb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdb60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fdb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fdb64: 0xe4400140  swc1        $f0, 0x140($v0)
    ctx->pc = 0x1fdb64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 320), bits); }
    // 0x1fdb68: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FDB68u;
    SET_GPR_U32(ctx, 31, 0x1FDB70u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FDB68u, 0x1FDB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDB70u;
label_1fdb70:
    // 0x1fdb70: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fdb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdb74: 0xc4410274  lwc1        $f1, 0x274($v0)
    ctx->pc = 0x1fdb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fdb78: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fdb78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fdb7c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fdb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdb80: 0xc4400284  lwc1        $f0, 0x284($v0)
    ctx->pc = 0x1fdb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fdb84: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fdb84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fdb88: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1fdb88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1fdb8c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fdb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdb90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fdb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fdb94: 0xe4400144  swc1        $f0, 0x144($v0)
    ctx->pc = 0x1fdb94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 324), bits); }
    // 0x1fdb98: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FDB98u;
    SET_GPR_U32(ctx, 31, 0x1FDBA0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FDB98u, 0x1FDBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDBA0u;
label_1fdba0:
    // 0x1fdba0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fdba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdba4: 0xc4410278  lwc1        $f1, 0x278($v0)
    ctx->pc = 0x1fdba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fdba8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fdba8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fdbac: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fdbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdbb0: 0xc4400288  lwc1        $f0, 0x288($v0)
    ctx->pc = 0x1fdbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fdbb4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fdbb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fdbb8: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1fdbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1fdbbc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fdbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdbc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fdbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fdbc4: 0xe4400148  swc1        $f0, 0x148($v0)
    ctx->pc = 0x1fdbc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 328), bits); }
    ctx->pc = 0x1fdbc8u;
}
