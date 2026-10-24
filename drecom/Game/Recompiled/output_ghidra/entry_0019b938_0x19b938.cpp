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

// Function: entry_0019b938
// Address: 0x19b938 - 0x19b960
void entry_0019b938_0x19b938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b938_0x19b938");
#endif

    ctx->pc = 0x19b938u;

    // 0x19b938: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x19b938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b93c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x19b93cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x19b940: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19b940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19b944: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x19b944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x19b948: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B948u;
    {
        const bool branch_taken_0x19b948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b948) {
            ctx->pc = 0x19B960u;
            return;
        }
    }
    ctx->pc = 0x19B950u;
    // 0x19b950: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b954: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x19b954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x19b958: 0xc0ba408  jal         func_2E9020
    ctx->pc = 0x19B958u;
    SET_GPR_U32(ctx, 31, 0x19B960u);
    ctx->pc = 0x2E9020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9020u, 0x19B958u, 0x19B960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B960u;
}
