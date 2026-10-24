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

// Function: entry_0012d70c
// Address: 0x12d70c - 0x12d76c
void entry_0012d70c_0x12d70c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d70c_0x12d70c");
#endif

    switch (ctx->pc) {
        case 0x12d71cu: goto label_12d71c;
        case 0x12d728u: goto label_12d728;
        case 0x12d738u: goto label_12d738;
        case 0x12d744u: goto label_12d744;
        default: break;
    }

    ctx->pc = 0x12d70cu;

    // 0x12d70c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12d70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d710: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12d710u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12d714: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12D714u;
    SET_GPR_U32(ctx, 31, 0x12D71Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12D714u, 0x12D71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D71Cu;
label_12d71c:
    // 0x12d71c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12d71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d720: 0xc05cd10  jal         func_173440
    ctx->pc = 0x12D720u;
    SET_GPR_U32(ctx, 31, 0x12D728u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12D720u, 0x12D728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D728u;
label_12d728:
    // 0x12d728: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12d728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d72c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12d72cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12d730: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12D730u;
    SET_GPR_U32(ctx, 31, 0x12D738u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12D730u, 0x12D738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D738u;
label_12d738:
    // 0x12d738: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12d738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d73c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12D73Cu;
    SET_GPR_U32(ctx, 31, 0x12D744u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12D73Cu, 0x12D744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D744u;
label_12d744:
    // 0x12d744: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12d744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d748: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12d748u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x12d74c: 0x10600057  beqz        $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x12D74Cu;
    {
        const bool branch_taken_0x12d74c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d74c) {
            ctx->pc = 0x12D8ACu;
            return;
        }
    }
    ctx->pc = 0x12D754u;
    // 0x12d754: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12d754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d758: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x12d758u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x12d75c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12d75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12d760: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x12d760u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x12d764: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x12D764u;
    {
        const bool branch_taken_0x12d764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d764) {
            ctx->pc = 0x12D8ACu;
            return;
        }
    }
    ctx->pc = 0x12D76Cu;
}
