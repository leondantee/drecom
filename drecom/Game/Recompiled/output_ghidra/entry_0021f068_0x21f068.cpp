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

// Function: entry_0021f068
// Address: 0x21f068 - 0x21f084
void entry_0021f068_0x21f068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021f068_0x21f068");
#endif

    ctx->pc = 0x21f068u;

    // 0x21f068: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f06c: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x21f06cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x21f070: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f074: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x21f074u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x21f078: 0x24550118  addiu       $s5, $v0, 0x118
    ctx->pc = 0x21f078u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x21f07c: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x21f07cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x21f080: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x21f080u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x21f084u;
}
