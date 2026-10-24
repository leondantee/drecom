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

// Function: entry_00328618
// Address: 0x328618 - 0x3286c8
void entry_00328618_0x328618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00328618_0x328618");
#endif

    switch (ctx->pc) {
        case 0x328620u: goto label_328620;
        case 0x328658u: goto label_328658;
        case 0x328690u: goto label_328690;
        default: break;
    }

    ctx->pc = 0x328618u;

    // 0x328618: 0xc067648  jal         func_19D920
    ctx->pc = 0x328618u;
    SET_GPR_U32(ctx, 31, 0x328620u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x328618u, 0x328620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328620u;
label_328620:
    // 0x328620: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x328620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328624: 0xc4410274  lwc1        $f1, 0x274($v0)
    ctx->pc = 0x328624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x328628: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x328628u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32862c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x32862cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x328630: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x328630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328634: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x328634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x328638: 0xc4400480  lwc1        $f0, 0x480($v0)
    ctx->pc = 0x328638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32863c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x32863cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x328640: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x328640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x328644: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x328644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328648: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x328648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32864c: 0xe4400480  swc1        $f0, 0x480($v0)
    ctx->pc = 0x32864cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1152), bits); }
    // 0x328650: 0xc067648  jal         func_19D920
    ctx->pc = 0x328650u;
    SET_GPR_U32(ctx, 31, 0x328658u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x328650u, 0x328658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328658u;
label_328658:
    // 0x328658: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x328658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32865c: 0xc4410274  lwc1        $f1, 0x274($v0)
    ctx->pc = 0x32865cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x328660: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x328660u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x328664: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x328664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x328668: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x328668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32866c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32866cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x328670: 0xc4400484  lwc1        $f0, 0x484($v0)
    ctx->pc = 0x328670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x328674: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x328674u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x328678: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x328678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x32867c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x32867cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328680: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x328680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x328684: 0xe4400484  swc1        $f0, 0x484($v0)
    ctx->pc = 0x328684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1156), bits); }
    // 0x328688: 0xc067648  jal         func_19D920
    ctx->pc = 0x328688u;
    SET_GPR_U32(ctx, 31, 0x328690u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x328688u, 0x328690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328690u;
label_328690:
    // 0x328690: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x328690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328694: 0xc4610274  lwc1        $f1, 0x274($v1)
    ctx->pc = 0x328694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x328698: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x328698u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32869c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x32869cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3286a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3286a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3286a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3286a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3286a8: 0xc4600488  lwc1        $f0, 0x488($v1)
    ctx->pc = 0x3286a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3286ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3286acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3286b0: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x3286b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3286b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3286b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3286b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3286b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3286bc: 0xe4600488  swc1        $f0, 0x488($v1)
    ctx->pc = 0x3286bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1160), bits); }
    // 0x3286c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3286c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3286c4: 0x0  nop
    ctx->pc = 0x3286c4u;
    // NOP
    ctx->pc = 0x3286c8u;
}
