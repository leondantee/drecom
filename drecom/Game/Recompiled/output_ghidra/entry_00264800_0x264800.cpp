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

// Function: entry_00264800
// Address: 0x264800 - 0x264834
void entry_00264800_0x264800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264800_0x264800");
#endif

    ctx->pc = 0x264800u;

    // 0x264800: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x264800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x264804: 0xafa3011c  sw          $v1, 0x11C($sp)
    ctx->pc = 0x264804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 3));
    // 0x264808: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x264808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x26480c: 0xae23009c  sw          $v1, 0x9C($s1)
    ctx->pc = 0x26480cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 3));
    // 0x264810: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264814: 0xae2300a8  sw          $v1, 0xA8($s1)
    ctx->pc = 0x264814u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 3));
    // 0x264818: 0x8fa30114  lw          $v1, 0x114($sp)
    ctx->pc = 0x264818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x26481c: 0xae2300a0  sw          $v1, 0xA0($s1)
    ctx->pc = 0x26481cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 3));
    // 0x264820: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x264820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x264824: 0xae2300a4  sw          $v1, 0xA4($s1)
    ctx->pc = 0x264824u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 3));
    // 0x264828: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x264828u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x26482c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x26482Cu;
    {
        const bool branch_taken_0x26482c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26482c) {
            ctx->pc = 0x264870u;
            return;
        }
    }
    ctx->pc = 0x264834u;
}
