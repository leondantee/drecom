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

// Function: entry_0014e480
// Address: 0x14e480 - 0x14e4b0
void entry_0014e480_0x14e480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e480_0x14e480");
#endif

    ctx->pc = 0x14e480u;

    // 0x14e480: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14e484: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x14e484u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x14e488: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x14e488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x14e48c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14e48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14e490: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14E490u;
    {
        const bool branch_taken_0x14e490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e490) {
            ctx->pc = 0x14E4B0u;
            return;
        }
    }
    ctx->pc = 0x14E498u;
    // 0x14e498: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e49c: 0x904213a7  lbu         $v0, 0x13A7($v0)
    ctx->pc = 0x14e49cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5031)));
    // 0x14e4a0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14e4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14e4a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x14e4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14e4a8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14E4A8u;
    {
        const bool branch_taken_0x14e4a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14e4a8) {
            ctx->pc = 0x14E4C4u;
            return;
        }
    }
    ctx->pc = 0x14E4B0u;
}
