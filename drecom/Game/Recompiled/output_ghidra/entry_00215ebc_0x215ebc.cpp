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

// Function: entry_00215ebc
// Address: 0x215ebc - 0x215ed0
void entry_00215ebc_0x215ebc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215ebc_0x215ebc");
#endif

    ctx->pc = 0x215ebcu;

    // 0x215ebc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x215ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215ec0: 0x8ca30038  lw          $v1, 0x38($a1)
    ctx->pc = 0x215ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x215ec4: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x215EC4u;
    {
        const bool branch_taken_0x215ec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x215ec4) {
            ctx->pc = 0x215EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215EC4u;
            // 0x215ec8: 0xaca40038  sw          $a0, 0x38($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215EF0u;
            return;
        }
    }
    ctx->pc = 0x215ECCu;
    // 0x215ecc: 0x0  nop
    ctx->pc = 0x215eccu;
    // NOP
    ctx->pc = 0x215ed0u;
}
