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

// Function: entry_001526a0
// Address: 0x1526a0 - 0x1528cc
void entry_001526a0_0x1526a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001526a0_0x1526a0");
#endif

    switch (ctx->pc) {
        case 0x1526c0u: goto label_1526c0;
        case 0x152700u: goto label_152700;
        case 0x15270cu: goto label_15270c;
        case 0x15274cu: goto label_15274c;
        case 0x15275cu: goto label_15275c;
        case 0x1527a0u: goto label_1527a0;
        case 0x1527acu: goto label_1527ac;
        case 0x1527ecu: goto label_1527ec;
        case 0x1527f8u: goto label_1527f8;
        case 0x152838u: goto label_152838;
        case 0x152848u: goto label_152848;
        case 0x1528a4u: goto label_1528a4;
        case 0x1528b0u: goto label_1528b0;
        default: break;
    }

    ctx->pc = 0x1526a0u;

    // 0x1526a0: 0x3c0744bb  lui         $a3, 0x44BB
    ctx->pc = 0x1526a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17595 << 16));
    // 0x1526a4: 0x34e28000  ori         $v0, $a3, 0x8000
    ctx->pc = 0x1526a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32768);
    // 0x1526a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1526a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1526ac: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1526acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1526b0: 0x8c24a5d0  lw          $a0, -0x5A30($at)
    ctx->pc = 0x1526b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x1526b4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1526b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1526b8: 0xc074300  jal         func_1D0C00
    ctx->pc = 0x1526B8u;
    SET_GPR_U32(ctx, 31, 0x1526C0u);
    ctx->pc = 0x1D0C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0C00u, 0x1526B8u, 0x1526C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1526C0u;
