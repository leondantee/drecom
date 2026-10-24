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

// Function: entry_002dc45c
// Address: 0x2dc45c - 0x2dc4d8
void entry_002dc45c_0x2dc45c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dc45c_0x2dc45c");
#endif

    switch (ctx->pc) {
        case 0x2dc46cu: goto label_2dc46c;
        case 0x2dc478u: goto label_2dc478;
        case 0x2dc488u: goto label_2dc488;
        case 0x2dc494u: goto label_2dc494;
        case 0x2dc4a0u: goto label_2dc4a0;
        default: break;
    }

    ctx->pc = 0x2dc45cu;

    // 0x2dc45c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dc45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc460: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dc460u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dc464: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DC464u;
    SET_GPR_U32(ctx, 31, 0x2DC46Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DC464u, 0x2DC46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC46Cu;
label_2dc46c:
    // 0x2dc46c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dc46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc470: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DC470u;
    SET_GPR_U32(ctx, 31, 0x2DC478u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DC470u, 0x2DC478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC478u;
label_2dc478:
    // 0x2dc478: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dc478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc47c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dc47cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dc480: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DC480u;
    SET_GPR_U32(ctx, 31, 0x2DC488u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DC480u, 0x2DC488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC488u;
label_2dc488:
    // 0x2dc488: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dc488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc48c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DC48Cu;
    SET_GPR_U32(ctx, 31, 0x2DC494u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DC48Cu, 0x2DC494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC494u;
label_2dc494:
    // 0x2dc494: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dc494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc498: 0xc0c8f48  jal         func_323D20
    ctx->pc = 0x2DC498u;
    SET_GPR_U32(ctx, 31, 0x2DC4A0u);
    ctx->pc = 0x323D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323D20u, 0x2DC498u, 0x2DC4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC4A0u;
label_2dc4a0:
    // 0x2dc4a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc4a4: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2dc4a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2dc4a8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2DC4A8u;
    {
        const bool branch_taken_0x2dc4a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc4a8) {
            ctx->pc = 0x2DC4D8u;
            return;
        }
    }
    ctx->pc = 0x2DC4B0u;
    // 0x2dc4b0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dc4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc4b4: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2dc4b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2dc4b8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2dc4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2dc4bc: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2dc4bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dc4c0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dc4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc4c4: 0x948309e0  lhu         $v1, 0x9E0($a0)
    ctx->pc = 0x2dc4c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2528)));
    // 0x2dc4c8: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x2dc4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x2dc4cc: 0xa48309e0  sh          $v1, 0x9E0($a0)
    ctx->pc = 0x2dc4ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2528), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dc4d0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2DC4D0u;
    {
        const bool branch_taken_0x2dc4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc4d0) {
            ctx->pc = 0x2DC564u;
            return;
        }
    }
    ctx->pc = 0x2DC4D8u;
}
