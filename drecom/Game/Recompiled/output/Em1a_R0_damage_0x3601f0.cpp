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

// Function: Em1a_R0_damage
// Address: 0x3601f0 - 0x360264
void Em1a_R0_damage_0x3601f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1a_R0_damage_0x3601f0");
#endif

    switch (ctx->pc) {
        case 0x3601f0u: goto label_3601f0;
        case 0x3601f4u: goto label_3601f4;
        case 0x3601f8u: goto label_3601f8;
        case 0x3601fcu: goto label_3601fc;
        case 0x360200u: goto label_360200;
        case 0x360204u: goto label_360204;
        case 0x360208u: goto label_360208;
        case 0x36020cu: goto label_36020c;
        case 0x360210u: goto label_360210;
        case 0x360214u: goto label_360214;
        case 0x360218u: goto label_360218;
        case 0x36021cu: goto label_36021c;
        case 0x360220u: goto label_360220;
        case 0x360224u: goto label_360224;
        case 0x360228u: goto label_360228;
        case 0x36022cu: goto label_36022c;
        case 0x360230u: goto label_360230;
        case 0x360234u: goto label_360234;
        case 0x360238u: goto label_360238;
        case 0x36023cu: goto label_36023c;
        case 0x360240u: goto label_360240;
        case 0x360244u: goto label_360244;
        case 0x360248u: goto label_360248;
        case 0x36024cu: goto label_36024c;
        case 0x360250u: goto label_360250;
        case 0x360254u: goto label_360254;
        case 0x360258u: goto label_360258;
        case 0x36025cu: goto label_36025c;
        case 0x360260u: goto label_360260;
        default: break;
    }

    ctx->pc = 0x3601f0u;

label_3601f0:
    // 0x3601f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3601f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3601f4:
    // 0x3601f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x3601f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_3601f8:
    // 0x3601f8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x3601f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_3601fc:
    // 0x3601fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3601fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_360200:
    // 0x360200: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x360200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_360204:
    // 0x360204: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x360204u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_360208:
    // 0x360208: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x360208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36020c:
    // 0x36020c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36020cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_360210:
    // 0x360210: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x360210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_360214:
    // 0x360214: 0x2442abb8  addiu       $v0, $v0, -0x5448
    ctx->pc = 0x360214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945720));
label_360218:
    // 0x360218: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x360218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36021c:
    // 0x36021c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36021cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_360220:
    // 0x360220: 0x40f809  jalr        $v0
label_360224:
    if (ctx->pc == 0x360224u) {
        ctx->pc = 0x360228u;
        goto label_360228;
    }
    ctx->pc = 0x360220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x360228u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360220u, 0x360228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x360228u;
label_360228:
    // 0x360228: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x360228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36022c:
    // 0x36022c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36022cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_360230:
    // 0x360230: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x360230u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_360234:
    // 0x360234: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x360234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_360238:
    // 0x360238: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x360238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_36023c:
    // 0x36023c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x36023cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_360240:
    // 0x360240: 0x2442abc0  addiu       $v0, $v0, -0x5440
    ctx->pc = 0x360240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945728));
label_360244:
    // 0x360244: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x360244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_360248:
    // 0x360248: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x360248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36024c:
    // 0x36024c: 0x40f809  jalr        $v0
label_360250:
    if (ctx->pc == 0x360250u) {
        ctx->pc = 0x360254u;
        goto label_360254;
    }
    ctx->pc = 0x36024Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x360254u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36024Cu, 0x360254u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x360254u;
label_360254:
    // 0x360254: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x360254u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_360258:
    // 0x360258: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x360258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_36025c:
    // 0x36025c: 0x3e00008  jr          $ra
label_360260:
    if (ctx->pc == 0x360260u) {
        ctx->pc = 0x360264u;
        goto label_fallthrough_0x36025c;
    }
    ctx->pc = 0x36025Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36025Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36025c:
    ctx->pc = 0x360264u;
}
