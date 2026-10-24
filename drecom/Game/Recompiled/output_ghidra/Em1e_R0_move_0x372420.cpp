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

// Function: Em1e_R0_move
// Address: 0x372420 - 0x372494
void Em1e_R0_move_0x372420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1e_R0_move_0x372420");
#endif

    switch (ctx->pc) {
        case 0x372420u: goto label_372420;
        case 0x372424u: goto label_372424;
        case 0x372428u: goto label_372428;
        case 0x37242cu: goto label_37242c;
        case 0x372430u: goto label_372430;
        case 0x372434u: goto label_372434;
        case 0x372438u: goto label_372438;
        case 0x37243cu: goto label_37243c;
        case 0x372440u: goto label_372440;
        case 0x372444u: goto label_372444;
        case 0x372448u: goto label_372448;
        case 0x37244cu: goto label_37244c;
        case 0x372450u: goto label_372450;
        case 0x372454u: goto label_372454;
        case 0x372458u: goto label_372458;
        case 0x37245cu: goto label_37245c;
        case 0x372460u: goto label_372460;
        case 0x372464u: goto label_372464;
        case 0x372468u: goto label_372468;
        case 0x37246cu: goto label_37246c;
        case 0x372470u: goto label_372470;
        case 0x372474u: goto label_372474;
        case 0x372478u: goto label_372478;
        case 0x37247cu: goto label_37247c;
        case 0x372480u: goto label_372480;
        case 0x372484u: goto label_372484;
        case 0x372488u: goto label_372488;
        case 0x37248cu: goto label_37248c;
        case 0x372490u: goto label_372490;
        default: break;
    }

    ctx->pc = 0x372420u;

label_372420:
    // 0x372420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x372420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_372424:
    // 0x372424: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x372424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_372428:
    // 0x372428: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x372428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_37242c:
    // 0x37242c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x37242cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_372430:
    // 0x372430: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x372430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_372434:
    // 0x372434: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x372434u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_372438:
    // 0x372438: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x372438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_37243c:
    // 0x37243c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x37243cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_372440:
    // 0x372440: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x372440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_372444:
    // 0x372444: 0x2442b5b8  addiu       $v0, $v0, -0x4A48
    ctx->pc = 0x372444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948280));
label_372448:
    // 0x372448: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x372448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37244c:
    // 0x37244c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x37244cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_372450:
    // 0x372450: 0x40f809  jalr        $v0
label_372454:
    if (ctx->pc == 0x372454u) {
        ctx->pc = 0x372458u;
        goto label_372458;
    }
    ctx->pc = 0x372450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x372458u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372450u, 0x372458u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x372458u;
label_372458:
    // 0x372458: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x372458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_37245c:
    // 0x37245c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x37245cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_372460:
    // 0x372460: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x372460u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_372464:
    // 0x372464: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x372464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_372468:
    // 0x372468: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x372468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37246c:
    // 0x37246c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x37246cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_372470:
    // 0x372470: 0x2442b5c0  addiu       $v0, $v0, -0x4A40
    ctx->pc = 0x372470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948288));
label_372474:
    // 0x372474: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x372474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_372478:
    // 0x372478: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x372478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_37247c:
    // 0x37247c: 0x40f809  jalr        $v0
label_372480:
    if (ctx->pc == 0x372480u) {
        ctx->pc = 0x372484u;
        goto label_372484;
    }
    ctx->pc = 0x37247Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x372484u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37247Cu, 0x372484u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x372484u;
label_372484:
    // 0x372484: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x372484u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_372488:
    // 0x372488: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x372488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_37248c:
    // 0x37248c: 0x3e00008  jr          $ra
label_372490:
    if (ctx->pc == 0x372490u) {
        ctx->pc = 0x372494u;
        goto label_fallthrough_0x37248c;
    }
    ctx->pc = 0x37248Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37248Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x37248c:
    ctx->pc = 0x372494u;
}
