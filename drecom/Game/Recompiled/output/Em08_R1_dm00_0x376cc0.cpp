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

// Function: Em08_R1_dm00
// Address: 0x376cc0 - 0x376db4
void Em08_R1_dm00_0x376cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em08_R1_dm00_0x376cc0");
#endif

    switch (ctx->pc) {
        case 0x376d2cu: goto label_376d2c;
        case 0x376d3cu: goto label_376d3c;
        case 0x376d48u: goto label_376d48;
        case 0x376d58u: goto label_376d58;
        case 0x376d64u: goto label_376d64;
        default: break;
    }

    ctx->pc = 0x376cc0u;

    // 0x376cc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x376cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x376cc4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x376cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x376cc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x376cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x376ccc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x376cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x376cd0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x376cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x376cd4: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x376cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x376cd8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x376cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x376cdc: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x376cdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x376ce0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x376ce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x376ce4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x376ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376ce8: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x376CE8u;
    {
        const bool branch_taken_0x376ce8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x376ce8) {
            ctx->pc = 0x376D2Cu;
            goto label_376d2c;
        }
    }
    ctx->pc = 0x376CF0u;
    // 0x376cf0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x376CF0u;
    {
        const bool branch_taken_0x376cf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x376cf0) {
            ctx->pc = 0x376D00u;
            goto label_376d00;
        }
    }
    ctx->pc = 0x376CF8u;
    // 0x376cf8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x376CF8u;
    {
        const bool branch_taken_0x376cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x376cf8) {
            ctx->pc = 0x376DA0u;
            goto label_376da0;
        }
    }
    ctx->pc = 0x376D00u;
label_376d00:
    // 0x376d00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x376d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376d04: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x376d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x376d08: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x376d08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x376d0c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x376d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x376d10: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x376d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x376d14: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x376d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x376d18: 0x24060805  addiu       $a2, $zero, 0x805
    ctx->pc = 0x376d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2053));
    // 0x376d1c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x376d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376d20: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x376d20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x376d24: 0xc0965d0  jal         func_259740
    ctx->pc = 0x376D24u;
    SET_GPR_U32(ctx, 31, 0x376D2Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x376D24u, 0x376D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376D2Cu;
label_376d2c:
    // 0x376d2c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x376d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x376d30: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x376d30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x376d34: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x376D34u;
    SET_GPR_U32(ctx, 31, 0x376D3Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x376D34u, 0x376D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376D3Cu;
label_376d3c:
    // 0x376d3c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x376d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x376d40: 0xc05cd10  jal         func_173440
    ctx->pc = 0x376D40u;
    SET_GPR_U32(ctx, 31, 0x376D48u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x376D40u, 0x376D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376D48u;
label_376d48:
    // 0x376d48: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x376d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x376d4c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x376d4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x376d50: 0xc0dd234  jal         func_3748D0
    ctx->pc = 0x376D50u;
    SET_GPR_U32(ctx, 31, 0x376D58u);
    ctx->pc = 0x3748D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3748D0u, 0x376D50u, 0x376D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376D58u;
label_376d58:
    // 0x376d58: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x376d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x376d5c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x376D5Cu;
    SET_GPR_U32(ctx, 31, 0x376D64u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x376D5Cu, 0x376D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376D64u;
label_376d64:
    // 0x376d64: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x376d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x376d68: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x376d68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x376d6c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x376D6Cu;
    {
        const bool branch_taken_0x376d6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x376d6c) {
            ctx->pc = 0x376DA0u;
            goto label_376da0;
        }
    }
    ctx->pc = 0x376D74u;
    // 0x376d74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x376d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376d78: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x376d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x376d7c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x376d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x376d80: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x376d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x376d84: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x376d84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x376d88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x376d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x376d8c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x376d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x376d90: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x376d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x376d94: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x376d94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x376d98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x376d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x376d9c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x376d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_376da0:
    // 0x376da0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x376da0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x376da4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x376da4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x376da8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x376da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x376dac: 0x3e00008  jr          $ra
    ctx->pc = 0x376DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376DB4u;
}
