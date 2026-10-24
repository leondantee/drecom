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

// Function: entry_00367270
// Address: 0x367270 - 0x3672a4
void entry_00367270_0x367270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00367270_0x367270");
#endif

    ctx->pc = 0x367270u;

    // 0x367270: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x367270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367274: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x367274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x367278: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x367278u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36727c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36727cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x367280: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x367280u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x367284: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x367284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x367288: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x367288u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36728c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36728cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x367290: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x367290u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x367294: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x367294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x367298: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x367298u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x36729c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x36729Cu;
    {
        const bool branch_taken_0x36729c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36729c) {
            ctx->pc = 0x3672A4u;
            return;
        }
    }
    ctx->pc = 0x3672A4u;
}
