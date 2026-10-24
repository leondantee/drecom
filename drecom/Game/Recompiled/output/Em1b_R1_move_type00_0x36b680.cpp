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

// Function: Em1b_R1_move_type00
// Address: 0x36b680 - 0x36b760
void Em1b_R1_move_type00_0x36b680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1b_R1_move_type00_0x36b680");
#endif

    switch (ctx->pc) {
        case 0x36b680u: goto label_36b680;
        case 0x36b684u: goto label_36b684;
        case 0x36b688u: goto label_36b688;
        case 0x36b68cu: goto label_36b68c;
        case 0x36b690u: goto label_36b690;
        case 0x36b694u: goto label_36b694;
        case 0x36b698u: goto label_36b698;
        case 0x36b69cu: goto label_36b69c;
        case 0x36b6a0u: goto label_36b6a0;
        case 0x36b6a4u: goto label_36b6a4;
        case 0x36b6a8u: goto label_36b6a8;
        case 0x36b6acu: goto label_36b6ac;
        case 0x36b6b0u: goto label_36b6b0;
        case 0x36b6b4u: goto label_36b6b4;
        case 0x36b6b8u: goto label_36b6b8;
        case 0x36b6bcu: goto label_36b6bc;
        case 0x36b6c0u: goto label_36b6c0;
        case 0x36b6c4u: goto label_36b6c4;
        case 0x36b6c8u: goto label_36b6c8;
        case 0x36b6ccu: goto label_36b6cc;
        case 0x36b6d0u: goto label_36b6d0;
        case 0x36b6d4u: goto label_36b6d4;
        case 0x36b6d8u: goto label_36b6d8;
        case 0x36b6dcu: goto label_36b6dc;
        case 0x36b6e0u: goto label_36b6e0;
        case 0x36b6e4u: goto label_36b6e4;
        case 0x36b6e8u: goto label_36b6e8;
        case 0x36b6ecu: goto label_36b6ec;
        case 0x36b6f0u: goto label_36b6f0;
        case 0x36b6f4u: goto label_36b6f4;
        case 0x36b6f8u: goto label_36b6f8;
        case 0x36b6fcu: goto label_36b6fc;
        case 0x36b700u: goto label_36b700;
        case 0x36b704u: goto label_36b704;
        case 0x36b708u: goto label_36b708;
        case 0x36b70cu: goto label_36b70c;
        case 0x36b710u: goto label_36b710;
        case 0x36b714u: goto label_36b714;
        case 0x36b718u: goto label_36b718;
        case 0x36b71cu: goto label_36b71c;
        case 0x36b720u: goto label_36b720;
        case 0x36b724u: goto label_36b724;
        case 0x36b728u: goto label_36b728;
        case 0x36b72cu: goto label_36b72c;
        case 0x36b730u: goto label_36b730;
        case 0x36b734u: goto label_36b734;
        case 0x36b738u: goto label_36b738;
        case 0x36b73cu: goto label_36b73c;
        case 0x36b740u: goto label_36b740;
        case 0x36b744u: goto label_36b744;
        case 0x36b748u: goto label_36b748;
        case 0x36b74cu: goto label_36b74c;
        case 0x36b750u: goto label_36b750;
        case 0x36b754u: goto label_36b754;
        case 0x36b758u: goto label_36b758;
        case 0x36b75cu: goto label_36b75c;
        default: break;
    }

    ctx->pc = 0x36b680u;

label_36b680:
    // 0x36b680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36b680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_36b684:
    // 0x36b684: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x36b684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_36b688:
    // 0x36b688: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x36b688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_36b68c:
    // 0x36b68c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36b68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36b690:
    // 0x36b690: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36b690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36b694:
    // 0x36b694: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x36b694u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_36b698:
    // 0x36b698: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36b698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36b69c:
    // 0x36b69c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36b69cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_36b6a0:
    // 0x36b6a0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x36b6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_36b6a4:
    // 0x36b6a4: 0x2442b200  addiu       $v0, $v0, -0x4E00
    ctx->pc = 0x36b6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947328));
label_36b6a8:
    // 0x36b6a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36b6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36b6ac:
    // 0x36b6ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36b6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36b6b0:
    // 0x36b6b0: 0x40f809  jalr        $v0
