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
// Address: 0x14c140 - 0x14c1c8
void caseD_3_0x14c140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x14c140");
#endif

    switch (ctx->pc) {
        case 0x14c150u: goto label_14c150;
        case 0x14c15cu: goto label_14c15c;
        case 0x14c170u: goto label_14c170;
        case 0x14c17cu: goto label_14c17c;
        default: break;
    }

    ctx->pc = 0x14c140u;

    // 0x14c140: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14c140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c144: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14c144u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14c148: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14C148u;
    SET_GPR_U32(ctx, 31, 0x14C150u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14C148u, 0x14C150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C150u;
label_14c150:
    // 0x14c150: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14c150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c154: 0xc05cd10  jal         func_173440
    ctx->pc = 0x14C154u;
    SET_GPR_U32(ctx, 31, 0x14C15Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14C154u, 0x14C15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C15Cu;
label_14c15c:
    // 0x14c15c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14c15cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14c160: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14c160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c164: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14c164u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14c168: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14C168u;
    SET_GPR_U32(ctx, 31, 0x14C170u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14C168u, 0x14C170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C170u;
label_14c170:
    // 0x14c170: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14c170u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14c174: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14C174u;
    SET_GPR_U32(ctx, 31, 0x14C17Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14C174u, 0x14C17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C17Cu;
label_14c17c:
    // 0x14c17c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14c17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c180: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x14c180u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x14c184: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14c184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14c188: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x14c188u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x14c18c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c190: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x14c190u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x14c194: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x14c194u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x14c198: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x14c198u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x14c19c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c1a0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x14c1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14c1a4: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x14c1a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14c1a8: 0x1460003f  bnez        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x14C1A8u;
    {
        const bool branch_taken_0x14c1a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c1a8) {
            ctx->pc = 0x14C2A8u;
            return;
        }
    }
    ctx->pc = 0x14C1B0u;
    // 0x14c1b0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14c1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c1b4: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x14c1b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x14c1b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14c1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14c1bc: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x14c1bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x14c1c0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x14C1C0u;
    {
        const bool branch_taken_0x14c1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c1c0) {
            ctx->pc = 0x14C2A8u;
            return;
        }
    }
    ctx->pc = 0x14C1C8u;
}
