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

// Function: entry_0028bc2c
// Address: 0x28bc2c - 0x28bc4c
void entry_0028bc2c_0x28bc2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028bc2c_0x28bc2c");
#endif

    ctx->pc = 0x28bc2cu;

    // 0x28bc2c: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x28bc2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x28bc30: 0x9022c774  lbu         $v0, -0x388C($at)
    ctx->pc = 0x28bc30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x62C774u));
    // 0x28bc34: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x28bc34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28bc38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28bc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28bc3c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28BC3Cu;
    {
        const bool branch_taken_0x28bc3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28bc3c) {
            ctx->pc = 0x28BC4Cu;
            return;
        }
    }
    ctx->pc = 0x28BC44u;
    // 0x28bc44: 0xc0a3c18  jal         func_28F060
    ctx->pc = 0x28BC44u;
    SET_GPR_U32(ctx, 31, 0x28BC4Cu);
    ctx->pc = 0x28F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F060u, 0x28BC44u, 0x28BC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BC4Cu;
}
