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

// Function: entry_002e762c
// Address: 0x2e762c - 0x2e765c
void entry_002e762c_0x2e762c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e762c_0x2e762c");
#endif

    switch (ctx->pc) {
        case 0x2e7650u: goto label_2e7650;
        default: break;
    }

    ctx->pc = 0x2e762cu;

    // 0x2e762c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e762cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e7630: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2e7630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2e7634: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2e7634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e7638: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x2e7638u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e763c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e763cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e7640: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x2e7640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2e7644: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2e7644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e7648: 0xc0c7a0c  jal         func_31E830
    ctx->pc = 0x2E7648u;
    SET_GPR_U32(ctx, 31, 0x2E7650u);
    ctx->pc = 0x31E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E830u, 0x2E7648u, 0x2E7650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7650u;
label_2e7650:
    // 0x2e7650: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2e7650u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e7654: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2E7654u;
    {
        const bool branch_taken_0x2e7654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7654) {
            ctx->pc = 0x2E7698u;
            return;
        }
    }
    ctx->pc = 0x2E765Cu;
}
