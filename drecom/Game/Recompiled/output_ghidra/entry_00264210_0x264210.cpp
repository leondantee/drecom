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

// Function: entry_00264210
// Address: 0x264210 - 0x264228
void entry_00264210_0x264210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264210_0x264210");
#endif

    ctx->pc = 0x264210u;

    // 0x264210: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x264210u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x264214: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x264214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x264218: 0x2463e650  addiu       $v1, $v1, -0x19B0
    ctx->pc = 0x264218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960720));
    // 0x26421c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26421cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x264220: 0xac711390  sw          $s1, 0x1390($v1)
    ctx->pc = 0x264220u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5008), GPR_U32(ctx, 17));
    // 0x264224: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x264224u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x264228u;
}
