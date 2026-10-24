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

// Function: entry_00257f30
// Address: 0x257f30 - 0x257f50
void entry_00257f30_0x257f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00257f30_0x257f30");
#endif

    switch (ctx->pc) {
        case 0x257f44u: goto label_257f44;
        default: break;
    }

    ctx->pc = 0x257f30u;

    // 0x257f30: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x257f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x257f34: 0x93a50028  lbu         $a1, 0x28($sp)
    ctx->pc = 0x257f34u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x257f38: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x257f38u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x257f3c: 0xc095fe0  jal         func_257F80
    ctx->pc = 0x257F3Cu;
    SET_GPR_U32(ctx, 31, 0x257F44u);
    ctx->pc = 0x257F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F80u, 0x257F3Cu, 0x257F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257F44u;
label_257f44:
    // 0x257f44: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x257f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x257f48: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x257f48u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x257f4c: 0x0  nop
    ctx->pc = 0x257f4cu;
    // NOP
    ctx->pc = 0x257f50u;
}
