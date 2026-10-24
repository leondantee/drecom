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

// Function: entry_002752f8
// Address: 0x2752f8 - 0x275310
void entry_002752f8_0x2752f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002752f8_0x2752f8");
#endif

    switch (ctx->pc) {
        case 0x27530cu: goto label_27530c;
        default: break;
    }

    ctx->pc = 0x2752f8u;

    // 0x2752f8: 0x2a430006  slti        $v1, $s2, 0x6
    ctx->pc = 0x2752f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2752fc: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x2752FCu;
    {
        const bool branch_taken_0x2752fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2752fc) {
            ctx->pc = 0x275274u;
            return;
        }
    }
    ctx->pc = 0x275304u;
    // 0x275304: 0xc09d740  jal         func_275D00
    ctx->pc = 0x275304u;
    SET_GPR_U32(ctx, 31, 0x27530Cu);
    ctx->pc = 0x275D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275D00u, 0x275304u, 0x27530Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27530Cu;
label_27530c:
    // 0x27530c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x27530cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x275310u;
}
