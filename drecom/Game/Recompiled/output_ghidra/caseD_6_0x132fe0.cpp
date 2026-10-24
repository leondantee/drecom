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

// Function: caseD_6
// Address: 0x132fe0 - 0x133024
void caseD_6_0x132fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x132fe0");
#endif

    switch (ctx->pc) {
        case 0x132ff0u: goto label_132ff0;
        case 0x132ffcu: goto label_132ffc;
        default: break;
    }

    ctx->pc = 0x132fe0u;

    // 0x132fe0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132fe4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x132fe4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x132fe8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x132FE8u;
    SET_GPR_U32(ctx, 31, 0x132FF0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x132FE8u, 0x132FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132FF0u;
label_132ff0:
    // 0x132ff0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132ff4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x132FF4u;
    SET_GPR_U32(ctx, 31, 0x132FFCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x132FF4u, 0x132FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132FFCu;
label_132ffc:
    // 0x132ffc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x133000: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x133000u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x133004: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x133004u;
    {
        const bool branch_taken_0x133004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x133004) {
            ctx->pc = 0x133024u;
            return;
        }
    }
    ctx->pc = 0x13300Cu;
    // 0x13300c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x13300cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x133010: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x133010u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x133014: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x133014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x133018: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x133018u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x13301c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x13301Cu;
    {
        const bool branch_taken_0x13301c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13301c) {
            ctx->pc = 0x133054u;
            return;
        }
    }
    ctx->pc = 0x133024u;
}
