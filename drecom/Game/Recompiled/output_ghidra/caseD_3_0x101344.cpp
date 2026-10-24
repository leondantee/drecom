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

// Function: caseD_3
// Address: 0x101344 - 0x10136c
void caseD_3_0x101344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x101344");
#endif

    ctx->pc = 0x101344u;

    // 0x101344: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x101344u;
    {
        const bool branch_taken_0x101344 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x101348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101344u;
        // 0x101348: 0x31230fff  andi        $v1, $t1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x101344) {
            ctx->pc = 0x10136Cu;
            return;
        }
    }
    ctx->pc = 0x10134Cu;
    // 0x10134c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x10134cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x101350: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x101350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x101354: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x101354u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x101358: 0x26820040  addiu       $v0, $s4, 0x40
    ctx->pc = 0x101358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x10135c: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x10135cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x101360: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x101360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x101364: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x101364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x101368: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x101368u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    ctx->pc = 0x10136cu;
}
