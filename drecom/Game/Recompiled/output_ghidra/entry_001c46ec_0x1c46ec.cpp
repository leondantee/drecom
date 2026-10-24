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

// Function: entry_001c46ec
// Address: 0x1c46ec - 0x1c4710
void entry_001c46ec_0x1c46ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c46ec_0x1c46ec");
#endif

    switch (ctx->pc) {
        case 0x1c46f4u: goto label_1c46f4;
        default: break;
    }

    ctx->pc = 0x1c46ecu;

    // 0x1c46ec: 0xc057acc  jal         func_15EB30
    ctx->pc = 0x1C46ECu;
    SET_GPR_U32(ctx, 31, 0x1C46F4u);
    ctx->pc = 0x15EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EB30u, 0x1C46ECu, 0x1C46F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C46F4u;
label_1c46f4:
    // 0x1c46f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C46F4u;
    {
        const bool branch_taken_0x1c46f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c46f4) {
            ctx->pc = 0x1C4710u;
            return;
        }
    }
    ctx->pc = 0x1C46FCu;
    // 0x1c46fc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1c46fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c4700: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c4700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4704: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1c4704u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1c4708: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1C4708u;
    {
        const bool branch_taken_0x1c4708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4708) {
            ctx->pc = 0x1C47ACu;
            return;
        }
    }
    ctx->pc = 0x1C4710u;
}
