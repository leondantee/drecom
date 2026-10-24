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

// Function: Check_wep_rtn
// Address: 0x161040 - 0x1610e4
void Check_wep_rtn_0x161040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Check_wep_rtn_0x161040");
#endif

    switch (ctx->pc) {
        case 0x161068u: goto label_161068;
        default: break;
    }

    ctx->pc = 0x161040u;

    // 0x161040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x161040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x161044: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x161044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x161048: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x161048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16104c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16104cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x161050: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x161050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x161054: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x161054u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x161058: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x161058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x16105c: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x16105cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x161060: 0xc058348  jal         func_160D20
    ctx->pc = 0x161060u;
    SET_GPR_U32(ctx, 31, 0x161068u);
    ctx->pc = 0x160D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160D20u, 0x161060u, 0x161068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161068u;
label_161068:
    // 0x161068: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161068u;
    {
        const bool branch_taken_0x161068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161068) {
            ctx->pc = 0x16107Cu;
            goto label_16107c;
        }
    }
    ctx->pc = 0x161070u;
    // 0x161070: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161074: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x161074u;
    {
        const bool branch_taken_0x161074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161074) {
            ctx->pc = 0x1610CCu;
            goto label_1610cc;
        }
    }
    ctx->pc = 0x16107Cu;
label_16107c:
    // 0x16107c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x16107cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x161080: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x161080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x161084: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x161084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x161088: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x161088u;
    {
        const bool branch_taken_0x161088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161088) {
            ctx->pc = 0x1610C8u;
            goto label_1610c8;
        }
    }
    ctx->pc = 0x161090u;
    // 0x161090: 0x920213f8  lbu         $v0, 0x13F8($s0)
    ctx->pc = 0x161090u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5112)));
    // 0x161094: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x161094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x161098: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x161098u;
    {
        const bool branch_taken_0x161098 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x161098) {
            ctx->pc = 0x1610C8u;
            goto label_1610c8;
        }
    }
    ctx->pc = 0x1610A0u;
    // 0x1610a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1610a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1610a4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1610a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1610a8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1610a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1610ac: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1610acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1610b0: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1610b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1610b4: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1610b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1610b8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1610b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1610bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1610bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1610c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1610C0u;
    {
        const bool branch_taken_0x1610c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1610c0) {
            ctx->pc = 0x1610CCu;
            goto label_1610cc;
        }
    }
    ctx->pc = 0x1610C8u;
label_1610c8:
    // 0x1610c8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1610c8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1610cc:
    // 0x1610cc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1610ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1610d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1610d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1610d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1610d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1610d8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1610d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1610dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1610DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1610DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1610E4u;
}
