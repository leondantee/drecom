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

// Function: entry_001a4d44
// Address: 0x1a4d44 - 0x1a4d74
void entry_001a4d44_0x1a4d44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4d44_0x1a4d44");
#endif

    ctx->pc = 0x1a4d44u;

    // 0x1a4d44: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4d48: 0x90630317  lbu         $v1, 0x317($v1)
    ctx->pc = 0x1a4d48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 791)));
    // 0x1a4d4c: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1A4D4Cu;
    {
        const bool branch_taken_0x1a4d4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4d4c) {
            ctx->pc = 0x1A4DECu;
            return;
        }
    }
    ctx->pc = 0x1A4D54u;
    // 0x1a4d54: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4d58: 0x80630304  lb          $v1, 0x304($v1)
    ctx->pc = 0x1a4d58u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 772)));
    // 0x1a4d5c: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1a4d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1a4d60: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1a4d60u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1a4d64: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4D64u;
    {
        const bool branch_taken_0x1a4d64 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1a4d64) {
            ctx->pc = 0x1A4D74u;
            return;
        }
    }
    ctx->pc = 0x1A4D6Cu;
    // 0x1a4d6c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4d70: 0xa0600304  sb          $zero, 0x304($v1)
    ctx->pc = 0x1a4d70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 772), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1a4d74u;
}
