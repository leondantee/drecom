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

// Function: entry_00232a80
// Address: 0x232a80 - 0x232ac8
void entry_00232a80_0x232a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00232a80_0x232a80");
#endif

    switch (ctx->pc) {
        case 0x232ab0u: goto label_232ab0;
        case 0x232ac0u: goto label_232ac0;
        default: break;
    }

    ctx->pc = 0x232a80u;

    // 0x232a80: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232a84: 0x8c6312f4  lw          $v1, 0x12F4($v1)
    ctx->pc = 0x232a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4852)));
    // 0x232a88: 0x30630018  andi        $v1, $v1, 0x18
    ctx->pc = 0x232a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)24);
    // 0x232a8c: 0x10600102  beqz        $v1, . + 4 + (0x102 << 2)
    ctx->pc = 0x232A8Cu;
    {
        const bool branch_taken_0x232a8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x232a8c) {
            ctx->pc = 0x232E98u;
            return;
        }
    }
    ctx->pc = 0x232A94u;
    // 0x232a94: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x232a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x232a98: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232a9c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x232a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x232aa0: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x232aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x232aa4: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x232aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x232aa8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x232AA8u;
    SET_GPR_U32(ctx, 31, 0x232AB0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x232AA8u, 0x232AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232AB0u;
label_232ab0:
    // 0x232ab0: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x232ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
    // 0x232ab4: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x232ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x232ab8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x232AB8u;
    SET_GPR_U32(ctx, 31, 0x232AC0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x232AB8u, 0x232AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232AC0u;
label_232ac0:
    // 0x232ac0: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x232AC0u;
    {
        const bool branch_taken_0x232ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x232ac0) {
            ctx->pc = 0x232E98u;
            return;
        }
    }
    ctx->pc = 0x232AC8u;
}
