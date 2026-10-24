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

// Function: entry_002a3aa0
// Address: 0x2a3aa0 - 0x2a3ac4
void entry_002a3aa0_0x2a3aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a3aa0_0x2a3aa0");
#endif

    switch (ctx->pc) {
        case 0x2a3aa8u: goto label_2a3aa8;
        default: break;
    }

    ctx->pc = 0x2a3aa0u;

    // 0x2a3aa0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A3AA0u;
    SET_GPR_U32(ctx, 31, 0x2A3AA8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A3AA0u, 0x2A3AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3AA8u;
label_2a3aa8:
    // 0x2a3aa8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2a3aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a3aac: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x2a3aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x2a3ab0: 0x2464000a  addiu       $a0, $v1, 0xA
    ctx->pc = 0x2a3ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x2a3ab4: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x2a3ab4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2a3ab8: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x2a3ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3abc: 0x24c71330  addiu       $a3, $a2, 0x1330
    ctx->pc = 0x2a3abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x2a3ac0: 0xa4e50042  sh          $a1, 0x42($a3)
    ctx->pc = 0x2a3ac0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 66), (uint16_t)GPR_U32(ctx, 5));
    ctx->pc = 0x2a3ac4u;
}
