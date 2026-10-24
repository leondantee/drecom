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

// Function: entry_00296d98
// Address: 0x296d98 - 0x296dbc
void entry_00296d98_0x296d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00296d98_0x296d98");
#endif

    ctx->pc = 0x296d98u;

    // 0x296d98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x296d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296d9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296da0: 0xa06469cc  sb          $a0, 0x69CC($v1)
    ctx->pc = 0x296da0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 27084), (uint8_t)GPR_U32(ctx, 4));
    // 0x296da4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296da8: 0xa06069cd  sb          $zero, 0x69CD($v1)
    ctx->pc = 0x296da8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 27085), (uint8_t)GPR_U32(ctx, 0));
    // 0x296dac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x296dacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296db0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x296db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x296db4: 0x3e00008  jr          $ra
    ctx->pc = 0x296DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296DBCu;
}
