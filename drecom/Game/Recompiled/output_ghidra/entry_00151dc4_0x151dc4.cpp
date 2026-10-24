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

// Function: entry_00151dc4
// Address: 0x151dc4 - 0x1522dc
void entry_00151dc4_0x151dc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151dc4_0x151dc4");
#endif

    switch (ctx->pc) {
        case 0x151de8u: goto label_151de8;
        case 0x151e20u: goto label_151e20;
        case 0x151e2cu: goto label_151e2c;
        case 0x151e64u: goto label_151e64;
        case 0x151e70u: goto label_151e70;
        case 0x151ea8u: goto label_151ea8;
        case 0x151eb4u: goto label_151eb4;
        case 0x151ee8u: goto label_151ee8;
        case 0x151ef4u: goto label_151ef4;
        case 0x151f28u: goto label_151f28;
        case 0x151f34u: goto label_151f34;
        case 0x151f68u: goto label_151f68;
        case 0x151f74u: goto label_151f74;
        case 0x151fa8u: goto label_151fa8;
        case 0x151fb4u: goto label_151fb4;
        case 0x152004u: goto label_152004;
        case 0x152010u: goto label_152010;
        case 0x15206cu: goto label_15206c;
        case 0x152078u: goto label_152078;
        case 0x1520d0u: goto label_1520d0;
        case 0x1520dcu: goto label_1520dc;
        case 0x1520e8u: goto label_1520e8;
        case 0x152250u: goto label_152250;
        case 0x15225cu: goto label_15225c;
        case 0x1522b4u: goto label_1522b4;
        case 0x1522c0u: goto label_1522c0;
        default: break;
    }

    ctx->pc = 0x151dc4u;

    // 0x151dc4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x151dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151dc8: 0x8c27a5d0  lw          $a3, -0x5A30($at)
    ctx->pc = 0x151dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x151dcc: 0x3c0644bb  lui         $a2, 0x44BB
    ctx->pc = 0x151dccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17595 << 16));
    // 0x151dd0: 0x34c48000  ori         $a0, $a2, 0x8000
    ctx->pc = 0x151dd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x151dd4: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x151dd4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x151dd8: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x151dd8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x151ddc: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x151ddcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x151de0: 0xc074300  jal         func_1D0C00
    ctx->pc = 0x151DE0u;
    SET_GPR_U32(ctx, 31, 0x151DE8u);
    ctx->pc = 0x1D0C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0C00u, 0x151DE0u, 0x151DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151DE8u;
