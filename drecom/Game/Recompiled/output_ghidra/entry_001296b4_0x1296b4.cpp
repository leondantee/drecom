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

// Function: entry_001296b4
// Address: 0x1296b4 - 0x1296dc
void entry_001296b4_0x1296b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001296b4_0x1296b4");
#endif

    ctx->pc = 0x1296b4u;

    // 0x1296b4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1296b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1296b8: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x1296b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1296bc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1296BCu;
    {
        const bool branch_taken_0x1296bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1296bc) {
            ctx->pc = 0x1296DCu;
            return;
        }
    }
    ctx->pc = 0x1296C4u;
    // 0x1296c4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1296c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1296c8: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x1296c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x1296cc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1296ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1296d0: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1296d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x1296d4: 0x100001a7  b           . + 4 + (0x1A7 << 2)
    ctx->pc = 0x1296D4u;
    {
        const bool branch_taken_0x1296d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1296d4) {
            ctx->pc = 0x129D74u;
            return;
        }
    }
    ctx->pc = 0x1296DCu;
}
