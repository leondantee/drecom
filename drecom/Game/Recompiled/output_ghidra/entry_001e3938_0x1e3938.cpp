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

// Function: entry_001e3938
// Address: 0x1e3938 - 0x1e3960
void entry_001e3938_0x1e3938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3938_0x1e3938");
#endif

    ctx->pc = 0x1e3938u;

    // 0x1e3938: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x1e3938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1e393c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1e393cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1e3940: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E3940u;
    {
        const bool branch_taken_0x1e3940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3940) {
            ctx->pc = 0x1E3960u;
            return;
        }
    }
    ctx->pc = 0x1E3948u;
    // 0x1e3948: 0x8e040108  lw          $a0, 0x108($s0)
    ctx->pc = 0x1e3948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e394c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1e394cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1e3950: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1e3950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1e3954: 0xae030108  sw          $v1, 0x108($s0)
    ctx->pc = 0x1e3954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 3));
    // 0x1e3958: 0x34128000  ori         $s2, $zero, 0x8000
    ctx->pc = 0x1e3958u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e395c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1e395cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    ctx->pc = 0x1e3960u;
}
