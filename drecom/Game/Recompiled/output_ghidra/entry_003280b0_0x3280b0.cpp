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

// Function: entry_003280b0
// Address: 0x3280b0 - 0x3280e4
void entry_003280b0_0x3280b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003280b0_0x3280b0");
#endif

    ctx->pc = 0x3280b0u;

    // 0x3280b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3280b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3280b4: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x3280b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x3280b8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3280b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3280bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3280bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3280c0: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x3280c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3280c4: 0x1460ffbd  bnez        $v1, . + 4 + (-0x43 << 2)
    ctx->pc = 0x3280C4u;
    {
        const bool branch_taken_0x3280c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3280c4) {
            ctx->pc = 0x327FBCu;
            return;
        }
    }
    ctx->pc = 0x3280CCu;
    // 0x3280cc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x3280ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3280d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3280d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3280d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3280d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3280d8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x3280d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3280dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3280DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3280DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3280E4u;
}
