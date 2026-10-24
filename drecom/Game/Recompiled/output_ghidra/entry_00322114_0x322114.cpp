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

// Function: entry_00322114
// Address: 0x322114 - 0x322138
void entry_00322114_0x322114(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00322114_0x322114");
#endif

    ctx->pc = 0x322114u;

    // 0x322114: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322118: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x322118u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x32211c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x32211cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322120: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x322120u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x322124: 0x24420118  addiu       $v0, $v0, 0x118
    ctx->pc = 0x322124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x322128: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x322128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x32212c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x32212cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x322130: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x322130u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x322134: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x322134u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x322138u;
}
