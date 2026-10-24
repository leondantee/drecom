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

// Function: entry_002eed00
// Address: 0x2eed00 - 0x2eed28
void entry_002eed00_0x2eed00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002eed00_0x2eed00");
#endif

    ctx->pc = 0x2eed00u;

    // 0x2eed00: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eed00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2eed04: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2eed04u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2eed08: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eed08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2eed0c: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2eed0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2eed10: 0x24630118  addiu       $v1, $v1, 0x118
    ctx->pc = 0x2eed10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2eed14: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x2eed14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x2eed18: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2eed18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2eed1c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2eed1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2eed20: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2eed20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2eed24: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x2eed24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    ctx->pc = 0x2eed28u;
}
