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

// Function: entry_0031f740
// Address: 0x31f740 - 0x31f770
void entry_0031f740_0x31f740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031f740_0x31f740");
#endif

    ctx->pc = 0x31f740u;

    // 0x31f740: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f744: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x31f744u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x31f748: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x31f748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x31f74c: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x31f74cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x31f750: 0x1020ffe2  beqz        $at, . + 4 + (-0x1E << 2)
    ctx->pc = 0x31F750u;
    {
        const bool branch_taken_0x31f750 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f750) {
            ctx->pc = 0x31F6DCu;
            return;
        }
    }
    ctx->pc = 0x31F758u;
    // 0x31f758: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x31f758u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31f75c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31f75cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31f760: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31f760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f764: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x31f764u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31f768: 0x3e00008  jr          $ra
    ctx->pc = 0x31F768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F770u;
}
