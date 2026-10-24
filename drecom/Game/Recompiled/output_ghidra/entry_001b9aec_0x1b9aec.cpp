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

// Function: entry_001b9aec
// Address: 0x1b9aec - 0x1b9b24
void entry_001b9aec_0x1b9aec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9aec_0x1b9aec");
#endif

    switch (ctx->pc) {
        case 0x1b9b1cu: goto label_1b9b1c;
        default: break;
    }

    ctx->pc = 0x1b9aecu;

    // 0x1b9aec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9af0: 0x8c431b60  lw          $v1, 0x1B60($v0)
    ctx->pc = 0x1b9af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
    // 0x1b9af4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1B9AF4u;
    {
        const bool branch_taken_0x1b9af4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9af4) {
            ctx->pc = 0x1B9B24u;
            return;
        }
    }
    ctx->pc = 0x1B9AFCu;
    // 0x1b9afc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9b00: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9b04: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1b9b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1b9b08: 0x2406009b  addiu       $a2, $zero, 0x9B
    ctx->pc = 0x1b9b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    // 0x1b9b0c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1b9b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b9b10: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b9b10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b9b14: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1B9B14u;
    SET_GPR_U32(ctx, 31, 0x1B9B1Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B9B14u, 0x1B9B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9B1Cu;
label_1b9b1c:
    // 0x1b9b1c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B9B1Cu;
    {
        const bool branch_taken_0x1b9b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9b1c) {
            ctx->pc = 0x1B9B44u;
            return;
        }
    }
    ctx->pc = 0x1B9B24u;
}
