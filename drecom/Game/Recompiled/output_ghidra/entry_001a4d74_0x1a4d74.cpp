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

// Function: entry_001a4d74
// Address: 0x1a4d74 - 0x1a4d9c
void entry_001a4d74_0x1a4d74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4d74_0x1a4d74");
#endif

    ctx->pc = 0x1a4d74u;

    // 0x1a4d74: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4d78: 0x80630304  lb          $v1, 0x304($v1)
    ctx->pc = 0x1a4d78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 772)));
    // 0x1a4d7c: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1a4d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1a4d80: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1a4d80u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1a4d84: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x1a4d84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1a4d88: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4D88u;
    {
        const bool branch_taken_0x1a4d88 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4d88) {
            ctx->pc = 0x1A4D9Cu;
            return;
        }
    }
    ctx->pc = 0x1A4D90u;
    // 0x1a4d90: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1a4d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1a4d94: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4d98: 0xa0640304  sb          $a0, 0x304($v1)
    ctx->pc = 0x1a4d98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 772), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1a4d9cu;
}
