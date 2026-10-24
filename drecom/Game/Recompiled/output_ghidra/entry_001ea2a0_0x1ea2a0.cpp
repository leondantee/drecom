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

// Function: entry_001ea2a0
// Address: 0x1ea2a0 - 0x1ea694
void entry_001ea2a0_0x1ea2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea2a0_0x1ea2a0");
#endif

    switch (ctx->pc) {
        case 0x1ea2bcu: goto label_1ea2bc;
        case 0x1ea2d8u: goto label_1ea2d8;
        case 0x1ea2f8u: goto label_1ea2f8;
        case 0x1ea318u: goto label_1ea318;
        case 0x1ea334u: goto label_1ea334;
        case 0x1ea344u: goto label_1ea344;
        case 0x1ea398u: goto label_1ea398;
        case 0x1ea3dcu: goto label_1ea3dc;
        case 0x1ea404u: goto label_1ea404;
        case 0x1ea44cu: goto label_1ea44c;
        case 0x1ea470u: goto label_1ea470;
        case 0x1ea4a0u: goto label_1ea4a0;
        case 0x1ea4ccu: goto label_1ea4cc;
        case 0x1ea4f8u: goto label_1ea4f8;
        case 0x1ea58cu: goto label_1ea58c;
        case 0x1ea5d4u: goto label_1ea5d4;
        case 0x1ea62cu: goto label_1ea62c;
        case 0x1ea668u: goto label_1ea668;
        default: break;
    }

    ctx->pc = 0x1ea2a0u;

    // 0x1ea2a0: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea2a4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1ea2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1ea2a8: 0x24540120  addiu       $s4, $v0, 0x120
    ctx->pc = 0x1ea2a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1ea2ac: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ea2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea2b0: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x1ea2b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1ea2b4: 0xc079140  jal         func_1E4500
    ctx->pc = 0x1EA2B4u;
    SET_GPR_U32(ctx, 31, 0x1EA2BCu);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x1EA2B4u, 0x1EA2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA2BCu;
label_1ea2bc:
    // 0x1ea2bc: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea2c0: 0x8c520058  lw          $s2, 0x58($v0)
    ctx->pc = 0x1ea2c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1ea2c4: 0x26540510  addiu       $s4, $s2, 0x510
    ctx->pc = 0x1ea2c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1296));
    // 0x1ea2c8: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ea2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea2cc: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x1ea2ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1ea2d0: 0xc079140  jal         func_1E4500
    ctx->pc = 0x1EA2D0u;
    SET_GPR_U32(ctx, 31, 0x1EA2D8u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x1EA2D0u, 0x1EA2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA2D8u;
label_1ea2d8:
    // 0x1ea2d8: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea2dc: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x1ea2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1ea2e0: 0x249405a0  addiu       $s4, $a0, 0x5A0
    ctx->pc = 0x1ea2e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 1440));
    // 0x1ea2e4: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea2e8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ea2e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ea2ec: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x1ea2ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1ea2f0: 0xc079140  jal         func_1E4500
    ctx->pc = 0x1EA2F0u;
    SET_GPR_U32(ctx, 31, 0x1EA2F8u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x1EA2F0u, 0x1EA2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA2F8u;
label_1ea2f8:
    // 0x1ea2f8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ea2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea2fc: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x1ea2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1ea300: 0x245402d0  addiu       $s4, $v0, 0x2D0
    ctx->pc = 0x1ea300u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x1ea304: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea308: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ea308u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ea30c: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x1ea30cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1ea310: 0xc079140  jal         func_1E4500
    ctx->pc = 0x1EA310u;
    SET_GPR_U32(ctx, 31, 0x1EA318u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x1EA310u, 0x1EA318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA318u;
label_1ea318:
    // 0x1ea318: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea31c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ea31cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ea320: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1ea320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ea324: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x1ea324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ea328: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1ea328u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ea32c: 0xc07e3d0  jal         func_1F8F40
    ctx->pc = 0x1EA32Cu;
    SET_GPR_U32(ctx, 31, 0x1EA334u);
    ctx->pc = 0x1F8F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8F40u, 0x1EA32Cu, 0x1EA334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA334u;
label_1ea334:
    // 0x1ea334: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ea334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea338: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ea338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ea33c: 0xc07e67c  jal         func_1F99F0
    ctx->pc = 0x1EA33Cu;
    SET_GPR_U32(ctx, 31, 0x1EA344u);
    ctx->pc = 0x1F99F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F99F0u, 0x1EA33Cu, 0x1EA344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA344u;
label_1ea344:
    // 0x1ea344: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ea344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ea348: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x1ea348u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1ea34c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1ea34cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ea350: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ea350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea354: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x1ea354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1ea358: 0x8c860234  lw          $a2, 0x234($a0)
    ctx->pc = 0x1ea358u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 564)));
    // 0x1ea35c: 0x70c0be28  paddub      $s7, $a2, $zero
    ctx->pc = 0x1ea35cu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1ea360: 0x8fa700d8  lw          $a3, 0xD8($sp)
    ctx->pc = 0x1ea360u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea364: 0x8ce20130  lw          $v0, 0x130($a3)
    ctx->pc = 0x1ea364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
    // 0x1ea368: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x1ea368u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ea36c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ea36cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ea370: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1ea370u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1ea374: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1ea374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ea378: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ea378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ea37c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ea37cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea380: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea384: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ea384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ea388: 0x24440204  addiu       $a0, $v0, 0x204
    ctx->pc = 0x1ea388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 516));
    // 0x1ea38c: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x1ea38cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x1ea390: 0xc06b06c  jal         func_1AC1B0
    ctx->pc = 0x1EA390u;
    SET_GPR_U32(ctx, 31, 0x1EA398u);
    ctx->pc = 0x1AC1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1B0u, 0x1EA390u, 0x1EA398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA398u;
