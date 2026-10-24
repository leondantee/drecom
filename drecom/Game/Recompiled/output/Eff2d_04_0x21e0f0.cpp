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

// Function: Eff2d_04
// Address: 0x21e0f0 - 0x21e134
void Eff2d_04_0x21e0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff2d_04_0x21e0f0");
#endif

    switch (ctx->pc) {
        case 0x21e0f0u: goto label_21e0f0;
        case 0x21e0f4u: goto label_21e0f4;
        case 0x21e0f8u: goto label_21e0f8;
        case 0x21e0fcu: goto label_21e0fc;
        case 0x21e100u: goto label_21e100;
        case 0x21e104u: goto label_21e104;
        case 0x21e108u: goto label_21e108;
        case 0x21e10cu: goto label_21e10c;
        case 0x21e110u: goto label_21e110;
        case 0x21e114u: goto label_21e114;
        case 0x21e118u: goto label_21e118;
        case 0x21e11cu: goto label_21e11c;
        case 0x21e120u: goto label_21e120;
        case 0x21e124u: goto label_21e124;
        case 0x21e128u: goto label_21e128;
        case 0x21e12cu: goto label_21e12c;
        case 0x21e130u: goto label_21e130;
        default: break;
    }

    ctx->pc = 0x21e0f0u;

label_21e0f0:
    // 0x21e0f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21e0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_21e0f4:
    // 0x21e0f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x21e0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_21e0f8:
    // 0x21e0f8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x21e0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_21e0fc:
    // 0x21e0fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x21e0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_21e100:
    // 0x21e100: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x21e100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_21e104:
    // 0x21e104: 0x8c420128  lw          $v0, 0x128($v0)
    ctx->pc = 0x21e104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
label_21e108:
    // 0x21e108: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x21e108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_21e10c:
    // 0x21e10c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x21e10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_21e110:
    // 0x21e110: 0x2442ab38  addiu       $v0, $v0, -0x54C8
    ctx->pc = 0x21e110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945592));
label_21e114:
    // 0x21e114: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21e114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21e118:
    // 0x21e118: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x21e118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21e11c:
    // 0x21e11c: 0x40f809  jalr        $v0
label_21e120:
    if (ctx->pc == 0x21E120u) {
        ctx->pc = 0x21E124u;
        goto label_21e124;
    }
    ctx->pc = 0x21E11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21E124u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E11Cu, 0x21E124u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21E124u;
label_21e124:
    // 0x21e124: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x21e124u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21e128:
    // 0x21e128: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x21e128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_21e12c:
    // 0x21e12c: 0x3e00008  jr          $ra
label_21e130:
    if (ctx->pc == 0x21E130u) {
        ctx->pc = 0x21E134u;
        goto label_fallthrough_0x21e12c;
    }
    ctx->pc = 0x21E12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21e12c:
    ctx->pc = 0x21E134u;
}
