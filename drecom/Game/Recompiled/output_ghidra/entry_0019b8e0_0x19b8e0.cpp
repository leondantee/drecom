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

// Function: entry_0019b8e0
// Address: 0x19b8e0 - 0x19b930
void entry_0019b8e0_0x19b8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b8e0_0x19b8e0");
#endif

    switch (ctx->pc) {
        case 0x19b91cu: goto label_19b91c;
        default: break;
    }

    ctx->pc = 0x19b8e0u;

    // 0x19b8e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x19b8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b8e4: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x19b8e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x19b8e8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x19b8e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19b8ec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x19b8ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x19b8f0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x19b8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19b8f4: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x19B8F4u;
    {
        const bool branch_taken_0x19b8f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19b8f4) {
            ctx->pc = 0x19B938u;
            return;
        }
    }
    ctx->pc = 0x19B8FCu;
    // 0x19b8fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x19b8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b900: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x19b900u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x19b904: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19b904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19b908: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x19b908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x19b90c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19B90Cu;
    {
        const bool branch_taken_0x19b90c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b90c) {
            ctx->pc = 0x19B930u;
            return;
        }
    }
    ctx->pc = 0x19B914u;
    // 0x19b914: 0xc067694  jal         func_19DA50
    ctx->pc = 0x19B914u;
    SET_GPR_U32(ctx, 31, 0x19B91Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x19B914u, 0x19B91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B91Cu;
label_19b91c:
    // 0x19b91c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19b91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19b920: 0x3045001f  andi        $a1, $v0, 0x1F
    ctx->pc = 0x19b920u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x19b924: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b928: 0xc0ba2f0  jal         func_2E8BC0
    ctx->pc = 0x19B928u;
    SET_GPR_U32(ctx, 31, 0x19B930u);
    ctx->pc = 0x2E8BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8BC0u, 0x19B928u, 0x19B930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B930u;
}
