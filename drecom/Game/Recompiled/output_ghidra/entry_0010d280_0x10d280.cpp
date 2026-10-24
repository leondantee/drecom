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

// Function: entry_0010d280
// Address: 0x10d280 - 0x10d298
void entry_0010d280_0x10d280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d280_0x10d280");
#endif

    ctx->pc = 0x10d280u;

    // 0x10d280: 0x8e0345fc  lw          $v1, 0x45FC($s0)
    ctx->pc = 0x10d280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17916)));
    // 0x10d284: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x10d284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x10d288: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D288u;
    {
        const bool branch_taken_0x10d288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10d288) {
            ctx->pc = 0x10D298u;
            return;
        }
    }
    ctx->pc = 0x10D290u;
    // 0x10d290: 0xc043590  jal         func_10D640
    ctx->pc = 0x10D290u;
    SET_GPR_U32(ctx, 31, 0x10D298u);
    ctx->pc = 0x10D640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D640u, 0x10D290u, 0x10D298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D298u;
}
