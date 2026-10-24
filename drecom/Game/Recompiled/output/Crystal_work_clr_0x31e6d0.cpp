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

// Function: Crystal_work_clr
// Address: 0x31e6d0 - 0x31e6f4
void Crystal_work_clr_0x31e6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Crystal_work_clr_0x31e6d0");
#endif

    ctx->pc = 0x31e6d0u;

    // 0x31e6d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31e6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31e6d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31e6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31e6d8: 0x3c030086  lui         $v1, 0x86
    ctx->pc = 0x31e6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)134 << 16));
    // 0x31e6dc: 0x2470af60  addiu       $s0, $v1, -0x50A0
    ctx->pc = 0x31e6dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946656));
    // 0x31e6e0: 0xa6000006  sh          $zero, 0x6($s0)
    ctx->pc = 0x31e6e0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x85AF66u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x85AF66u, _value); } while (0);
    // 0x31e6e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31e6e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31e6e8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x31e6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31e6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x31E6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E6F4u;
}
