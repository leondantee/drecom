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

// Function: entry_00281ba8
// Address: 0x281ba8 - 0x281bc8
void entry_00281ba8_0x281ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00281ba8_0x281ba8");
#endif

    ctx->pc = 0x281ba8u;

    // 0x281ba8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281bac: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x281bacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x281bb0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281bb4: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x281bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x281bb8: 0x24760118  addiu       $s6, $v1, 0x118
    ctx->pc = 0x281bb8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x281bbc: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x281bbcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x281bc0: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x281bc0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x281bc4: 0x0  nop
    ctx->pc = 0x281bc4u;
    // NOP
    ctx->pc = 0x281bc8u;
}
