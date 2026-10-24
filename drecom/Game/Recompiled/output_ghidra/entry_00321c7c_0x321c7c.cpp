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

// Function: entry_00321c7c
// Address: 0x321c7c - 0x321c98
void entry_00321c7c_0x321c7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00321c7c_0x321c7c");
#endif

    ctx->pc = 0x321c7cu;

    // 0x321c7c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321c80: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x321c80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x321c84: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321c88: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x321c88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x321c8c: 0x245e0118  addiu       $fp, $v0, 0x118
    ctx->pc = 0x321c8cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x321c90: 0x97c20000  lhu         $v0, 0x0($fp)
    ctx->pc = 0x321c90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x321c94: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x321c94u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x321c98u;
}
