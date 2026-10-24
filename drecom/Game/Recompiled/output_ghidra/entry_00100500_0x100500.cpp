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

// Function: entry_00100500
// Address: 0x100500 - 0x100528
void entry_00100500_0x100500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100500_0x100500");
#endif

    ctx->pc = 0x100500u;

    // 0x100500: 0x215f8  dsll        $v0, $v0, 23
    ctx->pc = 0x100500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 23);
    // 0x100504: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x100504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x100508: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x100508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x10050c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x10050cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x100510: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x100510u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x100514: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x100514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x100518: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x100518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x10051c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x10051cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x100520: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x100520u;
    {
        const bool branch_taken_0x100520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100520u;
        // 0x100524: 0xfe220018  sd          $v0, 0x18($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100520) {
            ctx->pc = 0x100530u;
            return;
        }
    }
    ctx->pc = 0x100528u;
}
