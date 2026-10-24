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

// Function: Em01_R0_reset
// Address: 0x3081c0 - 0x308210
void Em01_R0_reset_0x3081c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_R0_reset_0x3081c0");
#endif

    switch (ctx->pc) {
        case 0x3081c0u: goto label_3081c0;
        case 0x3081c4u: goto label_3081c4;
        case 0x3081c8u: goto label_3081c8;
        case 0x3081ccu: goto label_3081cc;
        case 0x3081d0u: goto label_3081d0;
        case 0x3081d4u: goto label_3081d4;
        case 0x3081d8u: goto label_3081d8;
        case 0x3081dcu: goto label_3081dc;
        case 0x3081e0u: goto label_3081e0;
        case 0x3081e4u: goto label_3081e4;
        case 0x3081e8u: goto label_3081e8;
        case 0x3081ecu: goto label_3081ec;
        case 0x3081f0u: goto label_3081f0;
        case 0x3081f4u: goto label_3081f4;
        case 0x3081f8u: goto label_3081f8;
        case 0x3081fcu: goto label_3081fc;
        case 0x308200u: goto label_308200;
        case 0x308204u: goto label_308204;
        case 0x308208u: goto label_308208;
        case 0x30820cu: goto label_30820c;
        default: break;
    }

    ctx->pc = 0x3081c0u;

label_3081c0:
    // 0x3081c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3081c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3081c4:
    // 0x3081c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x3081c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_3081c8:
    // 0x3081c8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x3081c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_3081cc:
    // 0x3081cc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3081ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3081d0:
    // 0x3081d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3081d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3081d4:
    // 0x3081d4: 0x90421308  lbu         $v0, 0x1308($v0)
    ctx->pc = 0x3081d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
label_3081d8:
    // 0x3081d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3081d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3081dc:
    // 0x3081dc: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x3081dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_3081e0:
    // 0x3081e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3081e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3081e4:
    // 0x3081e4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3081e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3081e8:
    // 0x3081e8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3081e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_3081ec:
    // 0x3081ec: 0x24429700  addiu       $v0, $v0, -0x6900
    ctx->pc = 0x3081ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940416));
label_3081f0:
    // 0x3081f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3081f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3081f4:
    // 0x3081f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3081f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3081f8:
    // 0x3081f8: 0x40f809  jalr        $v0
label_3081fc:
    if (ctx->pc == 0x3081FCu) {
        ctx->pc = 0x308200u;
        goto label_308200;
    }
    ctx->pc = 0x3081F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x308200u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3081F8u, 0x308200u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308200u;
label_308200:
    // 0x308200: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x308200u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_308204:
    // 0x308204: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x308204u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_308208:
    // 0x308208: 0x3e00008  jr          $ra
label_30820c:
    if (ctx->pc == 0x30820Cu) {
        ctx->pc = 0x308210u;
        goto label_fallthrough_0x308208;
    }
    ctx->pc = 0x308208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x308208:
    ctx->pc = 0x308210u;
}
