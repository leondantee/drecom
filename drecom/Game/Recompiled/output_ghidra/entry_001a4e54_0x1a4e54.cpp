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

// Function: entry_001a4e54
// Address: 0x1a4e54 - 0x1a4e7c
void entry_001a4e54_0x1a4e54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4e54_0x1a4e54");
#endif

    ctx->pc = 0x1a4e54u;

    // 0x1a4e54: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4e58: 0x80630305  lb          $v1, 0x305($v1)
    ctx->pc = 0x1a4e58u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 773)));
    // 0x1a4e5c: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1a4e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1a4e60: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1a4e60u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1a4e64: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1a4e64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a4e68: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4E68u;
    {
        const bool branch_taken_0x1a4e68 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4e68) {
            ctx->pc = 0x1A4E7Cu;
            return;
        }
    }
    ctx->pc = 0x1A4E70u;
    // 0x1a4e70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a4e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4e74: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4e78: 0xa0640305  sb          $a0, 0x305($v1)
    ctx->pc = 0x1a4e78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 773), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1a4e7cu;
}
