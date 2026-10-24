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

// Function: entry_002280c4
// Address: 0x2280c4 - 0x2280f4
void entry_002280c4_0x2280c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002280c4_0x2280c4");
#endif

    switch (ctx->pc) {
        case 0x2280d0u: goto label_2280d0;
        default: break;
    }

    ctx->pc = 0x2280c4u;

    // 0x2280c4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2280c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2280c8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2280C8u;
    SET_GPR_U32(ctx, 31, 0x2280D0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2280C8u, 0x2280D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2280D0u;
label_2280d0:
    // 0x2280d0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2280d0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2280d4: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x2280d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2280d8: 0x84a3127a  lh          $v1, 0x127A($a1)
    ctx->pc = 0x2280d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4730)));
    // 0x2280dc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2280DCu;
    {
        const bool branch_taken_0x2280dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2280dc) {
            ctx->pc = 0x2280F4u;
            return;
        }
    }
    ctx->pc = 0x2280E4u;
    // 0x2280e4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2280e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2280e8: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x2280e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x2280ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2280ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2280f0: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x2280f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2280f4u;
}
