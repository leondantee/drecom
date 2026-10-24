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

// Function: Alpha_set
// Address: 0x13dcd0 - 0x13dd10
void Alpha_set_0x13dcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Alpha_set_0x13dcd0");
#endif

    ctx->pc = 0x13dcd0u;

    // 0x13dcd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13dcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13dcd4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x13dcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x13dcd8: 0xa7a50008  sh          $a1, 0x8($sp)
    ctx->pc = 0x13dcd8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 5));
    // 0x13dcdc: 0x87a30008  lh          $v1, 0x8($sp)
    ctx->pc = 0x13dcdcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13dce0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x13dce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13dce4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13dce4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x13dce8: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x13dce8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x13dcec: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x13dcecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x13dcf0: 0x246350e0  addiu       $v1, $v1, 0x50E0
    ctx->pc = 0x13dcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20704));
    // 0x13dcf4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13dcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13dcf8: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x13dcf8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13dcfc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13dcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13dd00: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x13dd00u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x13dd04: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x13dd04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13dd08: 0x3e00008  jr          $ra
    ctx->pc = 0x13DD08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DD08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DD10u;
}
