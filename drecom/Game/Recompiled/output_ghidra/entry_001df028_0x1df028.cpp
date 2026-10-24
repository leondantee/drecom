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

// Function: entry_001df028
// Address: 0x1df028 - 0x1df088
void entry_001df028_0x1df028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df028_0x1df028");
#endif

    ctx->pc = 0x1df028u;

label_1df028:
    // 0x1df028: 0xae920044  sw          $s2, 0x44($s4)
    ctx->pc = 0x1df028u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 18));
    // 0x1df02c: 0x26520240  addiu       $s2, $s2, 0x240
    ctx->pc = 0x1df02cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
    // 0x1df030: 0x269400b0  addiu       $s4, $s4, 0xB0
    ctx->pc = 0x1df030u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
    // 0x1df034: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1df034u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1df038: 0x1620fffb  bnez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1DF038u;
    {
        const bool branch_taken_0x1df038 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df038) {
            ctx->pc = 0x1DF028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df028;
        }
    }
    ctx->pc = 0x1DF040u;
    // 0x1df040: 0x8ea40020  lw          $a0, 0x20($s5)
    ctx->pc = 0x1df040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1df044: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1df044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1df048: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1df048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1df04c: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1df04cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1df050: 0x26e40a68  addiu       $a0, $s7, 0xA68
    ctx->pc = 0x1df050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1df054: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1df054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1df058: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1df058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1df05c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1df05cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1df060: 0x26e40a68  addiu       $a0, $s7, 0xA68
    ctx->pc = 0x1df060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1df064: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1df064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1df068: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1df068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1df06c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1df06cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1df070: 0x26e50a68  addiu       $a1, $s7, 0xA68
    ctx->pc = 0x1df070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1df074: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1df074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1df078: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1df078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1df07c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1df07cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1df080: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1df080u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1df084: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1df084u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->pc = 0x1df088u;
}
