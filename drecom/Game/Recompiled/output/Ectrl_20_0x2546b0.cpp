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

// Function: Ectrl_20
// Address: 0x2546b0 - 0x2546f4
void Ectrl_20_0x2546b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ectrl_20_0x2546b0");
#endif

    switch (ctx->pc) {
        case 0x2546b0u: goto label_2546b0;
        case 0x2546b4u: goto label_2546b4;
        case 0x2546b8u: goto label_2546b8;
        case 0x2546bcu: goto label_2546bc;
        case 0x2546c0u: goto label_2546c0;
        case 0x2546c4u: goto label_2546c4;
        case 0x2546c8u: goto label_2546c8;
        case 0x2546ccu: goto label_2546cc;
        case 0x2546d0u: goto label_2546d0;
        case 0x2546d4u: goto label_2546d4;
        case 0x2546d8u: goto label_2546d8;
        case 0x2546dcu: goto label_2546dc;
        case 0x2546e0u: goto label_2546e0;
        case 0x2546e4u: goto label_2546e4;
        case 0x2546e8u: goto label_2546e8;
        case 0x2546ecu: goto label_2546ec;
        case 0x2546f0u: goto label_2546f0;
        default: break;
    }

    ctx->pc = 0x2546b0u;

label_2546b0:
    // 0x2546b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2546b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2546b4:
    // 0x2546b4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2546b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_2546b8:
    // 0x2546b8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2546b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_2546bc:
    // 0x2546bc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2546bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2546c0:
    // 0x2546c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2546c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2546c4:
    // 0x2546c4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2546c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2546c8:
    // 0x2546c8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2546c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2546cc:
    // 0x2546cc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2546ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2546d0:
    // 0x2546d0: 0x2442b780  addiu       $v0, $v0, -0x4880
    ctx->pc = 0x2546d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948736));
label_2546d4:
    // 0x2546d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2546d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2546d8:
    // 0x2546d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2546d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2546dc:
    // 0x2546dc: 0x40f809  jalr        $v0
label_2546e0:
    if (ctx->pc == 0x2546E0u) {
        ctx->pc = 0x2546E4u;
        goto label_2546e4;
    }
    ctx->pc = 0x2546DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2546E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2546DCu, 0x2546E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2546E4u;
label_2546e4:
    // 0x2546e4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2546e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2546e8:
    // 0x2546e8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2546e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2546ec:
    // 0x2546ec: 0x3e00008  jr          $ra
label_2546f0:
    if (ctx->pc == 0x2546F0u) {
        ctx->pc = 0x2546F4u;
        goto label_fallthrough_0x2546ec;
    }
    ctx->pc = 0x2546ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2546ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2546ec:
    ctx->pc = 0x2546F4u;
}
