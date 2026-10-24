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

// Function: Em0a_R0_move
// Address: 0x363980 - 0x3639f4
void Em0a_R0_move_0x363980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_R0_move_0x363980");
#endif

    switch (ctx->pc) {
        case 0x363980u: goto label_363980;
        case 0x363984u: goto label_363984;
        case 0x363988u: goto label_363988;
        case 0x36398cu: goto label_36398c;
        case 0x363990u: goto label_363990;
        case 0x363994u: goto label_363994;
        case 0x363998u: goto label_363998;
        case 0x36399cu: goto label_36399c;
        case 0x3639a0u: goto label_3639a0;
        case 0x3639a4u: goto label_3639a4;
        case 0x3639a8u: goto label_3639a8;
        case 0x3639acu: goto label_3639ac;
        case 0x3639b0u: goto label_3639b0;
        case 0x3639b4u: goto label_3639b4;
        case 0x3639b8u: goto label_3639b8;
        case 0x3639bcu: goto label_3639bc;
        case 0x3639c0u: goto label_3639c0;
        case 0x3639c4u: goto label_3639c4;
        case 0x3639c8u: goto label_3639c8;
        case 0x3639ccu: goto label_3639cc;
        case 0x3639d0u: goto label_3639d0;
        case 0x3639d4u: goto label_3639d4;
        case 0x3639d8u: goto label_3639d8;
        case 0x3639dcu: goto label_3639dc;
        case 0x3639e0u: goto label_3639e0;
        case 0x3639e4u: goto label_3639e4;
        case 0x3639e8u: goto label_3639e8;
        case 0x3639ecu: goto label_3639ec;
        case 0x3639f0u: goto label_3639f0;
        default: break;
    }

    ctx->pc = 0x363980u;

label_363980:
    // 0x363980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x363980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_363984:
    // 0x363984: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x363984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_363988:
    // 0x363988: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x363988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_36398c:
    // 0x36398c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36398cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_363990:
    // 0x363990: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x363990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_363994:
    // 0x363994: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x363994u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_363998:
    // 0x363998: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x363998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36399c:
    // 0x36399c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36399cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3639a0:
    // 0x3639a0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3639a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_3639a4:
    // 0x3639a4: 0x2442af70  addiu       $v0, $v0, -0x5090
    ctx->pc = 0x3639a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946672));
label_3639a8:
    // 0x3639a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3639a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3639ac:
    // 0x3639ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3639acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3639b0:
    // 0x3639b0: 0x40f809  jalr        $v0
label_3639b4:
    if (ctx->pc == 0x3639B4u) {
        ctx->pc = 0x3639B8u;
        goto label_3639b8;
    }
    ctx->pc = 0x3639B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3639B8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3639B0u, 0x3639B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3639B8u;
label_3639b8:
    // 0x3639b8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3639b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3639bc:
    // 0x3639bc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3639bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3639c0:
    // 0x3639c0: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x3639c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_3639c4:
    // 0x3639c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3639c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3639c8:
    // 0x3639c8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3639c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3639cc:
    // 0x3639cc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3639ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_3639d0:
    // 0x3639d0: 0x2442afd0  addiu       $v0, $v0, -0x5030
    ctx->pc = 0x3639d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946768));
label_3639d4:
    // 0x3639d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3639d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3639d8:
    // 0x3639d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3639d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3639dc:
    // 0x3639dc: 0x40f809  jalr        $v0
label_3639e0:
    if (ctx->pc == 0x3639E0u) {
        ctx->pc = 0x3639E4u;
        goto label_3639e4;
    }
    ctx->pc = 0x3639DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3639E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3639DCu, 0x3639E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3639E4u;
label_3639e4:
    // 0x3639e4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x3639e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3639e8:
    // 0x3639e8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3639e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3639ec:
    // 0x3639ec: 0x3e00008  jr          $ra
label_3639f0:
    if (ctx->pc == 0x3639F0u) {
        ctx->pc = 0x3639F4u;
        goto label_fallthrough_0x3639ec;
    }
    ctx->pc = 0x3639ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3639ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3639ec:
    ctx->pc = 0x3639F4u;
}
