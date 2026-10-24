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

// Function: entry_00281a14
// Address: 0x281a14 - 0x281a30
void entry_00281a14_0x281a14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00281a14_0x281a14");
#endif

    ctx->pc = 0x281a14u;

    // 0x281a14: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281a18: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x281a18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x281a1c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281a20: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x281a20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x281a24: 0x24540118  addiu       $s4, $v0, 0x118
    ctx->pc = 0x281a24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x281a28: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x281a28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x281a2c: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x281a2cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x281a30u;
}
