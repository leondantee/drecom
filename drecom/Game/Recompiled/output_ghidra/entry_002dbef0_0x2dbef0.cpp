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

// Function: entry_002dbef0
// Address: 0x2dbef0 - 0x2dbf6c
void entry_002dbef0_0x2dbef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dbef0_0x2dbef0");
#endif

    switch (ctx->pc) {
        case 0x2dbf00u: goto label_2dbf00;
        case 0x2dbf0cu: goto label_2dbf0c;
        case 0x2dbf1cu: goto label_2dbf1c;
        case 0x2dbf28u: goto label_2dbf28;
        case 0x2dbf34u: goto label_2dbf34;
        default: break;
    }

    ctx->pc = 0x2dbef0u;

    // 0x2dbef0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbef4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dbef4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dbef8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DBEF8u;
    SET_GPR_U32(ctx, 31, 0x2DBF00u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DBEF8u, 0x2DBF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBF00u;
label_2dbf00:
    // 0x2dbf00: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbf00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbf04: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DBF04u;
    SET_GPR_U32(ctx, 31, 0x2DBF0Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DBF04u, 0x2DBF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBF0Cu;
label_2dbf0c:
    // 0x2dbf0c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbf10: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dbf10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dbf14: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DBF14u;
    SET_GPR_U32(ctx, 31, 0x2DBF1Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DBF14u, 0x2DBF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBF1Cu;
label_2dbf1c:
    // 0x2dbf1c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbf20: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DBF20u;
    SET_GPR_U32(ctx, 31, 0x2DBF28u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DBF20u, 0x2DBF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBF28u;
label_2dbf28:
    // 0x2dbf28: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbf28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbf2c: 0xc0c8e3c  jal         func_3238F0
    ctx->pc = 0x2DBF2Cu;
    SET_GPR_U32(ctx, 31, 0x2DBF34u);
    ctx->pc = 0x3238F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238F0u, 0x2DBF2Cu, 0x2DBF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBF34u;
label_2dbf34:
    // 0x2dbf34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbf34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbf38: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2dbf38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2dbf3c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2DBF3Cu;
    {
        const bool branch_taken_0x2dbf3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbf3c) {
            ctx->pc = 0x2DBF6Cu;
            return;
        }
    }
    ctx->pc = 0x2DBF44u;
    // 0x2dbf44: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbf44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbf48: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2dbf48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2dbf4c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2dbf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2dbf50: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2dbf50u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dbf54: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbf54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbf58: 0x948309e0  lhu         $v1, 0x9E0($a0)
    ctx->pc = 0x2dbf58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2528)));
    // 0x2dbf5c: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x2dbf5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x2dbf60: 0xa48309e0  sh          $v1, 0x9E0($a0)
    ctx->pc = 0x2dbf60u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2528), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dbf64: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2DBF64u;
    {
        const bool branch_taken_0x2dbf64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbf64) {
            ctx->pc = 0x2DBFF8u;
            return;
        }
    }
    ctx->pc = 0x2DBF6Cu;
}
