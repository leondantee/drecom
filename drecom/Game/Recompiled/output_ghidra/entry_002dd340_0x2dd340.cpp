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

// Function: entry_002dd340
// Address: 0x2dd340 - 0x2dd3c4
void entry_002dd340_0x2dd340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dd340_0x2dd340");
#endif

    switch (ctx->pc) {
        case 0x2dd350u: goto label_2dd350;
        case 0x2dd360u: goto label_2dd360;
        case 0x2dd378u: goto label_2dd378;
        case 0x2dd388u: goto label_2dd388;
        default: break;
    }

    ctx->pc = 0x2dd340u;

    // 0x2dd340: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd344: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dd344u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dd348: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DD348u;
    SET_GPR_U32(ctx, 31, 0x2DD350u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DD348u, 0x2DD350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD350u;
label_2dd350:
    // 0x2dd350: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2dd350u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2dd354: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd358: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DD358u;
    SET_GPR_U32(ctx, 31, 0x2DD360u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DD358u, 0x2DD360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD360u;
label_2dd360:
    // 0x2dd360: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2dd360u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2dd364: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd368: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2dd368u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2dd36c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dd36cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dd370: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DD370u;
    SET_GPR_U32(ctx, 31, 0x2DD378u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DD370u, 0x2DD378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD378u;
label_2dd378:
    // 0x2dd378: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2dd378u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2dd37c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd380: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DD380u;
    SET_GPR_U32(ctx, 31, 0x2DD388u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DD380u, 0x2DD388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD388u;
label_2dd388:
    // 0x2dd388: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2dd388u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2dd38c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2dd38cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd390: 0x84a3127a  lh          $v1, 0x127A($a1)
    ctx->pc = 0x2dd390u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4730)));
    // 0x2dd394: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2DD394u;
    {
        const bool branch_taken_0x2dd394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd394) {
            ctx->pc = 0x2DD3C4u;
            return;
        }
    }
    ctx->pc = 0x2DD39Cu;
    // 0x2dd39c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd3a0: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x2dd3a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x2dd3a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2dd3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2dd3a8: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x2dd3a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dd3ac: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2dd3acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd3b0: 0x94a309e0  lhu         $v1, 0x9E0($a1)
    ctx->pc = 0x2dd3b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2528)));
    // 0x2dd3b4: 0x34640100  ori         $a0, $v1, 0x100
    ctx->pc = 0x2dd3b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x2dd3b8: 0xa4a409e0  sh          $a0, 0x9E0($a1)
    ctx->pc = 0x2dd3b8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2528), (uint16_t)GPR_U32(ctx, 4));
    // 0x2dd3bc: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2DD3BCu;
    {
        const bool branch_taken_0x2dd3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd3bc) {
            ctx->pc = 0x2DD4D4u;
            return;
        }
    }
    ctx->pc = 0x2DD3C4u;
}
