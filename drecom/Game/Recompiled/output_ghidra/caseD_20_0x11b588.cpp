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

// Function: caseD_20
// Address: 0x11b588 - 0x11b5a0
void caseD_20_0x11b588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_20_0x11b588");
#endif

    ctx->pc = 0x11b588u;

    // 0x11b588: 0x83a201d1  lb          $v0, 0x1D1($sp)
    ctx->pc = 0x11b588u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x11b58c: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x11B58Cu;
    {
        const bool branch_taken_0x11b58c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B58Cu;
        // 0x11b590: 0x8fa201ec  lw          $v0, 0x1EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b58c) {
            ctx->pc = 0x11B53Cu;
            return;
        }
    }
    ctx->pc = 0x11B594u;
    // 0x11b594: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x11b594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x11b598: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x11B598u;
    {
        const bool branch_taken_0x11b598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B598u;
        // 0x11b59c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b598) {
            ctx->pc = 0x11B5DCu;
            return;
        }
    }
    ctx->pc = 0x11B5A0u;
}
