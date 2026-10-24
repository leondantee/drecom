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

// Function: entry_001b32b8
// Address: 0x1b32b8 - 0x1b32e0
void entry_001b32b8_0x1b32b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b32b8_0x1b32b8");
#endif

    ctx->pc = 0x1b32b8u;

    // 0x1b32b8: 0x860211f2  lh          $v0, 0x11F2($s0)
    ctx->pc = 0x1b32b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4594)));
    // 0x1b32bc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1b32bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b32c0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1b32c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1b32c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b32c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b32c8: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x1b32c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1b32cc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1b32ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b32d0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1b32d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1b32d4: 0x860211f2  lh          $v0, 0x11F2($s0)
    ctx->pc = 0x1b32d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4594)));
    // 0x1b32d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b32d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b32dc: 0xa60211f2  sh          $v0, 0x11F2($s0)
    ctx->pc = 0x1b32dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4594), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1b32e0u;
}
