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

// Function: entry_0010d8d8
// Address: 0x10d8d8 - 0x10d8f8
void entry_0010d8d8_0x10d8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d8d8_0x10d8d8");
#endif

    ctx->pc = 0x10d8d8u;

    // 0x10d8d8: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x10d8d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10d8dc: 0x26a43d00  addiu       $a0, $s5, 0x3D00
    ctx->pc = 0x10d8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 15616));
    // 0x10d8e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10d8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d8e4: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x10d8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x10d8e8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x10D8E8u;
    {
        const bool branch_taken_0x10d8e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D8E8u;
        // 0x10d8ec: 0xa0830020  sb          $v1, 0x20($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d8e8) {
            ctx->pc = 0x10D91Cu;
            return;
        }
    }
    ctx->pc = 0x10D8F0u;
    // 0x10d8f0: 0x24860020  addiu       $a2, $a0, 0x20
    ctx->pc = 0x10d8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x10d8f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x10d8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x10d8f8u;
}
