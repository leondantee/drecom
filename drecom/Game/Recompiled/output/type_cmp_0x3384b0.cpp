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

// Function: type_cmp
// Address: 0x3384b0 - 0x3384e4
void type_cmp_0x3384b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("type_cmp_0x3384b0");
#endif

    ctx->pc = 0x3384b0u;

    // 0x3384b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3384b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3384b4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3384b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3384b8: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x3384b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x3384bc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3384bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3384c0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3384c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3384c4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3384c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3384c8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3384c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3384cc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3384ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3384d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3384d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3384d4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3384d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3384d8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3384d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3384dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3384DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3384DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3384E4u;
}