label_1ea398:
    // 0x1ea398: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ea398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ea39c: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1ea39cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1ea3a0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1ea3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ea3a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ea3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ea3a8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ea3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea3ac: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea3b0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1ea3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ea3b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ea3b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ea3b8: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1ea3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1ea3bc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ea3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea3c0: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea3c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ea3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ea3c8: 0x8c45025c  lw          $a1, 0x25C($v0)
    ctx->pc = 0x1ea3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 604)));
    // 0x1ea3cc: 0x24840204  addiu       $a0, $a0, 0x204
    ctx->pc = 0x1ea3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 516));
    // 0x1ea3d0: 0x24060150  addiu       $a2, $zero, 0x150
    ctx->pc = 0x1ea3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x1ea3d4: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x1EA3D4u;
    SET_GPR_U32(ctx, 31, 0x1EA3DCu);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x1EA3D4u, 0x1EA3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA3DCu;
label_1ea3dc:
    // 0x1ea3dc: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1ea3dcu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ea3e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ea3e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ea3e4: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1ea3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1ea3e8: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x1ea3e8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea3ec: 0x8fb000d8  lw          $s0, 0xD8($sp)
    ctx->pc = 0x1ea3ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea3f0: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x1ea3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1ea3f4: 0x8c55025c  lw          $s5, 0x25C($v0)
    ctx->pc = 0x1ea3f4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 604)));
    // 0x1ea3f8: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x1ea3f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1ea3fc: 0xc074974  jal         func_1D25D0
    ctx->pc = 0x1EA3FCu;
    SET_GPR_U32(ctx, 31, 0x1EA404u);
    ctx->pc = 0x1D25D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D25D0u, 0x1EA3FCu, 0x1EA404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA404u;
label_1ea404:
    // 0x1ea404: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ea404u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ea408: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ea408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ea40c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1ea40cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1ea410: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1ea410u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ea414: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ea414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ea418: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ea418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea41c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea420: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1ea420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ea424: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ea424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ea428: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1ea428u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1ea42c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ea42cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea430: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea434: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ea434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ea438: 0x8c45024c  lw          $a1, 0x24C($v0)
    ctx->pc = 0x1ea438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1ea43c: 0x24840204  addiu       $a0, $a0, 0x204
    ctx->pc = 0x1ea43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 516));
    // 0x1ea440: 0x24060150  addiu       $a2, $zero, 0x150
    ctx->pc = 0x1ea440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x1ea444: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x1EA444u;
    SET_GPR_U32(ctx, 31, 0x1EA44Cu);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x1EA444u, 0x1EA44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA44Cu;
