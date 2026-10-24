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

// Function: entry_002dd988
// Address: 0x2dd988 - 0x2dda00
void entry_002dd988_0x2dd988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dd988_0x2dd988");
#endif

    switch (ctx->pc) {
        case 0x2dd99cu: goto label_2dd99c;
        case 0x2dd9acu: goto label_2dd9ac;
        case 0x2dd9bcu: goto label_2dd9bc;
        case 0x2dd9c8u: goto label_2dd9c8;
        default: break;
    }

    ctx->pc = 0x2dd988u;

    // 0x2dd988: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dd988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd98c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2dd98cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2dd990: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dd990u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dd994: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DD994u;
    SET_GPR_U32(ctx, 31, 0x2DD99Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DD994u, 0x2DD99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD99Cu;
label_2dd99c:
    // 0x2dd99c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2dd99cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2dd9a0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd9a4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DD9A4u;
    SET_GPR_U32(ctx, 31, 0x2DD9ACu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DD9A4u, 0x2DD9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD9ACu;
label_2dd9ac:
    // 0x2dd9ac: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd9b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dd9b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dd9b4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DD9B4u;
    SET_GPR_U32(ctx, 31, 0x2DD9BCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DD9B4u, 0x2DD9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD9BCu;
label_2dd9bc:
    // 0x2dd9bc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd9c0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DD9C0u;
    SET_GPR_U32(ctx, 31, 0x2DD9C8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DD9C0u, 0x2DD9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD9C8u;
label_2dd9c8:
    // 0x2dd9c8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd9cc: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x2dd9ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x2dd9d0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2DD9D0u;
    {
        const bool branch_taken_0x2dd9d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd9d0) {
            ctx->pc = 0x2DDA00u;
            return;
        }
    }
    ctx->pc = 0x2DD9D8u;
    // 0x2dd9d8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd9dc: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x2dd9dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x2dd9e0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2dd9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2dd9e4: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x2dd9e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dd9e8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2dd9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd9ec: 0x94a409e0  lhu         $a0, 0x9E0($a1)
    ctx->pc = 0x2dd9ecu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2528)));
    // 0x2dd9f0: 0x34830100  ori         $v1, $a0, 0x100
    ctx->pc = 0x2dd9f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x2dd9f4: 0xa4a309e0  sh          $v1, 0x9E0($a1)
    ctx->pc = 0x2dd9f4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2528), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dd9f8: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x2DD9F8u;
    {
        const bool branch_taken_0x2dd9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd9f8) {
            ctx->pc = 0x2DDB18u;
            return;
        }
    }
    ctx->pc = 0x2DDA00u;
}
