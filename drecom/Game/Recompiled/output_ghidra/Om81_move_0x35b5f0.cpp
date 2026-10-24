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

// Function: Om81_move
// Address: 0x35b5f0 - 0x35b648
void Om81_move_0x35b5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om81_move_0x35b5f0");
#endif

    switch (ctx->pc) {
        case 0x35b5f0u: goto label_35b5f0;
        case 0x35b5f4u: goto label_35b5f4;
        case 0x35b5f8u: goto label_35b5f8;
        case 0x35b5fcu: goto label_35b5fc;
        case 0x35b600u: goto label_35b600;
        case 0x35b604u: goto label_35b604;
        case 0x35b608u: goto label_35b608;
        case 0x35b60cu: goto label_35b60c;
        case 0x35b610u: goto label_35b610;
        case 0x35b614u: goto label_35b614;
        case 0x35b618u: goto label_35b618;
        case 0x35b61cu: goto label_35b61c;
        case 0x35b620u: goto label_35b620;
        case 0x35b624u: goto label_35b624;
        case 0x35b628u: goto label_35b628;
        case 0x35b62cu: goto label_35b62c;
        case 0x35b630u: goto label_35b630;
        case 0x35b634u: goto label_35b634;
        case 0x35b638u: goto label_35b638;
        case 0x35b63cu: goto label_35b63c;
        case 0x35b640u: goto label_35b640;
        case 0x35b644u: goto label_35b644;
        default: break;
    }

    ctx->pc = 0x35b5f0u;

label_35b5f0:
    // 0x35b5f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35b5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_35b5f4:
    // 0x35b5f4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x35b5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_35b5f8:
    // 0x35b5f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35b5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35b5fc:
    // 0x35b5fc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x35b5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_35b600:
    // 0x35b600: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x35b600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_35b604:
    // 0x35b604: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x35b604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_35b608:
    // 0x35b608: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x35b608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_35b60c:
    // 0x35b60c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x35b60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_35b610:
    // 0x35b610: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x35b610u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_35b614:
    // 0x35b614: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35b614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_35b618:
    // 0x35b618: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x35b618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_35b61c:
    // 0x35b61c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x35b61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_35b620:
    // 0x35b620: 0x2442a9e0  addiu       $v0, $v0, -0x5620
    ctx->pc = 0x35b620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945248));
label_35b624:
    // 0x35b624: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35b624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_35b628:
    // 0x35b628: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35b628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35b62c:
    // 0x35b62c: 0x40f809  jalr        $v0
label_35b630:
    if (ctx->pc == 0x35B630u) {
        ctx->pc = 0x35B634u;
        goto label_35b634;
    }
    ctx->pc = 0x35B62Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35B634u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B62Cu, 0x35B634u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35B634u;
label_35b634:
    // 0x35b634: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x35b634u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35b638:
    // 0x35b638: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35b638u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35b63c:
    // 0x35b63c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x35b63cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_35b640:
    // 0x35b640: 0x3e00008  jr          $ra
label_35b644:
    if (ctx->pc == 0x35B644u) {
        ctx->pc = 0x35B648u;
        goto label_fallthrough_0x35b640;
    }
    ctx->pc = 0x35B640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35b640:
    ctx->pc = 0x35B648u;
}
