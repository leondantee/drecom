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

// Function: entry_001523c4
// Address: 0x1523c4 - 0x1525d8
void entry_001523c4_0x1523c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001523c4_0x1523c4");
#endif

    switch (ctx->pc) {
        case 0x1523e4u: goto label_1523e4;
        case 0x152418u: goto label_152418;
        case 0x152424u: goto label_152424;
        case 0x152460u: goto label_152460;
        case 0x15246cu: goto label_15246c;
        case 0x1524a0u: goto label_1524a0;
        case 0x1524acu: goto label_1524ac;
        case 0x1524f0u: goto label_1524f0;
        case 0x1524fcu: goto label_1524fc;
        case 0x15253cu: goto label_15253c;
        case 0x152548u: goto label_152548;
        case 0x1525b0u: goto label_1525b0;
        case 0x1525bcu: goto label_1525bc;
        default: break;
    }

    ctx->pc = 0x1523c4u;

    // 0x1523c4: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x1523c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x1523c8: 0x34468000  ori         $a2, $v0, 0x8000
    ctx->pc = 0x1523c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1523cc: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x1523ccu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1523d0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1523d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1523d4: 0x8c24b830  lw          $a0, -0x47D0($at)
    ctx->pc = 0x1523d4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EB830u));
    // 0x1523d8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1523d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1523dc: 0xc074300  jal         func_1D0C00
    ctx->pc = 0x1523DCu;
    SET_GPR_U32(ctx, 31, 0x1523E4u);
    ctx->pc = 0x1D0C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0C00u, 0x1523DCu, 0x1523E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1523E4u;
