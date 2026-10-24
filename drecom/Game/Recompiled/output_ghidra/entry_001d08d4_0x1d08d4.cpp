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

// Function: entry_001d08d4
// Address: 0x1d08d4 - 0x1d08f4
void entry_001d08d4_0x1d08d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d08d4_0x1d08d4");
#endif

    switch (ctx->pc) {
        case 0x1d08f0u: goto label_1d08f0;
        default: break;
    }

    ctx->pc = 0x1d08d4u;

    // 0x1d08d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d08d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d08d8: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1d08d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1d08dc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D08DCu;
    {
        const bool branch_taken_0x1d08dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d08dc) {
            ctx->pc = 0x1D08F4u;
            return;
        }
    }
    ctx->pc = 0x1D08E4u;
    // 0x1d08e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d08e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d08e8: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x1D08E8u;
    SET_GPR_U32(ctx, 31, 0x1D08F0u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1D08E8u, 0x1D08F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D08F0u;
label_1d08f0:
    // 0x1d08f0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1d08f0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1d08f4u;
}
