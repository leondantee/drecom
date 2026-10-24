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

// Function: Effray_00
// Address: 0x35a950 - 0x35a994
void Effray_00_0x35a950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Effray_00_0x35a950");
#endif

    switch (ctx->pc) {
        case 0x35a950u: goto label_35a950;
        case 0x35a954u: goto label_35a954;
        case 0x35a958u: goto label_35a958;
        case 0x35a95cu: goto label_35a95c;
        case 0x35a960u: goto label_35a960;
        case 0x35a964u: goto label_35a964;
        case 0x35a968u: goto label_35a968;
        case 0x35a96cu: goto label_35a96c;
        case 0x35a970u: goto label_35a970;
        case 0x35a974u: goto label_35a974;
        case 0x35a978u: goto label_35a978;
        case 0x35a97cu: goto label_35a97c;
        case 0x35a980u: goto label_35a980;
        case 0x35a984u: goto label_35a984;
        case 0x35a988u: goto label_35a988;
        case 0x35a98cu: goto label_35a98c;
        case 0x35a990u: goto label_35a990;
        default: break;
    }

    ctx->pc = 0x35a950u;

label_35a950:
    // 0x35a950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35a950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_35a954:
    // 0x35a954: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x35a954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_35a958:
    // 0x35a958: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x35a958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_35a95c:
    // 0x35a95c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35a95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35a960:
    // 0x35a960: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35a960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35a964:
    // 0x35a964: 0x8c420128  lw          $v0, 0x128($v0)
    ctx->pc = 0x35a964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
label_35a968:
    // 0x35a968: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x35a968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_35a96c:
    // 0x35a96c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x35a96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_35a970:
    // 0x35a970: 0x2442a910  addiu       $v0, $v0, -0x56F0
    ctx->pc = 0x35a970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945040));
label_35a974:
    // 0x35a974: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35a974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_35a978:
    // 0x35a978: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35a978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35a97c:
    // 0x35a97c: 0x40f809  jalr        $v0
label_35a980:
    if (ctx->pc == 0x35A980u) {
        ctx->pc = 0x35A984u;
        goto label_35a984;
    }
    ctx->pc = 0x35A97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35A984u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A97Cu, 0x35A984u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35A984u;
label_35a984:
    // 0x35a984: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x35a984u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35a988:
    // 0x35a988: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35a988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35a98c:
    // 0x35a98c: 0x3e00008  jr          $ra
label_35a990:
    if (ctx->pc == 0x35A990u) {
        ctx->pc = 0x35A994u;
        goto label_fallthrough_0x35a98c;
    }
    ctx->pc = 0x35A98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A98Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35a98c:
    ctx->pc = 0x35A994u;
}
