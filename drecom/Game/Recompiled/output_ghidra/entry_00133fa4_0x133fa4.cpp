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

// Function: entry_00133fa4
// Address: 0x133fa4 - 0x133fd8
void entry_00133fa4_0x133fa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133fa4_0x133fa4");
#endif

    switch (ctx->pc) {
        case 0x133fb0u: goto label_133fb0;
        default: break;
    }

    ctx->pc = 0x133fa4u;

    // 0x133fa4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133fa8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x133FA8u;
    SET_GPR_U32(ctx, 31, 0x133FB0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x133FA8u, 0x133FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133FB0u;
label_133fb0:
    // 0x133fb0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x133fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133fb4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x133fb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x133fb8: 0x10600085  beqz        $v1, . + 4 + (0x85 << 2)
    ctx->pc = 0x133FB8u;
    {
        const bool branch_taken_0x133fb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x133fb8) {
            ctx->pc = 0x1341D0u;
            return;
        }
    }
    ctx->pc = 0x133FC0u;
    // 0x133fc0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133fc4: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x133fc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x133fc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x133fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x133fcc: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x133fccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x133fd0: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x133FD0u;
    {
        const bool branch_taken_0x133fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133fd0) {
            ctx->pc = 0x1341D0u;
            return;
        }
    }
    ctx->pc = 0x133FD8u;
}
