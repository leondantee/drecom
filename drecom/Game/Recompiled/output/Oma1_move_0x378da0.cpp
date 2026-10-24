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

// Function: Oma1_move
// Address: 0x378da0 - 0x378df8
void Oma1_move_0x378da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Oma1_move_0x378da0");
#endif

    switch (ctx->pc) {
        case 0x378da0u: goto label_378da0;
        case 0x378da4u: goto label_378da4;
        case 0x378da8u: goto label_378da8;
        case 0x378dacu: goto label_378dac;
        case 0x378db0u: goto label_378db0;
        case 0x378db4u: goto label_378db4;
        case 0x378db8u: goto label_378db8;
        case 0x378dbcu: goto label_378dbc;
        case 0x378dc0u: goto label_378dc0;
        case 0x378dc4u: goto label_378dc4;
        case 0x378dc8u: goto label_378dc8;
        case 0x378dccu: goto label_378dcc;
        case 0x378dd0u: goto label_378dd0;
        case 0x378dd4u: goto label_378dd4;
        case 0x378dd8u: goto label_378dd8;
        case 0x378ddcu: goto label_378ddc;
        case 0x378de0u: goto label_378de0;
        case 0x378de4u: goto label_378de4;
        case 0x378de8u: goto label_378de8;
        case 0x378decu: goto label_378dec;
        case 0x378df0u: goto label_378df0;
        case 0x378df4u: goto label_378df4;
        default: break;
    }

    ctx->pc = 0x378da0u;

label_378da0:
    // 0x378da0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x378da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_378da4:
    // 0x378da4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x378da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_378da8:
    // 0x378da8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x378da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_378dac:
    // 0x378dac: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x378dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_378db0:
    // 0x378db0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x378db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_378db4:
    // 0x378db4: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x378db4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_378db8:
    // 0x378db8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x378db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_378dbc:
    // 0x378dbc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x378dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_378dc0:
    // 0x378dc0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x378dc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_378dc4:
    // 0x378dc4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x378dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_378dc8:
    // 0x378dc8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x378dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_378dcc:
    // 0x378dcc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x378dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_378dd0:
    // 0x378dd0: 0x2442b780  addiu       $v0, $v0, -0x4880
    ctx->pc = 0x378dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948736));
label_378dd4:
    // 0x378dd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x378dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_378dd8:
    // 0x378dd8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x378dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_378ddc:
    // 0x378ddc: 0x40f809  jalr        $v0
label_378de0:
    if (ctx->pc == 0x378DE0u) {
        ctx->pc = 0x378DE4u;
        goto label_378de4;
    }
    ctx->pc = 0x378DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x378DE4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378DDCu, 0x378DE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x378DE4u;
label_378de4:
    // 0x378de4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x378de4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_378de8:
    // 0x378de8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x378de8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_378dec:
    // 0x378dec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x378decu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_378df0:
    // 0x378df0: 0x3e00008  jr          $ra
label_378df4:
    if (ctx->pc == 0x378DF4u) {
        ctx->pc = 0x378DF8u;
        goto label_fallthrough_0x378df0;
    }
    ctx->pc = 0x378DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x378df0:
    ctx->pc = 0x378DF8u;
}
