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

// Function: entry_0010bfa0
// Address: 0x10bfa0 - 0x10bfb8
void entry_0010bfa0_0x10bfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bfa0_0x10bfa0");
#endif

    ctx->pc = 0x10bfa0u;

    // 0x10bfa0: 0x24423990  addiu       $v0, $v0, 0x3990
    ctx->pc = 0x10bfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14736));
    // 0x10bfa4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10bfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10bfa8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10bfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10bfac: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10bfacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10bfb0: 0x24420084  addiu       $v0, $v0, 0x84
    ctx->pc = 0x10bfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x10bfb4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x10bfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x10bfb8u;
}
