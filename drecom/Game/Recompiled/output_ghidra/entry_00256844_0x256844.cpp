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

// Function: entry_00256844
// Address: 0x256844 - 0x256870
void entry_00256844_0x256844(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00256844_0x256844");
#endif

    ctx->pc = 0x256844u;

    // 0x256844: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x256844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x256848: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x256848u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x25684c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25684cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x256850: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x256850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x256854: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x256854u;
    {
        const bool branch_taken_0x256854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256854) {
            ctx->pc = 0x256870u;
            return;
        }
    }
    ctx->pc = 0x25685Cu;
    // 0x25685c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x25685cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x256860: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x256860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x256864: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x256864u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x256868: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x256868u;
    {
        const bool branch_taken_0x256868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x256868) {
            ctx->pc = 0x256878u;
            return;
        }
    }
    ctx->pc = 0x256870u;
}
