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

// Function: default
// Address: 0x270774 - 0x270790
void ps2_default_0x270774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x270774");
#endif

    ctx->pc = 0x270774u;

    // 0x270774: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x270774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x270778: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x270778u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x27077c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x27077cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x270780: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x270780u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x270784: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x270784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x270788: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x270788u;
    {
        const bool branch_taken_0x270788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x270788) {
            ctx->pc = 0x270798u;
            return;
        }
    }
    ctx->pc = 0x270790u;
}
