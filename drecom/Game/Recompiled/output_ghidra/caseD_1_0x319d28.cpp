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

// Function: caseD_1
// Address: 0x319d28 - 0x319d50
void caseD_1_0x319d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x319d28");
#endif

    ctx->pc = 0x319d28u;

    // 0x319d28: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x319d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x319d2c: 0x8c851290  lw          $a1, 0x1290($a0)
    ctx->pc = 0x319d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4752)));
    // 0x319d30: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x319d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x319d34: 0xac831290  sw          $v1, 0x1290($a0)
    ctx->pc = 0x319d34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4752), GPR_U32(ctx, 3));
    // 0x319d38: 0x2c610005  sltiu       $at, $v1, 0x5
    ctx->pc = 0x319d38u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x319d3c: 0x142002c6  bnez        $at, . + 4 + (0x2C6 << 2)
    ctx->pc = 0x319D3Cu;
    {
        const bool branch_taken_0x319d3c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x319d3c) {
            ctx->pc = 0x31A858u;
            return;
        }
    }
    ctx->pc = 0x319D44u;
    // 0x319d44: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x319d44u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319d48: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x319D48u;
    {
        const bool branch_taken_0x319d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x319d48) {
            ctx->pc = 0x319D80u;
            return;
        }
    }
    ctx->pc = 0x319D50u;
}
