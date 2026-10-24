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

// Function: entry_001ec95c
// Address: 0x1ec95c - 0x1ec980
void entry_001ec95c_0x1ec95c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec95c_0x1ec95c");
#endif

    switch (ctx->pc) {
        case 0x1ec964u: goto label_1ec964;
        default: break;
    }

    ctx->pc = 0x1ec95cu;

    // 0x1ec95c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EC95Cu;
    SET_GPR_U32(ctx, 31, 0x1EC964u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EC95Cu, 0x1EC964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC964u;
label_1ec964:
    // 0x1ec964: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1ec964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ec968: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1ec968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1ec96c: 0x246300f0  addiu       $v1, $v1, 0xF0
    ctx->pc = 0x1ec96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x1ec970: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1ec970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ec974: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1ec974u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1ec978: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ec978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ec97c: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1ec97cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1ec980u;
}
