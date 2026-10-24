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

// Function: entry_00129468
// Address: 0x129468 - 0x1294a0
void entry_00129468_0x129468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129468_0x129468");
#endif

    switch (ctx->pc) {
        case 0x129470u: goto label_129470;
        default: break;
    }

    ctx->pc = 0x129468u;

    // 0x129468: 0xc067694  jal         func_19DA50
    ctx->pc = 0x129468u;
    SET_GPR_U32(ctx, 31, 0x129470u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x129468u, 0x129470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129470u;
label_129470:
    // 0x129470: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x129470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x129474: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x129474u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x129478: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x129478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12947c: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x12947Cu;
    {
        const bool branch_taken_0x12947c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12947c) {
            ctx->pc = 0x129508u;
            return;
        }
    }
    ctx->pc = 0x129484u;
    // 0x129484: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x129484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x129488: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x129488u;
    {
        const bool branch_taken_0x129488 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x129488) {
            ctx->pc = 0x129508u;
            return;
        }
    }
    ctx->pc = 0x129490u;
    // 0x129490: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x129490u;
    {
        const bool branch_taken_0x129490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x129490) {
            ctx->pc = 0x1294A0u;
            return;
        }
    }
    ctx->pc = 0x129498u;
    // 0x129498: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x129498u;
    {
        const bool branch_taken_0x129498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129498) {
            ctx->pc = 0x129570u;
            return;
        }
    }
    ctx->pc = 0x1294A0u;
}
