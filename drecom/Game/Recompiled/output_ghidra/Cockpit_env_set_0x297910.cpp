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

// Function: Cockpit_env_set
// Address: 0x297910 - 0x29798c
void Cockpit_env_set_0x297910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cockpit_env_set_0x297910");
#endif

    switch (ctx->pc) {
        case 0x297938u: goto label_297938;
        case 0x29796cu: goto label_29796c;
        case 0x297978u: goto label_297978;
        default: break;
    }

    ctx->pc = 0x297910u;

    // 0x297910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x297910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x297914: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x297914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x297918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x297918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29791c: 0x3c020081  lui         $v0, 0x81
    ctx->pc = 0x29791cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)129 << 16));
    // 0x297920: 0x2450cb10  addiu       $s0, $v0, -0x34F0
    ctx->pc = 0x297920u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953744));
    // 0x297924: 0x240400b2  addiu       $a0, $zero, 0xB2
    ctx->pc = 0x297924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
    // 0x297928: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x297928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x29792c: 0x2445eb24  addiu       $a1, $v0, -0x14DC
    ctx->pc = 0x29792cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961956));
    // 0x297930: 0xc0cb900  jal         func_32E400
    ctx->pc = 0x297930u;
    SET_GPR_U32(ctx, 31, 0x297938u);
    ctx->pc = 0x32E400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E400u, 0x297930u, 0x297938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297938u;
label_297938:
    // 0x297938: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x297938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29793c: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x29793cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x297940: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x297940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x297944: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x297944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x297948: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x297948u;
    {
        const bool branch_taken_0x297948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x297948) {
            ctx->pc = 0x297978u;
            goto label_297978;
        }
    }
    ctx->pc = 0x297950u;
    // 0x297950: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x297950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x297954: 0x240400b9  addiu       $a0, $zero, 0xB9
    ctx->pc = 0x297954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
    // 0x297958: 0x24061400  addiu       $a2, $zero, 0x1400
    ctx->pc = 0x297958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
    // 0x29795c: 0x2407008e  addiu       $a3, $zero, 0x8E
    ctx->pc = 0x29795cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x297960: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x297960u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x297964: 0xc05e858  jal         func_17A160
    ctx->pc = 0x297964u;
    SET_GPR_U32(ctx, 31, 0x29796Cu);
    ctx->pc = 0x17A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A160u, 0x297964u, 0x29796Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29796Cu;
label_29796c:
    // 0x29796c: 0x240400b9  addiu       $a0, $zero, 0xB9
    ctx->pc = 0x29796cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
    // 0x297970: 0xc05e964  jal         func_17A590
    ctx->pc = 0x297970u;
    SET_GPR_U32(ctx, 31, 0x297978u);
    ctx->pc = 0x17A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A590u, 0x297970u, 0x297978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297978u;
label_297978:
    // 0x297978: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x297978u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29797c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29797cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297980: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x297980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x297984: 0x3e00008  jr          $ra
    ctx->pc = 0x297984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29798Cu;
}
