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

// Function: entry_001df238
// Address: 0x1df238 - 0x1df298
void entry_001df238_0x1df238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df238_0x1df238");
#endif

    ctx->pc = 0x1df238u;

label_1df238:
    // 0x1df238: 0xae920054  sw          $s2, 0x54($s4)
    ctx->pc = 0x1df238u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 18));
    // 0x1df23c: 0x26520240  addiu       $s2, $s2, 0x240
    ctx->pc = 0x1df23cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
    // 0x1df240: 0x269400b0  addiu       $s4, $s4, 0xB0
    ctx->pc = 0x1df240u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
    // 0x1df244: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1df244u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1df248: 0x1620fffb  bnez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1DF248u;
    {
        const bool branch_taken_0x1df248 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df248) {
            ctx->pc = 0x1DF238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df238;
        }
    }
    ctx->pc = 0x1DF250u;
    // 0x1df250: 0x8ea40020  lw          $a0, 0x20($s5)
    ctx->pc = 0x1df250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1df254: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1df254u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1df258: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1df258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1df25c: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1df25cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1df260: 0x26e40a68  addiu       $a0, $s7, 0xA68
    ctx->pc = 0x1df260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1df264: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1df264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1df268: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1df268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1df26c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1df26cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1df270: 0x26e40a68  addiu       $a0, $s7, 0xA68
    ctx->pc = 0x1df270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1df274: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1df274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1df278: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1df278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1df27c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1df27cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1df280: 0x26e50a68  addiu       $a1, $s7, 0xA68
    ctx->pc = 0x1df280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1df284: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1df284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1df288: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1df288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1df28c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1df28cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1df290: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1df290u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1df294: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1df294u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->pc = 0x1df298u;
}
