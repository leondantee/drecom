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

// Function: entry_00296e50
// Address: 0x296e50 - 0x296e8c
void entry_00296e50_0x296e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00296e50_0x296e50");
#endif

    ctx->pc = 0x296e50u;

    // 0x296e50: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x296e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x296e54: 0x8c8369b4  lw          $v1, 0x69B4($a0)
    ctx->pc = 0x296e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27060)));
    // 0x296e58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x296e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x296e5c: 0xac8369b4  sw          $v1, 0x69B4($a0)
    ctx->pc = 0x296e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27060), GPR_U32(ctx, 3));
    // 0x296e60: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x296e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x296e64: 0xac20c9e0  sw          $zero, -0x3620($at)
    ctx->pc = 0x296e64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x80C9E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x80C9E0u, _value); } while (0);
    // 0x296e68: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x296e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x296e6c: 0x94230084  lhu         $v1, 0x84($at)
    ctx->pc = 0x296e6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D0084u));
    // 0x296e70: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x296e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x296e74: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x296e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x296e78: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x296E78u;
    {
        const bool branch_taken_0x296e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296e78) {
            ctx->pc = 0x296E8Cu;
            return;
        }
    }
    ctx->pc = 0x296E80u;
    // 0x296e80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x296e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296e84: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x296e84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x296e88: 0xac23c9e0  sw          $v1, -0x3620($at)
    ctx->pc = 0x296e88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x80C9E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x80C9E0u, _value); } while (0);
    ctx->pc = 0x296e8cu;
}
