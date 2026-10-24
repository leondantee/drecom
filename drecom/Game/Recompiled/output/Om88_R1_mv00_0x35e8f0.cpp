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

// Function: Om88_R1_mv00
// Address: 0x35e8f0 - 0x35e938
void Om88_R1_mv00_0x35e8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om88_R1_mv00_0x35e8f0");
#endif

    switch (ctx->pc) {
        case 0x35e91cu: goto label_35e91c;
        case 0x35e928u: goto label_35e928;
        default: break;
    }

    ctx->pc = 0x35e8f0u;

    // 0x35e8f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35e8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35e8f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x35e8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x35e8f8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x35e8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x35e8fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35e8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35e900: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x35e900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x35e904: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x35e904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x35e908: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x35E908u;
    {
        const bool branch_taken_0x35e908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e908) {
            ctx->pc = 0x35E928u;
            goto label_35e928;
        }
    }
    ctx->pc = 0x35E910u;
    // 0x35e910: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35e910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35e914: 0xc0d7af4  jal         func_35EBD0
    ctx->pc = 0x35E914u;
    SET_GPR_U32(ctx, 31, 0x35E91Cu);
    ctx->pc = 0x35EBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EBD0u, 0x35E914u, 0x35E91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E91Cu;
label_35e91c:
    // 0x35e91c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35e91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35e920: 0xc0d7ad4  jal         func_35EB50
    ctx->pc = 0x35E920u;
    SET_GPR_U32(ctx, 31, 0x35E928u);
    ctx->pc = 0x35EB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EB50u, 0x35E920u, 0x35E928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E928u;
label_35e928:
    // 0x35e928: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x35e928u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e92c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35e92cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35e930: 0x3e00008  jr          $ra
    ctx->pc = 0x35E930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E938u;
}
