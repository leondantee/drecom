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

// Function: entry_0031d64c
// Address: 0x31d64c - 0x31d694
void entry_0031d64c_0x31d64c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031d64c_0x31d64c");
#endif

    switch (ctx->pc) {
        case 0x31d658u: goto label_31d658;
        default: break;
    }

    ctx->pc = 0x31d64cu;

    // 0x31d64c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31d64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d650: 0xc0c7874  jal         func_31E1D0
    ctx->pc = 0x31D650u;
    SET_GPR_U32(ctx, 31, 0x31D658u);
    ctx->pc = 0x31E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E1D0u, 0x31D650u, 0x31D658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D658u;
label_31d658:
    // 0x31d658: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x31D658u;
    {
        const bool branch_taken_0x31d658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d658) {
            ctx->pc = 0x31D694u;
            return;
        }
    }
    ctx->pc = 0x31D660u;
    // 0x31d660: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x31d660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31d664: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31d664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d668: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x31d668u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x31d66c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31d66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d670: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x31d670u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x31d674: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31d674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d678: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x31d678u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x31d67c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31d67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d680: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x31d680u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x31d684: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31d684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d688: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x31d688u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x31d68c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x31D68Cu;
    {
        const bool branch_taken_0x31d68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d68c) {
            ctx->pc = 0x31D694u;
            return;
        }
    }
    ctx->pc = 0x31D694u;
}
