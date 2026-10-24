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

// Function: Em19_R0_damage
// Address: 0x2e63b0 - 0x2e6424
void Em19_R0_damage_0x2e63b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em19_R0_damage_0x2e63b0");
#endif

    switch (ctx->pc) {
        case 0x2e63b0u: goto label_2e63b0;
        case 0x2e63b4u: goto label_2e63b4;
        case 0x2e63b8u: goto label_2e63b8;
        case 0x2e63bcu: goto label_2e63bc;
        case 0x2e63c0u: goto label_2e63c0;
        case 0x2e63c4u: goto label_2e63c4;
        case 0x2e63c8u: goto label_2e63c8;
        case 0x2e63ccu: goto label_2e63cc;
        case 0x2e63d0u: goto label_2e63d0;
        case 0x2e63d4u: goto label_2e63d4;
        case 0x2e63d8u: goto label_2e63d8;
        case 0x2e63dcu: goto label_2e63dc;
        case 0x2e63e0u: goto label_2e63e0;
        case 0x2e63e4u: goto label_2e63e4;
        case 0x2e63e8u: goto label_2e63e8;
        case 0x2e63ecu: goto label_2e63ec;
        case 0x2e63f0u: goto label_2e63f0;
        case 0x2e63f4u: goto label_2e63f4;
        case 0x2e63f8u: goto label_2e63f8;
        case 0x2e63fcu: goto label_2e63fc;
        case 0x2e6400u: goto label_2e6400;
        case 0x2e6404u: goto label_2e6404;
        case 0x2e6408u: goto label_2e6408;
        case 0x2e640cu: goto label_2e640c;
        case 0x2e6410u: goto label_2e6410;
        case 0x2e6414u: goto label_2e6414;
        case 0x2e6418u: goto label_2e6418;
        case 0x2e641cu: goto label_2e641c;
        case 0x2e6420u: goto label_2e6420;
        default: break;
    }

    ctx->pc = 0x2e63b0u;

label_2e63b0:
    // 0x2e63b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e63b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2e63b4:
    // 0x2e63b4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2e63b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_2e63b8:
    // 0x2e63b8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2e63b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_2e63bc:
    // 0x2e63bc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2e63bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2e63c0:
    // 0x2e63c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2e63c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2e63c4:
    // 0x2e63c4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2e63c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2e63c8:
    // 0x2e63c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e63c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e63cc:
    // 0x2e63cc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2e63ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2e63d0:
    // 0x2e63d0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2e63d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2e63d4:
    // 0x2e63d4: 0x24428bf8  addiu       $v0, $v0, -0x7408
    ctx->pc = 0x2e63d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937592));
label_2e63d8:
    // 0x2e63d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e63d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2e63dc:
    // 0x2e63dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e63dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e63e0:
    // 0x2e63e0: 0x40f809  jalr        $v0
label_2e63e4:
    if (ctx->pc == 0x2E63E4u) {
        ctx->pc = 0x2E63E8u;
        goto label_2e63e8;
    }
    ctx->pc = 0x2E63E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E63E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E63E0u, 0x2E63E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E63E8u;
label_2e63e8:
    // 0x2e63e8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2e63e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2e63ec:
    // 0x2e63ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2e63ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2e63f0:
    // 0x2e63f0: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2e63f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2e63f4:
    // 0x2e63f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e63f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e63f8:
    // 0x2e63f8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2e63f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2e63fc:
    // 0x2e63fc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2e63fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2e6400:
    // 0x2e6400: 0x24428c00  addiu       $v0, $v0, -0x7400
    ctx->pc = 0x2e6400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937600));
label_2e6404:
    // 0x2e6404: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e6404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2e6408:
    // 0x2e6408: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e6408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e640c:
    // 0x2e640c: 0x40f809  jalr        $v0
label_2e6410:
    if (ctx->pc == 0x2E6410u) {
        ctx->pc = 0x2E6414u;
        goto label_2e6414;
    }
    ctx->pc = 0x2E640Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E6414u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E640Cu, 0x2E6414u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E6414u;
label_2e6414:
    // 0x2e6414: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2e6414u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e6418:
    // 0x2e6418: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2e6418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2e641c:
    // 0x2e641c: 0x3e00008  jr          $ra
label_2e6420:
    if (ctx->pc == 0x2E6420u) {
        ctx->pc = 0x2E6424u;
        goto label_fallthrough_0x2e641c;
    }
    ctx->pc = 0x2E641Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E641Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e641c:
    ctx->pc = 0x2E6424u;
}
