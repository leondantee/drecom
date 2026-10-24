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

// Function: entry_0018b87c
// Address: 0x18b87c - 0x18b8dc
void entry_0018b87c_0x18b87c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b87c_0x18b87c");
#endif

    switch (ctx->pc) {
        case 0x18b8b0u: goto label_18b8b0;
        default: break;
    }

    ctx->pc = 0x18b87cu;

    // 0x18b87c: 0x92230028  lbu         $v1, 0x28($s1)
    ctx->pc = 0x18b87cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x18b880: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b884: 0xa0430096  sb          $v1, 0x96($v0)
    ctx->pc = 0x18b884u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 150), (uint8_t)GPR_U32(ctx, 3));
    // 0x18b888: 0x92230021  lbu         $v1, 0x21($s1)
    ctx->pc = 0x18b888u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
    // 0x18b88c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b890: 0xa0430095  sb          $v1, 0x95($v0)
    ctx->pc = 0x18b890u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 149), (uint8_t)GPR_U32(ctx, 3));
    // 0x18b894: 0x92220021  lbu         $v0, 0x21($s1)
    ctx->pc = 0x18b894u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
    // 0x18b898: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18b898u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b89c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b8a0: 0x90420096  lbu         $v0, 0x96($v0)
    ctx->pc = 0x18b8a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 150)));
    // 0x18b8a4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x18b8a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b8a8: 0xc05e9b0  jal         func_17A6C0
    ctx->pc = 0x18B8A8u;
    SET_GPR_U32(ctx, 31, 0x18B8B0u);
    ctx->pc = 0x17A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A6C0u, 0x18B8A8u, 0x18B8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B8B0u;
label_18b8b0:
    // 0x18b8b0: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x18b8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x18b8b4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x18b8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b8b8: 0xac620090  sw          $v0, 0x90($v1)
    ctx->pc = 0x18b8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 2));
    // 0x18b8bc: 0xa220000e  sb          $zero, 0xE($s1)
    ctx->pc = 0x18b8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x18b8c0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b8c4: 0x92230028  lbu         $v1, 0x28($s1)
    ctx->pc = 0x18b8c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x18b8c8: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x18b8c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x18b8cc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18b8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18b8d0: 0xa2220028  sb          $v0, 0x28($s1)
    ctx->pc = 0x18b8d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b8d4: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x18B8D4u;
    {
        const bool branch_taken_0x18b8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b8d4) {
            ctx->pc = 0x18BA04u;
            return;
        }
    }
    ctx->pc = 0x18B8DCu;
}
