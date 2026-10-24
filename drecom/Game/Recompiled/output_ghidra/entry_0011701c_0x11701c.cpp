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

// Function: entry_0011701c
// Address: 0x11701c - 0x11703c
void entry_0011701c_0x11701c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011701c_0x11701c");
#endif

    ctx->pc = 0x11701cu;

    // 0x11701c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x11701cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x117020: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x117020u;
    {
        const bool branch_taken_0x117020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117020u;
        // 0x117024: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117020) {
            ctx->pc = 0x11709Cu;
            return;
        }
    }
    ctx->pc = 0x117028u;
    // 0x117028: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x117028u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x11702c: 0x56400008  bnel        $s2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x11702Cu;
    {
        const bool branch_taken_0x11702c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x11702c) {
            ctx->pc = 0x117030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11702Cu;
            // 0x117030: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117050u;
            return;
        }
    }
    ctx->pc = 0x117034u;
    // 0x117034: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x117034u;
    {
        const bool branch_taken_0x117034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117034u;
        // 0x117038: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117034) {
            ctx->pc = 0x1170A0u;
            return;
        }
    }
    ctx->pc = 0x11703Cu;
}
