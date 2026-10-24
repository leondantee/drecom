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

// Function: entry_001a04dc
// Address: 0x1a04dc - 0x1a0544
void entry_001a04dc_0x1a04dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a04dc_0x1a04dc");
#endif

    ctx->pc = 0x1a04dcu;

    // 0x1a04dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a04dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a04e0: 0xa4202740  sh          $zero, 0x2740($at)
    ctx->pc = 0x1a04e0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D2740u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5D2740u, _value); } while (0);
    // 0x1a04e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a04e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a04e8: 0xac202748  sw          $zero, 0x2748($at)
    ctx->pc = 0x1a04e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D2748u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D2748u, _value); } while (0);
    // 0x1a04ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a04ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a04f0: 0xa4202742  sh          $zero, 0x2742($at)
    ctx->pc = 0x1a04f0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D2742u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5D2742u, _value); } while (0);
    // 0x1a04f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a04f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a04f8: 0xa020274c  sb          $zero, 0x274C($at)
    ctx->pc = 0x1a04f8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D274Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D274Cu, _value); } while (0);
    // 0x1a04fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a04fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0500: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a0500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a0504: 0xa023274d  sb          $v1, 0x274D($at)
    ctx->pc = 0x1a0504u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D274Du, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D274Du, _value); } while (0);
    // 0x1a0508: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1a0508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a050c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a050cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a0510: 0xa0232751  sb          $v1, 0x2751($at)
    ctx->pc = 0x1a0510u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D2751u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D2751u, _value); } while (0);
    // 0x1a0514: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a0514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a0518: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a0518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a051c: 0xa0232750  sb          $v1, 0x2750($at)
    ctx->pc = 0x1a051cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D2750u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D2750u, _value); } while (0);
    // 0x1a0520: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a0520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a0524: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a0524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a0528: 0xa023274f  sb          $v1, 0x274F($at)
    ctx->pc = 0x1a0528u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D274Fu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D274Fu, _value); } while (0);
    // 0x1a052c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a052cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a0530: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a0530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a0534: 0xa023274e  sb          $v1, 0x274E($at)
    ctx->pc = 0x1a0534u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D274Eu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D274Eu, _value); } while (0);
    // 0x1a0538: 0x24100006  addiu       $s0, $zero, 0x6
    ctx->pc = 0x1a0538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a053c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A053Cu;
    {
        const bool branch_taken_0x1a053c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a053c) {
            ctx->pc = 0x1A0558u;
            return;
        }
    }
    ctx->pc = 0x1A0544u;
}
