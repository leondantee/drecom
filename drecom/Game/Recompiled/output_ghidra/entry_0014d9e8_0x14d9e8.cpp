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

// Function: entry_0014d9e8
// Address: 0x14d9e8 - 0x14da00
void entry_0014d9e8_0x14d9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d9e8_0x14d9e8");
#endif

    ctx->pc = 0x14d9e8u;

    // 0x14d9e8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x14d9e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14d9ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14d9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14d9f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D9F0u;
    {
        const bool branch_taken_0x14d9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d9f0) {
            ctx->pc = 0x14DA00u;
            return;
        }
    }
    ctx->pc = 0x14D9F8u;
    // 0x14d9f8: 0xc056d68  jal         func_15B5A0
    ctx->pc = 0x14D9F8u;
    SET_GPR_U32(ctx, 31, 0x14DA00u);
    ctx->pc = 0x15B5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B5A0u, 0x14D9F8u, 0x14DA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DA00u;
}
