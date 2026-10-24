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

// Function: entry_001a09f4
// Address: 0x1a09f4 - 0x1a0a38
void entry_001a09f4_0x1a09f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a09f4_0x1a09f4");
#endif

    ctx->pc = 0x1a09f4u;

    // 0x1a09f4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1a09f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1a09f8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a09f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a09fc: 0x24422762  addiu       $v0, $v0, 0x2762
    ctx->pc = 0x1a09fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10082));
    // 0x1a0a00: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x1a0a00u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D2762u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5D2762u, _value); } while (0);
    // 0x1a0a04: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x1a0a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x1a0a08: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x1a0a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1a0a0c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a0a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a0a10: 0x24422764  addiu       $v0, $v0, 0x2764
    ctx->pc = 0x1a0a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10084));
    // 0x1a0a14: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a0a14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D2764u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D2764u, _value); } while (0);
    // 0x1a0a18: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a0a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a0a1c: 0x8c222758  lw          $v0, 0x2758($at)
    ctx->pc = 0x1a0a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D2758u));
    // 0x1a0a20: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0A20u;
    {
        const bool branch_taken_0x1a0a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0a20) {
            ctx->pc = 0x1A0A38u;
            return;
        }
    }
    ctx->pc = 0x1A0A28u;
    // 0x1a0a28: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a0a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a0a2c: 0xac202748  sw          $zero, 0x2748($at)
    ctx->pc = 0x1a0a2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D2748u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D2748u, _value); } while (0);
    // 0x1a0a30: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a0a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a0a34: 0xa4202740  sh          $zero, 0x2740($at)
    ctx->pc = 0x1a0a34u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D2740u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5D2740u, _value); } while (0);
    ctx->pc = 0x1a0a38u;
}
