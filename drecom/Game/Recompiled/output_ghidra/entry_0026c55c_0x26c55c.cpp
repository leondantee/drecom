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

// Function: entry_0026c55c
// Address: 0x26c55c - 0x26c590
void entry_0026c55c_0x26c55c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026c55c_0x26c55c");
#endif

    switch (ctx->pc) {
        case 0x26c564u: goto label_26c564;
        case 0x26c588u: goto label_26c588;
        default: break;
    }

    ctx->pc = 0x26c55cu;

    // 0x26c55c: 0xc0bcd40  jal         func_2F3500
    ctx->pc = 0x26C55Cu;
    SET_GPR_U32(ctx, 31, 0x26C564u);
    ctx->pc = 0x2F3500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3500u, 0x26C55Cu, 0x26C564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C564u;
label_26c564:
    // 0x26c564: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c568: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x26c568u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x26c56c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x26c56cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x26c570: 0x306300c0  andi        $v1, $v1, 0xC0
    ctx->pc = 0x26c570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
    // 0x26c574: 0x10600116  beqz        $v1, . + 4 + (0x116 << 2)
    ctx->pc = 0x26C574u;
    {
        const bool branch_taken_0x26c574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c574) {
            ctx->pc = 0x26C9D0u;
            return;
        }
    }
    ctx->pc = 0x26C57Cu;
    // 0x26c57c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c580: 0xc09b88c  jal         func_26E230
    ctx->pc = 0x26C580u;
    SET_GPR_U32(ctx, 31, 0x26C588u);
    ctx->pc = 0x26E230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E230u, 0x26C580u, 0x26C588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C588u;
label_26c588:
    // 0x26c588: 0x10000111  b           . + 4 + (0x111 << 2)
    ctx->pc = 0x26C588u;
    {
        const bool branch_taken_0x26c588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c588) {
            ctx->pc = 0x26C9D0u;
            return;
        }
    }
    ctx->pc = 0x26C590u;
}
