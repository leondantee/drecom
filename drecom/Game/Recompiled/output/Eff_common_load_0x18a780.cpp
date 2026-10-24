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

// Function: Eff_common_load
// Address: 0x18a780 - 0x18a98c
void Eff_common_load_0x18a780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff_common_load_0x18a780");
#endif

    switch (ctx->pc) {
        case 0x18a7e0u: goto label_18a7e0;
        case 0x18a808u: goto label_18a808;
        case 0x18a834u: goto label_18a834;
        case 0x18a858u: goto label_18a858;
        case 0x18a884u: goto label_18a884;
        case 0x18a8a8u: goto label_18a8a8;
        case 0x18a8d4u: goto label_18a8d4;
        case 0x18a8fcu: goto label_18a8fc;
        case 0x18a928u: goto label_18a928;
        case 0x18a94cu: goto label_18a94c;
        default: break;
    }

    ctx->pc = 0x18a780u;

    // 0x18a780: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18a780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18a784: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x18a784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x18a788: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18a788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18a78c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18a78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18a790: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18a790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18a794: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x18a794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x18a798: 0x2452a630  addiu       $s2, $v0, -0x59D0
    ctx->pc = 0x18a798u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944304));
    // 0x18a79c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a79cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a7a0: 0x8c220ae8  lw          $v0, 0xAE8($at)
    ctx->pc = 0x18a7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x18a7a4: 0x2443007f  addiu       $v1, $v0, 0x7F
    ctx->pc = 0x18a7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
    // 0x18a7a8: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x18a7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x18a7ac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18a7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18a7b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a7b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a7b4: 0xac220ae8  sw          $v0, 0xAE8($at)
    ctx->pc = 0x18a7b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x18a7b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a7b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a7bc: 0x8c220ae8  lw          $v0, 0xAE8($at)
    ctx->pc = 0x18a7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x18a7c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a7c4: 0xac22ac50  sw          $v0, -0x53B0($at)
    ctx->pc = 0x18a7c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CAC50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CAC50u, _value); } while (0);
    // 0x18a7c8: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x18a7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x18a7cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a7ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a7d0: 0x8c25ac50  lw          $a1, -0x53B0($at)
    ctx->pc = 0x18a7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18a7d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18a7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a7d8: 0xc076590  jal         func_1D9640
    ctx->pc = 0x18A7D8u;
    SET_GPR_U32(ctx, 31, 0x18A7E0u);
    ctx->pc = 0x1D9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9640u, 0x18A7D8u, 0x18A7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A7E0u;
label_18a7e0:
    // 0x18a7e0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x18a7e0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18a7e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a7e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a7e8: 0x8c31ac50  lw          $s1, -0x53B0($at)
    ctx->pc = 0x18a7e8u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18a7ec: 0x600000b  bltz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x18A7ECu;
    {
        const bool branch_taken_0x18a7ec = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x18a7ec) {
            ctx->pc = 0x18A81Cu;
            goto label_18a81c;
        }
    }
    ctx->pc = 0x18A7F4u;
    // 0x18a7f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a7f8: 0x8c24ac50  lw          $a0, -0x53B0($at)
    ctx->pc = 0x18a7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18a7fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18a7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18a800: 0xc062b60  jal         func_18AD80
    ctx->pc = 0x18A800u;
    SET_GPR_U32(ctx, 31, 0x18A808u);
    ctx->pc = 0x18AD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD80u, 0x18A800u, 0x18A808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A808u;
label_18a808:
    // 0x18a808: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a80c: 0x8c22ac50  lw          $v0, -0x53B0($at)
    ctx->pc = 0x18a80cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18a810: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18a810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a814: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a818: 0xac22ac50  sw          $v0, -0x53B0($at)
    ctx->pc = 0x18a818u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CAC50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CAC50u, _value); } while (0);
label_18a81c:
    // 0x18a81c: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x18a81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x18a820: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a824: 0x8c25ac50  lw          $a1, -0x53B0($at)
    ctx->pc = 0x18a824u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18a828: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18a828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a82c: 0xc076590  jal         func_1D9640
    ctx->pc = 0x18A82Cu;
    SET_GPR_U32(ctx, 31, 0x18A834u);
    ctx->pc = 0x1D9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9640u, 0x18A82Cu, 0x18A834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A834u;
label_18a834:
    // 0x18a834: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x18a834u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18a838: 0x600000c  bltz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x18A838u;
    {
        const bool branch_taken_0x18a838 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x18a838) {
            ctx->pc = 0x18A86Cu;
            goto label_18a86c;
        }
    }
    ctx->pc = 0x18A840u;
    // 0x18a840: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18a840u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18a844: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a848: 0x8c25ac50  lw          $a1, -0x53B0($at)
    ctx->pc = 0x18a848u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18a84c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x18a84cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18a850: 0xc062c2c  jal         func_18B0B0
    ctx->pc = 0x18A850u;
    SET_GPR_U32(ctx, 31, 0x18A858u);
    ctx->pc = 0x18B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B0B0u, 0x18A850u, 0x18A858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A858u;
label_18a858:
    // 0x18a858: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a85c: 0x8c22ac50  lw          $v0, -0x53B0($at)
    ctx->pc = 0x18a85cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18a860: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18a860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a864: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a868: 0xac22ac50  sw          $v0, -0x53B0($at)
    ctx->pc = 0x18a868u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CAC50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CAC50u, _value); } while (0);
