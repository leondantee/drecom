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

// Function: entry_0036ce68
// Address: 0x36ce68 - 0x36ce98
void entry_0036ce68_0x36ce68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036ce68_0x36ce68");
#endif

    ctx->pc = 0x36ce68u;

    // 0x36ce68: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36ce68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ce6c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x36ce6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x36ce70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36ce70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36ce74: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x36ce74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x36ce78: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x36CE78u;
    {
        const bool branch_taken_0x36ce78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ce78) {
            ctx->pc = 0x36CE98u;
            return;
        }
    }
    ctx->pc = 0x36CE80u;
    // 0x36ce80: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36ce80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ce84: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x36ce84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36ce88: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x36ce88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36ce8c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x36ce8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36ce90: 0xc0c6cd4  jal         func_31B350
    ctx->pc = 0x36CE90u;
    SET_GPR_U32(ctx, 31, 0x36CE98u);
    ctx->pc = 0x31B350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B350u, 0x36CE90u, 0x36CE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CE98u;
}
