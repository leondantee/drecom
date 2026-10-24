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

// Function: entry_0014f9f4
// Address: 0x14f9f4 - 0x14fa1c
void entry_0014f9f4_0x14f9f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f9f4_0x14f9f4");
#endif

    ctx->pc = 0x14f9f4u;

    // 0x14f9f4: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x14f9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x14f9f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14f9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14f9fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14F9FCu;
    {
        const bool branch_taken_0x14f9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f9fc) {
            ctx->pc = 0x14FA1Cu;
            return;
        }
    }
    ctx->pc = 0x14FA04u;
    // 0x14fa04: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x14fa04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14fa08: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x14fa08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x14fa0c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14fa0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14fa10: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x14fa10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x14fa14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14FA14u;
    {
        const bool branch_taken_0x14fa14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fa14) {
            ctx->pc = 0x14FA28u;
            return;
        }
    }
    ctx->pc = 0x14FA1Cu;
}
