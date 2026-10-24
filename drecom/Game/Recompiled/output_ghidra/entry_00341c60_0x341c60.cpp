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

// Function: entry_00341c60
// Address: 0x341c60 - 0x341c90
void entry_00341c60_0x341c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00341c60_0x341c60");
#endif

    switch (ctx->pc) {
        case 0x341c84u: goto label_341c84;
        default: break;
    }

    ctx->pc = 0x341c60u;

    // 0x341c60: 0x93a20068  lbu         $v0, 0x68($sp)
    ctx->pc = 0x341c60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x341c64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x341c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x341c68: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x341c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x341c6c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x341C6Cu;
    {
        const bool branch_taken_0x341c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x341c6c) {
            ctx->pc = 0x341C90u;
            return;
        }
    }
    ctx->pc = 0x341C74u;
    // 0x341c74: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x341c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x341c78: 0x240501c7  addiu       $a1, $zero, 0x1C7
    ctx->pc = 0x341c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 455));
    // 0x341c7c: 0xc05a400  jal         func_169000
    ctx->pc = 0x341C7Cu;
    SET_GPR_U32(ctx, 31, 0x341C84u);
    ctx->pc = 0x169000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169000u, 0x341C7Cu, 0x341C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341C84u;
label_341c84:
    // 0x341c84: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x341c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x341c88: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x341c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x341c8c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x341c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x341c90u;
}
