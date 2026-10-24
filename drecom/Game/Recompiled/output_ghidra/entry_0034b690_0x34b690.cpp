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

// Function: entry_0034b690
// Address: 0x34b690 - 0x34b728
void entry_0034b690_0x34b690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034b690_0x34b690");
#endif

    switch (ctx->pc) {
        case 0x34b6acu: goto label_34b6ac;
        case 0x34b6b8u: goto label_34b6b8;
        case 0x34b6c8u: goto label_34b6c8;
        case 0x34b6d4u: goto label_34b6d4;
        default: break;
    }

    ctx->pc = 0x34b690u;

    // 0x34b690: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x34b690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x34b694: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34b694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b698: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x34b698u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x34b69c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x34b69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b6a0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34b6a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34b6a4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34B6A4u;
    SET_GPR_U32(ctx, 31, 0x34B6ACu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34B6A4u, 0x34B6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B6ACu;
label_34b6ac:
    // 0x34b6ac: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x34b6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b6b0: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x34B6B0u;
    SET_GPR_U32(ctx, 31, 0x34B6B8u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x34B6B0u, 0x34B6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B6B8u;
label_34b6b8:
    // 0x34b6b8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x34b6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b6bc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34b6bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34b6c0: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34B6C0u;
    SET_GPR_U32(ctx, 31, 0x34B6C8u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34B6C0u, 0x34B6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B6C8u;
label_34b6c8:
    // 0x34b6c8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x34b6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b6cc: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34B6CCu;
    SET_GPR_U32(ctx, 31, 0x34B6D4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34B6CCu, 0x34B6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B6D4u;
label_34b6d4:
    // 0x34b6d4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x34b6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b6d8: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x34b6d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x34b6dc: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x34b6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x34b6e0: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x34b6e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x34b6e4: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x34B6E4u;
    {
        const bool branch_taken_0x34b6e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x34b6e4) {
            ctx->pc = 0x34B728u;
            return;
        }
    }
    ctx->pc = 0x34B6ECu;
    // 0x34b6ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34b6ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34b6f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34b6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b6f4: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x34b6f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
    // 0x34b6f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34b6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b6fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34b6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b700: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x34b700u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x34b704: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x34b704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x34b708: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34b708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b70c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x34b70cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x34b710: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34b710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b714: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x34b714u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34b718: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34b718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b71c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34b71cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34b720: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34b720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b724: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x34b724u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x34b728u;
}
