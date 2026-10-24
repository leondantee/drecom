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

// Function: entry_00124240
// Address: 0x124240 - 0x124260
void entry_00124240_0x124240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124240_0x124240");
#endif

    switch (ctx->pc) {
        case 0x124250u: goto label_124250;
        default: break;
    }

    ctx->pc = 0x124240u;

    // 0x124240: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x124240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x124244: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x124244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x124248: 0xc048148  jal         func_120520
    ctx->pc = 0x124248u;
    SET_GPR_U32(ctx, 31, 0x124250u);
    ctx->pc = 0x120520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120520u, 0x124248u, 0x124250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124250u;
label_124250:
    // 0x124250: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x124250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x124254: 0x84a410a6  lh          $a0, 0x10A6($a1)
    ctx->pc = 0x124254u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4262)));
    // 0x124258: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x124258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x12425c: 0xa4a310a6  sh          $v1, 0x10A6($a1)
    ctx->pc = 0x12425cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4262), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x124260u;
}
