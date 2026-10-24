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

// Function: entry_0019c01c
// Address: 0x19c01c - 0x19c050
void entry_0019c01c_0x19c01c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c01c_0x19c01c");
#endif

    switch (ctx->pc) {
        case 0x19c028u: goto label_19c028;
        default: break;
    }

    ctx->pc = 0x19c01cu;

    // 0x19c01c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19c01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19c020: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x19C020u;
    SET_GPR_U32(ctx, 31, 0x19C028u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x19C020u, 0x19C028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C028u;
label_19c028:
    // 0x19c028: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19c028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19c02c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x19c02cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x19c030: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x19C030u;
    {
        const bool branch_taken_0x19c030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c030) {
            ctx->pc = 0x19C094u;
            return;
        }
    }
    ctx->pc = 0x19C038u;
    // 0x19c038: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19c038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19c03c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x19c03cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x19c040: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19c040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19c044: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x19c044u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x19c048: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x19C048u;
    {
        const bool branch_taken_0x19c048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c048) {
            ctx->pc = 0x19C094u;
            return;
        }
    }
    ctx->pc = 0x19C050u;
}
