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

// Function: entry_003378d8
// Address: 0x3378d8 - 0x33790c
void entry_003378d8_0x3378d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003378d8_0x3378d8");
#endif

    ctx->pc = 0x3378d8u;

    // 0x3378d8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3378d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3378dc: 0xa4204eb2  sh          $zero, 0x4EB2($at)
    ctx->pc = 0x3378dcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x894EB2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x894EB2u, _value); } while (0);
    // 0x3378e0: 0x3002ffff  andi        $v0, $zero, 0xFFFF
    ctx->pc = 0x3378e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x3378e4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3378e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3378e8: 0xa4224eb0  sh          $v0, 0x4EB0($at)
    ctx->pc = 0x3378e8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894EB0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x894EB0u, _value); } while (0);
    // 0x3378ec: 0x240201cc  addiu       $v0, $zero, 0x1CC
    ctx->pc = 0x3378ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
    // 0x3378f0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3378f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3378f4: 0xa4224eb6  sh          $v0, 0x4EB6($at)
    ctx->pc = 0x3378f4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894EB6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x894EB6u, _value); } while (0);
    // 0x3378f8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3378f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3378fc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3378fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337900: 0xa4234eb4  sh          $v1, 0x4EB4($at)
    ctx->pc = 0x337900u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x894EB4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x894EB4u, _value); } while (0);
    // 0x337904: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x337904u;
    {
        const bool branch_taken_0x337904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337904) {
            ctx->pc = 0x337984u;
            return;
        }
    }
    ctx->pc = 0x33790Cu;
}
