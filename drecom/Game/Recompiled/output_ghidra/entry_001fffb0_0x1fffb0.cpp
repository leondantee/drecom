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

// Function: entry_001fffb0
// Address: 0x1fffb0 - 0x200060
void entry_001fffb0_0x1fffb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fffb0_0x1fffb0");
#endif

    switch (ctx->pc) {
        case 0x1fffb8u: goto label_1fffb8;
        case 0x1ffff0u: goto label_1ffff0;
        case 0x200028u: goto label_200028;
        default: break;
    }

    ctx->pc = 0x1fffb0u;

    // 0x1fffb0: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FFFB0u;
    SET_GPR_U32(ctx, 31, 0x1FFFB8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FFFB0u, 0x1FFFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFFB8u;
label_1fffb8:
    // 0x1fffb8: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1fffb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1fffbc: 0xc48102a4  lwc1        $f1, 0x2A4($a0)
    ctx->pc = 0x1fffbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fffc0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fffc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fffc4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fffc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fffc8: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1fffc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1fffcc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1fffccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fffd0: 0xc4600480  lwc1        $f0, 0x480($v1)
    ctx->pc = 0x1fffd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fffd4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fffd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fffd8: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fffd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fffdc: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1fffdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1fffe0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fffe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fffe4: 0xe4600480  swc1        $f0, 0x480($v1)
    ctx->pc = 0x1fffe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1152), bits); }
    // 0x1fffe8: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FFFE8u;
    SET_GPR_U32(ctx, 31, 0x1FFFF0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FFFE8u, 0x1FFFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFFF0u;
label_1ffff0:
    // 0x1ffff0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffff4: 0xc46102a4  lwc1        $f1, 0x2A4($v1)
    ctx->pc = 0x1ffff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ffff8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1ffff8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ffffc: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1ffffcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x200000: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x200000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x200004: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x200004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x200008: 0xc4600484  lwc1        $f0, 0x484($v1)
    ctx->pc = 0x200008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20000c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20000cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x200010: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x200010u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x200014: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x200014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x200018: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x200018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x20001c: 0xe4800484  swc1        $f0, 0x484($a0)
    ctx->pc = 0x20001cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1156), bits); }
    // 0x200020: 0xc067648  jal         func_19D920
    ctx->pc = 0x200020u;
    SET_GPR_U32(ctx, 31, 0x200028u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x200020u, 0x200028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200028u;
label_200028:
    // 0x200028: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x200028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x20002c: 0xc46102a4  lwc1        $f1, 0x2A4($v1)
    ctx->pc = 0x20002cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200030: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x200030u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x200034: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x200034u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x200038: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x200038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x20003c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x20003cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x200040: 0xc4a00488  lwc1        $f0, 0x488($a1)
    ctx->pc = 0x200040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200044: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x200044u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x200048: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x200048u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x20004c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x20004cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x200050: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x200050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x200054: 0xe4600488  swc1        $f0, 0x488($v1)
    ctx->pc = 0x200054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1160), bits); }
    // 0x200058: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x200058u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20005c: 0x0  nop
    ctx->pc = 0x20005cu;
    // NOP
    ctx->pc = 0x200060u;
}
