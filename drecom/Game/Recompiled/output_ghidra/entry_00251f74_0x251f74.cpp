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

// Function: entry_00251f74
// Address: 0x251f74 - 0x251fb4
void entry_00251f74_0x251f74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00251f74_0x251f74");
#endif

    switch (ctx->pc) {
        case 0x251f90u: goto label_251f90;
        default: break;
    }

    ctx->pc = 0x251f74u;

    // 0x251f74: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x251f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x251f78: 0x2444dc40  addiu       $a0, $v0, -0x23C0
    ctx->pc = 0x251f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958144));
    // 0x251f7c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x251f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x251f80: 0x2445b430  addiu       $a1, $v0, -0x4BD0
    ctx->pc = 0x251f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947888));
    // 0x251f84: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x251f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x251f88: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x251F88u;
    SET_GPR_U32(ctx, 31, 0x251F90u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x251F90u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x251F90u) { return; }
    ctx->pc = 0x251F90u;
label_251f90:
    // 0x251f90: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x251f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x251f94: 0x2464dc40  addiu       $a0, $v1, -0x23C0
    ctx->pc = 0x251f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958144));
    // 0x251f98: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x251f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x251f9c: 0xac640104  sw          $a0, 0x104($v1)
    ctx->pc = 0x251f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 4));
    // 0x251fa0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x251fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x251fa4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x251fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x251fa8: 0xa0640108  sb          $a0, 0x108($v1)
    ctx->pc = 0x251fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 264), (uint8_t)GPR_U32(ctx, 4));
    // 0x251fac: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x251FACu;
    {
        const bool branch_taken_0x251fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251fac) {
            ctx->pc = 0x2520C8u;
            return;
        }
    }
    ctx->pc = 0x251FB4u;
}
