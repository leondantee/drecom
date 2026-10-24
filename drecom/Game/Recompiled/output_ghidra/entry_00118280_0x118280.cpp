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

// Function: entry_00118280
// Address: 0x118280 - 0x1182a0
void entry_00118280_0x118280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118280_0x118280");
#endif

    ctx->pc = 0x118280u;

    // 0x118280: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x118280u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
    // 0x118284: 0xb18c0  sll         $v1, $t3, 3
    ctx->pc = 0x118284u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x118288: 0x26824928  addiu       $v0, $s4, 0x4928
    ctx->pc = 0x118288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 18728));
    // 0x11828c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x11828cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x118290: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x118290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x118294: 0x3484fffc  ori         $a0, $a0, 0xFFFC
    ctx->pc = 0x118294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65532);
    // 0x118298: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x118298u;
    {
        const bool branch_taken_0x118298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11829Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118298u;
        // 0x11829c: 0x8cb0000c  lw          $s0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118298) {
            ctx->pc = 0x1182ACu;
            return;
        }
    }
    ctx->pc = 0x1182A0u;
}
