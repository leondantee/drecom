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

// Function: entry_001a0a38
// Address: 0x1a0a38 - 0x1a0a60
void entry_001a0a38_0x1a0a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0a38_0x1a0a38");
#endif

    ctx->pc = 0x1a0a38u;

    // 0x1a0a38: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a0a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a0a3c: 0x8c222748  lw          $v0, 0x2748($at)
    ctx->pc = 0x1a0a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D2748u));
    // 0x1a0a40: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1a0a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1a0a44: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0A44u;
    {
        const bool branch_taken_0x1a0a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0a44) {
            ctx->pc = 0x1A0A60u;
            return;
        }
    }
    ctx->pc = 0x1A0A4Cu;
    // 0x1a0a4c: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x1a0a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x1a0a50: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x1a0a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1a0a54: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a0a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a0a58: 0x24422764  addiu       $v0, $v0, 0x2764
    ctx->pc = 0x1a0a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10084));
    // 0x1a0a5c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a0a5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D2764u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D2764u, _value); } while (0);
    ctx->pc = 0x1a0a60u;
}
