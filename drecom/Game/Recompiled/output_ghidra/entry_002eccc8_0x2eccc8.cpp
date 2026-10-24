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

// Function: entry_002eccc8
// Address: 0x2eccc8 - 0x2eccf0
void entry_002eccc8_0x2eccc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002eccc8_0x2eccc8");
#endif

    ctx->pc = 0x2eccc8u;

    // 0x2eccc8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eccc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ecccc: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2eccccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2eccd0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eccd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2eccd4: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2eccd4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2eccd8: 0x24630118  addiu       $v1, $v1, 0x118
    ctx->pc = 0x2eccd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2eccdc: 0xafa300e4  sw          $v1, 0xE4($sp)
    ctx->pc = 0x2eccdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 3));
    // 0x2ecce0: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x2ecce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2ecce4: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2ecce4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ecce8: 0x3077ffff  andi        $s7, $v1, 0xFFFF
    ctx->pc = 0x2ecce8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2eccec: 0x0  nop
    ctx->pc = 0x2eccecu;
    // NOP
    ctx->pc = 0x2eccf0u;
}
