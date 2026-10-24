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

// Function: entry_001f3ed0
// Address: 0x1f3ed0 - 0x1f3f00
void entry_001f3ed0_0x1f3ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3ed0_0x1f3ed0");
#endif

    ctx->pc = 0x1f3ed0u;

    // 0x1f3ed0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3ed4: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x1f3ed4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1f3ed8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1f3ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f3edc: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1f3edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1f3ee0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F3EE0u;
    {
        const bool branch_taken_0x1f3ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3ee0) {
            ctx->pc = 0x1F3F28u;
            return;
        }
    }
    ctx->pc = 0x1F3EE8u;
    // 0x1f3ee8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3eec: 0x94420052  lhu         $v0, 0x52($v0)
    ctx->pc = 0x1f3eecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 82)));
    // 0x1f3ef0: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1f3ef0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f3ef4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3ef8: 0x8c500058  lw          $s0, 0x58($v0)
    ctx->pc = 0x1f3ef8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1f3efc: 0x0  nop
    ctx->pc = 0x1f3efcu;
    // NOP
    ctx->pc = 0x1f3f00u;
}
