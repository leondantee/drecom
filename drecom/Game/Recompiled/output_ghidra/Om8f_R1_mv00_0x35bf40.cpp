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

// Function: Om8f_R1_mv00
// Address: 0x35bf40 - 0x35bf88
void Om8f_R1_mv00_0x35bf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om8f_R1_mv00_0x35bf40");
#endif

    switch (ctx->pc) {
        case 0x35bf6cu: goto label_35bf6c;
        case 0x35bf78u: goto label_35bf78;
        default: break;
    }

    ctx->pc = 0x35bf40u;

    // 0x35bf40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35bf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35bf44: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x35bf44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x35bf48: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x35bf48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x35bf4c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35bf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35bf50: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x35bf50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x35bf54: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x35bf54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x35bf58: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x35BF58u;
    {
        const bool branch_taken_0x35bf58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35bf58) {
            ctx->pc = 0x35BF78u;
            goto label_35bf78;
        }
    }
    ctx->pc = 0x35BF60u;
    // 0x35bf60: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35bf60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35bf64: 0xc0d70c4  jal         func_35C310
    ctx->pc = 0x35BF64u;
    SET_GPR_U32(ctx, 31, 0x35BF6Cu);
    ctx->pc = 0x35C310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C310u, 0x35BF64u, 0x35BF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BF6Cu;
label_35bf6c:
    // 0x35bf6c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35bf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35bf70: 0xc0d709c  jal         func_35C270
    ctx->pc = 0x35BF70u;
    SET_GPR_U32(ctx, 31, 0x35BF78u);
    ctx->pc = 0x35C270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C270u, 0x35BF70u, 0x35BF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BF78u;
label_35bf78:
    // 0x35bf78: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x35bf78u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35bf7c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35bf7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35bf80: 0x3e00008  jr          $ra
    ctx->pc = 0x35BF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BF80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35BF88u;
}
