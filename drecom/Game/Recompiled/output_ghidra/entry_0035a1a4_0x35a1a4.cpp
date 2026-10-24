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

// Function: entry_0035a1a4
// Address: 0x35a1a4 - 0x35a1f8
void entry_0035a1a4_0x35a1a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035a1a4_0x35a1a4");
#endif

    switch (ctx->pc) {
        case 0x35a1b0u: goto label_35a1b0;
        case 0x35a1bcu: goto label_35a1bc;
        default: break;
    }

    ctx->pc = 0x35a1a4u;

    // 0x35a1a4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x35a1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35a1a8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x35A1A8u;
    SET_GPR_U32(ctx, 31, 0x35A1B0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x35A1A8u, 0x35A1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A1B0u;
label_35a1b0:
    // 0x35a1b0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x35a1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35a1b4: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x35A1B4u;
    SET_GPR_U32(ctx, 31, 0x35A1BCu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x35A1B4u, 0x35A1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A1BCu;
label_35a1bc:
    // 0x35a1bc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35a1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35a1c0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x35a1c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x35a1c4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x35A1C4u;
    {
        const bool branch_taken_0x35a1c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35a1c4) {
            ctx->pc = 0x35A1F8u;
            return;
        }
    }
    ctx->pc = 0x35A1CCu;
    // 0x35a1cc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x35a1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35a1d0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35a1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35a1d4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35a1d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35a1d8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35a1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35a1dc: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x35a1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35a1e0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35a1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35a1e4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35a1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35a1e8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35a1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35a1ec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35a1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35a1f0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35a1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35a1f4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35a1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x35a1f8u;
}
