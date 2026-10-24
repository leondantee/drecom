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

// Function: caseD_2
// Address: 0x2e6e98 - 0x2e6ec8
void caseD_2_0x2e6e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x2e6e98");
#endif

    switch (ctx->pc) {
        case 0x2e6eb8u: goto label_2e6eb8;
        default: break;
    }

    ctx->pc = 0x2e6e98u;

    // 0x2e6e98: 0x8fb000e8  lw          $s0, 0xE8($sp)
    ctx->pc = 0x2e6e98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6e9c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e6e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6ea0: 0x8e050368  lw          $a1, 0x368($s0)
    ctx->pc = 0x2e6ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x2e6ea4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2e6ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e6ea8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e6ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6eac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e6eacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e6eb0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2E6EB0u;
    SET_GPR_U32(ctx, 31, 0x2E6EB8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E6EB0u, 0x2E6EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6EB8u;
label_2e6eb8:
    // 0x2e6eb8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e6eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6ebc: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x2e6ebcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2e6ec0: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x2e6ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2e6ec4: 0xa0450002  sb          $a1, 0x2($v0)
    ctx->pc = 0x2e6ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 5));
    ctx->pc = 0x2e6ec8u;
}
