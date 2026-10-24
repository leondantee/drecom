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

// Function: entry_002587f8
// Address: 0x2587f8 - 0x25880c
void entry_002587f8_0x2587f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002587f8_0x2587f8");
#endif

    ctx->pc = 0x2587f8u;

    // 0x2587f8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2587f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2587fc: 0x3442010d  ori         $v0, $v0, 0x10D
    ctx->pc = 0x2587fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)269);
    // 0x258800: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x258800u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x258804: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x258804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x258808: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x258808u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x25880cu;
}
