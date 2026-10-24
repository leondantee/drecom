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

// Function: entry_001a0868
// Address: 0x1a0868 - 0x1a0890
void entry_001a0868_0x1a0868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0868_0x1a0868");
#endif

    ctx->pc = 0x1a0868u;

    // 0x1a0868: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a0868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a086c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a086cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a0870: 0xa4222740  sh          $v0, 0x2740($at)
    ctx->pc = 0x1a0870u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D2740u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5D2740u, _value); } while (0);
    // 0x1a0874: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a0874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a0878: 0x8c222748  lw          $v0, 0x2748($at)
    ctx->pc = 0x1a0878u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D2748u));
    // 0x1a087c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x1a087cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x1a0880: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a0880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a0884: 0xac222748  sw          $v0, 0x2748($at)
    ctx->pc = 0x1a0884u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D2748u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D2748u, _value); } while (0);
    // 0x1a0888: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1A0888u;
    {
        const bool branch_taken_0x1a0888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0888) {
            ctx->pc = 0x1A09DCu;
            return;
        }
    }
    ctx->pc = 0x1A0890u;
}
