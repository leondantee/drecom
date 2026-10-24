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

// Function: Load_player_core
// Address: 0x143960 - 0x143a88
void Load_player_core_0x143960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Load_player_core_0x143960");
#endif

    switch (ctx->pc) {
        case 0x1439b0u: goto label_1439b0;
        default: break;
    }

    ctx->pc = 0x143960u;

    // 0x143960: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x143960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x143964: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x143964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x143968: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x143968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14396c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14396cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x143970: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x143970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x143974: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x143974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x143978: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x143978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14397c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14397cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x143980: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x143980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x143984: 0x2452dbc0  addiu       $s2, $v0, -0x2440
    ctx->pc = 0x143984u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x143988: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x143988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x14398c: 0x2454a530  addiu       $s4, $v0, -0x5AD0
    ctx->pc = 0x14398cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944048));
    // 0x143990: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x143990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x143994: 0x2453c960  addiu       $s3, $v0, -0x36A0
    ctx->pc = 0x143994u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953312));
    // 0x143998: 0x8e51131c  lw          $s1, 0x131C($s2)
    ctx->pc = 0x143998u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3EEEDCu));
    // 0x14399c: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x14399cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x1439a0: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1439a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1439a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1439a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1439a8: 0xc076590  jal         func_1D9640
    ctx->pc = 0x1439A8u;
    SET_GPR_U32(ctx, 31, 0x1439B0u);
    ctx->pc = 0x1D9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9640u, 0x1439A8u, 0x1439B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1439B0u;
label_1439b0:
    // 0x1439b0: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x1439b0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1439b4: 0x72208628  paddub      $s0, $s1, $zero
    ctx->pc = 0x1439b4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1439b8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1439b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1439bc: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1439bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1439c0: 0xae431330  sw          $v1, 0x1330($s2)
    ctx->pc = 0x1439c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4912), GPR_U32(ctx, 3));
    // 0x1439c4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1439c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1439c8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1439c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1439cc: 0xae431334  sw          $v1, 0x1334($s2)
    ctx->pc = 0x1439ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4916), GPR_U32(ctx, 3));
    // 0x1439d0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1439d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1439d4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1439d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1439d8: 0xae63005c  sw          $v1, 0x5C($s3)
    ctx->pc = 0x1439d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 3));
    // 0x1439dc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1439dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1439e0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1439e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1439e4: 0xae83005c  sw          $v1, 0x5C($s4)
    ctx->pc = 0x1439e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 3));
    // 0x1439e8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1439e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1439ec: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1439ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1439f0: 0xae831370  sw          $v1, 0x1370($s4)
    ctx->pc = 0x1439f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4976), GPR_U32(ctx, 3));
    // 0x1439f4: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1439f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1439f8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1439f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1439fc: 0xae431340  sw          $v1, 0x1340($s2)
    ctx->pc = 0x1439fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4928), GPR_U32(ctx, 3));
    // 0x143a00: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x143a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x143a04: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x143a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x143a08: 0xae430368  sw          $v1, 0x368($s2)
    ctx->pc = 0x143a08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 872), GPR_U32(ctx, 3));
    // 0x143a0c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x143a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x143a10: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x143a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x143a14: 0xae630368  sw          $v1, 0x368($s3)
    ctx->pc = 0x143a14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 872), GPR_U32(ctx, 3));
    // 0x143a18: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x143a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x143a1c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x143A1Cu;
    {
        const bool branch_taken_0x143a1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x143a1c) {
            ctx->pc = 0x143A38u;
            goto label_143a38;
        }
    }
    ctx->pc = 0x143A24u;
    // 0x143a24: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x143a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x143a28: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x143a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x143a2c: 0xae4301ec  sw          $v1, 0x1EC($s2)
    ctx->pc = 0x143a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 492), GPR_U32(ctx, 3));
    // 0x143a30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x143A30u;
    {
        const bool branch_taken_0x143a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143a30) {
            ctx->pc = 0x143A3Cu;
            goto label_143a3c;
        }
    }
    ctx->pc = 0x143A38u;
label_143a38:
    // 0x143a38: 0xae4001ec  sw          $zero, 0x1EC($s2)
    ctx->pc = 0x143a38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 492), GPR_U32(ctx, 0));
label_143a3c:
    // 0x143a3c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x143a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x143a40: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x143A40u;
    {
        const bool branch_taken_0x143a40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x143a40) {
            ctx->pc = 0x143A5Cu;
            goto label_143a5c;
        }
    }
    ctx->pc = 0x143A48u;
    // 0x143a48: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x143a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x143a4c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x143a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x143a50: 0xae6301ec  sw          $v1, 0x1EC($s3)
    ctx->pc = 0x143a50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 492), GPR_U32(ctx, 3));
    // 0x143a54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x143A54u;
    {
        const bool branch_taken_0x143a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143a54) {
            ctx->pc = 0x143A60u;
            goto label_143a60;
        }
    }
    ctx->pc = 0x143A5Cu;
label_143a5c:
    // 0x143a5c: 0xae6001ec  sw          $zero, 0x1EC($s3)
    ctx->pc = 0x143a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 492), GPR_U32(ctx, 0));
label_143a60:
    // 0x143a60: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x143a60u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x143a64: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x143a64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x143a68: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x143a68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x143a6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x143a6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x143a70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x143a70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x143a74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x143a74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143a78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x143a78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143a7c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x143a7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x143a80: 0x3e00008  jr          $ra
    ctx->pc = 0x143A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143A88u;
}
