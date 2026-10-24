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

// Function: Om2e_move
// Address: 0x3785d0 - 0x378628
void Om2e_move_0x3785d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om2e_move_0x3785d0");
#endif

    switch (ctx->pc) {
        case 0x3785d0u: goto label_3785d0;
        case 0x3785d4u: goto label_3785d4;
        case 0x3785d8u: goto label_3785d8;
        case 0x3785dcu: goto label_3785dc;
        case 0x3785e0u: goto label_3785e0;
        case 0x3785e4u: goto label_3785e4;
        case 0x3785e8u: goto label_3785e8;
        case 0x3785ecu: goto label_3785ec;
        case 0x3785f0u: goto label_3785f0;
        case 0x3785f4u: goto label_3785f4;
        case 0x3785f8u: goto label_3785f8;
        case 0x3785fcu: goto label_3785fc;
        case 0x378600u: goto label_378600;
        case 0x378604u: goto label_378604;
        case 0x378608u: goto label_378608;
        case 0x37860cu: goto label_37860c;
        case 0x378610u: goto label_378610;
        case 0x378614u: goto label_378614;
        case 0x378618u: goto label_378618;
        case 0x37861cu: goto label_37861c;
        case 0x378620u: goto label_378620;
        case 0x378624u: goto label_378624;
        default: break;
    }

    ctx->pc = 0x3785d0u;

label_3785d0:
    // 0x3785d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3785d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3785d4:
    // 0x3785d4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x3785d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_3785d8:
    // 0x3785d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3785d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3785dc:
    // 0x3785dc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x3785dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_3785e0:
    // 0x3785e0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x3785e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_3785e4:
    // 0x3785e4: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x3785e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_3785e8:
    // 0x3785e8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3785e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3785ec:
    // 0x3785ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3785ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3785f0:
    // 0x3785f0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3785f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3785f4:
    // 0x3785f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3785f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3785f8:
    // 0x3785f8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3785f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3785fc:
    // 0x3785fc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3785fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_378600:
    // 0x378600: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x378600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
label_378604:
    // 0x378604: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x378604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_378608:
    // 0x378608: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x378608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_37860c:
    // 0x37860c: 0x40f809  jalr        $v0
label_378610:
    if (ctx->pc == 0x378610u) {
        ctx->pc = 0x378614u;
        goto label_378614;
    }
    ctx->pc = 0x37860Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x378614u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37860Cu, 0x378614u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x378614u;
label_378614:
    // 0x378614: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x378614u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_378618:
    // 0x378618: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x378618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37861c:
    // 0x37861c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x37861cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_378620:
    // 0x378620: 0x3e00008  jr          $ra
label_378624:
    if (ctx->pc == 0x378624u) {
        ctx->pc = 0x378628u;
        goto label_fallthrough_0x378620;
    }
    ctx->pc = 0x378620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x378620:
    ctx->pc = 0x378628u;
}
