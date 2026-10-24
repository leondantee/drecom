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

// Function: entry_002e0cc8
// Address: 0x2e0cc8 - 0x2e0d44
void entry_002e0cc8_0x2e0cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e0cc8_0x2e0cc8");
#endif

    switch (ctx->pc) {
        case 0x2e0cd8u: goto label_2e0cd8;
        case 0x2e0ce4u: goto label_2e0ce4;
        case 0x2e0cf4u: goto label_2e0cf4;
        case 0x2e0d00u: goto label_2e0d00;
        case 0x2e0d0cu: goto label_2e0d0c;
        default: break;
    }

    ctx->pc = 0x2e0cc8u;

    // 0x2e0cc8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e0cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0ccc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e0cccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e0cd0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2E0CD0u;
    SET_GPR_U32(ctx, 31, 0x2E0CD8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2E0CD0u, 0x2E0CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0CD8u;
label_2e0cd8:
    // 0x2e0cd8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e0cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0cdc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2E0CDCu;
    SET_GPR_U32(ctx, 31, 0x2E0CE4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2E0CDCu, 0x2E0CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0CE4u;
label_2e0ce4:
    // 0x2e0ce4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e0ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0ce8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e0ce8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e0cec: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2E0CECu;
    SET_GPR_U32(ctx, 31, 0x2E0CF4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2E0CECu, 0x2E0CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0CF4u;
label_2e0cf4:
    // 0x2e0cf4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e0cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0cf8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2E0CF8u;
    SET_GPR_U32(ctx, 31, 0x2E0D00u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2E0CF8u, 0x2E0D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0D00u;
label_2e0d00:
    // 0x2e0d00: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e0d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0d04: 0xc0c8ed4  jal         func_323B50
    ctx->pc = 0x2E0D04u;
    SET_GPR_U32(ctx, 31, 0x2E0D0Cu);
    ctx->pc = 0x323B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B50u, 0x2E0D04u, 0x2E0D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0D0Cu;
label_2e0d0c:
    // 0x2e0d0c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e0d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0d10: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2e0d10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2e0d14: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2E0D14u;
    {
        const bool branch_taken_0x2e0d14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0d14) {
            ctx->pc = 0x2E0D44u;
            return;
        }
    }
    ctx->pc = 0x2E0D1Cu;
    // 0x2e0d1c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e0d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0d20: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2e0d20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2e0d24: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e0d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e0d28: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2e0d28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e0d2c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e0d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0d30: 0x948309e0  lhu         $v1, 0x9E0($a0)
    ctx->pc = 0x2e0d30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2528)));
    // 0x2e0d34: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x2e0d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x2e0d38: 0xa48309e0  sh          $v1, 0x9E0($a0)
    ctx->pc = 0x2e0d38u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2528), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e0d3c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2E0D3Cu;
    {
        const bool branch_taken_0x2e0d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0d3c) {
            ctx->pc = 0x2E0DD0u;
            return;
        }
    }
    ctx->pc = 0x2E0D44u;
}
