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

// Function: entry_0030e160
// Address: 0x30e160 - 0x30e184
void entry_0030e160_0x30e160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030e160_0x30e160");
#endif

    switch (ctx->pc) {
        case 0x30e17cu: goto label_30e17c;
        default: break;
    }

    ctx->pc = 0x30e160u;

    // 0x30e160: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e164: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x30e164u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x30e168: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30E168u;
    {
        const bool branch_taken_0x30e168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e168) {
            ctx->pc = 0x30E184u;
            return;
        }
    }
    ctx->pc = 0x30E170u;
    // 0x30e170: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e174: 0xc0c4544  jal         func_311510
    ctx->pc = 0x30E174u;
    SET_GPR_U32(ctx, 31, 0x30E17Cu);
    ctx->pc = 0x311510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311510u, 0x30E174u, 0x30E17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E17Cu;
label_30e17c:
    // 0x30e17c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e180: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x30e180u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x30e184u;
}
