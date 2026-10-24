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

// Function: entry_00222044
// Address: 0x222044 - 0x222078
void entry_00222044_0x222044(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00222044_0x222044");
#endif

    ctx->pc = 0x222044u;

    // 0x222044: 0x32270001  andi        $a3, $s1, 0x1
    ctx->pc = 0x222044u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x222048: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x222048u;
    {
        const bool branch_taken_0x222048 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x222048) {
            ctx->pc = 0x2220A0u;
            return;
        }
    }
    ctx->pc = 0x222050u;
    // 0x222050: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x222050u;
    {
        const bool branch_taken_0x222050 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x222050) {
            ctx->pc = 0x222078u;
            return;
        }
    }
    ctx->pc = 0x222058u;
    // 0x222058: 0x134080  sll         $t0, $s3, 2
    ctx->pc = 0x222058u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x22205c: 0x2884821  addu        $t1, $s4, $t0
    ctx->pc = 0x22205cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x222060: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x222060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x222064: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x222064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x222068: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x222068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22206c: 0xac820060  sw          $v0, 0x60($a0)
    ctx->pc = 0x22206cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 2));
    // 0x222070: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x222070u;
    {
        const bool branch_taken_0x222070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x222070) {
            ctx->pc = 0x222090u;
            return;
        }
    }
    ctx->pc = 0x222078u;
}
