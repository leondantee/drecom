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

// Function: entry_00255f14
// Address: 0x255f14 - 0x255f30
void entry_00255f14_0x255f14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00255f14_0x255f14");
#endif

    ctx->pc = 0x255f14u;

    // 0x255f14: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x255f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x255f18: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x255f18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255f1c: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x255f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x255f20: 0x34620700  ori         $v0, $v1, 0x700
    ctx->pc = 0x255f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1792);
    // 0x255f24: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x255f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x255f28: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x255f28u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x255f2c: 0x0  nop
    ctx->pc = 0x255f2cu;
    // NOP
    ctx->pc = 0x255f30u;
}
