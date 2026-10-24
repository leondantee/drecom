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

// Function: entry_0020d68c
// Address: 0x20d68c - 0x20d6dc
void entry_0020d68c_0x20d68c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020d68c_0x20d68c");
#endif

    switch (ctx->pc) {
        case 0x20d6c8u: goto label_20d6c8;
        default: break;
    }

    ctx->pc = 0x20d68cu;

    // 0x20d68c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x20d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d690: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x20d690u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x20d694: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x20d694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20d698: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20d698u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20d69c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x20d69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20d6a0: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x20D6A0u;
    {
        const bool branch_taken_0x20d6a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20d6a0) {
            ctx->pc = 0x20D6E4u;
            return;
        }
    }
    ctx->pc = 0x20D6A8u;
    // 0x20d6a8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x20d6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d6ac: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x20d6acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x20d6b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d6b4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x20d6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x20d6b8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20D6B8u;
    {
        const bool branch_taken_0x20d6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d6b8) {
            ctx->pc = 0x20D6DCu;
            return;
        }
    }
    ctx->pc = 0x20D6C0u;
    // 0x20d6c0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x20D6C0u;
    SET_GPR_U32(ctx, 31, 0x20D6C8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x20D6C0u, 0x20D6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D6C8u;
label_20d6c8:
    // 0x20d6c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d6cc: 0x3045001f  andi        $a1, $v0, 0x1F
    ctx->pc = 0x20d6ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x20d6d0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20d6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d6d4: 0xc0baaf4  jal         func_2EABD0
    ctx->pc = 0x20D6D4u;
    SET_GPR_U32(ctx, 31, 0x20D6DCu);
    ctx->pc = 0x2EABD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EABD0u, 0x20D6D4u, 0x20D6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D6DCu;
}
