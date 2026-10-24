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

// Function: Em1f_R0_damage
// Address: 0x298a60 - 0x298b34
void Em1f_R0_damage_0x298a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1f_R0_damage_0x298a60");
#endif

    switch (ctx->pc) {
        case 0x298a74u: goto label_298a74;
        case 0x298ab8u: goto label_298ab8;
        default: break;
    }

    ctx->pc = 0x298a60u;

    // 0x298a60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x298a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x298a64: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x298a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x298a68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x298a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x298a6c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x298a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x298a70: 0x2410000d  addiu       $s0, $zero, 0xD
    ctx->pc = 0x298a70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_298a74:
    // 0x298a74: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x298a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298a78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x298a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298a7c: 0x2021804  sllv        $v1, $v0, $s0
    ctx->pc = 0x298a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x298a80: 0x8c821348  lw          $v0, 0x1348($a0)
    ctx->pc = 0x298a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4936)));
    // 0x298a84: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x298a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x298a88: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x298A88u;
    {
        const bool branch_taken_0x298a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x298a88) {
            ctx->pc = 0x298AC0u;
            goto label_298ac0;
        }
    }
    ctx->pc = 0x298A90u;
    // 0x298a90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x298a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298a94: 0x2022004  sllv        $a0, $v0, $s0
    ctx->pc = 0x298a94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x298a98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298a9c: 0x8c621348  lw          $v0, 0x1348($v1)
    ctx->pc = 0x298a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4936)));
    // 0x298aa0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x298aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x298aa4: 0xac621348  sw          $v0, 0x1348($v1)
    ctx->pc = 0x298aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4936), GPR_U32(ctx, 2));
    // 0x298aa8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x298aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298aac: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x298aacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x298ab0: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x298AB0u;
    SET_GPR_U32(ctx, 31, 0x298AB8u);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x298AB0u, 0x298AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298AB8u;
label_298ab8:
    // 0x298ab8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x298AB8u;
    {
        const bool branch_taken_0x298ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298ab8) {
            ctx->pc = 0x298ACCu;
            goto label_298acc;
        }
    }
    ctx->pc = 0x298AC0u;
label_298ac0:
    // 0x298ac0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x298ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x298ac4: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x298AC4u;
    {
        const bool branch_taken_0x298ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298ac4) {
            ctx->pc = 0x298A74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_298a74;
        }
    }
    ctx->pc = 0x298ACCu;
label_298acc:
    // 0x298acc: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x298ACCu;
    {
        const bool branch_taken_0x298acc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x298acc) {
            ctx->pc = 0x298AE8u;
            goto label_298ae8;
        }
    }
    ctx->pc = 0x298AD4u;
    // 0x298ad4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298ad8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x298ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x298adc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x298adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x298ae0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298ae4: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x298ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
label_298ae8:
    // 0x298ae8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298aec: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x298aecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x298af0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x298af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298af4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298af8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x298af8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x298afc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x298afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298b00: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298b04: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x298b04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x298b08: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298b0c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x298b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x298b10: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298b14: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x298b14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x298b18: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298b1c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x298b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x298b20: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x298b20u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298b24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x298b24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298b28: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x298b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x298b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x298B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298B34u;
}
