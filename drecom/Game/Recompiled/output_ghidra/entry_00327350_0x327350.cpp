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

// Function: entry_00327350
// Address: 0x327350 - 0x327378
void entry_00327350_0x327350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00327350_0x327350");
#endif

    ctx->pc = 0x327350u;

    // 0x327350: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x327350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x327354: 0x8c630298  lw          $v1, 0x298($v1)
    ctx->pc = 0x327354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 664)));
    // 0x327358: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x327358u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x32735c: 0x1460ffaf  bnez        $v1, . + 4 + (-0x51 << 2)
    ctx->pc = 0x32735Cu;
    {
        const bool branch_taken_0x32735c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32735c) {
            ctx->pc = 0x32721Cu;
            return;
        }
    }
    ctx->pc = 0x327364u;
    // 0x327364: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x327364u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327368: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x327368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32736c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x32736cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x327370: 0x3e00008  jr          $ra
    ctx->pc = 0x327370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327378u;
}
