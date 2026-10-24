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

// Function: entry_00170508
// Address: 0x170508 - 0x170518
void entry_00170508_0x170508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170508_0x170508");
#endif

    ctx->pc = 0x170508u;

    // 0x170508: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x170508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17050c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17050cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x170510: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x170510u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x170514: 0x0  nop
    ctx->pc = 0x170514u;
    // NOP
    ctx->pc = 0x170518u;
}
