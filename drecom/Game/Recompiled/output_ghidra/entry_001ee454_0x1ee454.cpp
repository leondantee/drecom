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

// Function: entry_001ee454
// Address: 0x1ee454 - 0x1ee47c
void entry_001ee454_0x1ee454(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee454_0x1ee454");
#endif

    switch (ctx->pc) {
        case 0x1ee45cu: goto label_1ee45c;
        default: break;
    }

    ctx->pc = 0x1ee454u;

    // 0x1ee454: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EE454u;
    SET_GPR_U32(ctx, 31, 0x1EE45Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EE454u, 0x1EE45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE45Cu;
label_1ee45c:
    // 0x1ee45c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1ee45cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ee460: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1ee460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ee464: 0x246300f0  addiu       $v1, $v1, 0xF0
    ctx->pc = 0x1ee464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x1ee468: 0x3064007f  andi        $a0, $v1, 0x7F
    ctx->pc = 0x1ee468u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x1ee46c: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x1ee46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1ee470: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ee470u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ee474: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1ee474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee478: 0xa4a2127e  sh          $v0, 0x127E($a1)
    ctx->pc = 0x1ee478u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4734), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1ee47cu;
}
