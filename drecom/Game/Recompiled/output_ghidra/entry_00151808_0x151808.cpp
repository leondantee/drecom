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

// Function: entry_00151808
// Address: 0x151808 - 0x151d0c
void entry_00151808_0x151808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151808_0x151808");
#endif

    switch (ctx->pc) {
        case 0x15182cu: goto label_15182c;
        case 0x151860u: goto label_151860;
        case 0x15186cu: goto label_15186c;
        case 0x1518a0u: goto label_1518a0;
        case 0x1518acu: goto label_1518ac;
        case 0x1518e0u: goto label_1518e0;
        case 0x1518ecu: goto label_1518ec;
        case 0x151920u: goto label_151920;
        case 0x15192cu: goto label_15192c;
        case 0x151964u: goto label_151964;
        case 0x151970u: goto label_151970;
        case 0x1519a4u: goto label_1519a4;
        case 0x1519b0u: goto label_1519b0;
        case 0x1519e8u: goto label_1519e8;
        case 0x1519f4u: goto label_1519f4;
        case 0x151a38u: goto label_151a38;
        case 0x151a44u: goto label_151a44;
        case 0x151a9cu: goto label_151a9c;
        case 0x151aa8u: goto label_151aa8;
        case 0x151afcu: goto label_151afc;
        case 0x151b08u: goto label_151b08;
        case 0x151b14u: goto label_151b14;
        case 0x151c7cu: goto label_151c7c;
        case 0x151c88u: goto label_151c88;
        case 0x151ce0u: goto label_151ce0;
        case 0x151cecu: goto label_151cec;
        default: break;
    }

    ctx->pc = 0x151808u;

    // 0x151808: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x151808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x15180c: 0x8c23b830  lw          $v1, -0x47D0($at)
    ctx->pc = 0x15180cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EB830u));
    // 0x151810: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x151810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x151814: 0x34468000  ori         $a2, $v0, 0x8000
    ctx->pc = 0x151814u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x151818: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x151818u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15181c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x15181cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x151820: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x151820u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x151824: 0xc074300  jal         func_1D0C00
    ctx->pc = 0x151824u;
    SET_GPR_U32(ctx, 31, 0x15182Cu);
    ctx->pc = 0x1D0C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0C00u, 0x151824u, 0x15182Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15182Cu;
