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

// Function: entry_002db694
// Address: 0x2db694 - 0x2db71c
void entry_002db694_0x2db694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002db694_0x2db694");
#endif

    switch (ctx->pc) {
        case 0x2db6c0u: goto label_2db6c0;
        case 0x2db6dcu: goto label_2db6dc;
        case 0x2db6f4u: goto label_2db6f4;
        case 0x2db700u: goto label_2db700;
        case 0x2db710u: goto label_2db710;
        default: break;
    }

    ctx->pc = 0x2db694u;

    // 0x2db694: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x2db694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x2db698: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2db698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2db69c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2db69cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2db6a0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2db6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db6a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2db6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db6a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2db6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db6ac: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2db6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2db6b0: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2db6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2db6b4: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x2db6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x2db6b8: 0xc05c848  jal         func_172120
    ctx->pc = 0x2DB6B8u;
    SET_GPR_U32(ctx, 31, 0x2DB6C0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2DB6B8u, 0x2DB6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB6C0u;
label_2db6c0:
    // 0x2db6c0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2db6c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2db6c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2db6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db6c8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2db6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db6cc: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x2db6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db6d0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2db6d0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2db6d4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2DB6D4u;
    SET_GPR_U32(ctx, 31, 0x2DB6DCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2DB6D4u, 0x2DB6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB6DCu;
label_2db6dc:
    // 0x2db6dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2db6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db6e0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2db6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2db6e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2db6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db6e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2db6e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2db6ec: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DB6ECu;
    SET_GPR_U32(ctx, 31, 0x2DB6F4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DB6ECu, 0x2DB6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB6F4u;
label_2db6f4:
    // 0x2db6f4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2db6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db6f8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DB6F8u;
    SET_GPR_U32(ctx, 31, 0x2DB700u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DB6F8u, 0x2DB700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB700u;
label_2db700:
    // 0x2db700: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2db700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db704: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2db704u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2db708: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DB708u;
    SET_GPR_U32(ctx, 31, 0x2DB710u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DB708u, 0x2DB710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB710u;
label_2db710:
    // 0x2db710: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2db710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db714: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DB714u;
    SET_GPR_U32(ctx, 31, 0x2DB71Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DB714u, 0x2DB71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB71Cu;
}
