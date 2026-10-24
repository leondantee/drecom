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

// Function: entry_0012ec5c
// Address: 0x12ec5c - 0x12ec94
void entry_0012ec5c_0x12ec5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ec5c_0x12ec5c");
#endif

    ctx->pc = 0x12ec5cu;

    // 0x12ec5c: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x12ec5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x12ec60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12ec60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12ec64: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x12ec64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12ec68: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x12ec68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x12ec6c: 0x24428980  addiu       $v0, $v0, -0x7680
    ctx->pc = 0x12ec6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936960));
    // 0x12ec70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12ec70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12ec74: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x12ec74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12ec78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12ec78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ec7c: 0x1282001d  beq         $s4, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x12EC7Cu;
    {
        const bool branch_taken_0x12ec7c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x12ec7c) {
            ctx->pc = 0x12ECF4u;
            return;
        }
    }
    ctx->pc = 0x12EC84u;
    // 0x12ec84: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x12EC84u;
    {
        const bool branch_taken_0x12ec84 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ec84) {
            ctx->pc = 0x12EC94u;
            return;
        }
    }
    ctx->pc = 0x12EC8Cu;
    // 0x12ec8c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x12EC8Cu;
    {
        const bool branch_taken_0x12ec8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ec8c) {
            ctx->pc = 0x12ED60u;
            return;
        }
    }
    ctx->pc = 0x12EC94u;
}
