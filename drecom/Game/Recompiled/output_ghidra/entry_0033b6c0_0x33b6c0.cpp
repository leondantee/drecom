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

// Function: entry_0033b6c0
// Address: 0x33b6c0 - 0x33b6e4
void entry_0033b6c0_0x33b6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033b6c0_0x33b6c0");
#endif

    ctx->pc = 0x33b6c0u;

    // 0x33b6c0: 0x8ed20000  lw          $s2, 0x0($s6)
    ctx->pc = 0x33b6c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x33b6c4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x33b6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x33b6c8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x33b6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x33b6cc: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x33B6CCu;
    {
        const bool branch_taken_0x33b6cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b6cc) {
            ctx->pc = 0x33B780u;
            return;
        }
    }
    ctx->pc = 0x33B6D4u;
    // 0x33b6d4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x33b6d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33b6d8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x33b6d8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33b6dc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x33B6DCu;
    {
        const bool branch_taken_0x33b6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b6dc) {
            ctx->pc = 0x33B710u;
            return;
        }
    }
    ctx->pc = 0x33B6E4u;
}
