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

// Function: entry_0026c654
// Address: 0x26c654 - 0x26c688
void entry_0026c654_0x26c654(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026c654_0x26c654");
#endif

    switch (ctx->pc) {
        case 0x26c65cu: goto label_26c65c;
        case 0x26c680u: goto label_26c680;
        default: break;
    }

    ctx->pc = 0x26c654u;

    // 0x26c654: 0xc0bccb0  jal         func_2F32C0
    ctx->pc = 0x26C654u;
    SET_GPR_U32(ctx, 31, 0x26C65Cu);
    ctx->pc = 0x2F32C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F32C0u, 0x26C654u, 0x26C65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C65Cu;
label_26c65c:
    // 0x26c65c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c660: 0x906409df  lbu         $a0, 0x9DF($v1)
    ctx->pc = 0x26c660u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x26c664: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x26c664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x26c668: 0x306300c0  andi        $v1, $v1, 0xC0
    ctx->pc = 0x26c668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
    // 0x26c66c: 0x106000d8  beqz        $v1, . + 4 + (0xD8 << 2)
    ctx->pc = 0x26C66Cu;
    {
        const bool branch_taken_0x26c66c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c66c) {
            ctx->pc = 0x26C9D0u;
            return;
        }
    }
    ctx->pc = 0x26C674u;
    // 0x26c674: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c678: 0xc09b8cc  jal         func_26E330
    ctx->pc = 0x26C678u;
    SET_GPR_U32(ctx, 31, 0x26C680u);
    ctx->pc = 0x26E330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E330u, 0x26C678u, 0x26C680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C680u;
label_26c680:
    // 0x26c680: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x26C680u;
    {
        const bool branch_taken_0x26c680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c680) {
            ctx->pc = 0x26C9D0u;
            return;
        }
    }
    ctx->pc = 0x26C688u;
}
