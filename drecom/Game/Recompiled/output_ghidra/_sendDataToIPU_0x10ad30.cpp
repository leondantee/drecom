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

// Function: _sendDataToIPU
// Address: 0x10ad30 - 0x10ae04
void _sendDataToIPU_0x10ad30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sendDataToIPU_0x10ad30");
#endif

    switch (ctx->pc) {
        case 0x10ad70u: goto label_10ad70;
        default: break;
    }

    ctx->pc = 0x10ad30u;

    // 0x10ad30: 0x3c0f003b  lui         $t7, 0x3B
    ctx->pc = 0x10ad30u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)59 << 16));
    // 0x10ad34: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x10ad34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x10ad38: 0x25e33100  addiu       $v1, $t7, 0x3100
    ctx->pc = 0x10ad38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), 12544));
    // 0x10ad3c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10ad3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x10ad40: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x10ad40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x10ad44: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x10ad44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x10ad48: 0x665825  or          $t3, $v1, $a2
    ctx->pc = 0x10ad48u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x10ad4c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x10ad4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ad50: 0x1900001d  blez        $t0, . + 4 + (0x1D << 2)
    ctx->pc = 0x10AD50u;
    {
        const bool branch_taken_0x10ad50 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x10AD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD50u;
        // 0x10ad54: 0x80502d  daddu       $t2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ad50) {
            ctx->pc = 0x10ADC8u;
            goto label_10adc8;
        }
    }
    ctx->pc = 0x10AD58u;
    // 0x10ad58: 0x3c09000f  lui         $t1, 0xF
    ctx->pc = 0x10ad58u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)15 << 16));
    // 0x10ad5c: 0x3c0c0fff  lui         $t4, 0xFFF
    ctx->pc = 0x10ad5cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4095 << 16));
    // 0x10ad60: 0x3529ff40  ori         $t1, $t1, 0xFF40
    ctx->pc = 0x10ad60u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65344);
    // 0x10ad64: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x10ad64u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x10ad68: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x10ad68u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10ad6c: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x10ad6cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10ad70:
    // 0x10ad70: 0x128102a  slt         $v0, $t1, $t0
    ctx->pc = 0x10ad70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x10ad74: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x10ad74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ad78: 0x102380a  movz        $a3, $t0, $v0
    ctx->pc = 0x10ad78u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 8));
    // 0x10ad7c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x10ad7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ad80: 0x24e6000f  addiu       $a2, $a3, 0xF
    ctx->pc = 0x10ad80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x10ad84: 0x24e2001e  addiu       $v0, $a3, 0x1E
    ctx->pc = 0x10ad84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 30));
    // 0x10ad88: 0x1a6282a  slt         $a1, $t5, $a2
    ctx->pc = 0x10ad88u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x10ad8c: 0x1074023  subu        $t0, $t0, $a3
    ctx->pc = 0x10ad8cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x10ad90: 0xc5100b  movn        $v0, $a2, $a1
    ctx->pc = 0x10ad90u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x10ad94: 0x14c2024  and         $a0, $t2, $t4
    ctx->pc = 0x10ad94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & GPR_U64(ctx, 12));
    // 0x10ad98: 0x1c8180b  movn        $v1, $t6, $t0
    ctx->pc = 0x10ad98u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 14));
    // 0x10ad9c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x10ad9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x10ada0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x10ada0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x10ada4: 0x31f38  dsll        $v1, $v1, 28
    ctx->pc = 0x10ada4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 28);
    // 0x10ada8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x10ada8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10adac: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x10adacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x10adb0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x10adb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x10adb4: 0x1475021  addu        $t2, $t2, $a3
    ctx->pc = 0x10adb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x10adb8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x10adb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x10adbc: 0xfd640000  sd          $a0, 0x0($t3)
    ctx->pc = 0x10adbcu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 4));
    // 0x10adc0: 0x1d00ffeb  bgtz        $t0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x10ADC0u;
    {
        const bool branch_taken_0x10adc0 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x10ADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ADC0u;
        // 0x10adc4: 0x256b0010  addiu       $t3, $t3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10adc0) {
            ctx->pc = 0x10AD70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ad70;
        }
    }
    ctx->pc = 0x10ADC8u;
label_10adc8:
    // 0x10adc8: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x10adc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x10adcc: 0x25e43100  addiu       $a0, $t7, 0x3100
    ctx->pc = 0x10adccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), 12544));
    // 0x10add0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10add0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x10add4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10add4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10add8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x10add8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x10addc: 0x3463b430  ori         $v1, $v1, 0xB430
    ctx->pc = 0x10addcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46128);
    // 0x10ade0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10ade0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10ade4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x10ade4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x10ade8: 0x3442b420  ori         $v0, $v0, 0xB420
    ctx->pc = 0x10ade8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46112);
    // 0x10adec: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10adecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10adf0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x10adf0u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0));
    // 0x10adf4: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x10adf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x10adf8: 0x24020105  addiu       $v0, $zero, 0x105
    ctx->pc = 0x10adf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x10adfc: 0x3e00008  jr          $ra
    ctx->pc = 0x10ADFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ADFCu;
        // 0x10ae00: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10ADFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AE04u;
}
