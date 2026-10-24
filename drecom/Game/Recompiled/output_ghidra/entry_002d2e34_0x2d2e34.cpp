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

// Function: entry_002d2e34
// Address: 0x2d2e34 - 0x2d2e70
void entry_002d2e34_0x2d2e34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d2e34_0x2d2e34");
#endif

    ctx->pc = 0x2d2e34u;

    // 0x2d2e34: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2e38: 0x8c421334  lw          $v0, 0x1334($v0)
    ctx->pc = 0x2d2e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4916)));
    // 0x2d2e3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d2e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d2e40: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D2E40u;
    {
        const bool branch_taken_0x2d2e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2e40) {
            ctx->pc = 0x2D2E70u;
            return;
        }
    }
    ctx->pc = 0x2D2E48u;
    // 0x2d2e48: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2e4c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2d2e4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2d2e50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d2e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d2e54: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2d2e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2d2e58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D2E58u;
    {
        const bool branch_taken_0x2d2e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2e58) {
            ctx->pc = 0x2D2E70u;
            return;
        }
    }
    ctx->pc = 0x2D2E60u;
    // 0x2d2e60: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d2e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2e64: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d2e64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d2e68: 0xc0b402c  jal         func_2D00B0
    ctx->pc = 0x2D2E68u;
    SET_GPR_U32(ctx, 31, 0x2D2E70u);
    ctx->pc = 0x2D00B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D00B0u, 0x2D2E68u, 0x2D2E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2E70u;
}
