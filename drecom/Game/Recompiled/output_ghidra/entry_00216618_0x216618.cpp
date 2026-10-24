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

// Function: entry_00216618
// Address: 0x216618 - 0x216628
void entry_00216618_0x216618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216618_0x216618");
#endif

    ctx->pc = 0x216618u;

    // 0x216618: 0x15020003  bne         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x216618u;
    {
        const bool branch_taken_0x216618 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x21661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216618u;
        // 0x21661c: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216618) {
            ctx->pc = 0x216628u;
            return;
        }
    }
    ctx->pc = 0x216620u;
    // 0x216620: 0xa2400407  sb          $zero, 0x407($s2)
    ctx->pc = 0x216620u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1031), (uint8_t)GPR_U32(ctx, 0));
    // 0x216624: 0x240803ff  addiu       $t0, $zero, 0x3FF
    ctx->pc = 0x216624u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    ctx->pc = 0x216628u;
}
