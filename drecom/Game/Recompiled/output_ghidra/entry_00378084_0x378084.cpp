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

// Function: entry_00378084
// Address: 0x378084 - 0x3780a4
void entry_00378084_0x378084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00378084_0x378084");
#endif

    ctx->pc = 0x378084u;

    // 0x378084: 0x8e030118  lw          $v1, 0x118($s0)
    ctx->pc = 0x378084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x378088: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x378088u;
    {
        const bool branch_taken_0x378088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x378088) {
            ctx->pc = 0x3780A4u;
            return;
        }
    }
    ctx->pc = 0x378090u;
    // 0x378090: 0x26050118  addiu       $a1, $s0, 0x118
    ctx->pc = 0x378090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
    // 0x378094: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x378094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x378098: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x378098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x37809c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x37809cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3780a0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3780a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x3780a4u;
}
