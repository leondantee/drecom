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

// Function: entry_00179320
// Address: 0x179320 - 0x179348
void entry_00179320_0x179320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179320_0x179320");
#endif

    ctx->pc = 0x179320u;

    // 0x179320: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x179320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x179324: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x179324u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x179328: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x179328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17932c: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x17932cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x179330: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x179330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x179334: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x179334u;
    {
        const bool branch_taken_0x179334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x179334) {
            ctx->pc = 0x179348u;
            return;
        }
    }
    ctx->pc = 0x17933Cu;
    // 0x17933c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x17933cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179340: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x179340u;
    {
        const bool branch_taken_0x179340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179340) {
            ctx->pc = 0x17934Cu;
            return;
        }
    }
    ctx->pc = 0x179348u;
}
