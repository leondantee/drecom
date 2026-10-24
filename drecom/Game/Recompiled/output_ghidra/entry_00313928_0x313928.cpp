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

// Function: entry_00313928
// Address: 0x313928 - 0x313944
void entry_00313928_0x313928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00313928_0x313928");
#endif

    ctx->pc = 0x313928u;

    // 0x313928: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x313928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x31392c: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x31392cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x313930: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x313930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x313934: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x313934u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x313938: 0x24550118  addiu       $s5, $v0, 0x118
    ctx->pc = 0x313938u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x31393c: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x31393cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x313940: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x313940u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x313944u;
}
