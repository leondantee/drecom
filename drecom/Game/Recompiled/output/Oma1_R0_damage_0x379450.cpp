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

// Function: Oma1_R0_damage
// Address: 0x379450 - 0x379498
void Oma1_R0_damage_0x379450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Oma1_R0_damage_0x379450");
#endif

    switch (ctx->pc) {
        case 0x379450u: goto label_379450;
        case 0x379454u: goto label_379454;
        case 0x379458u: goto label_379458;
        case 0x37945cu: goto label_37945c;
        case 0x379460u: goto label_379460;
        case 0x379464u: goto label_379464;
        case 0x379468u: goto label_379468;
        case 0x37946cu: goto label_37946c;
        case 0x379470u: goto label_379470;
        case 0x379474u: goto label_379474;
        case 0x379478u: goto label_379478;
        case 0x37947cu: goto label_37947c;
        case 0x379480u: goto label_379480;
        case 0x379484u: goto label_379484;
        case 0x379488u: goto label_379488;
        case 0x37948cu: goto label_37948c;
        case 0x379490u: goto label_379490;
        case 0x379494u: goto label_379494;
        default: break;
    }

    ctx->pc = 0x379450u;

label_379450:
    // 0x379450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x379450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_379454:
    // 0x379454: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x379454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_379458:
    // 0x379458: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x379458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_37945c:
    // 0x37945c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x37945cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_379460:
    // 0x379460: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x379460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_379464:
    // 0x379464: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x379464u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_379468:
    // 0x379468: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x379468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_37946c:
    // 0x37946c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x37946cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_379470:
    // 0x379470: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x379470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_379474:
    // 0x379474: 0x2442b798  addiu       $v0, $v0, -0x4868
    ctx->pc = 0x379474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948760));
label_379478:
    // 0x379478: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x379478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37947c:
    // 0x37947c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x37947cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_379480:
    // 0x379480: 0x40f809  jalr        $v0
label_379484:
    if (ctx->pc == 0x379484u) {
        ctx->pc = 0x379488u;
        goto label_379488;
    }
    ctx->pc = 0x379480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x379488u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379480u, 0x379488u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x379488u;
label_379488:
    // 0x379488: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x379488u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37948c:
    // 0x37948c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x37948cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_379490:
    // 0x379490: 0x3e00008  jr          $ra
label_379494:
    if (ctx->pc == 0x379494u) {
        ctx->pc = 0x379498u;
        goto label_fallthrough_0x379490;
    }
    ctx->pc = 0x379490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x379490:
    ctx->pc = 0x379498u;
}
