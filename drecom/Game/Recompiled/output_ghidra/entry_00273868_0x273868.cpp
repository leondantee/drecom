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

// Function: entry_00273868
// Address: 0x273868 - 0x273880
void entry_00273868_0x273868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00273868_0x273868");
#endif

    switch (ctx->pc) {
        case 0x27387cu: goto label_27387c;
        default: break;
    }

    ctx->pc = 0x273868u;

    // 0x273868: 0x2a430006  slti        $v1, $s2, 0x6
    ctx->pc = 0x273868u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x27386c: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x27386Cu;
    {
        const bool branch_taken_0x27386c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27386c) {
            ctx->pc = 0x2737E4u;
            return;
        }
    }
    ctx->pc = 0x273874u;
    // 0x273874: 0xc09d070  jal         func_2741C0
    ctx->pc = 0x273874u;
    SET_GPR_U32(ctx, 31, 0x27387Cu);
    ctx->pc = 0x2741C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2741C0u, 0x273874u, 0x27387Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27387Cu;
label_27387c:
    // 0x27387c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x27387cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x273880u;
}
