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

// Function: entry_00358df8
// Address: 0x358df8 - 0x358e90
void entry_00358df8_0x358df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00358df8_0x358df8");
#endif

    switch (ctx->pc) {
        case 0x358e14u: goto label_358e14;
        case 0x358e20u: goto label_358e20;
        case 0x358e3cu: goto label_358e3c;
        case 0x358e7cu: goto label_358e7c;
        case 0x358e88u: goto label_358e88;
        default: break;
    }

    ctx->pc = 0x358df8u;

    // 0x358df8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x358df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x358dfc: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x358dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x358e00: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x358e00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x358e04: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x358e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x358e08: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x358e08u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x358e0c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x358E0Cu;
    SET_GPR_U32(ctx, 31, 0x358E14u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x358E0Cu, 0x358E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358E14u;
label_358e14:
    // 0x358e14: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x358e14u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x358e18: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x358E18u;
    SET_GPR_U32(ctx, 31, 0x358E20u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x358E18u, 0x358E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358E20u;
label_358e20:
    // 0x358e20: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x358e20u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x358e24: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x358e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x358e28: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x358e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x358e2c: 0x1203006a  beq         $s0, $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x358E2Cu;
    {
        const bool branch_taken_0x358e2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x358e2c) {
            ctx->pc = 0x358FD8u;
            return;
        }
    }
    ctx->pc = 0x358E34u;
    // 0x358e34: 0xc067694  jal         func_19DA50
    ctx->pc = 0x358E34u;
    SET_GPR_U32(ctx, 31, 0x358E3Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x358E34u, 0x358E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358E3Cu;
label_358e3c:
    // 0x358e3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x358e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x358e40: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x358e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x358e44: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x358E44u;
    {
        const bool branch_taken_0x358e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x358e44) {
            ctx->pc = 0x358E90u;
            return;
        }
    }
    ctx->pc = 0x358E4Cu;
    // 0x358e4c: 0x26020180  addiu       $v0, $s0, 0x180
    ctx->pc = 0x358e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x358e50: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x358e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x358e54: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x358e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x358e58: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x358e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x358e5c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x358e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x358e60: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x358e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x358e64: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x358e64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x358e68: 0x24041302  addiu       $a0, $zero, 0x1302
    ctx->pc = 0x358e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4866));
    // 0x358e6c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x358e6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x358e70: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x358e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x358e74: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x358E74u;
    SET_GPR_U32(ctx, 31, 0x358E7Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x358E74u, 0x358E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358E7Cu;
label_358e7c:
    // 0x358e7c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x358e7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x358e80: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x358E80u;
    SET_GPR_U32(ctx, 31, 0x358E88u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x358E80u, 0x358E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358E88u;
label_358e88:
    // 0x358e88: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x358E88u;
    {
        const bool branch_taken_0x358e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358e88) {
            ctx->pc = 0x358ECCu;
            return;
        }
    }
    ctx->pc = 0x358E90u;
}
