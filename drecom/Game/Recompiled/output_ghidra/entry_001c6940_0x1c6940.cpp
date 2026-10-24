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

// Function: entry_001c6940
// Address: 0x1c6940 - 0x1c6970
void entry_001c6940_0x1c6940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6940_0x1c6940");
#endif

    ctx->pc = 0x1c6940u;

    // 0x1c6940: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c6940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c6944: 0x9042107b  lbu         $v0, 0x107B($v0)
    ctx->pc = 0x1c6944u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4219)));
    // 0x1c6948: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c6948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c694c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1c694cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1c6950: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6950u;
    {
        const bool branch_taken_0x1c6950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6950) {
            ctx->pc = 0x1C6970u;
            return;
        }
    }
    ctx->pc = 0x1C6958u;
    // 0x1c6958: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1c6958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1c695c: 0x8c23a4a8  lw          $v1, -0x5B58($at)
    ctx->pc = 0x1c695cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EA4A8u));
    // 0x1c6960: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1c6960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1c6964: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c6964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c6968: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1c6968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1c696c: 0xac22a4a8  sw          $v0, -0x5B58($at)
    ctx->pc = 0x1c696cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EA4A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EA4A8u, _value); } while (0);
    ctx->pc = 0x1c6970u;
}
