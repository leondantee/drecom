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

// Function: entry_001d5080
// Address: 0x1d5080 - 0x1d50a0
void entry_001d5080_0x1d5080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5080_0x1d5080");
#endif

    ctx->pc = 0x1d5080u;

    // 0x1d5080: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x1d5080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x1d5084: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1d5084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1d5088: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D5088u;
    {
        const bool branch_taken_0x1d5088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5088) {
            ctx->pc = 0x1D50A0u;
            return;
        }
    }
    ctx->pc = 0x1D5090u;
    // 0x1d5090: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1d5090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d5094: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1d5094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1d5098: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1d5098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d509c: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1d509cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    ctx->pc = 0x1d50a0u;
}
