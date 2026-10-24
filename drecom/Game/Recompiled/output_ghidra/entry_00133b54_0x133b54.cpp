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

// Function: entry_00133b54
// Address: 0x133b54 - 0x133b88
void entry_00133b54_0x133b54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133b54_0x133b54");
#endif

    switch (ctx->pc) {
        case 0x133b60u: goto label_133b60;
        default: break;
    }

    ctx->pc = 0x133b54u;

    // 0x133b54: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133b58: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x133B58u;
    SET_GPR_U32(ctx, 31, 0x133B60u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x133B58u, 0x133B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133B60u;
label_133b60:
    // 0x133b60: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x133b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133b64: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x133b64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x133b68: 0x10600085  beqz        $v1, . + 4 + (0x85 << 2)
    ctx->pc = 0x133B68u;
    {
        const bool branch_taken_0x133b68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x133b68) {
            ctx->pc = 0x133D80u;
            return;
        }
    }
    ctx->pc = 0x133B70u;
    // 0x133b70: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133b74: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x133b74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x133b78: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x133b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x133b7c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x133b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x133b80: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x133B80u;
    {
        const bool branch_taken_0x133b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133b80) {
            ctx->pc = 0x133D80u;
            return;
        }
    }
    ctx->pc = 0x133B88u;
}
