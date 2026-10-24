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

// Function: caseD_9
// Address: 0x26c8b8 - 0x26c8e8
void caseD_9_0x26c8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x26c8b8");
#endif

    ctx->pc = 0x26c8b8u;

    // 0x26c8b8: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x26c8b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c8bc: 0x90e809e7  lbu         $t0, 0x9E7($a3)
    ctx->pc = 0x26c8bcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2535)));
    // 0x26c8c0: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26C8C0u;
    {
        const bool branch_taken_0x26c8c0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c8c0) {
            ctx->pc = 0x26C8E8u;
            return;
        }
    }
    ctx->pc = 0x26C8C8u;
    // 0x26c8c8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x26c8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x26c8cc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c8d0: 0xac831b60  sw          $v1, 0x1B60($a0)
    ctx->pc = 0x26c8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 3));
    // 0x26c8d4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c8d8: 0xac601b68  sw          $zero, 0x1B68($v1)
    ctx->pc = 0x26c8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7016), GPR_U32(ctx, 0));
    // 0x26c8dc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x26c8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26c8e0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x26c8e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x26c8e4: 0xac25fd50  sw          $a1, -0x2B0($at)
    ctx->pc = 0x26c8e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x61FD50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FD50u, _value); } while (0);
    ctx->pc = 0x26c8e8u;
}
