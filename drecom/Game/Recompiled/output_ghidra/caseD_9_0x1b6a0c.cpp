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

// Function: caseD_9
// Address: 0x1b6a0c - 0x1b6a38
void caseD_9_0x1b6a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x1b6a0c");
#endif

    ctx->pc = 0x1b6a0cu;

    // 0x1b6a0c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6a10: 0x8c821b6c  lw          $v0, 0x1B6C($a0)
    ctx->pc = 0x1b6a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7020)));
    // 0x1b6a14: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B6A14u;
    {
        const bool branch_taken_0x1b6a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6a14) {
            ctx->pc = 0x1B6A38u;
            return;
        }
    }
    ctx->pc = 0x1B6A1Cu;
    // 0x1b6a1c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b6a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b6a20: 0x8c251a98  lw          $a1, 0x1A98($at)
    ctx->pc = 0x1b6a20u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1b6a24: 0x3c07ff7f  lui         $a3, 0xFF7F
    ctx->pc = 0x1b6a24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65407 << 16));
    // 0x1b6a28: 0x34e6ffff  ori         $a2, $a3, 0xFFFF
    ctx->pc = 0x1b6a28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x1b6a2c: 0xa64024  and         $t0, $a1, $a2
    ctx->pc = 0x1b6a2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x1b6a30: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b6a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b6a34: 0xac281a98  sw          $t0, 0x1A98($at)
    ctx->pc = 0x1b6a34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x1b6a38u;
}
