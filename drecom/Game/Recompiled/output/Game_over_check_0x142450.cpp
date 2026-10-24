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

// Function: Game_over_check
// Address: 0x142450 - 0x142508
void Game_over_check_0x142450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Game_over_check_0x142450");
#endif

    switch (ctx->pc) {
        case 0x1424d8u: goto label_1424d8;
        case 0x1424f4u: goto label_1424f4;
        default: break;
    }

    ctx->pc = 0x142450u;

    // 0x142450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x142450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x142454: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x142454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x142458: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x142458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14245c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x14245cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x142460: 0x2470fe10  addiu       $s0, $v1, -0x1F0
    ctx->pc = 0x142460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966800));
    // 0x142464: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x142464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x142468: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x142468u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x14246c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x14246cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x142470: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x142470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x142474: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x142474u;
    {
        const bool branch_taken_0x142474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x142474) {
            ctx->pc = 0x1424F4u;
            goto label_1424f4;
        }
    }
    ctx->pc = 0x14247Cu;
    // 0x14247c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14247cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x142480: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x142480u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x142484: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x142484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x142488: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x142488u;
    {
        const bool branch_taken_0x142488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x142488) {
            ctx->pc = 0x1424F4u;
            goto label_1424f4;
        }
    }
    ctx->pc = 0x142490u;
    // 0x142490: 0x92030008  lbu         $v1, 0x8($s0)
    ctx->pc = 0x142490u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x142494: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x142494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x142498: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x142498u;
    {
        const bool branch_taken_0x142498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x142498) {
            ctx->pc = 0x1424F4u;
            goto label_1424f4;
        }
    }
    ctx->pc = 0x1424A0u;
    // 0x1424a0: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x1424a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1424a4: 0x8e030258  lw          $v1, 0x258($s0)
    ctx->pc = 0x1424a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x1424a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1424a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1424ac: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1424ACu;
    {
        const bool branch_taken_0x1424ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1424ac) {
            ctx->pc = 0x1424E0u;
            goto label_1424e0;
        }
    }
    ctx->pc = 0x1424B4u;
    // 0x1424b4: 0x8e03025c  lw          $v1, 0x25C($s0)
    ctx->pc = 0x1424b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
    // 0x1424b8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1424b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1424bc: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1424BCu;
    {
        const bool branch_taken_0x1424bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1424bc) {
            ctx->pc = 0x1424E0u;
            goto label_1424e0;
        }
    }
    ctx->pc = 0x1424C4u;
    // 0x1424c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1424c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1424c8: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x1424c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x1424cc: 0x24452a30  addiu       $a1, $v0, 0x2A30
    ctx->pc = 0x1424ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10800));
    // 0x1424d0: 0xc067478  jal         func_19D1E0
    ctx->pc = 0x1424D0u;
    SET_GPR_U32(ctx, 31, 0x1424D8u);
    ctx->pc = 0x19D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D1E0u, 0x1424D0u, 0x1424D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1424D8u;
label_1424d8:
    // 0x1424d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1424D8u;
    {
        const bool branch_taken_0x1424d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1424d8) {
            ctx->pc = 0x1424F4u;
            goto label_1424f4;
        }
    }
    ctx->pc = 0x1424E0u;
label_1424e0:
    // 0x1424e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1424e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1424e4: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x1424e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x1424e8: 0x24452510  addiu       $a1, $v0, 0x2510
    ctx->pc = 0x1424e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 9488));
    // 0x1424ec: 0xc067478  jal         func_19D1E0
    ctx->pc = 0x1424ECu;
    SET_GPR_U32(ctx, 31, 0x1424F4u);
    ctx->pc = 0x19D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D1E0u, 0x1424ECu, 0x1424F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1424F4u;
label_1424f4:
    // 0x1424f4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1424f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1424f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1424f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1424fc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1424fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x142500: 0x3e00008  jr          $ra
    ctx->pc = 0x142500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142508u;
}
