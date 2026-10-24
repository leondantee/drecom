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

// Function: Load_player_devil
// Address: 0x143a90 - 0x143be4
void Load_player_devil_0x143a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Load_player_devil_0x143a90");
#endif

    switch (ctx->pc) {
        case 0x143b10u: goto label_143b10;
        case 0x143b30u: goto label_143b30;
        case 0x143b50u: goto label_143b50;
        case 0x143b70u: goto label_143b70;
        case 0x143bacu: goto label_143bac;
        case 0x143bc0u: goto label_143bc0;
        default: break;
    }

    ctx->pc = 0x143a90u;

    // 0x143a90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x143a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x143a94: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x143a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x143a98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x143a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x143a9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x143a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x143aa0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x143aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x143aa4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x143aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x143aa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x143aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x143aac: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x143aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x143ab0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x143ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x143ab4: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x143ab4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x143ab8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x143ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x143abc: 0x2454a530  addiu       $s4, $v0, -0x5AD0
    ctx->pc = 0x143abcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944048));
    // 0x143ac0: 0x8e111320  lw          $s1, 0x1320($s0)
    ctx->pc = 0x143ac0u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3EEEE0u));
    // 0x143ac4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x143ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x143ac8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x143ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x143acc: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x143ACCu;
    {
        const bool branch_taken_0x143acc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x143acc) {
            ctx->pc = 0x143B5Cu;
            goto label_143b5c;
        }
    }
    ctx->pc = 0x143AD4u;
    // 0x143ad4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x143ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x143ad8: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x143AD8u;
    {
        const bool branch_taken_0x143ad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x143ad8) {
            ctx->pc = 0x143B3Cu;
            goto label_143b3c;
        }
    }
    ctx->pc = 0x143AE0u;
    // 0x143ae0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x143ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143ae4: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x143AE4u;
    {
        const bool branch_taken_0x143ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x143ae4) {
            ctx->pc = 0x143B1Cu;
            goto label_143b1c;
        }
    }
    ctx->pc = 0x143AECu;
    // 0x143aec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x143AECu;
    {
        const bool branch_taken_0x143aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x143aec) {
            ctx->pc = 0x143AFCu;
            goto label_143afc;
        }
    }
    ctx->pc = 0x143AF4u;
    // 0x143af4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x143AF4u;
    {
        const bool branch_taken_0x143af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143af4) {
            ctx->pc = 0x143AFCu;
            goto label_143afc;
        }
    }
    ctx->pc = 0x143AFCu;
label_143afc:
    // 0x143afc: 0x2404007e  addiu       $a0, $zero, 0x7E
    ctx->pc = 0x143afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x143b00: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x143b00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x143b04: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x143b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143b08: 0xc0765a4  jal         func_1D9690
    ctx->pc = 0x143B08u;
    SET_GPR_U32(ctx, 31, 0x143B10u);
    ctx->pc = 0x1D9690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9690u, 0x143B08u, 0x143B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143B10u;
label_143b10:
    // 0x143b10: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x143b10u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x143b14: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x143B14u;
    {
        const bool branch_taken_0x143b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143b14) {
            ctx->pc = 0x143B74u;
            goto label_143b74;
        }
    }
    ctx->pc = 0x143B1Cu;
label_143b1c:
    // 0x143b1c: 0x2404007f  addiu       $a0, $zero, 0x7F
    ctx->pc = 0x143b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x143b20: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x143b20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x143b24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x143b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143b28: 0xc0765a4  jal         func_1D9690
    ctx->pc = 0x143B28u;
    SET_GPR_U32(ctx, 31, 0x143B30u);
    ctx->pc = 0x1D9690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9690u, 0x143B28u, 0x143B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143B30u;
label_143b30:
    // 0x143b30: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x143b30u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x143b34: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x143B34u;
    {
        const bool branch_taken_0x143b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143b34) {
            ctx->pc = 0x143B74u;
            goto label_143b74;
        }
    }
    ctx->pc = 0x143B3Cu;
label_143b3c:
    // 0x143b3c: 0x24040081  addiu       $a0, $zero, 0x81
    ctx->pc = 0x143b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x143b40: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x143b40u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x143b44: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x143b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143b48: 0xc0765a4  jal         func_1D9690
    ctx->pc = 0x143B48u;
    SET_GPR_U32(ctx, 31, 0x143B50u);
    ctx->pc = 0x1D9690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9690u, 0x143B48u, 0x143B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143B50u;
label_143b50:
    // 0x143b50: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x143b50u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x143b54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x143B54u;
    {
        const bool branch_taken_0x143b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143b54) {
            ctx->pc = 0x143B74u;
            goto label_143b74;
        }
    }
    ctx->pc = 0x143B5Cu;
label_143b5c:
    // 0x143b5c: 0x24040082  addiu       $a0, $zero, 0x82
    ctx->pc = 0x143b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x143b60: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x143b60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x143b64: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x143b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143b68: 0xc0765a4  jal         func_1D9690
    ctx->pc = 0x143B68u;
    SET_GPR_U32(ctx, 31, 0x143B70u);
    ctx->pc = 0x1D9690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9690u, 0x143B68u, 0x143B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143B70u;
label_143b70:
    // 0x143b70: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x143b70u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_143b74:
    // 0x143b74: 0x72209628  paddub      $s2, $s1, $zero
    ctx->pc = 0x143b74u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x143b78: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x143b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x143b7c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x143b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x143b80: 0xae021344  sw          $v0, 0x1344($s0)
    ctx->pc = 0x143b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4932), GPR_U32(ctx, 2));
    // 0x143b84: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x143b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x143b88: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x143b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x143b8c: 0xae02136c  sw          $v0, 0x136C($s0)
    ctx->pc = 0x143b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4972), GPR_U32(ctx, 2));
    // 0x143b90: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x143b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x143b94: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x143b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x143b98: 0xae021370  sw          $v0, 0x1370($s0)
    ctx->pc = 0x143b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4976), GPR_U32(ctx, 2));
    // 0x143b9c: 0x8e041370  lw          $a0, 0x1370($s0)
    ctx->pc = 0x143b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4976)));
    // 0x143ba0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x143ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x143ba4: 0xc062b60  jal         func_18AD80
    ctx->pc = 0x143BA4u;
    SET_GPR_U32(ctx, 31, 0x143BACu);
    ctx->pc = 0x18AD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD80u, 0x143BA4u, 0x143BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143BACu;
label_143bac:
    // 0x143bac: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x143bacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x143bb0: 0x8e05136c  lw          $a1, 0x136C($s0)
    ctx->pc = 0x143bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4972)));
    // 0x143bb4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x143bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x143bb8: 0xc062c2c  jal         func_18B0B0
    ctx->pc = 0x143BB8u;
    SET_GPR_U32(ctx, 31, 0x143BC0u);
    ctx->pc = 0x18B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B0B0u, 0x143BB8u, 0x143BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143BC0u;
label_143bc0:
    // 0x143bc0: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x143bc0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x143bc4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x143bc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x143bc8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x143bc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x143bcc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x143bccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x143bd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x143bd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143bd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x143bd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143bd8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x143bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x143bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x143BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143BE4u;
}
