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

// Function: entry_0026f614
// Address: 0x26f614 - 0x26f628
void entry_0026f614_0x26f614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026f614_0x26f614");
#endif

    switch (ctx->pc) {
        case 0x26f620u: goto label_26f620;
        default: break;
    }

    ctx->pc = 0x26f614u;

    // 0x26f614: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26f614u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26f618: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x26F618u;
    SET_GPR_U32(ctx, 31, 0x26F620u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x26F618u, 0x26F620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F620u;
label_26f620:
    // 0x26f620: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x26F620u;
    {
        const bool branch_taken_0x26f620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f620) {
            ctx->pc = 0x26F824u;
            return;
        }
    }
    ctx->pc = 0x26F628u;
}