label_1ea44c:
    // 0x1ea44c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ea44cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ea450: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x1ea450u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1ea454: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1ea454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ea458: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ea458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea45c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ea45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ea460: 0x8c55024c  lw          $s5, 0x24C($v0)
    ctx->pc = 0x1ea460u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1ea464: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x1ea464u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1ea468: 0xc074974  jal         func_1D25D0
    ctx->pc = 0x1EA468u;
    SET_GPR_U32(ctx, 31, 0x1EA470u);
    ctx->pc = 0x1D25D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D25D0u, 0x1EA468u, 0x1EA470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA470u;
label_1ea470:
    // 0x1ea470: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea474: 0x8c44024c  lw          $a0, 0x24C($v0)
    ctx->pc = 0x1ea474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1ea478: 0x7080ae28  paddub      $s5, $a0, $zero
    ctx->pc = 0x1ea478u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1ea47c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea480: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ea480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ea484: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ea484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ea488: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea48c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ea48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ea490: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1ea490u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ea494: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x1ea494u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1ea498: 0xc0749a4  jal         func_1D2690
    ctx->pc = 0x1EA498u;
    SET_GPR_U32(ctx, 31, 0x1EA4A0u);
    ctx->pc = 0x1D2690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2690u, 0x1EA498u, 0x1EA4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA4A0u;
label_1ea4a0:
    // 0x1ea4a0: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea4a4: 0x8c550250  lw          $s5, 0x250($v0)
    ctx->pc = 0x1ea4a4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x1ea4a8: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ea4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea4ac: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x1ea4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1ea4b0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ea4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ea4b4: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ea4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea4b8: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x1ea4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1ea4bc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1ea4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ea4c0: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x1ea4c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1ea4c4: 0xc0749a4  jal         func_1D2690
    ctx->pc = 0x1EA4C4u;
    SET_GPR_U32(ctx, 31, 0x1EA4CCu);
    ctx->pc = 0x1D2690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2690u, 0x1EA4C4u, 0x1EA4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA4CCu;
label_1ea4cc:
    // 0x1ea4cc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1ea4ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ea4d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ea4d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ea4d4: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1ea4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1ea4d8: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1ea4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ea4dc: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1ea4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ea4e0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1ea4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ea4e4: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea4e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ea4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ea4ec: 0x24440204  addiu       $a0, $v0, 0x204
    ctx->pc = 0x1ea4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 516));
    // 0x1ea4f0: 0xc06b0d4  jal         func_1AC350
    ctx->pc = 0x1EA4F0u;
    SET_GPR_U32(ctx, 31, 0x1EA4F8u);
    ctx->pc = 0x1AC350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC350u, 0x1EA4F0u, 0x1EA4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA4F8u;
label_1ea4f8:
    // 0x1ea4f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ea4f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ea4fc: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x1ea4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1ea500: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1ea500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1ea504: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1ea504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ea508: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1ea508u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ea50c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ea50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea510: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1ea510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ea514: 0xac80021c  sw          $zero, 0x21C($a0)
    ctx->pc = 0x1ea514u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 540), GPR_U32(ctx, 0));
    // 0x1ea518: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ea518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea51c: 0x846410a6  lh          $a0, 0x10A6($v1)
    ctx->pc = 0x1ea51cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x1ea520: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x1ea520u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1ea524: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1ea524u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1ea528: 0x4a0005a  bltz        $a1, . + 4 + (0x5A << 2)
    ctx->pc = 0x1EA528u;
    {
        const bool branch_taken_0x1ea528 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1ea528) {
            ctx->pc = 0x1EA694u;
            return;
        }
    }
    ctx->pc = 0x1EA530u;
    // 0x1ea530: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ea530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea534: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1ea534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ea538: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1ea538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1ea53c: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x1ea53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x1ea540: 0x14600054  bnez        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x1EA540u;
    {
        const bool branch_taken_0x1ea540 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ea540) {
            ctx->pc = 0x1EA694u;
            return;
        }
    }
    ctx->pc = 0x1EA548u;
    // 0x1ea548: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ea548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ea54c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1ea54cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1ea550: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ea550u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea554: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea558: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ea558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ea55c: 0x8c57023c  lw          $s7, 0x23C($v0)
    ctx->pc = 0x1ea55cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 572)));
    // 0x1ea560: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ea560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ea564: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1ea564u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1ea568: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1ea568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ea56c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ea56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ea570: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ea570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea574: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ea574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea578: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ea578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ea57c: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x1ea57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
    // 0x1ea580: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x1ea580u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x1ea584: 0xc06b06c  jal         func_1AC1B0
    ctx->pc = 0x1EA584u;
    SET_GPR_U32(ctx, 31, 0x1EA58Cu);
    ctx->pc = 0x1AC1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1B0u, 0x1EA584u, 0x1EA58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA58Cu;
