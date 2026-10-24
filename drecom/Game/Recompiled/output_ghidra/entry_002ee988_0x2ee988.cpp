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

// Function: entry_002ee988
// Address: 0x2ee988 - 0x2ee9a8
void entry_002ee988_0x2ee988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ee988_0x2ee988");
#endif

    ctx->pc = 0x2ee988u;

    // 0x2ee988: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee98c: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x2ee98cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ee990: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee994: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x2ee994u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ee998: 0x24560118  addiu       $s6, $v0, 0x118
    ctx->pc = 0x2ee998u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x2ee99c: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x2ee99cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2ee9a0: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x2ee9a0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ee9a4: 0x0  nop
    ctx->pc = 0x2ee9a4u;
    // NOP
    ctx->pc = 0x2ee9a8u;
}
