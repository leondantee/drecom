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

// Function: entry_00206678
// Address: 0x206678 - 0x20671c
void entry_00206678_0x206678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206678_0x206678");
#endif

    switch (ctx->pc) {
        case 0x20669cu: goto label_20669c;
        case 0x2066b4u: goto label_2066b4;
        case 0x2066c0u: goto label_2066c0;
        case 0x2066d0u: goto label_2066d0;
        case 0x2066dcu: goto label_2066dc;
        default: break;
    }

    ctx->pc = 0x206678u;

    // 0x206678: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x206678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20667c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x20667cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206680: 0x3c023c80  lui         $v0, 0x3C80
    ctx->pc = 0x206680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15488 << 16));
    // 0x206684: 0x3442adfd  ori         $v0, $v0, 0xADFD
    ctx->pc = 0x206684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44541);
    // 0x206688: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x206688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20668c: 0x0  nop
    ctx->pc = 0x20668cu;
    // NOP
    // 0x206690: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x206690u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x206694: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x206694u;
    SET_GPR_U32(ctx, 31, 0x20669Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x206694u, 0x20669Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20669Cu;
label_20669c:
    // 0x20669c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20669cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2066a0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2066a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2066a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2066a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2066a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2066a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2066ac: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2066ACu;
    SET_GPR_U32(ctx, 31, 0x2066B4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2066ACu, 0x2066B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2066B4u;
label_2066b4:
    // 0x2066b4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2066b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2066b8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2066B8u;
    SET_GPR_U32(ctx, 31, 0x2066C0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2066B8u, 0x2066C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2066C0u;
label_2066c0:
    // 0x2066c0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2066c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2066c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2066c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2066c8: 0xc080f60  jal         func_203D80
    ctx->pc = 0x2066C8u;
    SET_GPR_U32(ctx, 31, 0x2066D0u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x2066C8u, 0x2066D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2066D0u;
label_2066d0:
    // 0x2066d0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2066d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2066d4: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2066D4u;
    SET_GPR_U32(ctx, 31, 0x2066DCu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2066D4u, 0x2066DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2066DCu;
label_2066dc:
    // 0x2066dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2066dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2066e0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2066e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2066e4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2066E4u;
    {
        const bool branch_taken_0x2066e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2066e4) {
            ctx->pc = 0x20671Cu;
            return;
        }
    }
    ctx->pc = 0x2066ECu;
    // 0x2066ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2066ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2066f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2066f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2066f4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2066f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2066f8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2066f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2066fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2066fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206700: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x206700u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x206704: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x206704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206708: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x206708u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20670c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20670cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206710: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x206710u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x206714: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x206714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206718: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x206718u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x20671cu;
}
