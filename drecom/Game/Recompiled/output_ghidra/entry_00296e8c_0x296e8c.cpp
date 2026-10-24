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

// Function: entry_00296e8c
// Address: 0x296e8c - 0x296eb0
void entry_00296e8c_0x296e8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00296e8c_0x296e8c");
#endif

    ctx->pc = 0x296e8cu;

    // 0x296e8c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x296e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x296e90: 0x94230084  lhu         $v1, 0x84($at)
    ctx->pc = 0x296e90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D0084u));
    // 0x296e94: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x296e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x296e98: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x296e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x296e9c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x296E9Cu;
    {
        const bool branch_taken_0x296e9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296e9c) {
            ctx->pc = 0x296EB0u;
            return;
        }
    }
    ctx->pc = 0x296EA4u;
    // 0x296ea4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x296ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x296ea8: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x296ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x296eac: 0xac23c9e0  sw          $v1, -0x3620($at)
    ctx->pc = 0x296eacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x80C9E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x80C9E0u, _value); } while (0);
    ctx->pc = 0x296eb0u;
}
