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

// Function: entry_0030df40
// Address: 0x30df40 - 0x30df64
void entry_0030df40_0x30df40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030df40_0x30df40");
#endif

    switch (ctx->pc) {
        case 0x30df5cu: goto label_30df5c;
        default: break;
    }

    ctx->pc = 0x30df40u;

    // 0x30df40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30df40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30df44: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x30df44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x30df48: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30DF48u;
    {
        const bool branch_taken_0x30df48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30df48) {
            ctx->pc = 0x30DF64u;
            return;
        }
    }
    ctx->pc = 0x30DF50u;
    // 0x30df50: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30df50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30df54: 0xc0c4544  jal         func_311510
    ctx->pc = 0x30DF54u;
    SET_GPR_U32(ctx, 31, 0x30DF5Cu);
    ctx->pc = 0x311510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311510u, 0x30DF54u, 0x30DF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DF5Cu;
label_30df5c:
    // 0x30df5c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30df5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30df60: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x30df60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x30df64u;
}
