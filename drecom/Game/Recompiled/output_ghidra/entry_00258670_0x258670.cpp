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

// Function: entry_00258670
// Address: 0x258670 - 0x2586b8
void entry_00258670_0x258670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00258670_0x258670");
#endif

    ctx->pc = 0x258670u;

    // 0x258670: 0x2e030002  sltiu       $v1, $s0, 0x2
    ctx->pc = 0x258670u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x258674: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x258674u;
    {
        const bool branch_taken_0x258674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x258674) {
            ctx->pc = 0x258658u;
            return;
        }
    }
    ctx->pc = 0x25867Cu;
    // 0x25867c: 0x26310090  addiu       $s1, $s1, 0x90
    ctx->pc = 0x25867cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x258680: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x258680u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x258684: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x258684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x258688: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x258688u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x25868c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25868cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x258690: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x258690u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x258694: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x258694u;
    {
        const bool branch_taken_0x258694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x258694) {
            ctx->pc = 0x25864Cu;
            return;
        }
    }
    ctx->pc = 0x25869Cu;
    // 0x25869c: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x25869cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2586a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2586a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2586a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2586a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2586a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2586a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2586ac: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2586acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2586b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2586B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2586B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2586B8u;
}