label_1523e4:
    // 0x1523e4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1523e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1523e8: 0x8c22b830  lw          $v0, -0x47D0($at)
    ctx->pc = 0x1523e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EB830u));
    // 0x1523ec: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1523ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1523f0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1523f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1523f4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1523f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1523f8: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x1523f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x1523fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1523fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x152400: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x152400u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x152404: 0x24046701  addiu       $a0, $zero, 0x6701
    ctx->pc = 0x152404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26369));
    // 0x152408: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x152408u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15240c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x15240cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x152410: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x152410u;
    SET_GPR_U32(ctx, 31, 0x152418u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x152410u, 0x152418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152418u;
label_152418:
    // 0x152418: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x152418u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x15241c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x15241Cu;
    SET_GPR_U32(ctx, 31, 0x152424u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x15241Cu, 0x152424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152424u;
label_152424:
    // 0x152424: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x152424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x152428: 0x8c25b830  lw          $a1, -0x47D0($at)
    ctx->pc = 0x152428u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EB830u));
    // 0x15242c: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x15242cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x152430: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x152430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x152434: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x152434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x152438: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x152438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x15243c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x15243cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x152440: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x152440u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x152444: 0x24066104  addiu       $a2, $zero, 0x6104
    ctx->pc = 0x152444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24836));
    // 0x152448: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x152448u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x15244c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x15244cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x152450: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x152450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x152454: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x152454u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152458: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x152458u;
    SET_GPR_U32(ctx, 31, 0x152460u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x152458u, 0x152460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152460u;
label_152460:
    // 0x152460: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x152460u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152464: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x152464u;
    SET_GPR_U32(ctx, 31, 0x15246Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x152464u, 0x15246Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15246Cu;
label_15246c:
    // 0x15246c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15246cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x152470: 0x8c22b830  lw          $v0, -0x47D0($at)
    ctx->pc = 0x152470u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EB830u));
    // 0x152474: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x152474u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x152478: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x152478u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x15247c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x15247cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x152480: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x152480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x152484: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x152484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x152488: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x152488u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x15248c: 0x24047801  addiu       $a0, $zero, 0x7801
    ctx->pc = 0x15248cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30721));
    // 0x152490: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x152490u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x152494: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x152494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x152498: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x152498u;
    SET_GPR_U32(ctx, 31, 0x1524A0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x152498u, 0x1524A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1524A0u;
label_1524a0:
    // 0x1524a0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1524a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1524a4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1524A4u;
    SET_GPR_U32(ctx, 31, 0x1524ACu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1524A4u, 0x1524ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1524ACu;
label_1524ac:
    // 0x1524ac: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1524acu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1524b0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1524b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1524b4: 0x8c25b830  lw          $a1, -0x47D0($at)
    ctx->pc = 0x1524b4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EB830u));
    // 0x1524b8: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x1524b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1524bc: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1524bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1524c0: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x1524c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1524c4: 0x71438  dsll        $v0, $a3, 16
    ctx->pc = 0x1524c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << 16);
    // 0x1524c8: 0x3447ffff  ori         $a3, $v0, 0xFFFF
    ctx->pc = 0x1524c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1524cc: 0xc71824  and         $v1, $a2, $a3
    ctx->pc = 0x1524ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x1524d0: 0x24067801  addiu       $a2, $zero, 0x7801
    ctx->pc = 0x1524d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30721));
    // 0x1524d4: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1524d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1524d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1524d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1524dc: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1524dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1524e0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1524e0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1524e4: 0x70603e28  paddub      $a3, $v1, $zero
    ctx->pc = 0x1524e4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1524e8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1524E8u;
    SET_GPR_U32(ctx, 31, 0x1524F0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1524E8u, 0x1524F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1524F0u;
label_1524f0:
    // 0x1524f0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1524f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1524f4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1524F4u;
    SET_GPR_U32(ctx, 31, 0x1524FCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1524F4u, 0x1524FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1524FCu;
label_1524fc:
    // 0x1524fc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1524fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x152500: 0x8c24b830  lw          $a0, -0x47D0($at)
    ctx->pc = 0x152500u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EB830u));
    // 0x152504: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x152504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x152508: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x152508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x15250c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x15250cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x152510: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x152510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x152514: 0x3447ffff  ori         $a3, $v0, 0xFFFF
    ctx->pc = 0x152514u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x152518: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x152518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x15251c: 0x24061e03  addiu       $a2, $zero, 0x1E03
    ctx->pc = 0x15251cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7683));
    // 0x152520: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x152520u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x152524: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x152524u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x152528: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x152528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15252c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x15252cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152530: 0x70603e28  paddub      $a3, $v1, $zero
    ctx->pc = 0x152530u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x152534: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x152534u;
    SET_GPR_U32(ctx, 31, 0x15253Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x152534u, 0x15253Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15253Cu;
label_15253c:
    // 0x15253c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x15253cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152540: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x152540u;
    SET_GPR_U32(ctx, 31, 0x152548u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x152540u, 0x152548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152548u;
label_152548:
    // 0x152548: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x152548u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x15254c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15254cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152550: 0x0  nop
    ctx->pc = 0x152550u;
    // NOP
    // 0x152554: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x152554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x152558: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x152558u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15255c: 0x0  nop
    ctx->pc = 0x15255cu;
    // NOP
    // 0x152560: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x152560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x152564: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x152564u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152568: 0x0  nop
    ctx->pc = 0x152568u;
    // NOP
    // 0x15256c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x15256cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x152570: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x152570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x152574: 0x8c24b830  lw          $a0, -0x47D0($at)
    ctx->pc = 0x152574u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EB830u));
    // 0x152578: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x152578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x15257c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x15257cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x152580: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x152580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x152584: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x152584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x152588: 0x3447ffff  ori         $a3, $v0, 0xFFFF
    ctx->pc = 0x152588u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x15258c: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x15258cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x152590: 0x24060201  addiu       $a2, $zero, 0x201
    ctx->pc = 0x152590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
    // 0x152594: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x152594u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x152598: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x152598u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15259c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x15259cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1525a0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1525a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1525a4: 0x70603e28  paddub      $a3, $v1, $zero
    ctx->pc = 0x1525a4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1525a8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1525A8u;
    SET_GPR_U32(ctx, 31, 0x1525B0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1525A8u, 0x1525B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1525B0u;
label_1525b0:
    // 0x1525b0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1525b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1525b4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1525B4u;
    SET_GPR_U32(ctx, 31, 0x1525BCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1525B4u, 0x1525BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1525BCu;
label_1525bc:
    // 0x1525bc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1525bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1525c0: 0xa080157c  sb          $zero, 0x157C($a0)
    ctx->pc = 0x1525c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5500), (uint8_t)GPR_U32(ctx, 0));
    // 0x1525c4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1525c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1525c8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1525c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1525cc: 0xa043157d  sb          $v1, 0x157D($v0)
    ctx->pc = 0x1525ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5501), (uint8_t)GPR_U32(ctx, 3));
    // 0x1525d0: 0x100001a7  b           . + 4 + (0x1A7 << 2)
    ctx->pc = 0x1525D0u;
    {
        const bool branch_taken_0x1525d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1525d0) {
            ctx->pc = 0x152C70u;
            return;
        }
    }
    ctx->pc = 0x1525D8u;
}
