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

// Function: entry_0010ad70
// Address: 0x10ad70 - 0x10adc8
void entry_0010ad70_0x10ad70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ad70_0x10ad70");
#endif

    ctx->pc = 0x10ad70u;

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
}
