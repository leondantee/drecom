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

// Function: entry_00155dc4
// Address: 0x155dc4 - 0x155de0
void entry_00155dc4_0x155dc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155dc4_0x155dc4");
#endif

    switch (ctx->pc) {
        case 0x155dd4u: goto label_155dd4;
        default: break;
    }

    ctx->pc = 0x155dc4u;

    // 0x155dc4: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x155dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x155dc8: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x155dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x155dcc: 0xc0557dc  jal         func_155F70
    ctx->pc = 0x155DCCu;
    SET_GPR_U32(ctx, 31, 0x155DD4u);
    ctx->pc = 0x155F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155F70u, 0x155DCCu, 0x155DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155DD4u;
label_155dd4:
    // 0x155dd4: 0x8fb20058  lw          $s2, 0x58($sp)
    ctx->pc = 0x155dd4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x155dd8: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x155DD8u;
    {
        const bool branch_taken_0x155dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155dd8) {
            ctx->pc = 0x155F38u;
            return;
        }
    }
    ctx->pc = 0x155DE0u;
}