label_36b6b4:
    if (ctx->pc == 0x36B6B4u) {
        ctx->pc = 0x36B6B8u;
        goto label_36b6b8;
    }
    ctx->pc = 0x36B6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36B6B8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B6B0u, 0x36B6B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36B6B8u;
label_36b6b8:
    // 0x36b6b8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36b6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36b6bc:
    // 0x36b6bc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36b6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36b6c0:
    // 0x36b6c0: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x36b6c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_36b6c4:
    // 0x36b6c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36b6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36b6c8:
    // 0x36b6c8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36b6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_36b6cc:
    // 0x36b6cc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x36b6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_36b6d0:
    // 0x36b6d0: 0x2442b220  addiu       $v0, $v0, -0x4DE0
    ctx->pc = 0x36b6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947360));
label_36b6d4:
    // 0x36b6d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36b6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36b6d8:
    // 0x36b6d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36b6dc:
    // 0x36b6dc: 0x40f809  jalr        $v0
label_36b6e0:
    if (ctx->pc == 0x36B6E0u) {
        ctx->pc = 0x36B6E4u;
        goto label_36b6e4;
    }
    ctx->pc = 0x36B6DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36B6E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B6DCu, 0x36B6E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36B6E4u;
label_36b6e4:
    // 0x36b6e4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36b6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36b6e8:
    // 0x36b6e8: 0xc0db4fc  jal         func_36D3F0
label_36b6ec:
    if (ctx->pc == 0x36B6ECu) {
        ctx->pc = 0x36B6F0u;
        goto label_36b6f0;
    }
    ctx->pc = 0x36B6E8u;
    SET_GPR_U32(ctx, 31, 0x36B6F0u);
    ctx->pc = 0x36D3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D3F0u, 0x36B6E8u, 0x36B6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B6F0u;
label_36b6f0:
    // 0x36b6f0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36b6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36b6f4:
    // 0x36b6f4: 0xc0db5a4  jal         func_36D690
label_36b6f8:
    if (ctx->pc == 0x36B6F8u) {
        ctx->pc = 0x36B6FCu;
        goto label_36b6fc;
    }
    ctx->pc = 0x36B6F4u;
    SET_GPR_U32(ctx, 31, 0x36B6FCu);
    ctx->pc = 0x36D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D690u, 0x36B6F4u, 0x36B6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B6FCu;
label_36b6fc:
    // 0x36b6fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x36b6fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_36b700:
    // 0x36b700: 0x942300cc  lhu         $v1, 0xCC($at)
    ctx->pc = 0x36b700u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 204)));
label_36b704:
    // 0x36b704: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x36b704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_36b708:
    // 0x36b708: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x36b708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_36b70c:
    // 0x36b70c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_36b710:
    if (ctx->pc == 0x36B710u) {
        ctx->pc = 0x36B714u;
        goto label_36b714;
    }
    ctx->pc = 0x36B70Cu;
    {
        const bool branch_taken_0x36b70c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b70c) {
            ctx->pc = 0x36B750u;
            goto label_36b750;
        }
    }
    ctx->pc = 0x36B714u;
label_36b714:
    // 0x36b714: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36b714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36b718:
    // 0x36b718: 0x9483000e  lhu         $v1, 0xE($a0)
    ctx->pc = 0x36b718u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
label_36b71c:
    // 0x36b71c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x36b71cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_36b720:
    // 0x36b720: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x36b720u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
label_36b724:
    // 0x36b724: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36b724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36b728:
    // 0x36b728: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36b728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36b72c:
    // 0x36b72c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36b72cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_36b730:
    // 0x36b730: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36b730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36b734:
    // 0x36b734: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x36b734u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_36b738:
    // 0x36b738: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36b738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36b73c:
    // 0x36b73c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36b73cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_36b740:
    // 0x36b740: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36b740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36b744:
    // 0x36b744: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36b744u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_36b748:
    // 0x36b748: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36b748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36b74c:
    // 0x36b74c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36b74cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_36b750:
    // 0x36b750: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x36b750u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36b754:
    // 0x36b754: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x36b754u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_36b758:
    // 0x36b758: 0x3e00008  jr          $ra
label_36b75c:
    if (ctx->pc == 0x36B75Cu) {
        ctx->pc = 0x36B760u;
        goto label_fallthrough_0x36b758;
    }
    ctx->pc = 0x36B758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36b758:
    ctx->pc = 0x36B760u;
}
