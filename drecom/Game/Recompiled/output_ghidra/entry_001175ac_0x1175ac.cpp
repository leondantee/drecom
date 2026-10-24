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

// Function: entry_001175ac
// Address: 0x1175ac - 0x1175d0
void entry_001175ac_0x1175ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001175ac_0x1175ac");
#endif

    ctx->pc = 0x1175acu;

    // 0x1175ac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1175acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1175b0: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x1175b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x1175b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1175b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1175b8: 0x123182b  sltu        $v1, $t1, $v1
    ctx->pc = 0x1175b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1175bc: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1175BCu;
    {
        const bool branch_taken_0x1175bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1175bc) {
            ctx->pc = 0x1175C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1175BCu;
            // 0x1175c0: 0x8ce8000c  lw          $t0, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1175F0u;
            return;
        }
    }
    ctx->pc = 0x1175C4u;
    // 0x1175c4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1175c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1175c8: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x1175c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x1175cc: 0x8ce70008  lw          $a3, 0x8($a3)
    ctx->pc = 0x1175ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    ctx->pc = 0x1175d0u;
}
