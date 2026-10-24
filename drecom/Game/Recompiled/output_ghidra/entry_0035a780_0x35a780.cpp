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

// Function: entry_0035a780
// Address: 0x35a780 - 0x35a7d4
void entry_0035a780_0x35a780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035a780_0x35a780");
#endif

    switch (ctx->pc) {
        case 0x35a78cu: goto label_35a78c;
        case 0x35a798u: goto label_35a798;
        default: break;
    }

    ctx->pc = 0x35a780u;

    // 0x35a780: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x35a780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a784: 0xc05cd10  jal         func_173440
    ctx->pc = 0x35A784u;
    SET_GPR_U32(ctx, 31, 0x35A78Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x35A784u, 0x35A78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A78Cu;
label_35a78c:
    // 0x35a78c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x35a78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a790: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x35A790u;
    SET_GPR_U32(ctx, 31, 0x35A798u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x35A790u, 0x35A798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A798u;
label_35a798:
    // 0x35a798: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35a798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a79c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x35a79cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x35a7a0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x35A7A0u;
    {
        const bool branch_taken_0x35a7a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35a7a0) {
            ctx->pc = 0x35A7D4u;
            return;
        }
    }
    ctx->pc = 0x35A7A8u;
    // 0x35a7a8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x35a7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35a7ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35a7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a7b0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35a7b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35a7b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35a7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a7b8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x35a7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35a7bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35a7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a7c0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35a7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35a7c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35a7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a7c8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35a7c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35a7cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35a7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a7d0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35a7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x35a7d4u;
}
