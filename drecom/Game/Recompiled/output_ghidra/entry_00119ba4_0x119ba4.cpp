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

// Function: entry_00119ba4
// Address: 0x119ba4 - 0x119bc0
void entry_00119ba4_0x119ba4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119ba4_0x119ba4");
#endif

    ctx->pc = 0x119ba4u;

    // 0x119ba4: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x119BA4u;
    {
        const bool branch_taken_0x119ba4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x119BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119BA4u;
        // 0x119ba8: 0x24a2fbcd  addiu       $v0, $a1, -0x433 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966221));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119ba4) {
            ctx->pc = 0x119BC0u;
            return;
        }
    }
    ctx->pc = 0x119BACu;
    // 0x119bac: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x119bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x119bb0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x119bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x119bb4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x119bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x119bb8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x119BB8u;
    {
        const bool branch_taken_0x119bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119BB8u;
        // 0x119bbc: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119bb8) {
            ctx->pc = 0x119BE0u;
            return;
        }
    }
    ctx->pc = 0x119BC0u;
}
