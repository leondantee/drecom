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

// Function: entry_001185d8
// Address: 0x1185d8 - 0x1185f0
void entry_001185d8_0x1185d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001185d8_0x1185d8");
#endif

    ctx->pc = 0x1185d8u;

    // 0x1185d8: 0x12050019  beq         $s0, $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1185D8u;
    {
        const bool branch_taken_0x1185d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x1185DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1185D8u;
        // 0x1185dc: 0x2962003f  slti        $v0, $t3, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)63) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1185d8) {
            ctx->pc = 0x118640u;
            return;
        }
    }
    ctx->pc = 0x1185E0u;
    // 0x1185e0: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1185e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x1185e4: 0x34c6fffc  ori         $a2, $a2, 0xFFFC
    ctx->pc = 0x1185e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65532);
    // 0x1185e8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1185e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1185ec: 0x0  nop
    ctx->pc = 0x1185ecu;
    // NOP
    ctx->pc = 0x1185f0u;
}
