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

// Function: entry_00292670
// Address: 0x292670 - 0x292688
void entry_00292670_0x292670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00292670_0x292670");
#endif

    ctx->pc = 0x292670u;

    // 0x292670: 0x920265ad  lbu         $v0, 0x65AD($s0)
    ctx->pc = 0x292670u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26029)));
    // 0x292674: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x292674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x292678: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x292678u;
    {
        const bool branch_taken_0x292678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292678) {
            ctx->pc = 0x292688u;
            return;
        }
    }
    ctx->pc = 0x292680u;
    // 0x292680: 0xc0a4b44  jal         func_292D10
    ctx->pc = 0x292680u;
    SET_GPR_U32(ctx, 31, 0x292688u);
    ctx->pc = 0x292D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292D10u, 0x292680u, 0x292688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292688u;
}
