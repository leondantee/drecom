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

// Function: entry_002fac40
// Address: 0x2fac40 - 0x2fad04
void entry_002fac40_0x2fac40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fac40_0x2fac40");
#endif

    switch (ctx->pc) {
        case 0x2facf0u: goto label_2facf0;
        case 0x2facfcu: goto label_2facfc;
        default: break;
    }

    ctx->pc = 0x2fac40u;

    // 0x2fac40: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x2fac40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fac44: 0x8cc300d4  lw          $v1, 0xD4($a2)
    ctx->pc = 0x2fac44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 212)));
    // 0x2fac48: 0x28610013  slti        $at, $v1, 0x13
    ctx->pc = 0x2fac48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x2fac4c: 0x14200049  bnez        $at, . + 4 + (0x49 << 2)
    ctx->pc = 0x2FAC4Cu;
    {
        const bool branch_taken_0x2fac4c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fac4c) {
            ctx->pc = 0x2FAD74u;
            return;
        }
    }
    ctx->pc = 0x2FAC54u;
    // 0x2fac54: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2fac54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fac58: 0x8ca300d4  lw          $v1, 0xD4($a1)
    ctx->pc = 0x2fac58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x2fac5c: 0x2861001e  slti        $at, $v1, 0x1E
    ctx->pc = 0x2fac5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x2fac60: 0x10200044  beqz        $at, . + 4 + (0x44 << 2)
    ctx->pc = 0x2FAC60u;
    {
        const bool branch_taken_0x2fac60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fac60) {
            ctx->pc = 0x2FAD74u;
            return;
        }
    }
    ctx->pc = 0x2FAC68u;
    // 0x2fac68: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2fac68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fac6c: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fac6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fac70: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2fac70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2fac74: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x2FAC74u;
    {
        const bool branch_taken_0x2fac74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fac74) {
            ctx->pc = 0x2FAD74u;
            return;
        }
    }
    ctx->pc = 0x2FAC7Cu;
    // 0x2fac7c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2fac7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fac80: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2fac80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2fac84: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2FAC84u;
    {
        const bool branch_taken_0x2fac84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fac84) {
            ctx->pc = 0x2FAD04u;
            return;
        }
    }
    ctx->pc = 0x2FAC8Cu;
    // 0x2fac8c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2fac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fac90: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2fac90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2fac94: 0x2462000a  addiu       $v0, $v1, 0xA
    ctx->pc = 0x2fac94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x2fac98: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2fac98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fac9c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2fac9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2faca0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2faca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2faca4: 0x34420300  ori         $v0, $v0, 0x300
    ctx->pc = 0x2faca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
    // 0x2faca8: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x2faca8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2facac: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x2facacu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x2facb0: 0x3107ffff  andi        $a3, $t0, 0xFFFF
    ctx->pc = 0x2facb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x2facb4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2facb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2facb8: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2facb8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2facbc: 0x244606c0  addiu       $a2, $v0, 0x6C0
    ctx->pc = 0x2facbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1728));
    // 0x2facc0: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x2facc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2facc4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2facc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2facc8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2facc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2faccc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2facccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2facd0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2facd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2facd4: 0x624024  and         $t0, $v1, $v0
    ctx->pc = 0x2facd4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2facd8: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2facd8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2facdc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2facdcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2face0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2face0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2face4: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x2face4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2face8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FACE8u;
    SET_GPR_U32(ctx, 31, 0x2FACF0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FACE8u, 0x2FACF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FACF0u;
label_2facf0:
    // 0x2facf0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2facf0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2facf4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FACF4u;
    SET_GPR_U32(ctx, 31, 0x2FACFCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FACF4u, 0x2FACFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FACFCu;
label_2facfc:
    // 0x2facfc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2FACFCu;
    {
        const bool branch_taken_0x2facfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2facfc) {
            ctx->pc = 0x2FAD74u;
            return;
        }
    }
    ctx->pc = 0x2FAD04u;
}
