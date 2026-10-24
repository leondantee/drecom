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

// Function: entry_001de9d0
// Address: 0x1de9d0 - 0x1de9f0
void entry_001de9d0_0x1de9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de9d0_0x1de9d0");
#endif

    switch (ctx->pc) {
        case 0x1de9e4u: goto label_1de9e4;
        default: break;
    }

    ctx->pc = 0x1de9d0u;

    // 0x1de9d0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1de9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de9d4: 0x93a50028  lbu         $a1, 0x28($sp)
    ctx->pc = 0x1de9d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1de9d8: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1de9d8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1de9dc: 0xc077a88  jal         func_1DEA20
    ctx->pc = 0x1DE9DCu;
    SET_GPR_U32(ctx, 31, 0x1DE9E4u);
    ctx->pc = 0x1DEA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEA20u, 0x1DE9DCu, 0x1DE9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE9E4u;
label_1de9e4:
    // 0x1de9e4: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1de9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1de9e8: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1de9e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1de9ec: 0x0  nop
    ctx->pc = 0x1de9ecu;
    // NOP
    ctx->pc = 0x1de9f0u;
}
