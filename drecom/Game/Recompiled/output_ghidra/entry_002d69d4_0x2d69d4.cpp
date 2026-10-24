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

// Function: entry_002d69d4
// Address: 0x2d69d4 - 0x2d69f4
void entry_002d69d4_0x2d69d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d69d4_0x2d69d4");
#endif

    ctx->pc = 0x2d69d4u;

    // 0x2d69d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d69d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d69d8: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2d69d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2d69dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d69dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d69e0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2d69e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2d69e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D69E4u;
    {
        const bool branch_taken_0x2d69e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d69e4) {
            ctx->pc = 0x2D69F4u;
            return;
        }
    }
    ctx->pc = 0x2D69ECu;
    // 0x2d69ec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2d69ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2d69f0: 0xa020ec68  sb          $zero, -0x1398($at)
    ctx->pc = 0x2d69f0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EEC68u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EEC68u, _value); } while (0);
    ctx->pc = 0x2d69f4u;
}
