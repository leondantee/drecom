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

// Function: caseD_3
// Address: 0x12de70 - 0x12def4
void caseD_3_0x12de70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x12de70");
#endif

    switch (ctx->pc) {
        case 0x12de80u: goto label_12de80;
        case 0x12de8cu: goto label_12de8c;
        case 0x12de9cu: goto label_12de9c;
        case 0x12dea8u: goto label_12dea8;
        default: break;
    }

    ctx->pc = 0x12de70u;

    // 0x12de70: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12de70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12de74: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12de74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12de78: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12DE78u;
    SET_GPR_U32(ctx, 31, 0x12DE80u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12DE78u, 0x12DE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DE80u;
label_12de80:
    // 0x12de80: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12de80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12de84: 0xc05cd10  jal         func_173440
    ctx->pc = 0x12DE84u;
    SET_GPR_U32(ctx, 31, 0x12DE8Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12DE84u, 0x12DE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DE8Cu;
label_12de8c:
    // 0x12de8c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12de8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12de90: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12de90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12de94: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12DE94u;
    SET_GPR_U32(ctx, 31, 0x12DE9Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12DE94u, 0x12DE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DE9Cu;
label_12de9c:
    // 0x12de9c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12de9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12dea0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12DEA0u;
    SET_GPR_U32(ctx, 31, 0x12DEA8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12DEA0u, 0x12DEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DEA8u;
label_12dea8:
    // 0x12dea8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12dea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12deac: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12deacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x12deb0: 0x106000bc  beqz        $v1, . + 4 + (0xBC << 2)
    ctx->pc = 0x12DEB0u;
    {
        const bool branch_taken_0x12deb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12deb0) {
            ctx->pc = 0x12E1A4u;
            return;
        }
    }
    ctx->pc = 0x12DEB8u;
    // 0x12deb8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12deb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12debc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12debcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12dec0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12dec0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12dec4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12dec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12dec8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12dec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12decc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12deccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12ded0: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x12ded0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12ded4: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x12ded4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12ded8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12ded8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12dedc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12dedcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12dee0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12dee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12dee4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x12dee4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x12dee8: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x12dee8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x12deec: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x12DEECu;
    {
        const bool branch_taken_0x12deec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12deec) {
            ctx->pc = 0x12E1A4u;
            return;
        }
    }
    ctx->pc = 0x12DEF4u;
}
