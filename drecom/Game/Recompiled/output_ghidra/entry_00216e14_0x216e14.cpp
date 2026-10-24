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

// Function: entry_00216e14
// Address: 0x216e14 - 0x216e40
void entry_00216e14_0x216e14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216e14_0x216e14");
#endif

    ctx->pc = 0x216e14u;

    // 0x216e14: 0x26650008  addiu       $a1, $s3, 0x8
    ctx->pc = 0x216e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x216e18: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x216e18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216e1c: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x216e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
    // 0x216e20: 0xc51025  or          $v0, $a2, $a1
    ctx->pc = 0x216e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x216e24: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x216e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x216e28: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x216E28u;
    {
        const bool branch_taken_0x216e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216E28u;
        // 0x216e2c: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216e28) {
            ctx->pc = 0x216E9Cu;
            return;
        }
    }
    ctx->pc = 0x216E30u;
    // 0x216e30: 0x24c20400  addiu       $v0, $a2, 0x400
    ctx->pc = 0x216e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1024));
    // 0x216e34: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x216e34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x216e38: 0x3c090062  lui         $t1, 0x62
    ctx->pc = 0x216e38u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)98 << 16));
    // 0x216e3c: 0x3c0b0021  lui         $t3, 0x21
    ctx->pc = 0x216e3cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)33 << 16));
    ctx->pc = 0x216e40u;
}
