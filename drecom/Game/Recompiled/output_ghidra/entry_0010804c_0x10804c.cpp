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

// Function: entry_0010804c
// Address: 0x10804c - 0x10807c
void entry_0010804c_0x10804c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010804c_0x10804c");
#endif

    ctx->pc = 0x10804cu;

    // 0x10804c: 0x8c433e30  lw          $v1, 0x3E30($v0)
    ctx->pc = 0x10804cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15920)));
    // 0x108050: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x108050u;
    {
        const bool branch_taken_0x108050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x108050) {
            ctx->pc = 0x108054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108050u;
            // 0x108054: 0xad2000e8  sw          $zero, 0xE8($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 232), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108080u;
            return;
        }
    }
    ctx->pc = 0x108058u;
    // 0x108058: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x108058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10805c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x10805cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x108060: 0x8c443c00  lw          $a0, 0x3C00($v0)
    ctx->pc = 0x108060u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x383C00u));
    // 0x108064: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x108064u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x108068: 0x8c663c0c  lw          $a2, 0x3C0C($v1)
    ctx->pc = 0x108068u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x383C0Cu));
    // 0x10806c: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x10806cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x108070: 0x8ca23c18  lw          $v0, 0x3C18($a1)
    ctx->pc = 0x108070u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x383C18u));
    // 0x108074: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x108074u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
    // 0x108078: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x108078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    ctx->pc = 0x10807cu;
}
