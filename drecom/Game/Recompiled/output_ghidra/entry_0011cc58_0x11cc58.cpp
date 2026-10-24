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

// Function: entry_0011cc58
// Address: 0x11cc58 - 0x11cc78
void entry_0011cc58_0x11cc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cc58_0x11cc58");
#endif

    ctx->pc = 0x11cc58u;

    // 0x11cc58: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x11cc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x11cc5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11CC5Cu;
    {
        const bool branch_taken_0x11cc5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC5Cu;
        // 0x11cc60: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc5c) {
            ctx->pc = 0x11CC78u;
            return;
        }
    }
    ctx->pc = 0x11CC64u;
    // 0x11cc64: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x11cc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x11cc68: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x11cc68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x11cc6c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x11cc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x11cc70: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11CC70u;
    {
        const bool branch_taken_0x11cc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC70u;
        // 0x11cc74: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc70) {
            ctx->pc = 0x11CC88u;
            return;
        }
    }
    ctx->pc = 0x11CC78u;
}
