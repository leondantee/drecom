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

// Function: entry_0024cbbc
// Address: 0x24cbbc - 0x24cc9c
void entry_0024cbbc_0x24cbbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024cbbc_0x24cbbc");
#endif

    switch (ctx->pc) {
        case 0x24cc18u: goto label_24cc18;
        case 0x24cc24u: goto label_24cc24;
        default: break;
    }

    ctx->pc = 0x24cbbcu;

    // 0x24cbbc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24cbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cbc0: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24cbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24cbc4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24cbc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24cbc8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24cbc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24cbcc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24cbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24cbd0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24cbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24cbd4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24cbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24cbd8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24cbd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24cbdc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24cbdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24cbe0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24cbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cbe4: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x24cbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x24cbe8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24cbe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24cbec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24cbecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24cbf0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24cbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24cbf4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24cbf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24cbf8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24cbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24cbfc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24cbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24cc00: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x24cc00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24cc04: 0x24042200  addiu       $a0, $zero, 0x2200
    ctx->pc = 0x24cc04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8704));
    // 0x24cc08: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x24cc08u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24cc0c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x24cc0cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24cc10: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24CC10u;
    SET_GPR_U32(ctx, 31, 0x24CC18u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24CC10u, 0x24CC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CC18u;
label_24cc18:
    // 0x24cc18: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24cc18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24cc1c: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24CC1Cu;
    SET_GPR_U32(ctx, 31, 0x24CC24u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24CC1Cu, 0x24CC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CC24u;
label_24cc24:
    // 0x24cc24: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x24cc24u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24cc28: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24cc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cc2c: 0xac72010c  sw          $s2, 0x10C($v1)
    ctx->pc = 0x24cc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 268), GPR_U32(ctx, 18));
    // 0x24cc30: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24cc30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24cc34: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x24cc34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24cc38: 0x16430018  bne         $s2, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x24CC38u;
    {
        const bool branch_taken_0x24cc38 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x24cc38) {
            ctx->pc = 0x24CC9Cu;
            return;
        }
    }
    ctx->pc = 0x24CC40u;
    // 0x24cc40: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x24cc40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24cc44: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24cc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cc48: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x24cc48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x24cc4c: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x24cc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x24cc50: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x24cc50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x24cc54: 0xae03020c  sw          $v1, 0x20C($s0)
    ctx->pc = 0x24cc54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 3));
    // 0x24cc58: 0x8e230b18  lw          $v1, 0xB18($s1)
    ctx->pc = 0x24cc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2840)));
    // 0x24cc5c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x24cc5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x24cc60: 0xae230b18  sw          $v1, 0xB18($s1)
    ctx->pc = 0x24cc60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2840), GPR_U32(ctx, 3));
    // 0x24cc64: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24cc64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24cc68: 0x34640011  ori         $a0, $v1, 0x11
    ctx->pc = 0x24cc68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24cc6c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24cc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cc70: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x24cc70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x24cc74: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24cc74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24cc78: 0x34640011  ori         $a0, $v1, 0x11
    ctx->pc = 0x24cc78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24cc7c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24cc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cc80: 0xac640104  sw          $a0, 0x104($v1)
    ctx->pc = 0x24cc80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 4));
    // 0x24cc84: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24cc84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24cc88: 0x34640011  ori         $a0, $v1, 0x11
    ctx->pc = 0x24cc88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24cc8c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24cc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cc90: 0xac640108  sw          $a0, 0x108($v1)
    ctx->pc = 0x24cc90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 264), GPR_U32(ctx, 4));
    // 0x24cc94: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x24CC94u;
    {
        const bool branch_taken_0x24cc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cc94) {
            ctx->pc = 0x24CDE4u;
            return;
        }
    }
    ctx->pc = 0x24CC9Cu;
}