label_1ea58c:
    // 0x1ea58c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ea58cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ea590: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1ea590u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1ea594: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ea594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea598: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea59c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ea59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ea5a0: 0x8c560274  lw          $s6, 0x274($v0)
    ctx->pc = 0x1ea5a0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
    // 0x1ea5a4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ea5a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ea5a8: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1ea5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1ea5ac: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1ea5acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ea5b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ea5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ea5b4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ea5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea5b8: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea5bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ea5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ea5c0: 0x8ec50008  lw          $a1, 0x8($s6)
    ctx->pc = 0x1ea5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x1ea5c4: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x1ea5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
    // 0x1ea5c8: 0x8ec6000c  lw          $a2, 0xC($s6)
    ctx->pc = 0x1ea5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x1ea5cc: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x1EA5CCu;
    SET_GPR_U32(ctx, 31, 0x1EA5D4u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x1EA5CCu, 0x1EA5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA5D4u;
label_1ea5d4:
    // 0x1ea5d4: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea5d8: 0x8c560274  lw          $s6, 0x274($v0)
    ctx->pc = 0x1ea5d8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
    // 0x1ea5dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ea5dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea5e0: 0x0  nop
    ctx->pc = 0x1ea5e0u;
    // NOP
    // 0x1ea5e4: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1ea5e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1ea5e8: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1ea5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1ea5ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ea5ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea5f0: 0x0  nop
    ctx->pc = 0x1ea5f0u;
    // NOP
    // 0x1ea5f4: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1ea5f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1ea5f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ea5f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea5fc: 0x0  nop
    ctx->pc = 0x1ea5fcu;
    // NOP
    // 0x1ea600: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1ea600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1ea604: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ea604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ea608: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ea608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea60c: 0x0  nop
    ctx->pc = 0x1ea60cu;
    // NOP
    // 0x1ea610: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1ea610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1ea614: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea618: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1ea618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ea61c: 0x244500e0  addiu       $a1, $v0, 0xE0
    ctx->pc = 0x1ea61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x1ea620: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1ea620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ea624: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1EA624u;
    SET_GPR_U32(ctx, 31, 0x1EA62Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1EA62Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1EA62Cu) { return; }
    ctx->pc = 0x1EA62Cu;
label_1ea62c:
    // 0x1ea62c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea630: 0x8c470274  lw          $a3, 0x274($v0)
    ctx->pc = 0x1ea630u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
    // 0x1ea634: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ea634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea638: 0x8c860278  lw          $a2, 0x278($a0)
    ctx->pc = 0x1ea638u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x1ea63c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1ea63cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1ea640: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1ea640u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1ea644: 0x27c20970  addiu       $v0, $fp, 0x970
    ctx->pc = 0x1ea644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 2416));
    // 0x1ea648: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1ea648u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ea64c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1ea64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ea650: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1ea650u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ea654: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x1ea654u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1ea658: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ea658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ea65c: 0x8c290140  lw          $t1, 0x140($at)
    ctx->pc = 0x1ea65cu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1ea660: 0xc074efc  jal         func_1D3BF0
    ctx->pc = 0x1EA660u;
    SET_GPR_U32(ctx, 31, 0x1EA668u);
    ctx->pc = 0x1D3BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BF0u, 0x1EA660u, 0x1EA668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA668u;
label_1ea668:
    // 0x1ea668: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ea668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ea66c: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1ea66cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1ea670: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1ea670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ea674: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ea674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ea678: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ea678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea67c: 0x8fa700d8  lw          $a3, 0xD8($sp)
    ctx->pc = 0x1ea67cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea680: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x1ea680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1ea684: 0x2486021c  addiu       $a2, $a0, 0x21C
    ctx->pc = 0x1ea684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 540));
    // 0x1ea688: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1ea688u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1ea68c: 0xc06b0d4  jal         func_1AC350
    ctx->pc = 0x1EA68Cu;
    SET_GPR_U32(ctx, 31, 0x1EA694u);
    ctx->pc = 0x1AC350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC350u, 0x1EA68Cu, 0x1EA694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA694u;
}
