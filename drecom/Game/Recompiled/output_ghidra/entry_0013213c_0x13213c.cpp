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

// Function: entry_0013213c
// Address: 0x13213c - 0x132170
void entry_0013213c_0x13213c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013213c_0x13213c");
#endif

    switch (ctx->pc) {
        case 0x132148u: goto label_132148;
        default: break;
    }

    ctx->pc = 0x13213cu;

    // 0x13213c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x13213cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132140: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x132140u;
    SET_GPR_U32(ctx, 31, 0x132148u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x132140u, 0x132148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132148u;
label_132148:
    // 0x132148: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13214c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x13214cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x132150: 0x106000c7  beqz        $v1, . + 4 + (0xC7 << 2)
    ctx->pc = 0x132150u;
    {
        const bool branch_taken_0x132150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x132150) {
            ctx->pc = 0x132470u;
            return;
        }
    }
    ctx->pc = 0x132158u;
    // 0x132158: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13215c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x13215cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x132160: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x132160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x132164: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x132164u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x132168: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x132168u;
    {
        const bool branch_taken_0x132168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132168) {
            ctx->pc = 0x132470u;
            return;
        }
    }
    ctx->pc = 0x132170u;
}
