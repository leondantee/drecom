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

// Function: entry_00255554
// Address: 0x255554 - 0x255570
void entry_00255554_0x255554(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00255554_0x255554");
#endif

    ctx->pc = 0x255554u;

    // 0x255554: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x255554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x255558: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x255558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x25555c: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x25555cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x255560: 0x34420700  ori         $v0, $v0, 0x700
    ctx->pc = 0x255560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1792);
    // 0x255564: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x255564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x255568: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x255568u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x25556c: 0x0  nop
    ctx->pc = 0x25556cu;
    // NOP
    ctx->pc = 0x255570u;
}
