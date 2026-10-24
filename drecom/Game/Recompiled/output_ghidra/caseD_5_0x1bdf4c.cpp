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

// Function: caseD_5
// Address: 0x1bdf4c - 0x1bdf78
void caseD_5_0x1bdf4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1bdf4c");
#endif

    ctx->pc = 0x1bdf4cu;

    // 0x1bdf4c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bdf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdf50: 0x8c631b6c  lw          $v1, 0x1B6C($v1)
    ctx->pc = 0x1bdf50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7020)));
    // 0x1bdf54: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BDF54u;
    {
        const bool branch_taken_0x1bdf54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdf54) {
            ctx->pc = 0x1BDF78u;
            return;
        }
    }
    ctx->pc = 0x1BDF5Cu;
    // 0x1bdf5c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bdf5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bdf60: 0x8c251a98  lw          $a1, 0x1A98($at)
    ctx->pc = 0x1bdf60u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1bdf64: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x1bdf64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x1bdf68: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x1bdf68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1bdf6c: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x1bdf6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1bdf70: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bdf70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bdf74: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x1bdf74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x1bdf78u;
}
