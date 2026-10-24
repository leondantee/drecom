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

// Function: entry_002de7ac
// Address: 0x2de7ac - 0x2de7e0
void entry_002de7ac_0x2de7ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002de7ac_0x2de7ac");
#endif

    switch (ctx->pc) {
        case 0x2de7b8u: goto label_2de7b8;
        default: break;
    }

    ctx->pc = 0x2de7acu;

    // 0x2de7ac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de7b0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DE7B0u;
    SET_GPR_U32(ctx, 31, 0x2DE7B8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DE7B0u, 0x2DE7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE7B8u;
label_2de7b8:
    // 0x2de7b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2de7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de7bc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2de7bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2de7c0: 0x106000cd  beqz        $v1, . + 4 + (0xCD << 2)
    ctx->pc = 0x2DE7C0u;
    {
        const bool branch_taken_0x2de7c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de7c0) {
            ctx->pc = 0x2DEAF8u;
            return;
        }
    }
    ctx->pc = 0x2DE7C8u;
    // 0x2de7c8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de7cc: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2de7ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2de7d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2de7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2de7d4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2de7d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2de7d8: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x2DE7D8u;
    {
        const bool branch_taken_0x2de7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de7d8) {
            ctx->pc = 0x2DEAF8u;
            return;
        }
    }
    ctx->pc = 0x2DE7E0u;
}
