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

// Function: entry_0019b720
// Address: 0x19b720 - 0x19b7c8
void entry_0019b720_0x19b720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b720_0x19b720");
#endif

    switch (ctx->pc) {
        case 0x19b730u: goto label_19b730;
        case 0x19b750u: goto label_19b750;
        case 0x19b75cu: goto label_19b75c;
        case 0x19b76cu: goto label_19b76c;
        case 0x19b778u: goto label_19b778;
        default: break;
    }

    ctx->pc = 0x19b720u;

    // 0x19b720: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19b720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b724: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x19b724u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19b728: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x19B728u;
    SET_GPR_U32(ctx, 31, 0x19B730u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x19B728u, 0x19B730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B730u;
label_19b730:
    // 0x19b730: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19b730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b734: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19b734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b738: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b73c: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x19b73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x19b740: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x19b740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x19b744: 0xc44c01a8  lwc1        $f12, 0x1A8($v0)
    ctx->pc = 0x19b744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19b748: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x19B748u;
    SET_GPR_U32(ctx, 31, 0x19B750u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x19B750u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19B750u) { return; }
    ctx->pc = 0x19B750u;
label_19b750:
    // 0x19b750: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19b750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b754: 0xc05cd10  jal         func_173440
    ctx->pc = 0x19B754u;
    SET_GPR_U32(ctx, 31, 0x19B75Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x19B754u, 0x19B75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B75Cu;
label_19b75c:
    // 0x19b75c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19b75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b760: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19b760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b764: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x19B764u;
    SET_GPR_U32(ctx, 31, 0x19B76Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x19B764u, 0x19B76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B76Cu;
label_19b76c:
    // 0x19b76c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19b76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b770: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x19B770u;
    SET_GPR_U32(ctx, 31, 0x19B778u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x19B770u, 0x19B778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B778u;
label_19b778:
    // 0x19b778: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19b778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b77c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x19b77cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x19b780: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x19B780u;
    {
        const bool branch_taken_0x19b780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b780) {
            ctx->pc = 0x19B7C8u;
            return;
        }
    }
    ctx->pc = 0x19B788u;
    // 0x19b788: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19b788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b78c: 0x908310a8  lbu         $v1, 0x10A8($a0)
    ctx->pc = 0x19b78cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4264)));
    // 0x19b790: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x19b790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x19b794: 0xa08310a8  sb          $v1, 0x10A8($a0)
    ctx->pc = 0x19b794u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x19b798: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19b798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b79c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19b79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b7a0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x19b7a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x19b7a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19b7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b7a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19b7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b7ac: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x19b7acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x19b7b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19b7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b7b4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x19b7b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x19b7b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19b7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b7bc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x19b7bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x19b7c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19b7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b7c4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x19b7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x19b7c8u;
}
