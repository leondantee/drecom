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

// Function: Em10_R0_reset
// Address: 0x139360 - 0x1393b0
void Em10_R0_reset_0x139360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R0_reset_0x139360");
#endif

    switch (ctx->pc) {
        case 0x139360u: goto label_139360;
        case 0x139364u: goto label_139364;
        case 0x139368u: goto label_139368;
        case 0x13936cu: goto label_13936c;
        case 0x139370u: goto label_139370;
        case 0x139374u: goto label_139374;
        case 0x139378u: goto label_139378;
        case 0x13937cu: goto label_13937c;
        case 0x139380u: goto label_139380;
        case 0x139384u: goto label_139384;
        case 0x139388u: goto label_139388;
        case 0x13938cu: goto label_13938c;
        case 0x139390u: goto label_139390;
        case 0x139394u: goto label_139394;
        case 0x139398u: goto label_139398;
        case 0x13939cu: goto label_13939c;
        case 0x1393a0u: goto label_1393a0;
        case 0x1393a4u: goto label_1393a4;
        case 0x1393a8u: goto label_1393a8;
        case 0x1393acu: goto label_1393ac;
        default: break;
    }

    ctx->pc = 0x139360u;

label_139360:
    // 0x139360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x139360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_139364:
    // 0x139364: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x139364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_139368:
    // 0x139368: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x139368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_13936c:
    // 0x13936c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x13936cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_139370:
    // 0x139370: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x139370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_139374:
    // 0x139374: 0x90421308  lbu         $v0, 0x1308($v0)
    ctx->pc = 0x139374u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
label_139378:
    // 0x139378: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x139378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13937c:
    // 0x13937c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x13937cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_139380:
    // 0x139380: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x139380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_139384:
    // 0x139384: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x139384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_139388:
    // 0x139388: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x139388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_13938c:
    // 0x13938c: 0x244250b0  addiu       $v0, $v0, 0x50B0
    ctx->pc = 0x13938cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20656));
label_139390:
    // 0x139390: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x139390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_139394:
    // 0x139394: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x139394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_139398:
    // 0x139398: 0x40f809  jalr        $v0
label_13939c:
    if (ctx->pc == 0x13939Cu) {
        ctx->pc = 0x1393A0u;
        goto label_1393a0;
    }
    ctx->pc = 0x139398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1393A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139398u, 0x1393A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1393A0u;
label_1393a0:
    // 0x1393a0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1393a0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1393a4:
    // 0x1393a4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1393a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1393a8:
    // 0x1393a8: 0x3e00008  jr          $ra
label_1393ac:
    if (ctx->pc == 0x1393ACu) {
        ctx->pc = 0x1393B0u;
        goto label_fallthrough_0x1393a8;
    }
    ctx->pc = 0x1393A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1393A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1393a8:
    ctx->pc = 0x1393B0u;
}
