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

// Function: entry_0021986c
// Address: 0x21986c - 0x219888
void entry_0021986c_0x21986c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021986c_0x21986c");
#endif

    ctx->pc = 0x21986cu;

    // 0x21986c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21986cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219870: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x219870u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x219874: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219878: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x219878u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21987c: 0x24760118  addiu       $s6, $v1, 0x118
    ctx->pc = 0x21987cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x219880: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x219880u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x219884: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x219884u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x219888u;
}
