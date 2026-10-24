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

// Function: entry_003789b0
// Address: 0x3789b0 - 0x378a08
void entry_003789b0_0x3789b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003789b0_0x3789b0");
#endif

    switch (ctx->pc) {
        case 0x3789c0u: goto label_3789c0;
        case 0x3789ccu: goto label_3789cc;
        default: break;
    }

    ctx->pc = 0x3789b0u;

    // 0x3789b0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3789b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3789b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3789b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3789b8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3789B8u;
    SET_GPR_U32(ctx, 31, 0x3789C0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3789B8u, 0x3789C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3789C0u;
label_3789c0:
    // 0x3789c0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3789c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3789c4: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x3789C4u;
    SET_GPR_U32(ctx, 31, 0x3789CCu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x3789C4u, 0x3789CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3789CCu;
label_3789cc:
    // 0x3789cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3789ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3789d0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3789d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3789d4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3789D4u;
    {
        const bool branch_taken_0x3789d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3789d4) {
            ctx->pc = 0x378A08u;
            return;
        }
    }
    ctx->pc = 0x3789DCu;
    // 0x3789dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3789dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3789e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3789e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3789e4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3789e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3789e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3789e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3789ec: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3789ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3789f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3789f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3789f4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3789f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3789f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3789f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3789fc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3789fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x378a00: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x378a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x378a04: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x378a04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x378a08u;
}
