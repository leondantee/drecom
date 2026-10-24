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

// Function: entry_00322764
// Address: 0x322764 - 0x322788
void entry_00322764_0x322764(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00322764_0x322764");
#endif

    ctx->pc = 0x322764u;

    // 0x322764: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322768: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x322768u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x32276c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x32276cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322770: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x322770u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x322774: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x322774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x322778: 0xafa400d8  sw          $a0, 0xD8($sp)
    ctx->pc = 0x322778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 4));
    // 0x32277c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x32277cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x322780: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x322780u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x322784: 0x3077ffff  andi        $s7, $v1, 0xFFFF
    ctx->pc = 0x322784u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x322788u;
}
