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

// Function: entry_0028e96c
// Address: 0x28e96c - 0x28ea38
void entry_0028e96c_0x28e96c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028e96c_0x28e96c");
#endif

    switch (ctx->pc) {
        case 0x28e97cu: goto label_28e97c;
        case 0x28e994u: goto label_28e994;
        case 0x28e9a8u: goto label_28e9a8;
        case 0x28e9c0u: goto label_28e9c0;
        case 0x28ea08u: goto label_28ea08;
        default: break;
    }

    ctx->pc = 0x28e96cu;

    // 0x28e96c: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x28e96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28e970: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x28e970u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x28e974: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28E974u;
    SET_GPR_U32(ctx, 31, 0x28E97Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28E974u, 0x28E97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E97Cu;
label_28e97c:
    // 0x28e97c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x28e97cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e980: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x28e980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28e984: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28e984u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e988: 0x73c02e28  paddub      $a1, $fp, $zero
    ctx->pc = 0x28e988u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x28e98c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28E98Cu;
    SET_GPR_U32(ctx, 31, 0x28E994u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28E98Cu, 0x28E994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E994u;
label_28e994:
    // 0x28e994: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x28e994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28e998: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28e998u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28e99c: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x28e99cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x28e9a0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28E9A0u;
    SET_GPR_U32(ctx, 31, 0x28E9A8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28E9A0u, 0x28E9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E9A8u;
label_28e9a8:
    // 0x28e9a8: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x28e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28e9ac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28e9acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e9b0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x28e9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x28e9b4: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x28e9b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28e9b8: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28E9B8u;
    SET_GPR_U32(ctx, 31, 0x28E9C0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28E9B8u, 0x28E9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E9C0u;
label_28e9c0:
    // 0x28e9c0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28e9c0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e9c4: 0x92036854  lbu         $v1, 0x6854($s0)
    ctx->pc = 0x28e9c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26708)));
    // 0x28e9c8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x28e9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28e9cc: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x28E9CCu;
    {
        const bool branch_taken_0x28e9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e9cc) {
            ctx->pc = 0x28EAE0u;
            return;
        }
    }
    ctx->pc = 0x28E9D4u;
    // 0x28e9d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28e9d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28e9d8: 0x8c22011c  lw          $v0, 0x11C($at)
    ctx->pc = 0x28e9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x28e9dc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x28e9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x28e9e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28e9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28e9e4: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x28E9E4u;
    {
        const bool branch_taken_0x28e9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e9e4) {
            ctx->pc = 0x28EAA8u;
            return;
        }
    }
    ctx->pc = 0x28E9ECu;
    // 0x28e9ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28e9ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28e9f0: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x28e9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x28e9f4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28e9f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e9f8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28e9f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28e9fc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28e9fcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28ea00: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x28EA00u;
    SET_GPR_U32(ctx, 31, 0x28EA08u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x28EA00u, 0x28EA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EA08u;
label_28ea08:
    // 0x28ea08: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28ea08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28ea0c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28ea0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28ea10: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x28EA10u;
    {
        const bool branch_taken_0x28ea10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ea10) {
            ctx->pc = 0x28EA60u;
            return;
        }
    }
    ctx->pc = 0x28EA18u;
    // 0x28ea18: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x28ea18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x28ea1c: 0x8c22c294  lw          $v0, -0x3D6C($at)
    ctx->pc = 0x28ea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FC294u));
    // 0x28ea20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28EA20u;
    {
        const bool branch_taken_0x28ea20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ea20) {
            ctx->pc = 0x28EA38u;
            return;
        }
    }
    ctx->pc = 0x28EA28u;
    // 0x28ea28: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x28ea28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x28ea2c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28ea2cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28ea30: 0xc0d7558  jal         func_35D560
    ctx->pc = 0x28EA30u;
    SET_GPR_U32(ctx, 31, 0x28EA38u);
    ctx->pc = 0x35D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D560u, 0x28EA30u, 0x28EA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EA38u;
}
