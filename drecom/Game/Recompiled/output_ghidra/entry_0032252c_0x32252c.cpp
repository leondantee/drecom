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

// Function: entry_0032252c
// Address: 0x32252c - 0x322550
void entry_0032252c_0x32252c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032252c_0x32252c");
#endif

    ctx->pc = 0x32252cu;

    // 0x32252c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x32252cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322530: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x322530u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x322534: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322538: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x322538u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x32253c: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x32253cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x322540: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x322540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x322544: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x322544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x322548: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x322548u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32254c: 0x3076ffff  andi        $s6, $v1, 0xFFFF
    ctx->pc = 0x32254cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x322550u;
}
