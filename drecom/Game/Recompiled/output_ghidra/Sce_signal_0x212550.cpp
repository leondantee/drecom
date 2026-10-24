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

// Function: Sce_signal
// Address: 0x212550 - 0x212584
void Sce_signal_0x212550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sce_signal_0x212550");
#endif

    ctx->pc = 0x212550u;

    // 0x212550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x212550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x212554: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x212554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x212558: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x212558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21255c: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x21255cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x212560: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x212560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x212564: 0x246396e0  addiu       $v1, $v1, -0x6920
    ctx->pc = 0x212564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940384));
    // 0x212568: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x212568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21256c: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x21256cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x212570: 0x3063ffbf  andi        $v1, $v1, 0xFFBF
    ctx->pc = 0x212570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
    // 0x212574: 0xa4830008  sh          $v1, 0x8($a0)
    ctx->pc = 0x212574u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x212578: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x212578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x21257c: 0x3e00008  jr          $ra
    ctx->pc = 0x21257Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21257Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212584u;
}