label_151de8:
    // 0x151de8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x151de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151dec: 0x8c23a5d0  lw          $v1, -0x5A30($at)
    ctx->pc = 0x151decu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x151df0: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x151df0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x151df4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x151df4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x151df8: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x151df8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151dfc: 0x63c38  dsll        $a3, $a2, 16
    ctx->pc = 0x151dfcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << 16);
    // 0x151e00: 0x34e2ffff  ori         $v0, $a3, 0xFFFF
    ctx->pc = 0x151e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x151e04: 0xa23824  and         $a3, $a1, $v0
    ctx->pc = 0x151e04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x151e08: 0x2403040a  addiu       $v1, $zero, 0x40A
    ctx->pc = 0x151e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1034));
    // 0x151e0c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x151e0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x151e10: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x151e10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x151e14: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x151e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151e18: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x151E18u;
    SET_GPR_U32(ctx, 31, 0x151E20u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x151E18u, 0x151E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151E20u;
label_151e20:
    // 0x151e20: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x151e20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151e24: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x151E24u;
    SET_GPR_U32(ctx, 31, 0x151E2Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x151E24u, 0x151E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151E2Cu;
label_151e2c:
    // 0x151e2c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x151e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151e30: 0x8c22a5d0  lw          $v0, -0x5A30($at)
    ctx->pc = 0x151e30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x151e34: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x151e34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x151e38: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x151e38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x151e3c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x151e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151e40: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x151e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x151e44: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x151e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x151e48: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x151e48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x151e4c: 0x2403040b  addiu       $v1, $zero, 0x40B
    ctx->pc = 0x151e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1035));
    // 0x151e50: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x151e50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x151e54: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x151e54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x151e58: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x151e58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151e5c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x151E5Cu;
    SET_GPR_U32(ctx, 31, 0x151E64u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x151E5Cu, 0x151E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151E64u;
label_151e64:
    // 0x151e64: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x151e64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151e68: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x151E68u;
    SET_GPR_U32(ctx, 31, 0x151E70u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x151E68u, 0x151E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151E70u;
label_151e70:
    // 0x151e70: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x151e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151e74: 0x8c23a5d0  lw          $v1, -0x5A30($at)
    ctx->pc = 0x151e74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x151e78: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x151e78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x151e7c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x151e7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x151e80: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x151e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151e84: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x151e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x151e88: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x151e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x151e8c: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x151e8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x151e90: 0x2403040b  addiu       $v1, $zero, 0x40B
    ctx->pc = 0x151e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1035));
    // 0x151e94: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x151e94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x151e98: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x151e98u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x151e9c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x151e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151ea0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x151EA0u;
    SET_GPR_U32(ctx, 31, 0x151EA8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x151EA0u, 0x151EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151EA8u;
label_151ea8:
    // 0x151ea8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x151ea8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151eac: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x151EACu;
    SET_GPR_U32(ctx, 31, 0x151EB4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x151EACu, 0x151EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151EB4u;
label_151eb4:
    // 0x151eb4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x151eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151eb8: 0x8c22a5d0  lw          $v0, -0x5A30($at)
    ctx->pc = 0x151eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x151ebc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x151ebcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x151ec0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x151ec0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x151ec4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x151ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151ec8: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x151ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x151ecc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x151eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x151ed0: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x151ed0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x151ed4: 0x2404040b  addiu       $a0, $zero, 0x40B
    ctx->pc = 0x151ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1035));
    // 0x151ed8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x151ed8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x151edc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x151edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151ee0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x151EE0u;
    SET_GPR_U32(ctx, 31, 0x151EE8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x151EE0u, 0x151EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151EE8u;
label_151ee8:
    // 0x151ee8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x151ee8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151eec: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x151EECu;
    SET_GPR_U32(ctx, 31, 0x151EF4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x151EECu, 0x151EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151EF4u;
label_151ef4:
    // 0x151ef4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x151ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151ef8: 0x8c22a5d0  lw          $v0, -0x5A30($at)
    ctx->pc = 0x151ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x151efc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x151efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x151f00: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x151f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x151f04: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x151f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151f08: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x151f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x151f0c: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x151f0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x151f10: 0x643824  and         $a3, $v1, $a0
    ctx->pc = 0x151f10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x151f14: 0x2404040b  addiu       $a0, $zero, 0x40B
    ctx->pc = 0x151f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1035));
    // 0x151f18: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x151f18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x151f1c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x151f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151f20: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x151F20u;
    SET_GPR_U32(ctx, 31, 0x151F28u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x151F20u, 0x151F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151F28u;
label_151f28:
    // 0x151f28: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x151f28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151f2c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x151F2Cu;
    SET_GPR_U32(ctx, 31, 0x151F34u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x151F2Cu, 0x151F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151F34u;
label_151f34:
    // 0x151f34: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x151f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151f38: 0x8c22a5d0  lw          $v0, -0x5A30($at)
    ctx->pc = 0x151f38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x151f3c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x151f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x151f40: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x151f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x151f44: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x151f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151f48: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x151f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x151f4c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x151f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x151f50: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x151f50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x151f54: 0x2404040b  addiu       $a0, $zero, 0x40B
    ctx->pc = 0x151f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1035));
    // 0x151f58: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x151f58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x151f5c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x151f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151f60: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x151F60u;
    SET_GPR_U32(ctx, 31, 0x151F68u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x151F60u, 0x151F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151F68u;
label_151f68:
    // 0x151f68: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x151f68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151f6c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x151F6Cu;
    SET_GPR_U32(ctx, 31, 0x151F74u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x151F6Cu, 0x151F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151F74u;
label_151f74:
    // 0x151f74: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x151f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151f78: 0x8c23a5d0  lw          $v1, -0x5A30($at)
    ctx->pc = 0x151f78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x151f7c: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x151f7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x151f80: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x151f80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x151f84: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x151f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151f88: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x151f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x151f8c: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x151f8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x151f90: 0xa43824  and         $a3, $a1, $a0
    ctx->pc = 0x151f90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x151f94: 0x24041e01  addiu       $a0, $zero, 0x1E01
    ctx->pc = 0x151f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7681));
    // 0x151f98: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x151f98u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x151f9c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x151f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151fa0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x151FA0u;
    SET_GPR_U32(ctx, 31, 0x151FA8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x151FA0u, 0x151FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151FA8u;
label_151fa8:
    // 0x151fa8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x151fa8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151fac: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x151FACu;
    SET_GPR_U32(ctx, 31, 0x151FB4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x151FACu, 0x151FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151FB4u;
label_151fb4:
    // 0x151fb4: 0x3c03431b  lui         $v1, 0x431B
    ctx->pc = 0x151fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17179 << 16));
    // 0x151fb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x151fb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151fbc: 0x0  nop
    ctx->pc = 0x151fbcu;
    // NOP
    // 0x151fc0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x151fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x151fc4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x151fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151fc8: 0x8c25a5d0  lw          $a1, -0x5A30($at)
    ctx->pc = 0x151fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x151fcc: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x151fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x151fd0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x151fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x151fd4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x151fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151fd8: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x151fd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x151fdc: 0x3487ffff  ori         $a3, $a0, 0xFFFF
    ctx->pc = 0x151fdcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x151fe0: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x151fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x151fe4: 0x24060501  addiu       $a2, $zero, 0x501
    ctx->pc = 0x151fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1281));
    // 0x151fe8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x151fe8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x151fec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x151fecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x151ff0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x151ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151ff4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x151ff4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151ff8: 0x70603e28  paddub      $a3, $v1, $zero
    ctx->pc = 0x151ff8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x151ffc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x151FFCu;
    SET_GPR_U32(ctx, 31, 0x152004u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x151FFCu, 0x152004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152004u;
label_152004:
    // 0x152004: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x152004u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152008: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x152008u;
    SET_GPR_U32(ctx, 31, 0x152010u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x152008u, 0x152010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152010u;
label_152010:
    // 0x152010: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x152010u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152014: 0x3c044316  lui         $a0, 0x4316
    ctx->pc = 0x152014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17174 << 16));
    // 0x152018: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x152018u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15201c: 0x0  nop
    ctx->pc = 0x15201cu;
    // NOP
    // 0x152020: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x152020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x152024: 0x3c03c1a0  lui         $v1, 0xC1A0
    ctx->pc = 0x152024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49568 << 16));
    // 0x152028: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x152028u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15202c: 0x0  nop
    ctx->pc = 0x15202cu;
    // NOP
    // 0x152030: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x152030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x152034: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x152034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x152038: 0x8c23a5d0  lw          $v1, -0x5A30($at)
    ctx->pc = 0x152038u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x15203c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x15203cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x152040: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x152040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x152044: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x152044u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x152048: 0x72438  dsll        $a0, $a3, 16
    ctx->pc = 0x152048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 16);
    // 0x15204c: 0x3486ffff  ori         $a2, $a0, 0xFFFF
    ctx->pc = 0x15204cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x152050: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x152050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x152054: 0x24040502  addiu       $a0, $zero, 0x502
    ctx->pc = 0x152054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1282));
    // 0x152058: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x152058u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15205c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x15205cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x152060: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x152060u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152064: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x152064u;
    SET_GPR_U32(ctx, 31, 0x15206Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x152064u, 0x15206Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15206Cu;
label_15206c:
    // 0x15206c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x15206cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152070: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x152070u;
    SET_GPR_U32(ctx, 31, 0x152078u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x152070u, 0x152078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152078u;
label_152078:
    // 0x152078: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x152078u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x15207c: 0x3c034325  lui         $v1, 0x4325
    ctx->pc = 0x15207cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17189 << 16));
    // 0x152080: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x152080u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152084: 0x0  nop
    ctx->pc = 0x152084u;
    // NOP
    // 0x152088: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x152088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15208c: 0x3c04428c  lui         $a0, 0x428C
    ctx->pc = 0x15208cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17036 << 16));
    // 0x152090: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x152090u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152094: 0x0  nop
    ctx->pc = 0x152094u;
    // NOP
    // 0x152098: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x152098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x15209c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15209cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1520a0: 0x8c27a5d0  lw          $a3, -0x5A30($at)
    ctx->pc = 0x1520a0u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x1520a4: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x1520a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1520a8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1520a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1520ac: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x1520acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1520b0: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x1520b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
    // 0x1520b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1520b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1520b8: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x1520b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1520bc: 0x24040503  addiu       $a0, $zero, 0x503
    ctx->pc = 0x1520bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x1520c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1520c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1520c4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1520c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1520c8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1520C8u;
    SET_GPR_U32(ctx, 31, 0x1520D0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1520C8u, 0x1520D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1520D0u;
label_1520d0:
    // 0x1520d0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1520d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1520d4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1520D4u;
    SET_GPR_U32(ctx, 31, 0x1520DCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1520D4u, 0x1520DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1520DCu;
label_1520dc:
    // 0x1520dc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1520dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1520e0: 0xc067648  jal         func_19D920
    ctx->pc = 0x1520E0u;
    SET_GPR_U32(ctx, 31, 0x1520E8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1520E0u, 0x1520E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1520E8u;
label_1520e8:
    // 0x1520e8: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x1520e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x1520ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1520ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1520f0: 0x0  nop
    ctx->pc = 0x1520f0u;
    // NOP
    // 0x1520f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1520f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1520f8: 0x3c0743dc  lui         $a3, 0x43DC
    ctx->pc = 0x1520f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17372 << 16));
    // 0x1520fc: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1520fcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152100: 0x0  nop
    ctx->pc = 0x152100u;
    // NOP
    // 0x152104: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x152104u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x152108: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x152108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x15210c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15210cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152110: 0x0  nop
    ctx->pc = 0x152110u;
    // NOP
    // 0x152114: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x152114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x152118: 0x3c044220  lui         $a0, 0x4220
    ctx->pc = 0x152118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16928 << 16));
    // 0x15211c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x15211cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152120: 0x0  nop
    ctx->pc = 0x152120u;
    // NOP
    // 0x152124: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x152124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x152128: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x152128u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x15212c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x15212cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152130: 0x0  nop
    ctx->pc = 0x152130u;
    // NOP
    // 0x152134: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x152134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x152138: 0x3c024307  lui         $v0, 0x4307
    ctx->pc = 0x152138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17159 << 16));
    // 0x15213c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15213cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152140: 0x0  nop
    ctx->pc = 0x152140u;
    // NOP
    // 0x152144: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x152144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x152148: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x152148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15214c: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x15214cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x152150: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x152150u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152154: 0x0  nop
    ctx->pc = 0x152154u;
    // NOP
    // 0x152158: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x152158u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15215c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x15215cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x152160: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x152160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x152164: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x152164u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152168: 0x0  nop
    ctx->pc = 0x152168u;
    // NOP
    // 0x15216c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x15216cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x152170: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x152170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x152174: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x152174u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x152178: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x152178u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x15217c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x15217cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x152180: 0x43438  dsll        $a2, $a0, 16
    ctx->pc = 0x152180u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << 16);
    // 0x152184: 0x34c2ffff  ori         $v0, $a2, 0xFFFF
    ctx->pc = 0x152184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x152188: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x152188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x15218c: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x15218cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x152190: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x152190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x152194: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x152194u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x152198: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x152198u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x15219c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x15219cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1521a0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1521a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1521a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1521a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1521a8: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x1521a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1521ac: 0xe22825  or          $a1, $a3, $v0
    ctx->pc = 0x1521acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1521b0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1521b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1521b4: 0x2462a4a0  addiu       $v0, $v1, -0x5B60
    ctx->pc = 0x1521b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943904));
    // 0x1521b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1521b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1521bc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1521bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1521c0: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x1521c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1521c4: 0x63c38  dsll        $a3, $a2, 16
    ctx->pc = 0x1521c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << 16);
    // 0x1521c8: 0x34e4ffff  ori         $a0, $a3, 0xFFFF
    ctx->pc = 0x1521c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x1521cc: 0x443024  and         $a2, $v0, $a0
    ctx->pc = 0x1521ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1521d0: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x1521d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1521d4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1521d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1521d8: 0x2463a4a0  addiu       $v1, $v1, -0x5B60
    ctx->pc = 0x1521d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943904));
    // 0x1521dc: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x1521dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1521e0: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1521e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1521e4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1521e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1521e8: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x1521e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x1521ec: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x1521ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1521f0: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x1521f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1521f4: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x1521f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1521f8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1521f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1521fc: 0x8c22a5d0  lw          $v0, -0x5A30($at)
    ctx->pc = 0x1521fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x152200: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x152200u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x152204: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x152204u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x152208: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x152208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15220c: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x15220cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x152210: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x152210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x152214: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x152214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x152218: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x152218u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15221c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15221cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x152220: 0x8c22a5d0  lw          $v0, -0x5A30($at)
    ctx->pc = 0x152220u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x152224: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x152224u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x152228: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x152228u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x15222c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x15222cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x152230: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x152230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x152234: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x152234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x152238: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x152238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x15223c: 0x1021825  or          $v1, $t0, $v0
    ctx->pc = 0x15223cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x152240: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x152240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x152244: 0x70603e28  paddub      $a3, $v1, $zero
    ctx->pc = 0x152244u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x152248: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x152248u;
    SET_GPR_U32(ctx, 31, 0x152250u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x152248u, 0x152250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152250u;
label_152250:
    // 0x152250: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x152250u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152254: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x152254u;
    SET_GPR_U32(ctx, 31, 0x15225Cu);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x152254u, 0x15225Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15225Cu;
label_15225c:
    // 0x15225c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15225cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152260: 0x0  nop
    ctx->pc = 0x152260u;
    // NOP
    // 0x152264: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x152264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x152268: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x152268u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15226c: 0x0  nop
    ctx->pc = 0x15226cu;
    // NOP
    // 0x152270: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x152270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x152274: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x152274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152278: 0x0  nop
    ctx->pc = 0x152278u;
    // NOP
    // 0x15227c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x15227cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x152280: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x152280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x152284: 0x8c24a5d0  lw          $a0, -0x5A30($at)
    ctx->pc = 0x152284u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x152288: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x152288u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x15228c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x15228cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x152290: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x152290u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x152294: 0x41438  dsll        $v0, $a0, 16
    ctx->pc = 0x152294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 16);
    // 0x152298: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x152298u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x15229c: 0xc53824  and         $a3, $a2, $a1
    ctx->pc = 0x15229cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1522a0: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x1522a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1522a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1522a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1522a8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1522a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1522ac: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1522ACu;
    SET_GPR_U32(ctx, 31, 0x1522B4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1522ACu, 0x1522B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1522B4u;
label_1522b4:
    // 0x1522b4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1522b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1522b8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1522B8u;
    SET_GPR_U32(ctx, 31, 0x1522C0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1522B8u, 0x1522C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1522C0u;
label_1522c0:
    // 0x1522c0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1522c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1522c4: 0xa040157c  sb          $zero, 0x157C($v0)
    ctx->pc = 0x1522c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5500), (uint8_t)GPR_U32(ctx, 0));
    // 0x1522c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1522c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1522cc: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1522ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1522d0: 0xa0c4157d  sb          $a0, 0x157D($a2)
    ctx->pc = 0x1522d0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5501), (uint8_t)GPR_U32(ctx, 4));
    // 0x1522d4: 0x10000266  b           . + 4 + (0x266 << 2)
    ctx->pc = 0x1522D4u;
    {
        const bool branch_taken_0x1522d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1522d4) {
            ctx->pc = 0x152C70u;
            return;
        }
    }
    ctx->pc = 0x1522DCu;
}
