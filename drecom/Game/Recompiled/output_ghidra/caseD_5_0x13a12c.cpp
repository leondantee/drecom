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
// Address: 0x13a12c - 0x13a1c8
void caseD_5_0x13a12c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x13a12c");
#endif

    switch (ctx->pc) {
        case 0x13a13cu: goto label_13a13c;
        case 0x13a148u: goto label_13a148;
        case 0x13a15cu: goto label_13a15c;
        case 0x13a168u: goto label_13a168;
        default: break;
    }

    ctx->pc = 0x13a12cu;

    // 0x13a12c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x13a12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a130: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x13a130u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13a134: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x13A134u;
    SET_GPR_U32(ctx, 31, 0x13A13Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x13A134u, 0x13A13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A13Cu;
label_13a13c:
    // 0x13a13c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x13a13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a140: 0xc05cd10  jal         func_173440
    ctx->pc = 0x13A140u;
    SET_GPR_U32(ctx, 31, 0x13A148u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x13A140u, 0x13A148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A148u;
label_13a148:
    // 0x13a148: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x13a148u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13a14c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x13a14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a150: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13a150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a154: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x13A154u;
    SET_GPR_U32(ctx, 31, 0x13A15Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x13A154u, 0x13A15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A15Cu;
label_13a15c:
    // 0x13a15c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x13a15cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13a160: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x13A160u;
    SET_GPR_U32(ctx, 31, 0x13A168u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x13A160u, 0x13A168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A168u;
label_13a168:
    // 0x13a168: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a16c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x13a16cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x13a170: 0x10600057  beqz        $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x13A170u;
    {
        const bool branch_taken_0x13a170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a170) {
            ctx->pc = 0x13A2D0u;
            return;
        }
    }
    ctx->pc = 0x13A178u;
    // 0x13a178: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a17c: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x13a17cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x13a180: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x13a180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13a184: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13a184u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x13a188: 0x461000f  bgez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x13A188u;
    {
        const bool branch_taken_0x13a188 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x13a188) {
            ctx->pc = 0x13A1C8u;
            return;
        }
    }
    ctx->pc = 0x13A190u;
    // 0x13a190: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x13a190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x13a194: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a198: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x13a198u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x13a19c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13a19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a1a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a1a4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x13a1a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x13a1a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a1ac: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x13a1acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x13a1b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a1b4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x13a1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x13a1b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a1bc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x13a1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x13a1c0: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x13A1C0u;
    {
        const bool branch_taken_0x13a1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a1c0) {
            ctx->pc = 0x13A2D0u;
            return;
        }
    }
    ctx->pc = 0x13A1C8u;
}
