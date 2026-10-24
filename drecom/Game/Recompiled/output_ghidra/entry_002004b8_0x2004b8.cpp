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

// Function: entry_002004b8
// Address: 0x2004b8 - 0x2004ec
void entry_002004b8_0x2004b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002004b8_0x2004b8");
#endif

    ctx->pc = 0x2004b8u;

    // 0x2004b8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2004b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2004bc: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x2004bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x2004c0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2004c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2004c4: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x2004c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2004c8: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2004C8u;
    {
        const bool branch_taken_0x2004c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2004c8) {
            ctx->pc = 0x200458u;
            return;
        }
    }
    ctx->pc = 0x2004D0u;
    // 0x2004d0: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x2004d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2004d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2004d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2004d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2004d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2004dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2004dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2004e0: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2004e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2004e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2004E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2004E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2004ECu;
}
