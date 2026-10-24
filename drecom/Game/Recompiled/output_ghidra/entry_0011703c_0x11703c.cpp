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

// Function: entry_0011703c
// Address: 0x11703c - 0x117050
void entry_0011703c_0x11703c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011703c_0x11703c");
#endif

    ctx->pc = 0x11703cu;

    // 0x11703c: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x11703cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x117040: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x117040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x117044: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x117044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x117048: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x117048u;
    {
        const bool branch_taken_0x117048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11704Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117048u;
        // 0x11704c: 0xa623000c  sh          $v1, 0xC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117048) {
            ctx->pc = 0x11709Cu;
            return;
        }
    }
    ctx->pc = 0x117050u;
}
