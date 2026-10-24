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

// Function: Em1a_R0_move
// Address: 0x3600a0 - 0x360114
void Em1a_R0_move_0x3600a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1a_R0_move_0x3600a0");
#endif

    switch (ctx->pc) {
        case 0x3600a0u: goto label_3600a0;
        case 0x3600a4u: goto label_3600a4;
        case 0x3600a8u: goto label_3600a8;
        case 0x3600acu: goto label_3600ac;
        case 0x3600b0u: goto label_3600b0;
        case 0x3600b4u: goto label_3600b4;
        case 0x3600b8u: goto label_3600b8;
        case 0x3600bcu: goto label_3600bc;
        case 0x3600c0u: goto label_3600c0;
        case 0x3600c4u: goto label_3600c4;
        case 0x3600c8u: goto label_3600c8;
        case 0x3600ccu: goto label_3600cc;
        case 0x3600d0u: goto label_3600d0;
        case 0x3600d4u: goto label_3600d4;
        case 0x3600d8u: goto label_3600d8;
        case 0x3600dcu: goto label_3600dc;
        case 0x3600e0u: goto label_3600e0;
        case 0x3600e4u: goto label_3600e4;
        case 0x3600e8u: goto label_3600e8;
        case 0x3600ecu: goto label_3600ec;
        case 0x3600f0u: goto label_3600f0;
        case 0x3600f4u: goto label_3600f4;
        case 0x3600f8u: goto label_3600f8;
        case 0x3600fcu: goto label_3600fc;
        case 0x360100u: goto label_360100;
        case 0x360104u: goto label_360104;
        case 0x360108u: goto label_360108;
        case 0x36010cu: goto label_36010c;
        case 0x360110u: goto label_360110;
        default: break;
    }

    ctx->pc = 0x3600a0u;

label_3600a0:
    // 0x3600a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3600a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3600a4:
    // 0x3600a4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x3600a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_3600a8:
    // 0x3600a8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x3600a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_3600ac:
    // 0x3600ac: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3600acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3600b0:
    // 0x3600b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3600b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3600b4:
    // 0x3600b4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x3600b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_3600b8:
    // 0x3600b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3600b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3600bc:
    // 0x3600bc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3600bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3600c0:
    // 0x3600c0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3600c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_3600c4:
    // 0x3600c4: 0x2442ab98  addiu       $v0, $v0, -0x5468
    ctx->pc = 0x3600c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945688));
label_3600c8:
    // 0x3600c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3600c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3600cc:
    // 0x3600cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3600ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3600d0:
    // 0x3600d0: 0x40f809  jalr        $v0
label_3600d4:
    if (ctx->pc == 0x3600D4u) {
        ctx->pc = 0x3600D8u;
        goto label_3600d8;
    }
    ctx->pc = 0x3600D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3600D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3600D0u, 0x3600D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3600D8u;
label_3600d8:
    // 0x3600d8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3600d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3600dc:
    // 0x3600dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3600dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3600e0:
    // 0x3600e0: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x3600e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_3600e4:
    // 0x3600e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3600e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3600e8:
    // 0x3600e8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3600e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3600ec:
    // 0x3600ec: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3600ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_3600f0:
    // 0x3600f0: 0x2442aba0  addiu       $v0, $v0, -0x5460
    ctx->pc = 0x3600f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945696));
label_3600f4:
    // 0x3600f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3600f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3600f8:
    // 0x3600f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3600f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3600fc:
    // 0x3600fc: 0x40f809  jalr        $v0
label_360100:
    if (ctx->pc == 0x360100u) {
        ctx->pc = 0x360104u;
        goto label_360104;
    }
    ctx->pc = 0x3600FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x360104u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3600FCu, 0x360104u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x360104u;
label_360104:
    // 0x360104: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x360104u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_360108:
    // 0x360108: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x360108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_36010c:
    // 0x36010c: 0x3e00008  jr          $ra
label_360110:
    if (ctx->pc == 0x360110u) {
        ctx->pc = 0x360114u;
        goto label_fallthrough_0x36010c;
    }
    ctx->pc = 0x36010Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36010Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36010c:
    ctx->pc = 0x360114u;
}
