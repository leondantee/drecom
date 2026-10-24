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

// Function: entry_001419ac
// Address: 0x1419ac - 0x1419e0
void entry_001419ac_0x1419ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001419ac_0x1419ac");
#endif

    ctx->pc = 0x1419acu;

    // 0x1419ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1419acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1419b0: 0xa0200e04  sb          $zero, 0xE04($at)
    ctx->pc = 0x1419b0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D0E04u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D0E04u, _value); } while (0);
    // 0x1419b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1419b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1419b8: 0x8c23fce0  lw          $v1, -0x320($at)
    ctx->pc = 0x1419b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CFCE0u));
    // 0x1419bc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1419bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1419c0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1419c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1419c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1419C4u;
    {
        const bool branch_taken_0x1419c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1419c4) {
            ctx->pc = 0x1419E0u;
            return;
        }
    }
    ctx->pc = 0x1419CCu;
    // 0x1419cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1419ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1419d0: 0x90220e04  lbu         $v0, 0xE04($at)
    ctx->pc = 0x1419d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x5D0E04u));
    // 0x1419d4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1419d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1419d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1419d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1419dc: 0xa0220e04  sb          $v0, 0xE04($at)
    ctx->pc = 0x1419dcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0E04u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D0E04u, _value); } while (0);
    ctx->pc = 0x1419e0u;
}
