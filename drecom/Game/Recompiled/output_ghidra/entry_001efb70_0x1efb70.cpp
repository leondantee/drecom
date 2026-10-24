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

// Function: entry_001efb70
// Address: 0x1efb70 - 0x1efc04
void entry_001efb70_0x1efb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001efb70_0x1efb70");
#endif

    switch (ctx->pc) {
        case 0x1efbc0u: goto label_1efbc0;
        case 0x1efbd0u: goto label_1efbd0;
        case 0x1efbe0u: goto label_1efbe0;
        default: break;
    }

    ctx->pc = 0x1efb70u;

    // 0x1efb70: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x1efb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efb74: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1efb74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1efb78: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1efb78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1efb7c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1efb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efb80: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1efb80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1efb84: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1efb84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1efb88: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1efb88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1efb8c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1efb8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1efb90: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1efb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1efb94: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1efb94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1efb98: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1efb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1efb9c: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x1efb9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x1efba0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1efba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efba4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1efba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1efba8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1efba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1efbac: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1efbacu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1efbb0: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x1efbb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x1efbb4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1efbb4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1efbb8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1EFBB8u;
    SET_GPR_U32(ctx, 31, 0x1EFBC0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1EFBB8u, 0x1EFBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFBC0u;
label_1efbc0:
    // 0x1efbc0: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1efbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1efbc4: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x1efbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x1efbc8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1EFBC8u;
    SET_GPR_U32(ctx, 31, 0x1EFBD0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1EFBC8u, 0x1EFBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFBD0u;
label_1efbd0:
    // 0x1efbd0: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x1efbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x1efbd4: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x1efbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x1efbd8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1EFBD8u;
    SET_GPR_U32(ctx, 31, 0x1EFBE0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1EFBD8u, 0x1EFBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFBE0u;
label_1efbe0:
    // 0x1efbe0: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1efbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1efbe4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1efbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1efbe8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1efbe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1efbec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1efbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efbf0: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x1efbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x1efbf4: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1efbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1efbf8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1efbf8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1efbfc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1EFBFCu;
    SET_GPR_U32(ctx, 31, 0x1EFC04u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1EFBFCu, 0x1EFC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFC04u;
}
