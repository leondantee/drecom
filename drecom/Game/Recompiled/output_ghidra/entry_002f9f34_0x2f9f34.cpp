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

// Function: entry_002f9f34
// Address: 0x2f9f34 - 0x2f9ff8
void entry_002f9f34_0x2f9f34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f9f34_0x2f9f34");
#endif

    switch (ctx->pc) {
        case 0x2f9fe4u: goto label_2f9fe4;
        case 0x2f9ff0u: goto label_2f9ff0;
        default: break;
    }

    ctx->pc = 0x2f9f34u;

    // 0x2f9f34: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2f9f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9f38: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x2f9f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2f9f3c: 0x1060004d  beqz        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x2F9F3Cu;
    {
        const bool branch_taken_0x2f9f3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9f3c) {
            ctx->pc = 0x2FA074u;
            return;
        }
    }
    ctx->pc = 0x2F9F44u;
    // 0x2f9f44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2f9f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9f48: 0x8c6500d4  lw          $a1, 0xD4($v1)
    ctx->pc = 0x2f9f48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f9f4c: 0x28a1000d  slti        $at, $a1, 0xD
    ctx->pc = 0x2f9f4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x2f9f50: 0x14200048  bnez        $at, . + 4 + (0x48 << 2)
    ctx->pc = 0x2F9F50u;
    {
        const bool branch_taken_0x2f9f50 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9f50) {
            ctx->pc = 0x2FA074u;
            return;
        }
    }
    ctx->pc = 0x2F9F58u;
    // 0x2f9f58: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2f9f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9f5c: 0x8ca600d4  lw          $a2, 0xD4($a1)
    ctx->pc = 0x2f9f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x2f9f60: 0x28c1000e  slti        $at, $a2, 0xE
    ctx->pc = 0x2f9f60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x2f9f64: 0x10200043  beqz        $at, . + 4 + (0x43 << 2)
    ctx->pc = 0x2F9F64u;
    {
        const bool branch_taken_0x2f9f64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9f64) {
            ctx->pc = 0x2FA074u;
            return;
        }
    }
    ctx->pc = 0x2F9F6Cu;
    // 0x2f9f6c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2f9f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9f70: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x2f9f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2f9f74: 0x14a00020  bnez        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2F9F74u;
    {
        const bool branch_taken_0x2f9f74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9f74) {
            ctx->pc = 0x2F9FF8u;
            return;
        }
    }
    ctx->pc = 0x2F9F7Cu;
    // 0x2f9f7c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2f9f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9f80: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2f9f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2f9f84: 0x2449000a  addiu       $t1, $v0, 0xA
    ctx->pc = 0x2f9f84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2f9f88: 0x9103c  dsll32      $v0, $t1, 0
    ctx->pc = 0x2f9f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
    // 0x2f9f8c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2f9f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2f9f90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f9f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f9f94: 0x34470300  ori         $a3, $v0, 0x300
    ctx->pc = 0x2f9f94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
    // 0x2f9f98: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x2f9f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2f9f9c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f9f9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2f9fa0: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x2f9fa0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f9fa4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f9fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f9fa8: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2f9fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2f9fac: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x2f9facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x2f9fb0: 0x2583c  dsll32      $t3, $v0, 0
    ctx->pc = 0x2f9fb0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9fb4: 0xb583e  dsrl32      $t3, $t3, 0
    ctx->pc = 0x2f9fb4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (32 + 0));
    // 0x2f9fb8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f9fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9fbc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f9fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f9fc0: 0x3449ffff  ori         $t1, $v0, 0xFFFF
    ctx->pc = 0x2f9fc0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f9fc4: 0x1693824  and         $a3, $t3, $t1
    ctx->pc = 0x2f9fc4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x2f9fc8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2f9fc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2f9fcc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f9fccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f9fd0: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x2f9fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x2f9fd4: 0x24c28ff0  addiu       $v0, $a2, -0x7010
    ctx->pc = 0x2f9fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938608));
    // 0x2f9fd8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2f9fd8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f9fdc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2F9FDCu;
    SET_GPR_U32(ctx, 31, 0x2F9FE4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2F9FDCu, 0x2F9FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9FE4u;
label_2f9fe4:
    // 0x2f9fe4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2f9fe4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f9fe8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2F9FE8u;
    SET_GPR_U32(ctx, 31, 0x2F9FF0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2F9FE8u, 0x2F9FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9FF0u;
label_2f9ff0:
    // 0x2f9ff0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2F9FF0u;
    {
        const bool branch_taken_0x2f9ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9ff0) {
            ctx->pc = 0x2FA074u;
            return;
        }
    }
    ctx->pc = 0x2F9FF8u;
}
