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

// Function: entry_0020d7fc
// Address: 0x20d7fc - 0x20d87c
void entry_0020d7fc_0x20d7fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020d7fc_0x20d7fc");
#endif

    switch (ctx->pc) {
        case 0x20d80cu: goto label_20d80c;
        case 0x20d818u: goto label_20d818;
        case 0x20d828u: goto label_20d828;
        case 0x20d834u: goto label_20d834;
        default: break;
    }

    ctx->pc = 0x20d7fcu;

    // 0x20d7fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20d7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d800: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20d800u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20d804: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x20D804u;
    SET_GPR_U32(ctx, 31, 0x20D80Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x20D804u, 0x20D80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D80Cu;
label_20d80c:
    // 0x20d80c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20d80cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d810: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x20D810u;
    SET_GPR_U32(ctx, 31, 0x20D818u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x20D810u, 0x20D818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D818u;
label_20d818:
    // 0x20d818: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20d818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d81c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x20d81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20d820: 0xc080f60  jal         func_203D80
    ctx->pc = 0x20D820u;
    SET_GPR_U32(ctx, 31, 0x20D828u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x20D820u, 0x20D828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D828u;
label_20d828:
    // 0x20d828: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20d828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d82c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20D82Cu;
    SET_GPR_U32(ctx, 31, 0x20D834u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20D82Cu, 0x20D834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D834u;
label_20d834:
    // 0x20d834: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20d834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d838: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x20d838u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x20d83c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x20D83Cu;
    {
        const bool branch_taken_0x20d83c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d83c) {
            ctx->pc = 0x20D87Cu;
            return;
        }
    }
    ctx->pc = 0x20D844u;
    // 0x20d844: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20d844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d848: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x20d848u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x20d84c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20d84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d850: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20d850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d854: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20d854u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20d858: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x20d858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20d85c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20d85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d860: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x20d860u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x20d864: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20d864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d868: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x20d868u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20d86c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20d86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d870: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x20d870u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20d874: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20d874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d878: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20d878u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x20d87cu;
}