label_1526c0:
    // 0x1526c0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1526c0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1526c4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1526c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1526c8: 0x8c22a5d0  lw          $v0, -0x5A30($at)
    ctx->pc = 0x1526c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x1526cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1526ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1526d0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1526d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1526d4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1526d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1526d8: 0x32c38  dsll        $a1, $v1, 16
    ctx->pc = 0x1526d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 16);
    // 0x1526dc: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x1526dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1526e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1526e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1526e4: 0x24046701  addiu       $a0, $zero, 0x6701
    ctx->pc = 0x1526e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26369));
    // 0x1526e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1526e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1526ec: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x1526ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1526f0: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x1526f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1526f4: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1526f4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1526f8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1526F8u;
    SET_GPR_U32(ctx, 31, 0x152700u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1526F8u, 0x152700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152700u;
label_152700:
    // 0x152700: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x152700u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152704: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x152704u;
    SET_GPR_U32(ctx, 31, 0x15270Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x152704u, 0x15270Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15270Cu;
label_15270c:
    // 0x15270c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x15270cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152710: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x152710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x152714: 0x8c22a5d0  lw          $v0, -0x5A30($at)
    ctx->pc = 0x152714u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x152718: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x152718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15271c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x15271cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x152720: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x152720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x152724: 0x32c38  dsll        $a1, $v1, 16
    ctx->pc = 0x152724u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 16);
    // 0x152728: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x152728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x15272c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x15272cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x152730: 0x24046104  addiu       $a0, $zero, 0x6104
    ctx->pc = 0x152730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24836));
    // 0x152734: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x152734u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x152738: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x152738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15273c: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x15273cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x152740: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x152740u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152744: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x152744u;
    SET_GPR_U32(ctx, 31, 0x15274Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x152744u, 0x15274Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15274Cu;
label_15274c:
    // 0x15274c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x15274cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152750: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x152750u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x152754: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x152754u;
    SET_GPR_U32(ctx, 31, 0x15275Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x152754u, 0x15275Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15275Cu;
label_15275c:
    // 0x15275c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x15275cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152760: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x152760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x152764: 0x8c22a5d0  lw          $v0, -0x5A30($at)
    ctx->pc = 0x152764u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x152768: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x152768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15276c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x15276cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x152770: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x152770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x152774: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x152774u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x152778: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x152778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x15277c: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x15277cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x152780: 0x24027801  addiu       $v0, $zero, 0x7801
    ctx->pc = 0x152780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30721));
    // 0x152784: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x152784u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152788: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x152788u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15278c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x15278cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x152790: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x152790u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x152794: 0x70603e28  paddub      $a3, $v1, $zero
    ctx->pc = 0x152794u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x152798: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x152798u;
    SET_GPR_U32(ctx, 31, 0x1527A0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x152798u, 0x1527A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1527A0u;
label_1527a0:
    // 0x1527a0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1527a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1527a4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1527A4u;
    SET_GPR_U32(ctx, 31, 0x1527ACu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1527A4u, 0x1527ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1527ACu;
label_1527ac:
    // 0x1527ac: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1527acu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1527b0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1527b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1527b4: 0x8c22a5d0  lw          $v0, -0x5A30($at)
    ctx->pc = 0x1527b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x1527b8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1527b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1527bc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1527bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1527c0: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x1527c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1527c4: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x1527c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
    // 0x1527c8: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1527c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1527cc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1527ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1527d0: 0x24047801  addiu       $a0, $zero, 0x7801
    ctx->pc = 0x1527d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30721));
    // 0x1527d4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1527d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1527d8: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x1527d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1527dc: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x1527dcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1527e0: 0x70603e28  paddub      $a3, $v1, $zero
    ctx->pc = 0x1527e0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1527e4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1527E4u;
    SET_GPR_U32(ctx, 31, 0x1527ECu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1527E4u, 0x1527ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1527ECu;
label_1527ec:
    // 0x1527ec: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1527ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1527f0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1527F0u;
    SET_GPR_U32(ctx, 31, 0x1527F8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1527F0u, 0x1527F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1527F8u;
label_1527f8:
    // 0x1527f8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1527f8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1527fc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1527fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x152800: 0x8c22a5d0  lw          $v0, -0x5A30($at)
    ctx->pc = 0x152800u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x152804: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x152804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x152808: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x152808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x15280c: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x15280cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x152810: 0x72438  dsll        $a0, $a3, 16
    ctx->pc = 0x152810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 16);
    // 0x152814: 0x3486ffff  ori         $a2, $a0, 0xFFFF
    ctx->pc = 0x152814u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x152818: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x152818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x15281c: 0x24041e03  addiu       $a0, $zero, 0x1E03
    ctx->pc = 0x15281cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7683));
    // 0x152820: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x152820u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x152824: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x152824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x152828: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x152828u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x15282c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x15282cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152830: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x152830u;
    SET_GPR_U32(ctx, 31, 0x152838u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x152830u, 0x152838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152838u;
label_152838:
    // 0x152838: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x152838u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x15283c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x15283cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x152840: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x152840u;
    SET_GPR_U32(ctx, 31, 0x152848u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x152840u, 0x152848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152848u;
label_152848:
    // 0x152848: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x152848u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x15284c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15284cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152850: 0x0  nop
    ctx->pc = 0x152850u;
    // NOP
    // 0x152854: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x152854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x152858: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x152858u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15285c: 0x0  nop
    ctx->pc = 0x15285cu;
    // NOP
    // 0x152860: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x152860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x152864: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x152864u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152868: 0x0  nop
    ctx->pc = 0x152868u;
    // NOP
    // 0x15286c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x15286cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x152870: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x152870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x152874: 0x8c26a5d0  lw          $a2, -0x5A30($at)
    ctx->pc = 0x152874u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x152878: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x152878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x15287c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x15287cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x152880: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x152880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x152884: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x152884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x152888: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x152888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x15288c: 0x433824  and         $a3, $v0, $v1
    ctx->pc = 0x15288cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x152890: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x152890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x152894: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x152894u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x152898: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x152898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15289c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x15289Cu;
    SET_GPR_U32(ctx, 31, 0x1528A4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x15289Cu, 0x1528A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1528A4u;
label_1528a4:
    // 0x1528a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1528a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1528a8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1528A8u;
    SET_GPR_U32(ctx, 31, 0x1528B0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1528A8u, 0x1528B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1528B0u;
label_1528b0:
    // 0x1528b0: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x1528b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1528b4: 0xa0e0157c  sb          $zero, 0x157C($a3)
    ctx->pc = 0x1528b4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 5500), (uint8_t)GPR_U32(ctx, 0));
    // 0x1528b8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1528b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1528bc: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1528bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1528c0: 0xa0c4157d  sb          $a0, 0x157D($a2)
    ctx->pc = 0x1528c0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5501), (uint8_t)GPR_U32(ctx, 4));
    // 0x1528c4: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x1528C4u;
    {
        const bool branch_taken_0x1528c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1528c4) {
            ctx->pc = 0x152C70u;
            return;
        }
    }
    ctx->pc = 0x1528CCu;
}
