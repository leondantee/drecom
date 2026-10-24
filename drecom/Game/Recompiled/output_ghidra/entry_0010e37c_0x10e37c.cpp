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

// Function: entry_0010e37c
// Address: 0x10e37c - 0x10e3a8
void entry_0010e37c_0x10e37c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e37c_0x10e37c");
#endif

    ctx->pc = 0x10e37cu;

    // 0x10e37c: 0xae2045f8  sw          $zero, 0x45F8($s1)
    ctx->pc = 0x10e37cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 17912), GPR_U32(ctx, 0));
    // 0x10e380: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x10E380u;
    {
        const bool branch_taken_0x10e380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E380u;
        // 0x10e384: 0x8eb03c00  lw          $s0, 0x3C00($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 15360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e380) {
            ctx->pc = 0x10E444u;
            return;
        }
    }
    ctx->pc = 0x10E388u;
    // 0x10e388: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x10e388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x10e38c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10e38cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e390: 0x2432025  or          $a0, $s2, $v1
    ctx->pc = 0x10e390u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x10e394: 0x851025  or          $v0, $a0, $a1
    ctx->pc = 0x10e394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x10e398: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x10e398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x10e39c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x10E39Cu;
    {
        const bool branch_taken_0x10e39c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E39Cu;
        // 0x10e3a0: 0x24820400  addiu       $v0, $a0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e39c) {
            ctx->pc = 0x10E404u;
            return;
        }
    }
    ctx->pc = 0x10E3A4u;
    // 0x10e3a4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x10e3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    ctx->pc = 0x10e3a8u;
}