label_15182c:
    // 0x15182c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15182cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151830: 0x8c22b830  lw          $v0, -0x47D0($at)
    ctx->pc = 0x151830u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EB830u));
    // 0x151834: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x151834u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x151838: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x151838u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x15183c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x15183cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151840: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x151840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x151844: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x151844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x151848: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x151848u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x15184c: 0x2404040a  addiu       $a0, $zero, 0x40A
    ctx->pc = 0x15184cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1034));
    // 0x151850: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x151850u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x151854: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x151854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151858: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x151858u;
    SET_GPR_U32(ctx, 31, 0x151860u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x151858u, 0x151860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151860u;
label_151860:
    // 0x151860: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x151860u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151864: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x151864u;
    SET_GPR_U32(ctx, 31, 0x15186Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x151864u, 0x15186Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15186Cu;
label_15186c:
    // 0x15186c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15186cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151870: 0x8c22b830  lw          $v0, -0x47D0($at)
    ctx->pc = 0x151870u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EB830u));
    // 0x151874: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x151874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x151878: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x151878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x15187c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x15187cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151880: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x151880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x151884: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x151884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x151888: 0x643824  and         $a3, $v1, $a0
    ctx->pc = 0x151888u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x15188c: 0x2404040b  addiu       $a0, $zero, 0x40B
    ctx->pc = 0x15188cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1035));
    // 0x151890: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x151890u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x151894: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x151894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151898: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x151898u;
    SET_GPR_U32(ctx, 31, 0x1518A0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x151898u, 0x1518A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1518A0u;
label_1518a0:
    // 0x1518a0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1518a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1518a4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1518A4u;
    SET_GPR_U32(ctx, 31, 0x1518ACu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1518A4u, 0x1518ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1518ACu;
label_1518ac:
    // 0x1518ac: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1518acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1518b0: 0x8c22b830  lw          $v0, -0x47D0($at)
    ctx->pc = 0x1518b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EB830u));
    // 0x1518b4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1518b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1518b8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1518b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1518bc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1518bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1518c0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1518c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1518c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1518c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1518c8: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x1518c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1518cc: 0x2404040b  addiu       $a0, $zero, 0x40B
    ctx->pc = 0x1518ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1035));
    // 0x1518d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1518d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1518d4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1518d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1518d8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1518D8u;
    SET_GPR_U32(ctx, 31, 0x1518E0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1518D8u, 0x1518E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1518E0u;
label_1518e0:
    // 0x1518e0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1518e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1518e4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1518E4u;
    SET_GPR_U32(ctx, 31, 0x1518ECu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1518E4u, 0x1518ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1518ECu;
label_1518ec:
    // 0x1518ec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1518ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1518f0: 0x8c23b830  lw          $v1, -0x47D0($at)
    ctx->pc = 0x1518f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EB830u));
    // 0x1518f4: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x1518f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1518f8: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1518f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1518fc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1518fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151900: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x151900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x151904: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x151904u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x151908: 0xa43824  and         $a3, $a1, $a0
    ctx->pc = 0x151908u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x15190c: 0x2404040b  addiu       $a0, $zero, 0x40B
    ctx->pc = 0x15190cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1035));
    // 0x151910: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x151910u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x151914: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x151914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151918: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x151918u;
    SET_GPR_U32(ctx, 31, 0x151920u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x151918u, 0x151920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151920u;
label_151920:
    // 0x151920: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x151920u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151924: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x151924u;
    SET_GPR_U32(ctx, 31, 0x15192Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x151924u, 0x15192Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15192Cu;
label_15192c:
    // 0x15192c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15192cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151930: 0x8c23b830  lw          $v1, -0x47D0($at)
    ctx->pc = 0x151930u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EB830u));
    // 0x151934: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x151934u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x151938: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x151938u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x15193c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x15193cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151940: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x151940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x151944: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x151944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x151948: 0xa43824  and         $a3, $a1, $a0
    ctx->pc = 0x151948u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x15194c: 0x2403040b  addiu       $v1, $zero, 0x40B
    ctx->pc = 0x15194cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1035));
    // 0x151950: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x151950u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x151954: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x151954u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x151958: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x151958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15195c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x15195Cu;
    SET_GPR_U32(ctx, 31, 0x151964u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x15195Cu, 0x151964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151964u;
label_151964:
    // 0x151964: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x151964u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151968: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x151968u;
    SET_GPR_U32(ctx, 31, 0x151970u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x151968u, 0x151970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151970u;
label_151970:
    // 0x151970: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x151970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151974: 0x8c23b830  lw          $v1, -0x47D0($at)
    ctx->pc = 0x151974u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EB830u));
    // 0x151978: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x151978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x15197c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x15197cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x151980: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x151980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151984: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x151984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x151988: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x151988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x15198c: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x15198cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x151990: 0x2404040b  addiu       $a0, $zero, 0x40B
    ctx->pc = 0x151990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1035));
    // 0x151994: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x151994u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x151998: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x151998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15199c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x15199Cu;
    SET_GPR_U32(ctx, 31, 0x1519A4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x15199Cu, 0x1519A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1519A4u;
label_1519a4:
    // 0x1519a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1519a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1519a8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1519A8u;
    SET_GPR_U32(ctx, 31, 0x1519B0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1519A8u, 0x1519B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1519B0u;
label_1519b0:
    // 0x1519b0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1519b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1519b4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1519b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1519b8: 0x8c26b830  lw          $a2, -0x47D0($at)
    ctx->pc = 0x1519b8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3EB830u));
    // 0x1519bc: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x1519bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1519c0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1519c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1519c4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1519c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1519c8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1519c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1519cc: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x1519ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1519d0: 0x443824  and         $a3, $v0, $a0
    ctx->pc = 0x1519d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1519d4: 0x24041e01  addiu       $a0, $zero, 0x1E01
    ctx->pc = 0x1519d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7681));
    // 0x1519d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1519d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1519dc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1519dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1519e0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1519E0u;
    SET_GPR_U32(ctx, 31, 0x1519E8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1519E0u, 0x1519E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1519E8u;
label_1519e8:
    // 0x1519e8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1519e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1519ec: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1519ECu;
    SET_GPR_U32(ctx, 31, 0x1519F4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1519ECu, 0x1519F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1519F4u;
label_1519f4:
    // 0x1519f4: 0x3c07431b  lui         $a3, 0x431B
    ctx->pc = 0x1519f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17179 << 16));
    // 0x1519f8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1519f8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1519fc: 0x0  nop
    ctx->pc = 0x1519fcu;
    // NOP
    // 0x151a00: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x151a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x151a04: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x151a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151a08: 0x8c24b830  lw          $a0, -0x47D0($at)
    ctx->pc = 0x151a08u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EB830u));
    // 0x151a0c: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x151a0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x151a10: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x151a10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x151a14: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x151a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151a18: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x151a18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x151a1c: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x151a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x151a20: 0xc33824  and         $a3, $a2, $v1
    ctx->pc = 0x151a20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x151a24: 0x24040501  addiu       $a0, $zero, 0x501
    ctx->pc = 0x151a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1281));
    // 0x151a28: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x151a28u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x151a2c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x151a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151a30: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x151A30u;
    SET_GPR_U32(ctx, 31, 0x151A38u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x151A30u, 0x151A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151A38u;
label_151a38:
    // 0x151a38: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x151a38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151a3c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x151A3Cu;
    SET_GPR_U32(ctx, 31, 0x151A44u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x151A3Cu, 0x151A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151A44u;
label_151a44:
    // 0x151a44: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x151a44u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151a48: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x151a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x151a4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x151a4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151a50: 0x0  nop
    ctx->pc = 0x151a50u;
    // NOP
    // 0x151a54: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x151a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x151a58: 0x3c03c1a0  lui         $v1, 0xC1A0
    ctx->pc = 0x151a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49568 << 16));
    // 0x151a5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x151a5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151a60: 0x0  nop
    ctx->pc = 0x151a60u;
    // NOP
    // 0x151a64: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x151a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x151a68: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x151a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151a6c: 0x8c27b830  lw          $a3, -0x47D0($at)
    ctx->pc = 0x151a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3EB830u));
    // 0x151a70: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x151a70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
    // 0x151a74: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x151a74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x151a78: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x151a78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151a7c: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x151a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
    // 0x151a80: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x151a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x151a84: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x151a84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x151a88: 0x24040502  addiu       $a0, $zero, 0x502
    ctx->pc = 0x151a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1282));
    // 0x151a8c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x151a8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x151a90: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x151a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151a94: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x151A94u;
    SET_GPR_U32(ctx, 31, 0x151A9Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x151A94u, 0x151A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151A9Cu;
label_151a9c:
    // 0x151a9c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x151a9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151aa0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x151AA0u;
    SET_GPR_U32(ctx, 31, 0x151AA8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x151AA0u, 0x151AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151AA8u;
label_151aa8:
    // 0x151aa8: 0x3c024325  lui         $v0, 0x4325
    ctx->pc = 0x151aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17189 << 16));
    // 0x151aac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151aacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151ab0: 0x0  nop
    ctx->pc = 0x151ab0u;
    // NOP
    // 0x151ab4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x151ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x151ab8: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x151ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x151abc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151abcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151ac0: 0x0  nop
    ctx->pc = 0x151ac0u;
    // NOP
    // 0x151ac4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x151ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x151ac8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x151ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151acc: 0x8c25b830  lw          $a1, -0x47D0($at)
    ctx->pc = 0x151accu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EB830u));
    // 0x151ad0: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x151ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x151ad4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x151ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x151ad8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x151ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151adc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x151adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x151ae0: 0x3446ffff  ori         $a2, $v0, 0xFFFF
    ctx->pc = 0x151ae0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x151ae4: 0x663824  and         $a3, $v1, $a2
    ctx->pc = 0x151ae4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x151ae8: 0x24040503  addiu       $a0, $zero, 0x503
    ctx->pc = 0x151ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x151aec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x151aecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x151af0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x151af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151af4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x151AF4u;
    SET_GPR_U32(ctx, 31, 0x151AFCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x151AF4u, 0x151AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151AFCu;
label_151afc:
    // 0x151afc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x151afcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151b00: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x151B00u;
    SET_GPR_U32(ctx, 31, 0x151B08u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x151B00u, 0x151B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151B08u;
label_151b08:
    // 0x151b08: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x151b08u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151b0c: 0xc067648  jal         func_19D920
    ctx->pc = 0x151B0Cu;
    SET_GPR_U32(ctx, 31, 0x151B14u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x151B0Cu, 0x151B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151B14u;
label_151b14:
    // 0x151b14: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x151b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x151b18: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x151b18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x151b1c: 0x0  nop
    ctx->pc = 0x151b1cu;
    // NOP
    // 0x151b20: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x151b20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x151b24: 0x3c0643dc  lui         $a2, 0x43DC
    ctx->pc = 0x151b24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17372 << 16));
    // 0x151b28: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x151b28u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151b2c: 0x0  nop
    ctx->pc = 0x151b2cu;
    // NOP
    // 0x151b30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x151b30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x151b34: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x151b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x151b38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x151b38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151b3c: 0x0  nop
    ctx->pc = 0x151b3cu;
    // NOP
    // 0x151b40: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x151b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x151b44: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x151b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x151b48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x151b48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151b4c: 0x0  nop
    ctx->pc = 0x151b4cu;
    // NOP
    // 0x151b50: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x151b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x151b54: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x151b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x151b58: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x151b58u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151b5c: 0x0  nop
    ctx->pc = 0x151b5cu;
    // NOP
    // 0x151b60: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x151b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x151b64: 0x3c034307  lui         $v1, 0x4307
    ctx->pc = 0x151b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17159 << 16));
    // 0x151b68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x151b68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151b6c: 0x0  nop
    ctx->pc = 0x151b6cu;
    // NOP
    // 0x151b70: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x151b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x151b74: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x151b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151b78: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x151b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x151b7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x151b7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151b80: 0x0  nop
    ctx->pc = 0x151b80u;
    // NOP
    // 0x151b84: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x151b84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x151b88: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x151b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x151b8c: 0x3c064220  lui         $a2, 0x4220
    ctx->pc = 0x151b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16928 << 16));
    // 0x151b90: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x151b90u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151b94: 0x0  nop
    ctx->pc = 0x151b94u;
    // NOP
    // 0x151b98: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x151b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x151b9c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x151b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151ba0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x151ba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x151ba4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x151ba4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x151ba8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x151ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151bac: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x151bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x151bb0: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x151bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x151bb4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x151bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x151bb8: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x151bb8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x151bbc: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x151bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x151bc0: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x151bc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x151bc4: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x151bc4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x151bc8: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x151bc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151bcc: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x151bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x151bd0: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x151bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x151bd4: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x151bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x151bd8: 0x1021825  or          $v1, $t0, $v0
    ctx->pc = 0x151bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x151bdc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x151bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x151be0: 0x2482b700  addiu       $v0, $a0, -0x4900
    ctx->pc = 0x151be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948608));
    // 0x151be4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x151be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x151be8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x151be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x151bec: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x151becu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151bf0: 0x43438  dsll        $a2, $a0, 16
    ctx->pc = 0x151bf0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << 16);
    // 0x151bf4: 0x34c4ffff  ori         $a0, $a2, 0xFFFF
    ctx->pc = 0x151bf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x151bf8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x151bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x151bfc: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x151bfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x151c00: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x151c00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x151c04: 0x24e4b700  addiu       $a0, $a3, -0x4900
    ctx->pc = 0x151c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948608));
    // 0x151c08: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x151c08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x151c0c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x151c0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x151c10: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x151c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151c14: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x151c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x151c18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x151c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x151c1c: 0xc22024  and         $a0, $a2, $v0
    ctx->pc = 0x151c1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x151c20: 0xa43025  or          $a2, $a1, $a0
    ctx->pc = 0x151c20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x151c24: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x151c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151c28: 0x8c22b830  lw          $v0, -0x47D0($at)
    ctx->pc = 0x151c28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EB830u));
    // 0x151c2c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x151c2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x151c30: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x151c30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x151c34: 0x3411ffff  ori         $s1, $zero, 0xFFFF
    ctx->pc = 0x151c34u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151c38: 0x118c38  dsll        $s1, $s1, 16
    ctx->pc = 0x151c38u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 16);
    // 0x151c3c: 0x3622ffff  ori         $v0, $s1, 0xFFFF
    ctx->pc = 0x151c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x151c40: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x151c40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x151c44: 0x4383c  dsll32      $a3, $a0, 0
    ctx->pc = 0x151c44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << (32 + 0));
    // 0x151c48: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x151c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151c4c: 0x8c22b830  lw          $v0, -0x47D0($at)
    ctx->pc = 0x151c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EB830u));
    // 0x151c50: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x151c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x151c54: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x151c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x151c58: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x151c58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151c5c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x151c5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x151c60: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x151c60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x151c64: 0x442824  and         $a1, $v0, $a0
    ctx->pc = 0x151c64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x151c68: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x151c68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x151c6c: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x151c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x151c70: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x151c70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x151c74: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x151C74u;
    SET_GPR_U32(ctx, 31, 0x151C7Cu);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x151C74u, 0x151C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151C7Cu;
