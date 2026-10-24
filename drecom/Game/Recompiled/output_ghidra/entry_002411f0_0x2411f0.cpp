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

// Function: entry_002411f0
// Address: 0x2411f0 - 0x241220
void entry_002411f0_0x2411f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002411f0_0x2411f0");
#endif

    switch (ctx->pc) {
        case 0x241200u: goto label_241200;
        default: break;
    }

    ctx->pc = 0x2411f0u;

    // 0x2411f0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2411f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2411f4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2411f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2411f8: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x2411F8u;
    SET_GPR_U32(ctx, 31, 0x241200u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x2411F8u, 0x241200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241200u;
label_241200:
    // 0x241200: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x241200u;
    {
        const bool branch_taken_0x241200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241200) {
            ctx->pc = 0x2412B8u;
            return;
        }
    }
    ctx->pc = 0x241208u;
    // 0x241208: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x241208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24120c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x24120cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x241210: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x241210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x241214: 0xa0640070  sb          $a0, 0x70($v1)
    ctx->pc = 0x241214u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 112), (uint8_t)GPR_U32(ctx, 4));
    // 0x241218: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x241218u;
    {
        const bool branch_taken_0x241218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241218) {
            ctx->pc = 0x2412B8u;
            return;
        }
    }
    ctx->pc = 0x241220u;
}
