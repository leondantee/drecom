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

// Function: Em18_R0_damage
// Address: 0x2e0220 - 0x2e0294
void Em18_R0_damage_0x2e0220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_R0_damage_0x2e0220");
#endif

    switch (ctx->pc) {
        case 0x2e0220u: goto label_2e0220;
        case 0x2e0224u: goto label_2e0224;
        case 0x2e0228u: goto label_2e0228;
        case 0x2e022cu: goto label_2e022c;
        case 0x2e0230u: goto label_2e0230;
        case 0x2e0234u: goto label_2e0234;
        case 0x2e0238u: goto label_2e0238;
        case 0x2e023cu: goto label_2e023c;
        case 0x2e0240u: goto label_2e0240;
        case 0x2e0244u: goto label_2e0244;
        case 0x2e0248u: goto label_2e0248;
        case 0x2e024cu: goto label_2e024c;
        case 0x2e0250u: goto label_2e0250;
        case 0x2e0254u: goto label_2e0254;
        case 0x2e0258u: goto label_2e0258;
        case 0x2e025cu: goto label_2e025c;
        case 0x2e0260u: goto label_2e0260;
        case 0x2e0264u: goto label_2e0264;
        case 0x2e0268u: goto label_2e0268;
        case 0x2e026cu: goto label_2e026c;
        case 0x2e0270u: goto label_2e0270;
        case 0x2e0274u: goto label_2e0274;
        case 0x2e0278u: goto label_2e0278;
        case 0x2e027cu: goto label_2e027c;
        case 0x2e0280u: goto label_2e0280;
        case 0x2e0284u: goto label_2e0284;
        case 0x2e0288u: goto label_2e0288;
        case 0x2e028cu: goto label_2e028c;
        case 0x2e0290u: goto label_2e0290;
        default: break;
    }

    ctx->pc = 0x2e0220u;

label_2e0220:
    // 0x2e0220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e0220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2e0224:
    // 0x2e0224: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2e0224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_2e0228:
    // 0x2e0228: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2e0228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_2e022c:
    // 0x2e022c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2e022cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2e0230:
    // 0x2e0230: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2e0230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2e0234:
    // 0x2e0234: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2e0234u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2e0238:
    // 0x2e0238: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e0238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e023c:
    // 0x2e023c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2e023cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2e0240:
    // 0x2e0240: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2e0240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2e0244:
    // 0x2e0244: 0x24428aa0  addiu       $v0, $v0, -0x7560
    ctx->pc = 0x2e0244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937248));
label_2e0248:
    // 0x2e0248: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e0248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2e024c:
    // 0x2e024c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e024cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e0250:
    // 0x2e0250: 0x40f809  jalr        $v0
label_2e0254:
    if (ctx->pc == 0x2E0254u) {
        ctx->pc = 0x2E0258u;
        goto label_2e0258;
    }
    ctx->pc = 0x2E0250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E0258u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0250u, 0x2E0258u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E0258u;
label_2e0258:
    // 0x2e0258: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2e0258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2e025c:
    // 0x2e025c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2e025cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2e0260:
    // 0x2e0260: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2e0260u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2e0264:
    // 0x2e0264: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e0264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e0268:
    // 0x2e0268: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2e0268u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2e026c:
    // 0x2e026c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2e026cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2e0270:
    // 0x2e0270: 0x24428ab0  addiu       $v0, $v0, -0x7550
    ctx->pc = 0x2e0270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937264));
label_2e0274:
    // 0x2e0274: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e0274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2e0278:
    // 0x2e0278: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e0278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e027c:
    // 0x2e027c: 0x40f809  jalr        $v0
label_2e0280:
    if (ctx->pc == 0x2E0280u) {
        ctx->pc = 0x2E0284u;
        goto label_2e0284;
    }
    ctx->pc = 0x2E027Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E0284u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E027Cu, 0x2E0284u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E0284u;
label_2e0284:
    // 0x2e0284: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2e0284u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e0288:
    // 0x2e0288: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2e0288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2e028c:
    // 0x2e028c: 0x3e00008  jr          $ra
label_2e0290:
    if (ctx->pc == 0x2E0290u) {
        ctx->pc = 0x2E0294u;
        goto label_fallthrough_0x2e028c;
    }
    ctx->pc = 0x2E028Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E028Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e028c:
    ctx->pc = 0x2E0294u;
}
