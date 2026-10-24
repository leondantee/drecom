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

// Function: entry_0036d288
// Address: 0x36d288 - 0x36d2c4
void entry_0036d288_0x36d288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036d288_0x36d288");
#endif

    ctx->pc = 0x36d288u;

    // 0x36d288: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x36d288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36d28c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x36d28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36d290: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x36d290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x36d294: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x36d294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x36d298: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x36d298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x36d29c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36d29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36d2a0: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x36d2a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36d2a4: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x36d2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x36d2a8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36D2A8u;
    {
        const bool branch_taken_0x36d2a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36d2a8) {
            ctx->pc = 0x36D2C4u;
            return;
        }
    }
    ctx->pc = 0x36D2B0u;
    // 0x36d2b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36d2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36d2b4: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x36d2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x36d2b8: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x36d2b8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x36d2bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x36D2BCu;
    {
        const bool branch_taken_0x36d2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d2bc) {
            ctx->pc = 0x36D2D8u;
            return;
        }
    }
    ctx->pc = 0x36D2C4u;
}
