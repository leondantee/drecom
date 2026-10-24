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

// Function: entry_001184e4
// Address: 0x1184e4 - 0x118500
void entry_001184e4_0x1184e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001184e4_0x1184e4");
#endif

    ctx->pc = 0x1184e4u;

    // 0x1184e4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1184e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1184e8: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x1184e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x1184ec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1184ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1184f0: 0x103182b  sltu        $v1, $t0, $v1
    ctx->pc = 0x1184f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1184f4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1184F4u;
    {
        const bool branch_taken_0x1184f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1184F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1184F4u;
        // 0x1184f8: 0x25660003  addiu       $a2, $t3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1184f4) {
            ctx->pc = 0x11852Cu;
            return;
        }
    }
    ctx->pc = 0x1184FCu;
    // 0x1184fc: 0x8d290008  lw          $t1, 0x8($t1)
    ctx->pc = 0x1184fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    ctx->pc = 0x118500u;
}
