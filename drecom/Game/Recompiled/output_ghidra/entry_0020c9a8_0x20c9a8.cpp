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

// Function: entry_0020c9a8
// Address: 0x20c9a8 - 0x20c9f8
void entry_0020c9a8_0x20c9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020c9a8_0x20c9a8");
#endif

    switch (ctx->pc) {
        case 0x20c9e4u: goto label_20c9e4;
        default: break;
    }

    ctx->pc = 0x20c9a8u;

    // 0x20c9a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c9ac: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x20c9acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x20c9b0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x20c9b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20c9b4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20c9b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20c9b8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x20c9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20c9bc: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x20C9BCu;
    {
        const bool branch_taken_0x20c9bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20c9bc) {
            ctx->pc = 0x20CA00u;
            return;
        }
    }
    ctx->pc = 0x20C9C4u;
    // 0x20c9c4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c9c8: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x20c9c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x20c9cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20c9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20c9d0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x20c9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x20c9d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20C9D4u;
    {
        const bool branch_taken_0x20c9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c9d4) {
            ctx->pc = 0x20C9F8u;
            return;
        }
    }
    ctx->pc = 0x20C9DCu;
    // 0x20c9dc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x20C9DCu;
    SET_GPR_U32(ctx, 31, 0x20C9E4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x20C9DCu, 0x20C9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C9E4u;
label_20c9e4:
    // 0x20c9e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20c9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20c9e8: 0x3045001f  andi        $a1, $v0, 0x1F
    ctx->pc = 0x20c9e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x20c9ec: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c9f0: 0xc0baaf4  jal         func_2EABD0
    ctx->pc = 0x20C9F0u;
    SET_GPR_U32(ctx, 31, 0x20C9F8u);
    ctx->pc = 0x2EABD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EABD0u, 0x20C9F0u, 0x20C9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C9F8u;
}
