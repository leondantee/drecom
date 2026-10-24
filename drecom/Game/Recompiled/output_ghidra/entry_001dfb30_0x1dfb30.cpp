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

// Function: entry_001dfb30
// Address: 0x1dfb30 - 0x1dfb68
void entry_001dfb30_0x1dfb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfb30_0x1dfb30");
#endif

    ctx->pc = 0x1dfb30u;

    // 0x1dfb30: 0x26310090  addiu       $s1, $s1, 0x90
    ctx->pc = 0x1dfb30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x1dfb34: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1dfb34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1dfb38: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1dfb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dfb3c: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x1dfb3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x1dfb40: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1dfb40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1dfb44: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x1dfb44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1dfb48: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1DFB48u;
    {
        const bool branch_taken_0x1dfb48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dfb48) {
            ctx->pc = 0x1DFAD4u;
            return;
        }
    }
    ctx->pc = 0x1DFB50u;
    // 0x1dfb50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dfb50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dfb54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dfb54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfb58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dfb58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfb5c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1dfb5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1dfb60: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFB60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFB68u;
}
