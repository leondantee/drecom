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

// Function: entry_002fcd68
// Address: 0x2fcd68 - 0x2fcd90
void entry_002fcd68_0x2fcd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fcd68_0x2fcd68");
#endif

    ctx->pc = 0x2fcd68u;

    // 0x2fcd68: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fcd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fcd6c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2fcd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fcd70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2fcd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fcd74: 0x14830028  bne         $a0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2FCD74u;
    {
        const bool branch_taken_0x2fcd74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fcd74) {
            ctx->pc = 0x2FCE18u;
            return;
        }
    }
    ctx->pc = 0x2FCD7Cu;
    // 0x2fcd7c: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fcd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fcd80: 0x8c6500d4  lw          $a1, 0xD4($v1)
    ctx->pc = 0x2fcd80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fcd84: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2fcd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2fcd88: 0x14a30023  bne         $a1, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2FCD88u;
    {
        const bool branch_taken_0x2fcd88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fcd88) {
            ctx->pc = 0x2FCE18u;
            return;
        }
    }
    ctx->pc = 0x2FCD90u;
}
