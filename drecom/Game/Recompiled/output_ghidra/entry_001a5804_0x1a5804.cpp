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

// Function: entry_001a5804
// Address: 0x1a5804 - 0x1a5824
void entry_001a5804_0x1a5804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5804_0x1a5804");
#endif

    ctx->pc = 0x1a5804u;

    // 0x1a5804: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a5804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a5808: 0x8c233ce0  lw          $v1, 0x3CE0($at)
    ctx->pc = 0x1a5808u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D3CE0u));
    // 0x1a580c: 0x2c620400  sltiu       $v0, $v1, 0x400
    ctx->pc = 0x1a580cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1a5810: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5810u;
    {
        const bool branch_taken_0x1a5810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5810) {
            ctx->pc = 0x1A5824u;
            return;
        }
    }
    ctx->pc = 0x1A5818u;
    // 0x1a5818: 0x240403ff  addiu       $a0, $zero, 0x3FF
    ctx->pc = 0x1a5818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1a581c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a581cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a5820: 0xac243ce0  sw          $a0, 0x3CE0($at)
    ctx->pc = 0x1a5820u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D3CE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CE0u, _value); } while (0);
    ctx->pc = 0x1a5824u;
}
