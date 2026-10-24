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

// Function: entry_00173c54
// Address: 0x173c54 - 0x173cac
void entry_00173c54_0x173c54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173c54_0x173c54");
#endif

    switch (ctx->pc) {
        case 0x173ca4u: goto label_173ca4;
        default: break;
    }

    ctx->pc = 0x173c54u;

    // 0x173c54: 0x93a20038  lbu         $v0, 0x38($sp)
    ctx->pc = 0x173c54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x173c58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x173c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x173c5c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x173c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x173c60: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x173C60u;
    {
        const bool branch_taken_0x173c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173c60) {
            ctx->pc = 0x173CC8u;
            return;
        }
    }
    ctx->pc = 0x173C68u;
    // 0x173c68: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x173c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173c6c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x173c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x173c70: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x173c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x173c74: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x173C74u;
    {
        const bool branch_taken_0x173c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173c74) {
            ctx->pc = 0x173CC8u;
            return;
        }
    }
    ctx->pc = 0x173C7Cu;
    // 0x173c7c: 0x93a20038  lbu         $v0, 0x38($sp)
    ctx->pc = 0x173c7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x173c80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x173c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x173c84: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x173c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x173c88: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x173C88u;
    {
        const bool branch_taken_0x173c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x173c88) {
            ctx->pc = 0x173CACu;
            return;
        }
    }
    ctx->pc = 0x173C90u;
    // 0x173c90: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x173c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173c94: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x173c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x173c98: 0x344501c7  ori         $a1, $v0, 0x1C7
    ctx->pc = 0x173c98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)455);
    // 0x173c9c: 0xc05a400  jal         func_169000
    ctx->pc = 0x173C9Cu;
    SET_GPR_U32(ctx, 31, 0x173CA4u);
    ctx->pc = 0x169000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169000u, 0x173C9Cu, 0x173CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173CA4u;
label_173ca4:
    // 0x173ca4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x173CA4u;
    {
        const bool branch_taken_0x173ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173ca4) {
            ctx->pc = 0x173CDCu;
            return;
        }
    }
    ctx->pc = 0x173CACu;
}
