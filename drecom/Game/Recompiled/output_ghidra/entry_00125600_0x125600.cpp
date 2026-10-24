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

// Function: entry_00125600
// Address: 0x125600 - 0x12568c
void entry_00125600_0x125600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125600_0x125600");
#endif

    switch (ctx->pc) {
        case 0x125610u: goto label_125610;
        case 0x125620u: goto label_125620;
        case 0x12562cu: goto label_12562c;
        default: break;
    }

    ctx->pc = 0x125600u;

    // 0x125600: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x125600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125604: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x125604u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x125608: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x125608u;
    SET_GPR_U32(ctx, 31, 0x125610u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x125608u, 0x125610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125610u;
label_125610:
    // 0x125610: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x125610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125614: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x125614u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x125618: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x125618u;
    SET_GPR_U32(ctx, 31, 0x125620u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x125618u, 0x125620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125620u;
label_125620:
    // 0x125620: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x125620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125624: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x125624u;
    SET_GPR_U32(ctx, 31, 0x12562Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x125624u, 0x12562Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12562Cu;
label_12562c:
    // 0x12562c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12562cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125630: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x125630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x125634: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x125634u;
    {
        const bool branch_taken_0x125634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x125634) {
            ctx->pc = 0x1256C4u;
            return;
        }
    }
    ctx->pc = 0x12563Cu;
    // 0x12563c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12563cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125640: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x125640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x125644: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x125644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x125648: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x125648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x12564c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x12564Cu;
    {
        const bool branch_taken_0x12564c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12564c) {
            ctx->pc = 0x12568Cu;
            return;
        }
    }
    ctx->pc = 0x125654u;
    // 0x125654: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x125654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125658: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x125658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12565c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12565cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x125660: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x125660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x125664: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x125664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125668: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x125668u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12566c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12566cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125670: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x125670u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x125674: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x125674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125678: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x125678u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12567c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12567cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125680: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x125680u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x125684: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x125684u;
    {
        const bool branch_taken_0x125684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125684) {
            ctx->pc = 0x1256BCu;
            return;
        }
    }
    ctx->pc = 0x12568Cu;
}
