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

// Function: entry_0032e488
// Address: 0x32e488 - 0x32e4b8
void entry_0032e488_0x32e488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032e488_0x32e488");
#endif

    ctx->pc = 0x32e488u;

    // 0x32e488: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x32e488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32e48c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x32e48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32e490: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x32e490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x32e494: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x32e494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x32e498: 0x1060ffe2  beqz        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x32E498u;
    {
        const bool branch_taken_0x32e498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e498) {
            ctx->pc = 0x32E424u;
            return;
        }
    }
    ctx->pc = 0x32E4A0u;
    // 0x32e4a0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x32e4a0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32e4a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32e4a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32e4a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32e4a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32e4ac: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x32e4acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32e4b0: 0x3e00008  jr          $ra
    ctx->pc = 0x32E4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E4B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E4B8u;
}
