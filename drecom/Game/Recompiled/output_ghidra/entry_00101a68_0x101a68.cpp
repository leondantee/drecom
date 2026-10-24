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

// Function: entry_00101a68
// Address: 0x101a68 - 0x101a8c
void entry_00101a68_0x101a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101a68_0x101a68");
#endif

    ctx->pc = 0x101a68u;

    // 0x101a68: 0xfe020060  sd          $v0, 0x60($s0)
    ctx->pc = 0x101a68u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 2));
    // 0x101a6c: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x101a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x101a70: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x101A70u;
    {
        const bool branch_taken_0x101a70 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x101A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A70u;
        // 0x101a74: 0xfe020078  sd          $v0, 0x78($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 120), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101a70) {
            ctx->pc = 0x101A8Cu;
            return;
        }
    }
    ctx->pc = 0x101A78u;
    // 0x101a78: 0x32a20003  andi        $v0, $s5, 0x3
    ctx->pc = 0x101a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)3);
    // 0x101a7c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x101a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x101a80: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x101a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x101a84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x101A84u;
    {
        const bool branch_taken_0x101a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A84u;
        // 0x101a88: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101a84) {
            ctx->pc = 0x101A90u;
            return;
        }
    }
    ctx->pc = 0x101A8Cu;
}
