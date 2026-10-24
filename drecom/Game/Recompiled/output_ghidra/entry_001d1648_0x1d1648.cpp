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

// Function: entry_001d1648
// Address: 0x1d1648 - 0x1d1680
void entry_001d1648_0x1d1648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1648_0x1d1648");
#endif

    ctx->pc = 0x1d1648u;

    // 0x1d1648: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x1d1648u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1d164c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d164cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d1650: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d1650u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d1654: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d1654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1d1658: 0x24428980  addiu       $v0, $v0, -0x7680
    ctx->pc = 0x1d1658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936960));
    // 0x1d165c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d165cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d1660: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1d1660u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d1664: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1668: 0x13c20023  beq         $fp, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1D1668u;
    {
        const bool branch_taken_0x1d1668 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d1668) {
            ctx->pc = 0x1D16F8u;
            return;
        }
    }
    ctx->pc = 0x1D1670u;
    // 0x1d1670: 0x13c00003  beqz        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1670u;
    {
        const bool branch_taken_0x1d1670 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1670) {
            ctx->pc = 0x1D1680u;
            return;
        }
    }
    ctx->pc = 0x1D1678u;
    // 0x1d1678: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1D1678u;
    {
        const bool branch_taken_0x1d1678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1678) {
            ctx->pc = 0x1D1788u;
            return;
        }
    }
    ctx->pc = 0x1D1680u;
}
