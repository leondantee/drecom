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

// Function: caseD_5
// Address: 0x14c204 - 0x14c2a8
void caseD_5_0x14c204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x14c204");
#endif

    switch (ctx->pc) {
        case 0x14c214u: goto label_14c214;
        case 0x14c220u: goto label_14c220;
        case 0x14c234u: goto label_14c234;
        case 0x14c240u: goto label_14c240;
        default: break;
    }

    ctx->pc = 0x14c204u;

    // 0x14c204: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14c204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c208: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14c208u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14c20c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14C20Cu;
    SET_GPR_U32(ctx, 31, 0x14C214u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14C20Cu, 0x14C214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C214u;
label_14c214:
    // 0x14c214: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14c214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c218: 0xc05cd10  jal         func_173440
    ctx->pc = 0x14C218u;
    SET_GPR_U32(ctx, 31, 0x14C220u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14C218u, 0x14C220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C220u;
label_14c220:
    // 0x14c220: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14c220u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14c224: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14c224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c228: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14c228u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14c22c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14C22Cu;
    SET_GPR_U32(ctx, 31, 0x14C234u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14C22Cu, 0x14C234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C234u;
label_14c234:
    // 0x14c234: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14c234u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14c238: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14C238u;
    SET_GPR_U32(ctx, 31, 0x14C240u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14C238u, 0x14C240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C240u;
label_14c240:
    // 0x14c240: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c244: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14c244u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x14c248: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x14C248u;
    {
        const bool branch_taken_0x14c248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c248) {
            ctx->pc = 0x14C2A8u;
            return;
        }
    }
    ctx->pc = 0x14C250u;
    // 0x14c250: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14c250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c254: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x14c254u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x14c258: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14c258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14c25c: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x14c25cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x14c260: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c264: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x14c264u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x14c268: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x14C268u;
    {
        const bool branch_taken_0x14c268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c268) {
            ctx->pc = 0x14C2A8u;
            return;
        }
    }
    ctx->pc = 0x14C270u;
    // 0x14c270: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14c270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c274: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c278: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x14c278u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x14c27c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c280: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x14c280u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14c284: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c288: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x14c288u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x14c28c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c290: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x14c290u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x14c294: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x14c294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14c298: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c29c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x14c29cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x14c2a0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x14C2A0u;
    {
        const bool branch_taken_0x14c2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c2a0) {
            ctx->pc = 0x14C2A8u;
            return;
        }
    }
    ctx->pc = 0x14C2A8u;
}