label_151c7c:
    // 0x151c7c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x151c7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151c80: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x151C80u;
    SET_GPR_U32(ctx, 31, 0x151C88u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x151C80u, 0x151C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151C88u;
label_151c88:
    // 0x151c88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x151c88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151c8c: 0x0  nop
    ctx->pc = 0x151c8cu;
    // NOP
    // 0x151c90: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x151c90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x151c94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x151c94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151c98: 0x0  nop
    ctx->pc = 0x151c98u;
    // NOP
    // 0x151c9c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x151c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x151ca0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x151ca0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151ca4: 0x0  nop
    ctx->pc = 0x151ca4u;
    // NOP
    // 0x151ca8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x151ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x151cac: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x151cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151cb0: 0x8c23b830  lw          $v1, -0x47D0($at)
    ctx->pc = 0x151cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EB830u));
    // 0x151cb4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x151cb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x151cb8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x151cb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x151cbc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x151cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151cc0: 0x22c38  dsll        $a1, $v0, 16
    ctx->pc = 0x151cc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 16);
    // 0x151cc4: 0x34a6ffff  ori         $a2, $a1, 0xFFFF
    ctx->pc = 0x151cc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x151cc8: 0x863824  and         $a3, $a0, $a2
    ctx->pc = 0x151cc8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x151ccc: 0x24040201  addiu       $a0, $zero, 0x201
    ctx->pc = 0x151cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
    // 0x151cd0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x151cd0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x151cd4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x151cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151cd8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x151CD8u;
    SET_GPR_U32(ctx, 31, 0x151CE0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x151CD8u, 0x151CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151CE0u;
label_151ce0:
    // 0x151ce0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x151ce0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151ce4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x151CE4u;
    SET_GPR_U32(ctx, 31, 0x151CECu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x151CE4u, 0x151CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151CECu;
label_151cec:
    // 0x151cec: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x151cecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151cf0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x151cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x151cf4: 0xa040157c  sb          $zero, 0x157C($v0)
    ctx->pc = 0x151cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5500), (uint8_t)GPR_U32(ctx, 0));
    // 0x151cf8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x151cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x151cfc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x151cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x151d00: 0xa082157d  sb          $v0, 0x157D($a0)
    ctx->pc = 0x151d00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5501), (uint8_t)GPR_U32(ctx, 2));
    // 0x151d04: 0x100003da  b           . + 4 + (0x3DA << 2)
    ctx->pc = 0x151D04u;
    {
        const bool branch_taken_0x151d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151d04) {
            ctx->pc = 0x152C70u;
            return;
        }
    }
    ctx->pc = 0x151D0Cu;
}
