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

// Function: entry_0037cbe4
// Address: 0x37cbe4 - 0x37cc1c
void entry_0037cbe4_0x37cbe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037cbe4_0x37cbe4");
#endif

    ctx->pc = 0x37cbe4u;

    // 0x37cbe4: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x37cbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x37cbe8: 0xae03128c  sw          $v1, 0x128C($s0)
    ctx->pc = 0x37cbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4748), GPR_U32(ctx, 3));
    // 0x37cbec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37cbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37cbf0: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x37cbf0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x37cbf4: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x37cbf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x37cbf8: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x37cbf8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x37cbfc: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x37cbfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x37cc00: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x37cc00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x37cc04: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x37cc04u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37cc08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37cc08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37cc0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37cc0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37cc10: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x37cc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x37cc14: 0x3e00008  jr          $ra
    ctx->pc = 0x37CC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CC14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37CC1Cu;
}
