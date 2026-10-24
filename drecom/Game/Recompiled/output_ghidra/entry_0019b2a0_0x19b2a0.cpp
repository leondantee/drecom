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

// Function: entry_0019b2a0
// Address: 0x19b2a0 - 0x19b358
void entry_0019b2a0_0x19b2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b2a0_0x19b2a0");
#endif

    switch (ctx->pc) {
        case 0x19b2b0u: goto label_19b2b0;
        case 0x19b2d0u: goto label_19b2d0;
        case 0x19b2dcu: goto label_19b2dc;
        case 0x19b2ecu: goto label_19b2ec;
        case 0x19b2f8u: goto label_19b2f8;
        default: break;
    }

    ctx->pc = 0x19b2a0u;

    // 0x19b2a0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b2a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x19b2a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19b2a8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x19B2A8u;
    SET_GPR_U32(ctx, 31, 0x19B2B0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x19B2A8u, 0x19B2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B2B0u;
label_19b2b0:
    // 0x19b2b0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b2b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19b2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b2b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x19b2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b2bc: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x19b2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x19b2c0: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x19b2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x19b2c4: 0xc44c01a8  lwc1        $f12, 0x1A8($v0)
    ctx->pc = 0x19b2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19b2c8: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x19B2C8u;
    SET_GPR_U32(ctx, 31, 0x19B2D0u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x19B2D0u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19B2D0u) { return; }
    ctx->pc = 0x19B2D0u;
label_19b2d0:
    // 0x19b2d0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b2d4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x19B2D4u;
    SET_GPR_U32(ctx, 31, 0x19B2DCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x19B2D4u, 0x19B2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B2DCu;
label_19b2dc:
    // 0x19b2dc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b2e0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19b2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b2e4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x19B2E4u;
    SET_GPR_U32(ctx, 31, 0x19B2ECu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x19B2E4u, 0x19B2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B2ECu;
label_19b2ec:
    // 0x19b2ec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b2f0: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x19B2F0u;
    SET_GPR_U32(ctx, 31, 0x19B2F8u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x19B2F0u, 0x19B2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B2F8u;
label_19b2f8:
    // 0x19b2f8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b2fc: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x19b2fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x19b300: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19b300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19b304: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x19b304u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x19b308: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19b308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b30c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x19b30cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x19b310: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x19B310u;
    {
        const bool branch_taken_0x19b310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b310) {
            ctx->pc = 0x19B358u;
            return;
        }
    }
    ctx->pc = 0x19B318u;
    // 0x19b318: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b31c: 0x908310a8  lbu         $v1, 0x10A8($a0)
    ctx->pc = 0x19b31cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4264)));
    // 0x19b320: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x19b320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x19b324: 0xa08310a8  sb          $v1, 0x10A8($a0)
    ctx->pc = 0x19b324u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x19b328: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19b328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b32c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19b32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b330: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x19b330u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x19b334: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19b334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b338: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19b338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b33c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x19b33cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x19b340: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19b340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b344: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x19b344u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x19b348: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19b348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b34c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x19b34cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x19b350: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19b350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b354: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x19b354u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x19b358u;
}
