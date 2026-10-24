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

// Function: entry_00102818
// Address: 0x102818 - 0x102838
void entry_00102818_0x102818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102818_0x102818");
#endif

    ctx->pc = 0x102818u;

    // 0x102818: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x102818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x10281c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x10281cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x102820: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x102820u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x102824: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x102824u;
    {
        const bool branch_taken_0x102824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102824u;
        // 0x102828: 0x70800a  movz        $s0, $v1, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102824) {
            ctx->pc = 0x102890u;
            return;
        }
    }
    ctx->pc = 0x10282Cu;
    // 0x10282c: 0x3c13003b  lui         $s3, 0x3B
    ctx->pc = 0x10282cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
    // 0x102830: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x102830u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x102834: 0x0  nop
    ctx->pc = 0x102834u;
    // NOP
    ctx->pc = 0x102838u;
}
