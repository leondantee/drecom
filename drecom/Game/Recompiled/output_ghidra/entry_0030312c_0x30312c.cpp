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

// Function: entry_0030312c
// Address: 0x30312c - 0x303170
void entry_0030312c_0x30312c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030312c_0x30312c");
#endif

    ctx->pc = 0x30312cu;

    // 0x30312c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30312cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303130: 0x8c421310  lw          $v0, 0x1310($v0)
    ctx->pc = 0x303130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4880)));
    // 0x303134: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x303134u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x303138: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x303138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30313c: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x30313cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x303140: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x303140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x303144: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x303144u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x303148: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x303148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30314c: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x30314Cu;
    {
        const bool branch_taken_0x30314c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30314c) {
            ctx->pc = 0x3031C0u;
            return;
        }
    }
    ctx->pc = 0x303154u;
    // 0x303154: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x303154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303158: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x303158u;
    {
        const bool branch_taken_0x303158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x303158) {
            ctx->pc = 0x303198u;
            return;
        }
    }
    ctx->pc = 0x303160u;
    // 0x303160: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x303160u;
    {
        const bool branch_taken_0x303160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x303160) {
            ctx->pc = 0x303170u;
            return;
        }
    }
    ctx->pc = 0x303168u;
    // 0x303168: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x303168u;
    {
        const bool branch_taken_0x303168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x303168) {
            ctx->pc = 0x3031E0u;
            return;
        }
    }
    ctx->pc = 0x303170u;
}