label_18a86c:
    // 0x18a86c: 0x2404002e  addiu       $a0, $zero, 0x2E
    ctx->pc = 0x18a86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x18a870: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a874: 0x8c25ac50  lw          $a1, -0x53B0($at)
    ctx->pc = 0x18a874u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18a878: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18a878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a87c: 0xc076590  jal         func_1D9640
    ctx->pc = 0x18A87Cu;
    SET_GPR_U32(ctx, 31, 0x18A884u);
    ctx->pc = 0x1D9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9640u, 0x18A87Cu, 0x18A884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A884u;
label_18a884:
    // 0x18a884: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x18a884u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18a888: 0x600000c  bltz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x18A888u;
    {
        const bool branch_taken_0x18a888 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x18a888) {
            ctx->pc = 0x18A8BCu;
            goto label_18a8bc;
        }
    }
    ctx->pc = 0x18A890u;
    // 0x18a890: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18a890u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18a894: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a898: 0x8c25ac50  lw          $a1, -0x53B0($at)
    ctx->pc = 0x18a898u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18a89c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x18a89cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18a8a0: 0xc062b00  jal         func_18AC00
    ctx->pc = 0x18A8A0u;
    SET_GPR_U32(ctx, 31, 0x18A8A8u);
    ctx->pc = 0x18AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AC00u, 0x18A8A0u, 0x18A8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A8A8u;
label_18a8a8:
    // 0x18a8a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a8a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a8ac: 0x8c22ac50  lw          $v0, -0x53B0($at)
    ctx->pc = 0x18a8acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18a8b0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18a8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a8b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a8b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a8b8: 0xac22ac50  sw          $v0, -0x53B0($at)
    ctx->pc = 0x18a8b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CAC50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CAC50u, _value); } while (0);
label_18a8bc:
    // 0x18a8bc: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x18a8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x18a8c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a8c4: 0x8c25ac50  lw          $a1, -0x53B0($at)
    ctx->pc = 0x18a8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18a8c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18a8c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a8cc: 0xc076590  jal         func_1D9640
    ctx->pc = 0x18A8CCu;
    SET_GPR_U32(ctx, 31, 0x18A8D4u);
    ctx->pc = 0x1D9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9640u, 0x18A8CCu, 0x18A8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A8D4u;
label_18a8d4:
    // 0x18a8d4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x18a8d4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18a8d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a8d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a8dc: 0x8c31ac50  lw          $s1, -0x53B0($at)
    ctx->pc = 0x18a8dcu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18a8e0: 0x600000b  bltz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x18A8E0u;
    {
        const bool branch_taken_0x18a8e0 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x18a8e0) {
            ctx->pc = 0x18A910u;
            goto label_18a910;
        }
    }
    ctx->pc = 0x18A8E8u;
    // 0x18a8e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a8e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a8ec: 0x8c24ac50  lw          $a0, -0x53B0($at)
    ctx->pc = 0x18a8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18a8f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18a8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a8f4: 0xc062b60  jal         func_18AD80
    ctx->pc = 0x18A8F4u;
    SET_GPR_U32(ctx, 31, 0x18A8FCu);
    ctx->pc = 0x18AD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD80u, 0x18A8F4u, 0x18A8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A8FCu;
label_18a8fc:
    // 0x18a8fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a8fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a900: 0x8c22ac50  lw          $v0, -0x53B0($at)
    ctx->pc = 0x18a900u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18a904: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18a904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a908: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a90c: 0xac22ac50  sw          $v0, -0x53B0($at)
    ctx->pc = 0x18a90cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CAC50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CAC50u, _value); } while (0);
label_18a910:
    // 0x18a910: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x18a910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x18a914: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a918: 0x8c25ac50  lw          $a1, -0x53B0($at)
    ctx->pc = 0x18a918u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18a91c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18a91cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a920: 0xc076590  jal         func_1D9640
    ctx->pc = 0x18A920u;
    SET_GPR_U32(ctx, 31, 0x18A928u);
    ctx->pc = 0x1D9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9640u, 0x18A920u, 0x18A928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A928u;
label_18a928:
    // 0x18a928: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x18a928u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18a92c: 0x600000c  bltz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x18A92Cu;
    {
        const bool branch_taken_0x18a92c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x18a92c) {
            ctx->pc = 0x18A960u;
            goto label_18a960;
        }
    }
    ctx->pc = 0x18A934u;
    // 0x18a934: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18a934u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18a938: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a93c: 0x8c25ac50  lw          $a1, -0x53B0($at)
    ctx->pc = 0x18a93cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18a940: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18a940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a944: 0xc062c2c  jal         func_18B0B0
    ctx->pc = 0x18A944u;
    SET_GPR_U32(ctx, 31, 0x18A94Cu);
    ctx->pc = 0x18B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B0B0u, 0x18A944u, 0x18A94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A94Cu;
label_18a94c:
    // 0x18a94c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a94cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a950: 0x8c23ac50  lw          $v1, -0x53B0($at)
    ctx->pc = 0x18a950u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18a954: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x18a954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x18a958: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a95c: 0xac23ac50  sw          $v1, -0x53B0($at)
    ctx->pc = 0x18a95cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CAC50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CAC50u, _value); } while (0);
label_18a960:
    // 0x18a960: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a964: 0x8c23ac50  lw          $v1, -0x53B0($at)
    ctx->pc = 0x18a964u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18a968: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a96c: 0xac230ae8  sw          $v1, 0xAE8($at)
    ctx->pc = 0x18a96cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x18a970: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x18a970u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18a974: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18a974u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a978: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18a978u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a97c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18a97cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a980: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x18a980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18a984: 0x3e00008  jr          $ra
    ctx->pc = 0x18A984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A98Cu;
}
