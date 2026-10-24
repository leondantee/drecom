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

// Function: entry_0010ace4
// Address: 0x10ace4 - 0x10ad0c
void entry_0010ace4_0x10ace4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ace4_0x10ace4");
#endif

    ctx->pc = 0x10ace4u;

    // 0x10ace4: 0x8c443bf4  lw          $a0, 0x3BF4($v0)
    ctx->pc = 0x10ace4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15348)));
    // 0x10ace8: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x10ACE8u;
    {
        const bool branch_taken_0x10ace8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ACE8u;
        // 0x10acec: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ace8) {
            ctx->pc = 0x10AD1Cu;
            return;
        }
    }
    ctx->pc = 0x10ACF0u;
    // 0x10acf0: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x10acf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10acf4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10ACF4u;
    {
        const bool branch_taken_0x10acf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10acf4) {
            ctx->pc = 0x10AD1Cu;
            return;
        }
    }
    ctx->pc = 0x10ACFCu;
    // 0x10acfc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x10acfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10ad00: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10AD00u;
    {
        const bool branch_taken_0x10ad00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD00u;
        // 0x10ad04: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ad00) {
            ctx->pc = 0x10AD1Cu;
            return;
        }
    }
    ctx->pc = 0x10AD08u;
    // 0x10ad08: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x10ad08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->pc = 0x10ad0cu;
}
