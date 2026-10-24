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

// Function: entry_001aff38
// Address: 0x1aff38 - 0x1aff8c
void entry_001aff38_0x1aff38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aff38_0x1aff38");
#endif

    ctx->pc = 0x1aff38u;

label_1aff38:
    // 0x1aff38: 0xae920044  sw          $s2, 0x44($s4)
    ctx->pc = 0x1aff38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 18));
    // 0x1aff3c: 0x26520240  addiu       $s2, $s2, 0x240
    ctx->pc = 0x1aff3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
    // 0x1aff40: 0x269400a0  addiu       $s4, $s4, 0xA0
    ctx->pc = 0x1aff40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    // 0x1aff44: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1aff44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1aff48: 0x1620fffb  bnez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1AFF48u;
    {
        const bool branch_taken_0x1aff48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aff48) {
            ctx->pc = 0x1AFF38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aff38;
        }
    }
    ctx->pc = 0x1AFF50u;
    // 0x1aff50: 0x8ea40020  lw          $a0, 0x20($s5)
    ctx->pc = 0x1aff50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1aff54: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1aff54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1aff58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1aff58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1aff5c: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1aff5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1aff60: 0x26e40a68  addiu       $a0, $s7, 0xA68
    ctx->pc = 0x1aff60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1aff64: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1aff64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1aff68: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1aff68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1aff6c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1aff6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1aff70: 0x8ee30a68  lw          $v1, 0xA68($s7)
    ctx->pc = 0x1aff70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x1aff74: 0x2464000f  addiu       $a0, $v1, 0xF
    ctx->pc = 0x1aff74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1aff78: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1aff78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1aff7c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1aff7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1aff80: 0xaee30a68  sw          $v1, 0xA68($s7)
    ctx->pc = 0x1aff80u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 2664), GPR_U32(ctx, 3));
    // 0x1aff84: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1AFF84u;
    {
        const bool branch_taken_0x1aff84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aff84) {
            ctx->pc = 0x1AFFB8u;
            return;
        }
    }
    ctx->pc = 0x1AFF8Cu;
}
