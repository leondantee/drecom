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

// Function: entry_002d43ec
// Address: 0x2d43ec - 0x2d44ac
void entry_002d43ec_0x2d43ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d43ec_0x2d43ec");
#endif

    switch (ctx->pc) {
        case 0x2d4418u: goto label_2d4418;
        case 0x2d442cu: goto label_2d442c;
        case 0x2d4444u: goto label_2d4444;
        case 0x2d4450u: goto label_2d4450;
        case 0x2d4460u: goto label_2d4460;
        case 0x2d446cu: goto label_2d446c;
        default: break;
    }

    ctx->pc = 0x2d43ecu;

    // 0x2d43ec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d43ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d43f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d43f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d43f4: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x2d43f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x2d43f8: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x2d43f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x2d43fc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d43fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d4400: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2d4400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2d4404: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2d4404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d4408: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d4408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d440c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d440cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d4410: 0xc05c848  jal         func_172120
    ctx->pc = 0x2D4410u;
    SET_GPR_U32(ctx, 31, 0x2D4418u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2D4410u, 0x2D4418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4418u;
label_2d4418:
    // 0x2d4418: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d441c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2d441cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4420: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2d4420u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d4424: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2D4424u;
    SET_GPR_U32(ctx, 31, 0x2D442Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2D4424u, 0x2D442Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D442Cu;
label_2d442c:
    // 0x2d442c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d442cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4430: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2d4430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2d4434: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4438: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d4438u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d443c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2D443Cu;
    SET_GPR_U32(ctx, 31, 0x2D4444u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2D443Cu, 0x2D4444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4444u;
label_2d4444:
    // 0x2d4444: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4448: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2D4448u;
    SET_GPR_U32(ctx, 31, 0x2D4450u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D4448u, 0x2D4450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4450u;
label_2d4450:
    // 0x2d4450: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4454: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d4454u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d4458: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2D4458u;
    SET_GPR_U32(ctx, 31, 0x2D4460u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D4458u, 0x2D4460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4460u;
label_2d4460:
    // 0x2d4460: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4464: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D4464u;
    SET_GPR_U32(ctx, 31, 0x2D446Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D4464u, 0x2D446Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D446Cu;
label_2d446c:
    // 0x2d446c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d446cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4470: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d4470u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d4474: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D4474u;
    {
        const bool branch_taken_0x2d4474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4474) {
            ctx->pc = 0x2D44ACu;
            return;
        }
    }
    ctx->pc = 0x2D447Cu;
    // 0x2d447c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d447cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4480: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d4480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4484: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d4484u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d4488: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d4488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d448c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d448cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4490: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d4490u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d4494: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d4494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4498: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d4498u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d449c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d449cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d44a0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d44a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d44a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d44a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d44a8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d44a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d44acu;
}
