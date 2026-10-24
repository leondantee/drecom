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

// Function: entry_0014f718
// Address: 0x14f718 - 0x14f72c
void entry_0014f718_0x14f718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f718_0x14f718");
#endif

    switch (ctx->pc) {
        case 0x14f724u: goto label_14f724;
        default: break;
    }

    ctx->pc = 0x14f718u;

    // 0x14f718: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x14f718u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x14f71c: 0xc055418  jal         func_155060
    ctx->pc = 0x14F71Cu;
    SET_GPR_U32(ctx, 31, 0x14F724u);
    ctx->pc = 0x155060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155060u, 0x14F71Cu, 0x14F724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F724u;
label_14f724:
    // 0x14f724: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14F724u;
    {
        const bool branch_taken_0x14f724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f724) {
            ctx->pc = 0x14F74Cu;
            return;
        }
    }
    ctx->pc = 0x14F72Cu;
}
