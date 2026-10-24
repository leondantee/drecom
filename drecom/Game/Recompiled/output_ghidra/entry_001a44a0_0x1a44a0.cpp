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

// Function: entry_001a44a0
// Address: 0x1a44a0 - 0x1a44c8
void entry_001a44a0_0x1a44a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a44a0_0x1a44a0");
#endif

    ctx->pc = 0x1a44a0u;

    // 0x1a44a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a44a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a44a4: 0x90240100  lbu         $a0, 0x100($at)
    ctx->pc = 0x1a44a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x5D0100u));
    // 0x1a44a8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1a44a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1a44ac: 0x286100c1  slti        $at, $v1, 0xC1
    ctx->pc = 0x1a44acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)193) ? 1 : 0);
    // 0x1a44b0: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A44B0u;
    {
        const bool branch_taken_0x1a44b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a44b0) {
            ctx->pc = 0x1A44C8u;
            return;
        }
    }
    ctx->pc = 0x1A44B8u;
    // 0x1a44b8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1a44b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a44bc: 0x8ca402fc  lw          $a0, 0x2FC($a1)
    ctx->pc = 0x1a44bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 764)));
    // 0x1a44c0: 0x2483fff8  addiu       $v1, $a0, -0x8
    ctx->pc = 0x1a44c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x1a44c4: 0xaca302fc  sw          $v1, 0x2FC($a1)
    ctx->pc = 0x1a44c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 764), GPR_U32(ctx, 3));
    ctx->pc = 0x1a44c8u;
}
