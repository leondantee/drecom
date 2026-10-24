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

// Function: entry_001a06bc
// Address: 0x1a06bc - 0x1a0704
void entry_001a06bc_0x1a06bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a06bc_0x1a06bc");
#endif

    ctx->pc = 0x1a06bcu;

    // 0x1a06bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a06bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a06c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a06c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a06c4: 0xa4222740  sh          $v0, 0x2740($at)
    ctx->pc = 0x1a06c4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D2740u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5D2740u, _value); } while (0);
    // 0x1a06c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a06c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a06cc: 0x8c222748  lw          $v0, 0x2748($at)
    ctx->pc = 0x1a06ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D2748u));
    // 0x1a06d0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1a06d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1a06d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a06d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a06d8: 0xac222748  sw          $v0, 0x2748($at)
    ctx->pc = 0x1a06d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D2748u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D2748u, _value); } while (0);
    // 0x1a06dc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1a06dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a06e0: 0x160200be  bne         $s0, $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x1A06E0u;
    {
        const bool branch_taken_0x1a06e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a06e0) {
            ctx->pc = 0x1A09DCu;
            return;
        }
    }
    ctx->pc = 0x1A06E8u;
    // 0x1a06e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a06e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a06ec: 0x8c222748  lw          $v0, 0x2748($at)
    ctx->pc = 0x1a06ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D2748u));
    // 0x1a06f0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1a06f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1a06f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a06f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a06f8: 0xac222748  sw          $v0, 0x2748($at)
    ctx->pc = 0x1a06f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D2748u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D2748u, _value); } while (0);
    // 0x1a06fc: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x1A06FCu;
    {
        const bool branch_taken_0x1a06fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a06fc) {
            ctx->pc = 0x1A09DCu;
            return;
        }
    }
    ctx->pc = 0x1A0704u;
}
