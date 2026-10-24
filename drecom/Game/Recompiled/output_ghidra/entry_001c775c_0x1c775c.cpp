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

// Function: entry_001c775c
// Address: 0x1c775c - 0x1c7788
void entry_001c775c_0x1c775c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c775c_0x1c775c");
#endif

    ctx->pc = 0x1c775cu;

    // 0x1c775c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c775cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7760: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c7760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c7764: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1c7764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1c7768: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1c7768u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c776c: 0x108002fd  beqz        $a0, . + 4 + (0x2FD << 2)
    ctx->pc = 0x1C776Cu;
    {
        const bool branch_taken_0x1c776c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c776c) {
            ctx->pc = 0x1C8364u;
            return;
        }
    }
    ctx->pc = 0x1C7774u;
    // 0x1c7774: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1c7774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c7778: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c777c: 0xa0650002  sb          $a1, 0x2($v1)
    ctx->pc = 0x1c777cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x1c7780: 0x100002f8  b           . + 4 + (0x2F8 << 2)
    ctx->pc = 0x1C7780u;
    {
        const bool branch_taken_0x1c7780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7780) {
            ctx->pc = 0x1C8364u;
            return;
        }
    }
    ctx->pc = 0x1C7788u;
}
