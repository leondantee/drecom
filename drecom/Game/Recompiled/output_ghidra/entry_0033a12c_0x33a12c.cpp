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

// Function: entry_0033a12c
// Address: 0x33a12c - 0x33a164
void entry_0033a12c_0x33a12c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033a12c_0x33a12c");
#endif

    ctx->pc = 0x33a12cu;

    // 0x33a12c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x33a12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33a130: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x33a130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x33a134: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33a134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33a138: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x33a138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x33a13c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33a13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33a140: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x33a140u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x33a144: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x33a144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x33a148: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x33a148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x33a14c: 0x3202001f  andi        $v0, $s0, 0x1F
    ctx->pc = 0x33a14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x33a150: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33A150u;
    {
        const bool branch_taken_0x33a150 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x33a150) {
            ctx->pc = 0x33A164u;
            return;
        }
    }
    ctx->pc = 0x33A158u;
    // 0x33a158: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x33A158u;
    {
        const bool branch_taken_0x33a158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a158) {
            ctx->pc = 0x33A164u;
            return;
        }
    }
    ctx->pc = 0x33A160u;
    // 0x33a160: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x33a160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    ctx->pc = 0x33a164u;
}
