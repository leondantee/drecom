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

// Function: entry_0030dd20
// Address: 0x30dd20 - 0x30dd44
void entry_0030dd20_0x30dd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030dd20_0x30dd20");
#endif

    switch (ctx->pc) {
        case 0x30dd3cu: goto label_30dd3c;
        default: break;
    }

    ctx->pc = 0x30dd20u;

    // 0x30dd20: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30dd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dd24: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x30dd24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x30dd28: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30DD28u;
    {
        const bool branch_taken_0x30dd28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30dd28) {
            ctx->pc = 0x30DD44u;
            return;
        }
    }
    ctx->pc = 0x30DD30u;
    // 0x30dd30: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30dd30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dd34: 0xc0c4544  jal         func_311510
    ctx->pc = 0x30DD34u;
    SET_GPR_U32(ctx, 31, 0x30DD3Cu);
    ctx->pc = 0x311510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311510u, 0x30DD34u, 0x30DD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DD3Cu;
label_30dd3c:
    // 0x30dd3c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30dd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dd40: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x30dd40u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x30dd44u;
}
