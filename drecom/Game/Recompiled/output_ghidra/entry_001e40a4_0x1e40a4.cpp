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

// Function: entry_001e40a4
// Address: 0x1e40a4 - 0x1e40c8
void entry_001e40a4_0x1e40a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e40a4_0x1e40a4");
#endif

    ctx->pc = 0x1e40a4u;

    // 0x1e40a4: 0x32e30001  andi        $v1, $s7, 0x1
    ctx->pc = 0x1e40a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x1e40a8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E40A8u;
    {
        const bool branch_taken_0x1e40a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e40a8) {
            ctx->pc = 0x1E40C8u;
            return;
        }
    }
    ctx->pc = 0x1E40B0u;
    // 0x1e40b0: 0x8e040108  lw          $a0, 0x108($s0)
    ctx->pc = 0x1e40b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e40b4: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1e40b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1e40b8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1e40b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1e40bc: 0xae030108  sw          $v1, 0x108($s0)
    ctx->pc = 0x1e40bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 3));
    // 0x1e40c0: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e40c0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e40c4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1e40c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->pc = 0x1e40c8u;
}
