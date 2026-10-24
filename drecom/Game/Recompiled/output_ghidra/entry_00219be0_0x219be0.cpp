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

// Function: entry_00219be0
// Address: 0x219be0 - 0x219bfc
void entry_00219be0_0x219be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00219be0_0x219be0");
#endif

    ctx->pc = 0x219be0u;

    // 0x219be0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219be4: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x219be4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x219be8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219bec: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x219becu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x219bf0: 0x24740118  addiu       $s4, $v1, 0x118
    ctx->pc = 0x219bf0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x219bf4: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x219bf4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x219bf8: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x219bf8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x219bfcu;
}
