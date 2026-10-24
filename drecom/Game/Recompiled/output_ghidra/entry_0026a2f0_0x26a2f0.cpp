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

// Function: entry_0026a2f0
// Address: 0x26a2f0 - 0x26a30c
void entry_0026a2f0_0x26a2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026a2f0_0x26a2f0");
#endif

    ctx->pc = 0x26a2f0u;

    // 0x26a2f0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x26a2f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x26a2f4: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x26a2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x26a2f8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x26a2f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x26a2fc: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x26a2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x26a300: 0x24520118  addiu       $s2, $v0, 0x118
    ctx->pc = 0x26a300u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x26a304: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x26a304u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26a308: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x26a308u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x26a30cu;
}
