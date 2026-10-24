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

// Function: entry_002c6d80
// Address: 0x2c6d80 - 0x2c6da8
void entry_002c6d80_0x2c6d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c6d80_0x2c6d80");
#endif

    switch (ctx->pc) {
        case 0x2c6d88u: goto label_2c6d88;
        default: break;
    }

    ctx->pc = 0x2c6d80u;

    // 0x2c6d80: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C6D80u;
    SET_GPR_U32(ctx, 31, 0x2C6D88u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C6D80u, 0x2C6D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6D88u;
label_2c6d88:
    // 0x2c6d88: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c6d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c6d8c: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x2c6d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x2c6d90: 0x246301f4  addiu       $v1, $v1, 0x1F4
    ctx->pc = 0x2c6d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 500));
    // 0x2c6d94: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x2c6d94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2c6d98: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2c6d98u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2c6d9c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2c6d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6da0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c6da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c6da4: 0xa4640058  sh          $a0, 0x58($v1)
    ctx->pc = 0x2c6da4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 88), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x2c6da8u;
}
