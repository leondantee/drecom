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

// Function: entry_0012869c
// Address: 0x12869c - 0x1286d4
void entry_0012869c_0x12869c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012869c_0x12869c");
#endif

    switch (ctx->pc) {
        case 0x1286a4u: goto label_1286a4;
        default: break;
    }

    ctx->pc = 0x12869cu;

label_12869c:
    // 0x12869c: 0xc067694  jal         func_19DA50
label_1286a0:
    if (ctx->pc == 0x1286A0u) {
        ctx->pc = 0x1286A4u;
        goto label_1286a4;
    }
    ctx->pc = 0x12869Cu;
    SET_GPR_U32(ctx, 31, 0x1286A4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x12869Cu, 0x1286A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1286A4u;
label_1286a4:
    // 0x1286a4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1286a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1286a8:
    // 0x1286a8: 0x3065000f  andi        $a1, $v1, 0xF
    ctx->pc = 0x1286a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_1286ac:
    // 0x1286ac: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x1286acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1286b0:
    // 0x1286b0: 0x10200033  beqz        $at, . + 4 + (0x33 << 2)
label_1286b4:
    if (ctx->pc == 0x1286B4u) {
        ctx->pc = 0x1286B8u;
        goto label_1286b8;
    }
    ctx->pc = 0x1286B0u;
    {
        const bool branch_taken_0x1286b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1286b0) {
            ctx->pc = 0x128780u;
            return;
        }
    }
    ctx->pc = 0x1286B8u;
label_1286b8:
    // 0x1286b8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1286b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_1286bc:
    // 0x1286bc: 0x2464e3a0  addiu       $a0, $v1, -0x1C60
    ctx->pc = 0x1286bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960032));
label_1286c0:
    // 0x1286c0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1286c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1286c4:
    // 0x1286c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1286c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1286c8:
    // 0x1286c8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1286c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1286cc:
    // 0x1286cc: 0x600008  jr          $v1
label_1286d0:
    if (ctx->pc == 0x1286D0u) {
        ctx->pc = 0x1286D4u;
        goto label_fallthrough_0x1286cc;
    }
    ctx->pc = 0x1286CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1286CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1286cc:
    ctx->pc = 0x1286D4u;
}
