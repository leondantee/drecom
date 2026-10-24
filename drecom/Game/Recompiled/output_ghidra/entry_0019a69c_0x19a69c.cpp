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

// Function: entry_0019a69c
// Address: 0x19a69c - 0x19a750
void entry_0019a69c_0x19a69c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a69c_0x19a69c");
#endif

    switch (ctx->pc) {
        case 0x19a6acu: goto label_19a6ac;
        case 0x19a6ccu: goto label_19a6cc;
        case 0x19a6d8u: goto label_19a6d8;
        case 0x19a6e8u: goto label_19a6e8;
        case 0x19a6f4u: goto label_19a6f4;
        default: break;
    }

    ctx->pc = 0x19a69cu;

    // 0x19a69c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x19a69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a6a0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x19a6a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19a6a4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x19A6A4u;
    SET_GPR_U32(ctx, 31, 0x19A6ACu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x19A6A4u, 0x19A6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A6ACu;
label_19a6ac:
    // 0x19a6ac: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x19a6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a6b0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19a6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a6b4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a6b8: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x19a6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x19a6bc: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x19a6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x19a6c0: 0xc44c01a8  lwc1        $f12, 0x1A8($v0)
    ctx->pc = 0x19a6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19a6c4: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x19A6C4u;
    SET_GPR_U32(ctx, 31, 0x19A6CCu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x19A6CCu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19A6CCu) { return; }
    ctx->pc = 0x19A6CCu;
label_19a6cc:
    // 0x19a6cc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x19a6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a6d0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x19A6D0u;
    SET_GPR_U32(ctx, 31, 0x19A6D8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x19A6D0u, 0x19A6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A6D8u;
label_19a6d8:
    // 0x19a6d8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x19a6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a6dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x19a6dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19a6e0: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x19A6E0u;
    SET_GPR_U32(ctx, 31, 0x19A6E8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x19A6E0u, 0x19A6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A6E8u;
label_19a6e8:
    // 0x19a6e8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x19a6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a6ec: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x19A6ECu;
    SET_GPR_U32(ctx, 31, 0x19A6F4u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x19A6ECu, 0x19A6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A6F4u;
label_19a6f4:
    // 0x19a6f4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x19a6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a6f8: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x19a6f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x19a6fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a700: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x19a700u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x19a704: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19a704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a708: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x19a708u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x19a70c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x19A70Cu;
    {
        const bool branch_taken_0x19a70c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a70c) {
            ctx->pc = 0x19A750u;
            return;
        }
    }
    ctx->pc = 0x19A714u;
    // 0x19a714: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x19a714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x19a718: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19a718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a71c: 0xac641330  sw          $a0, 0x1330($v1)
    ctx->pc = 0x19a71cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4912), GPR_U32(ctx, 4));
    // 0x19a720: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19a720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a724: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19a724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a728: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x19a728u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x19a72c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19a72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a730: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19a730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a734: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x19a734u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x19a738: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19a738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a73c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x19a73cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x19a740: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19a740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a744: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x19a744u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x19a748: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19a748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a74c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x19a74cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x19a750u;
}
