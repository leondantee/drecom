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

// Function: entry_0018b9ac
// Address: 0x18b9ac - 0x18ba04
void entry_0018b9ac_0x18b9ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b9ac_0x18b9ac");
#endif

    switch (ctx->pc) {
        case 0x18b9e0u: goto label_18b9e0;
        default: break;
    }

    ctx->pc = 0x18b9acu;

    // 0x18b9ac: 0x92230028  lbu         $v1, 0x28($s1)
    ctx->pc = 0x18b9acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x18b9b0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b9b4: 0xa0430096  sb          $v1, 0x96($v0)
    ctx->pc = 0x18b9b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 150), (uint8_t)GPR_U32(ctx, 3));
    // 0x18b9b8: 0x9223000d  lbu         $v1, 0xD($s1)
    ctx->pc = 0x18b9b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x18b9bc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b9c0: 0xa0430095  sb          $v1, 0x95($v0)
    ctx->pc = 0x18b9c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 149), (uint8_t)GPR_U32(ctx, 3));
    // 0x18b9c4: 0x9222000d  lbu         $v0, 0xD($s1)
    ctx->pc = 0x18b9c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x18b9c8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18b9c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b9cc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b9d0: 0x90420096  lbu         $v0, 0x96($v0)
    ctx->pc = 0x18b9d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 150)));
    // 0x18b9d4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x18b9d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b9d8: 0xc05e9b0  jal         func_17A6C0
    ctx->pc = 0x18B9D8u;
    SET_GPR_U32(ctx, 31, 0x18B9E0u);
    ctx->pc = 0x17A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A6C0u, 0x18B9D8u, 0x18B9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B9E0u;
label_18b9e0:
    // 0x18b9e0: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x18b9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x18b9e4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x18b9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b9e8: 0xac620090  sw          $v0, 0x90($v1)
    ctx->pc = 0x18b9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 2));
    // 0x18b9ec: 0xa220000e  sb          $zero, 0xE($s1)
    ctx->pc = 0x18b9ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x18b9f0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b9f4: 0x92230028  lbu         $v1, 0x28($s1)
    ctx->pc = 0x18b9f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x18b9f8: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x18b9f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x18b9fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18ba00: 0xa2220028  sb          $v0, 0x28($s1)
    ctx->pc = 0x18ba00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x18ba04u;
}
