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

// Function: entry_00232a58
// Address: 0x232a58 - 0x232a80
void entry_00232a58_0x232a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00232a58_0x232a58");
#endif

    switch (ctx->pc) {
        case 0x232a64u: goto label_232a64;
        default: break;
    }

    ctx->pc = 0x232a58u;

    // 0x232a58: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x232a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232a5c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x232A5Cu;
    SET_GPR_U32(ctx, 31, 0x232A64u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x232A5Cu, 0x232A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232A64u;
label_232a64:
    // 0x232a64: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232a68: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x232a68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x232a6c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x232A6Cu;
    {
        const bool branch_taken_0x232a6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x232a6c) {
            ctx->pc = 0x232A80u;
            return;
        }
    }
    ctx->pc = 0x232A74u;
    // 0x232a74: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x232a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x232a78: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232a7c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x232a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x232a80u;
}
