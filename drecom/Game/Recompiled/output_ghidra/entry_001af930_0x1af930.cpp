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

// Function: entry_001af930
// Address: 0x1af930 - 0x1af990
void entry_001af930_0x1af930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af930_0x1af930");
#endif

    ctx->pc = 0x1af930u;

label_1af930:
    // 0x1af930: 0xae920044  sw          $s2, 0x44($s4)
    ctx->pc = 0x1af930u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 18));
    // 0x1af934: 0x26520240  addiu       $s2, $s2, 0x240
    ctx->pc = 0x1af934u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
    // 0x1af938: 0x269400a0  addiu       $s4, $s4, 0xA0
    ctx->pc = 0x1af938u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    // 0x1af93c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1af93cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1af940: 0x1620fffb  bnez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1AF940u;
    {
        const bool branch_taken_0x1af940 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af940) {
            ctx->pc = 0x1AF930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af930;
        }
    }
    ctx->pc = 0x1AF948u;
    // 0x1af948: 0x8ea40020  lw          $a0, 0x20($s5)
    ctx->pc = 0x1af948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1af94c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1af94cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1af950: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1af950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1af954: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1af954u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1af958: 0x26e40a68  addiu       $a0, $s7, 0xA68
    ctx->pc = 0x1af958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1af95c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1af95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1af960: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1af960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1af964: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1af964u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1af968: 0x8ee30a68  lw          $v1, 0xA68($s7)
    ctx->pc = 0x1af968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x1af96c: 0x2464000f  addiu       $a0, $v1, 0xF
    ctx->pc = 0x1af96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1af970: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1af970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1af974: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1af974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1af978: 0xaee30a68  sw          $v1, 0xA68($s7)
    ctx->pc = 0x1af978u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 2664), GPR_U32(ctx, 3));
    // 0x1af97c: 0x8eb00028  lw          $s0, 0x28($s5)
    ctx->pc = 0x1af97cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x1af980: 0x8ef30a68  lw          $s3, 0xA68($s7)
    ctx->pc = 0x1af980u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x1af984: 0x72609628  paddub      $s2, $s3, $zero
    ctx->pc = 0x1af984u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1af988: 0x8eb10020  lw          $s1, 0x20($s5)
    ctx->pc = 0x1af988u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1af98c: 0x0  nop
    ctx->pc = 0x1af98cu;
    // NOP
    ctx->pc = 0x1af990u;
}
