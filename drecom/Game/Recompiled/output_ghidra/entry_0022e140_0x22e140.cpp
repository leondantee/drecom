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

// Function: entry_0022e140
// Address: 0x22e140 - 0x22e190
void entry_0022e140_0x22e140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022e140_0x22e140");
#endif

    switch (ctx->pc) {
        case 0x22e160u: goto label_22e160;
        case 0x22e16cu: goto label_22e16c;
        default: break;
    }

    ctx->pc = 0x22e140u;

    // 0x22e140: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x22e140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e144: 0x8462127a  lh          $v0, 0x127A($v1)
    ctx->pc = 0x22e144u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x22e148: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22e148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22e14c: 0xa462127a  sh          $v0, 0x127A($v1)
    ctx->pc = 0x22e14cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x22e150: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x22e150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e154: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x22e154u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22e158: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x22E158u;
    SET_GPR_U32(ctx, 31, 0x22E160u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x22E158u, 0x22E160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E160u;
label_22e160:
    // 0x22e160: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x22e160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e164: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x22E164u;
    SET_GPR_U32(ctx, 31, 0x22E16Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x22E164u, 0x22E16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E16Cu;
label_22e16c:
    // 0x22e16c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x22e16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e170: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x22e170u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x22e174: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x22E174u;
    {
        const bool branch_taken_0x22e174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e174) {
            ctx->pc = 0x22E284u;
            return;
        }
    }
    ctx->pc = 0x22E17Cu;
    // 0x22e17c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x22e17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22e180: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x22e180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e184: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x22e184u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x22e188: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x22E188u;
    {
        const bool branch_taken_0x22e188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e188) {
            ctx->pc = 0x22E284u;
            return;
        }
    }
    ctx->pc = 0x22E190u;
}
