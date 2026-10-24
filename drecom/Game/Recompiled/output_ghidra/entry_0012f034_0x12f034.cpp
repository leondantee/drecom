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

// Function: entry_0012f034
// Address: 0x12f034 - 0x12f058
void entry_0012f034_0x12f034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f034_0x12f034");
#endif

    ctx->pc = 0x12f034u;

    // 0x12f034: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12f034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f038: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x12f038u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x12f03c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12f03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12f040: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x12f040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x12f044: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12F044u;
    {
        const bool branch_taken_0x12f044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f044) {
            ctx->pc = 0x12F058u;
            return;
        }
    }
    ctx->pc = 0x12F04Cu;
    // 0x12f04c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12f04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f050: 0xc04ba40  jal         func_12E900
    ctx->pc = 0x12F050u;
    SET_GPR_U32(ctx, 31, 0x12F058u);
    ctx->pc = 0x12E900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E900u, 0x12F050u, 0x12F058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F058u;
}
