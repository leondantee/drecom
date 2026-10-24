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

// Function: entry_002645c4
// Address: 0x2645c4 - 0x2645e4
void entry_002645c4_0x2645c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002645c4_0x2645c4");
#endif

    ctx->pc = 0x2645c4u;

    // 0x2645c4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2645c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2645c8: 0xafa30104  sw          $v1, 0x104($sp)
    ctx->pc = 0x2645c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
    // 0x2645cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2645ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2645d0: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x2645d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    // 0x2645d4: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x2645d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x2645d8: 0xae231244  sw          $v1, 0x1244($s1)
    ctx->pc = 0x2645d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4676), GPR_U32(ctx, 3));
    // 0x2645dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2645DCu;
    {
        const bool branch_taken_0x2645dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2645dc) {
            ctx->pc = 0x264600u;
            return;
        }
    }
    ctx->pc = 0x2645E4u;
}
