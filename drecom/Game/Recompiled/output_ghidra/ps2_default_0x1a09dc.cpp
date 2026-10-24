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

// Function: default
// Address: 0x1a09dc - 0x1a09f4
void ps2_default_0x1a09dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x1a09dc");
#endif

    ctx->pc = 0x1a09dcu;

    // 0x1a09dc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1a09dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1a09e0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a09e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a09e4: 0x24422762  addiu       $v0, $v0, 0x2762
    ctx->pc = 0x1a09e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10082));
    // 0x1a09e8: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x1a09e8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D2762u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5D2762u, _value); } while (0);
    // 0x1a09ec: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1A09ECu;
    {
        const bool branch_taken_0x1a09ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a09ec) {
            ctx->pc = 0x1A0A38u;
            return;
        }
    }
    ctx->pc = 0x1A09F4u;
}
