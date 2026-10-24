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

// Function: entry_00101730
// Address: 0x101730 - 0x101750
void entry_00101730_0x101730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101730_0x101730");
#endif

    ctx->pc = 0x101730u;

    // 0x101730: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x101730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x101734: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x101734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x101738: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x101738u;
    {
        const bool branch_taken_0x101738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101738u;
        // 0x10173c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101738) {
            ctx->pc = 0x10176Cu;
            return;
        }
    }
    ctx->pc = 0x101740u;
    // 0x101740: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x101740u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x101744: 0x34633c00  ori         $v1, $v1, 0x3C00
    ctx->pc = 0x101744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15360);
    // 0x101748: 0x3c041f00  lui         $a0, 0x1F00
    ctx->pc = 0x101748u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7936 << 16));
    // 0x10174c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10174cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x101750u;
}
