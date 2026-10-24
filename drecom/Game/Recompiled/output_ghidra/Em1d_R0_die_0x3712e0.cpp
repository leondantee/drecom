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

// Function: Em1d_R0_die
// Address: 0x3712e0 - 0x371328
void Em1d_R0_die_0x3712e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1d_R0_die_0x3712e0");
#endif

    switch (ctx->pc) {
        case 0x3712e0u: goto label_3712e0;
        case 0x3712e4u: goto label_3712e4;
        case 0x3712e8u: goto label_3712e8;
        case 0x3712ecu: goto label_3712ec;
        case 0x3712f0u: goto label_3712f0;
        case 0x3712f4u: goto label_3712f4;
        case 0x3712f8u: goto label_3712f8;
        case 0x3712fcu: goto label_3712fc;
        case 0x371300u: goto label_371300;
        case 0x371304u: goto label_371304;
        case 0x371308u: goto label_371308;
        case 0x37130cu: goto label_37130c;
        case 0x371310u: goto label_371310;
        case 0x371314u: goto label_371314;
        case 0x371318u: goto label_371318;
        case 0x37131cu: goto label_37131c;
        case 0x371320u: goto label_371320;
        case 0x371324u: goto label_371324;
        default: break;
    }

    ctx->pc = 0x3712e0u;

label_3712e0:
    // 0x3712e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3712e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3712e4:
    // 0x3712e4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x3712e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_3712e8:
    // 0x3712e8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x3712e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_3712ec:
    // 0x3712ec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3712ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3712f0:
    // 0x3712f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3712f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3712f4:
    // 0x3712f4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x3712f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_3712f8:
    // 0x3712f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3712f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3712fc:
    // 0x3712fc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3712fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_371300:
    // 0x371300: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x371300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_371304:
    // 0x371304: 0x2442b528  addiu       $v0, $v0, -0x4AD8
    ctx->pc = 0x371304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948136));
label_371308:
    // 0x371308: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x371308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37130c:
    // 0x37130c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x37130cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_371310:
    // 0x371310: 0x40f809  jalr        $v0
label_371314:
    if (ctx->pc == 0x371314u) {
        ctx->pc = 0x371318u;
        goto label_371318;
    }
    ctx->pc = 0x371310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x371318u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371310u, 0x371318u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x371318u;
label_371318:
    // 0x371318: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x371318u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37131c:
    // 0x37131c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x37131cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_371320:
    // 0x371320: 0x3e00008  jr          $ra
label_371324:
    if (ctx->pc == 0x371324u) {
        ctx->pc = 0x371328u;
        goto label_fallthrough_0x371320;
    }
    ctx->pc = 0x371320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x371320:
    ctx->pc = 0x371328u;
}
