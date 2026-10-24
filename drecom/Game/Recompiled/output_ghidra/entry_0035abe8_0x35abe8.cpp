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

// Function: entry_0035abe8
// Address: 0x35abe8 - 0x35ac90
void entry_0035abe8_0x35abe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035abe8_0x35abe8");
#endif

    switch (ctx->pc) {
        case 0x35ac0cu: goto label_35ac0c;
        default: break;
    }

    ctx->pc = 0x35abe8u;

    // 0x35abe8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x35abe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x35abec: 0x8c300ae8  lw          $s0, 0xAE8($at)
    ctx->pc = 0x35abecu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x35abf0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35abf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35abf4: 0x8c510058  lw          $s1, 0x58($v0)
    ctx->pc = 0x35abf4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x35abf8: 0x8e320034  lw          $s2, 0x34($s1)
    ctx->pc = 0x35abf8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x35abfc: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x35abfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x35ac00: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x35ac00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x35ac04: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x35AC04u;
    SET_GPR_U32(ctx, 31, 0x35AC0Cu);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x35AC04u, 0x35AC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AC0Cu;
label_35ac0c:
    // 0x35ac0c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x35ac0cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35ac10: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x35ac10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x35ac14: 0x24630ae8  addiu       $v1, $v1, 0xAE8
    ctx->pc = 0x35ac14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x35ac18: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x35ac18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x35ac1c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x35ac1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x35ac20: 0x24640ae8  addiu       $a0, $v1, 0xAE8
    ctx->pc = 0x35ac20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x35ac24: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x35ac24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x35ac28: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x35ac28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x35ac2c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x35ac2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x35ac30: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x35ac30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x35ac34: 0x24650ae8  addiu       $a1, $v1, 0xAE8
    ctx->pc = 0x35ac34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x35ac38: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x35ac38u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x35ac3c: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x35ac3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x35ac40: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x35ac40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x35ac44: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x35ac44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x35ac48: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35ac48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ac4c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35ac4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35ac50: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35ac50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35ac54: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35ac54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35ac58: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x35ac58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35ac5c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35ac5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35ac60: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35ac60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35ac64: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35ac64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35ac68: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35ac68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35ac6c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35ac6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35ac70: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35ac70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x35ac74: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x35ac74u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35ac78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35ac78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35ac7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35ac7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ac80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35ac80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ac84: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x35ac84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x35ac88: 0x3e00008  jr          $ra
    ctx->pc = 0x35AC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35AC88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35AC90u;
}
