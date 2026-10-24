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

// Function: entry_00259188
// Address: 0x259188 - 0x2591ac
void entry_00259188_0x259188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00259188_0x259188");
#endif

    ctx->pc = 0x259188u;

    // 0x259188: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x259188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x25918c: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x25918cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x259190: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x259190u;
    {
        const bool branch_taken_0x259190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x259190) {
            ctx->pc = 0x259164u;
            return;
        }
    }
    ctx->pc = 0x259198u;
    // 0x259198: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x259198u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25919c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25919cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2591a0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2591a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2591a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2591A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2591A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2591ACu;
}
