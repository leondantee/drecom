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

// Function: entry_002d412c
// Address: 0x2d412c - 0x2d4158
void entry_002d412c_0x2d412c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d412c_0x2d412c");
#endif

    ctx->pc = 0x2d412cu;

    // 0x2d412c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d412cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4130: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2d4130u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2d4134: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d4134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d4138: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2d4138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2d413c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D413Cu;
    {
        const bool branch_taken_0x2d413c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d413c) {
            ctx->pc = 0x2D4158u;
            return;
        }
    }
    ctx->pc = 0x2D4144u;
    // 0x2d4144: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d4144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4148: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d4148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d414c: 0x244500d0  addiu       $a1, $v0, 0xD0
    ctx->pc = 0x2d414cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2d4150: 0xc0c6c64  jal         func_31B190
    ctx->pc = 0x2D4150u;
    SET_GPR_U32(ctx, 31, 0x2D4158u);
    ctx->pc = 0x31B190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B190u, 0x2D4150u, 0x2D4158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4158u;
}
