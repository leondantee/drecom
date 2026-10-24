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

// Function: entry_0030d420
// Address: 0x30d420 - 0x30d464
void entry_0030d420_0x30d420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030d420_0x30d420");
#endif

    ctx->pc = 0x30d420u;

    // 0x30d420: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30d420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d424: 0x8c421310  lw          $v0, 0x1310($v0)
    ctx->pc = 0x30d424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4880)));
    // 0x30d428: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x30d428u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x30d42c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30d42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d430: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x30d430u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x30d434: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x30d434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x30d438: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x30d438u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x30d43c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30d43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30d440: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x30D440u;
    {
        const bool branch_taken_0x30d440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30d440) {
            ctx->pc = 0x30D4B4u;
            return;
        }
    }
    ctx->pc = 0x30D448u;
    // 0x30d448: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30d448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d44c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x30D44Cu;
    {
        const bool branch_taken_0x30d44c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30d44c) {
            ctx->pc = 0x30D48Cu;
            return;
        }
    }
    ctx->pc = 0x30D454u;
    // 0x30d454: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30D454u;
    {
        const bool branch_taken_0x30d454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d454) {
            ctx->pc = 0x30D464u;
            return;
        }
    }
    ctx->pc = 0x30D45Cu;
    // 0x30d45c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x30D45Cu;
    {
        const bool branch_taken_0x30d45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d45c) {
            ctx->pc = 0x30D4D4u;
            return;
        }
    }
    ctx->pc = 0x30D464u;
}
