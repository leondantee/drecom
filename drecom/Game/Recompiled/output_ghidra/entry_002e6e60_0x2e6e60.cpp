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

// Function: entry_002e6e60
// Address: 0x2e6e60 - 0x2e6e98
void entry_002e6e60_0x2e6e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e6e60_0x2e6e60");
#endif

    switch (ctx->pc) {
        case 0x2e6e6cu: goto label_2e6e6c;
        default: break;
    }

    ctx->pc = 0x2e6e60u;

    // 0x2e6e60: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e6e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6e64: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2E6E64u;
    SET_GPR_U32(ctx, 31, 0x2E6E6Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2E6E64u, 0x2E6E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6E6Cu;
label_2e6e6c:
    // 0x2e6e6c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2e6e6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2e6e70: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e6e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6e74: 0x908309e7  lbu         $v1, 0x9E7($a0)
    ctx->pc = 0x2e6e74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
    // 0x2e6e78: 0x10600278  beqz        $v1, . + 4 + (0x278 << 2)
    ctx->pc = 0x2E6E78u;
    {
        const bool branch_taken_0x2e6e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6e78) {
            ctx->pc = 0x2E785Cu;
            return;
        }
    }
    ctx->pc = 0x2E6E80u;
    // 0x2e6e80: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e6e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6e84: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2e6e84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2e6e88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e6e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e6e8c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2e6e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e6e90: 0x10000272  b           . + 4 + (0x272 << 2)
    ctx->pc = 0x2E6E90u;
    {
        const bool branch_taken_0x2e6e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6e90) {
            ctx->pc = 0x2E785Cu;
            return;
        }
    }
    ctx->pc = 0x2E6E98u;
}
