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

// Function: entry_00174578
// Address: 0x174578 - 0x1745d8
void entry_00174578_0x174578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174578_0x174578");
#endif

    ctx->pc = 0x174578u;

label_174578:
    // 0x174578: 0xae920044  sw          $s2, 0x44($s4)
    ctx->pc = 0x174578u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 18));
    // 0x17457c: 0x26520240  addiu       $s2, $s2, 0x240
    ctx->pc = 0x17457cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
    // 0x174580: 0x269400a0  addiu       $s4, $s4, 0xA0
    ctx->pc = 0x174580u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    // 0x174584: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x174584u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x174588: 0x1620fffb  bnez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x174588u;
    {
        const bool branch_taken_0x174588 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x174588) {
            ctx->pc = 0x174578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174578;
        }
    }
    ctx->pc = 0x174590u;
    // 0x174590: 0x8ea40020  lw          $a0, 0x20($s5)
    ctx->pc = 0x174590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x174594: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x174594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x174598: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x174598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17459c: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x17459cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1745a0: 0x26e40a68  addiu       $a0, $s7, 0xA68
    ctx->pc = 0x1745a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1745a4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1745a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1745a8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1745a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1745ac: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1745acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1745b0: 0x26e40a68  addiu       $a0, $s7, 0xA68
    ctx->pc = 0x1745b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1745b4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1745b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1745b8: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1745b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1745bc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1745bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1745c0: 0x26e50a68  addiu       $a1, $s7, 0xA68
    ctx->pc = 0x1745c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1745c4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1745c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1745c8: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1745c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1745cc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1745ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1745d0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1745d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1745d4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1745d4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->pc = 0x1745d8u;
}
