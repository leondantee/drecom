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

// Function: entry_00367d78
// Address: 0x367d78 - 0x367dc8
void entry_00367d78_0x367d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00367d78_0x367d78");
#endif

    switch (ctx->pc) {
        case 0x367d80u: goto label_367d80;
        case 0x367da0u: goto label_367da0;
        default: break;
    }

    ctx->pc = 0x367d78u;

    // 0x367d78: 0xc067694  jal         func_19DA50
    ctx->pc = 0x367D78u;
    SET_GPR_U32(ctx, 31, 0x367D80u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x367D78u, 0x367D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367D80u;
label_367d80:
    // 0x367d80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x367d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x367d84: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x367d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x367d88: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x367d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x367d8c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x367d8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x367d90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367d94: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x367d94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x367d98: 0xc067694  jal         func_19DA50
    ctx->pc = 0x367D98u;
    SET_GPR_U32(ctx, 31, 0x367DA0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x367D98u, 0x367DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367DA0u;
label_367da0:
    // 0x367da0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x367da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x367da4: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x367da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x367da8: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x367DA8u;
    {
        const bool branch_taken_0x367da8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x367da8) {
            ctx->pc = 0x367E40u;
            return;
        }
    }
    ctx->pc = 0x367DB0u;
    // 0x367db0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367db4: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x367db4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x367db8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x367db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x367dbc: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x367dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x367dc0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x367DC0u;
    {
        const bool branch_taken_0x367dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x367dc0) {
            ctx->pc = 0x367E40u;
            return;
        }
    }
    ctx->pc = 0x367DC8u;
}
