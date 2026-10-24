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

// Function: caseD_7
// Address: 0x1be188 - 0x1be1b4
void caseD_7_0x1be188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x1be188");
#endif

    ctx->pc = 0x1be188u;

    // 0x1be188: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1be188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be18c: 0x8c421b6c  lw          $v0, 0x1B6C($v0)
    ctx->pc = 0x1be18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7020)));
    // 0x1be190: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE190u;
    {
        const bool branch_taken_0x1be190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be190) {
            ctx->pc = 0x1BE1B4u;
            return;
        }
    }
    ctx->pc = 0x1BE198u;
    // 0x1be198: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1be198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1be19c: 0x8c251a98  lw          $a1, 0x1A98($at)
    ctx->pc = 0x1be19cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1be1a0: 0x3c04ff7f  lui         $a0, 0xFF7F
    ctx->pc = 0x1be1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65407 << 16));
    // 0x1be1a4: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x1be1a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1be1a8: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1be1a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1be1ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1be1acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1be1b0: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x1be1b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x1be1b4u;
}
