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

// Function: entry_002dbd4c
// Address: 0x2dbd4c - 0x2dbd94
void entry_002dbd4c_0x2dbd4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dbd4c_0x2dbd4c");
#endif

    switch (ctx->pc) {
        case 0x2dbd6cu: goto label_2dbd6c;
        default: break;
    }

    ctx->pc = 0x2dbd4cu;

    // 0x2dbd4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbd50: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x2dbd50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x2dbd54: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2dbd54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2dbd58: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x2dbd58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2dbd5c: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2DBD5Cu;
    {
        const bool branch_taken_0x2dbd5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbd5c) {
            ctx->pc = 0x2DBDCCu;
            return;
        }
    }
    ctx->pc = 0x2DBD64u;
    // 0x2dbd64: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2DBD64u;
    SET_GPR_U32(ctx, 31, 0x2DBD6Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2DBD64u, 0x2DBD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBD6Cu;
label_2dbd6c:
    // 0x2dbd6c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2dbd6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2dbd70: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2dbd70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2dbd74: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DBD74u;
    {
        const bool branch_taken_0x2dbd74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbd74) {
            ctx->pc = 0x2DBD94u;
            return;
        }
    }
    ctx->pc = 0x2DBD7Cu;
    // 0x2dbd7c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbd80: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2dbd80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2dbd84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2dbd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2dbd88: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2dbd88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2dbd8c: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x2DBD8Cu;
    {
        const bool branch_taken_0x2dbd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbd8c) {
            ctx->pc = 0x2DC0BCu;
            return;
        }
    }
    ctx->pc = 0x2DBD94u;
}
