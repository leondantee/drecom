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

// Function: entry_00176760
// Address: 0x176760 - 0x176788
void entry_00176760_0x176760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176760_0x176760");
#endif

    ctx->pc = 0x176760u;

    // 0x176760: 0x1ea43c  dsll32      $s4, $fp, 16
    ctx->pc = 0x176760u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 30) << (32 + 16));
    // 0x176764: 0x14a43f  dsra32      $s4, $s4, 16
    ctx->pc = 0x176764u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
    // 0x176768: 0x121c3c  dsll32      $v1, $s2, 16
    ctx->pc = 0x176768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 16));
    // 0x17676c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17676cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x176770: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x176770u;
    {
        const bool branch_taken_0x176770 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x176770) {
            ctx->pc = 0x176788u;
            return;
        }
    }
    ctx->pc = 0x176778u;
    // 0x176778: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x176778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x17677c: 0xa7a300ca  sh          $v1, 0xCA($sp)
    ctx->pc = 0x17677cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 202), (uint16_t)GPR_U32(ctx, 3));
    // 0x176780: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x176780u;
    {
        const bool branch_taken_0x176780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176780) {
            ctx->pc = 0x176790u;
            return;
        }
    }
    ctx->pc = 0x176788u;
}
