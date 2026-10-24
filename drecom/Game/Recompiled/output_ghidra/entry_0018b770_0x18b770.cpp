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

// Function: entry_0018b770
// Address: 0x18b770 - 0x18b7d0
void entry_0018b770_0x18b770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b770_0x18b770");
#endif

    switch (ctx->pc) {
        case 0x18b7a4u: goto label_18b7a4;
        default: break;
    }

    ctx->pc = 0x18b770u;

    // 0x18b770: 0x92230028  lbu         $v1, 0x28($s1)
    ctx->pc = 0x18b770u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x18b774: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b778: 0xa0430096  sb          $v1, 0x96($v0)
    ctx->pc = 0x18b778u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 150), (uint8_t)GPR_U32(ctx, 3));
    // 0x18b77c: 0x92230019  lbu         $v1, 0x19($s1)
    ctx->pc = 0x18b77cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
    // 0x18b780: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b784: 0xa0430095  sb          $v1, 0x95($v0)
    ctx->pc = 0x18b784u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 149), (uint8_t)GPR_U32(ctx, 3));
    // 0x18b788: 0x92220019  lbu         $v0, 0x19($s1)
    ctx->pc = 0x18b788u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
    // 0x18b78c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18b78cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b790: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b794: 0x90420096  lbu         $v0, 0x96($v0)
    ctx->pc = 0x18b794u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 150)));
    // 0x18b798: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x18b798u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b79c: 0xc05e9b0  jal         func_17A6C0
    ctx->pc = 0x18B79Cu;
    SET_GPR_U32(ctx, 31, 0x18B7A4u);
    ctx->pc = 0x17A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A6C0u, 0x18B79Cu, 0x18B7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B7A4u;
label_18b7a4:
    // 0x18b7a4: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x18b7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x18b7a8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x18b7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b7ac: 0xac620090  sw          $v0, 0x90($v1)
    ctx->pc = 0x18b7acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 2));
    // 0x18b7b0: 0xa220000e  sb          $zero, 0xE($s1)
    ctx->pc = 0x18b7b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x18b7b4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b7b8: 0x92230028  lbu         $v1, 0x28($s1)
    ctx->pc = 0x18b7b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x18b7bc: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x18b7bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x18b7c0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18b7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18b7c4: 0xa2220028  sb          $v0, 0x28($s1)
    ctx->pc = 0x18b7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b7c8: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x18B7C8u;
    {
        const bool branch_taken_0x18b7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b7c8) {
            ctx->pc = 0x18BA04u;
            return;
        }
    }
    ctx->pc = 0x18B7D0u;
}
