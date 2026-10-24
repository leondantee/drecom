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
// Address: 0x34b094 - 0x34b134
void caseD_5_0x34b094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x34b094");
#endif

    switch (ctx->pc) {
        case 0x34b0a0u: goto label_34b0a0;
        case 0x34b0ecu: goto label_34b0ec;
        case 0x34b0f8u: goto label_34b0f8;
        default: break;
    }

    ctx->pc = 0x34b094u;

    // 0x34b094: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34b094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b098: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34B098u;
    SET_GPR_U32(ctx, 31, 0x34B0A0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34B098u, 0x34B0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B0A0u;
label_34b0a0:
    // 0x34b0a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b0a4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34b0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34b0a8: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x34b0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b0ac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34b0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b0b0: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x34b0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b0b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34b0b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34b0b8: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x34b0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x34b0bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34b0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b0c0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34b0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34b0c4: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x34b0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b0c8: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x34b0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x34b0cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34b0ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34b0d0: 0x0  nop
    ctx->pc = 0x34b0d0u;
    // NOP
    // 0x34b0d4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x34b0d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34b0d8: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x34b0d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x34b0dc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34b0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b0e0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34b0e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34b0e4: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34B0E4u;
    SET_GPR_U32(ctx, 31, 0x34B0ECu);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34B0E4u, 0x34B0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B0ECu;
label_34b0ec:
    // 0x34b0ec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34b0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b0f0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34B0F0u;
    SET_GPR_U32(ctx, 31, 0x34B0F8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34B0F0u, 0x34B0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B0F8u;
label_34b0f8:
    // 0x34b0f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34b0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b0fc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x34b0fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x34b100: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x34B100u;
    {
        const bool branch_taken_0x34b100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b100) {
            ctx->pc = 0x34B134u;
            return;
        }
    }
    ctx->pc = 0x34B108u;
    // 0x34b108: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x34b108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34b10c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34b10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b110: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34b110u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34b114: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34b114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b118: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34b118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b11c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34b11cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34b120: 0x24060811  addiu       $a2, $zero, 0x811
    ctx->pc = 0x34b120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2065));
    // 0x34b124: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34b124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b128: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34b128u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34b12c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34B12Cu;
    SET_GPR_U32(ctx, 31, 0x34B134u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34B12Cu, 0x34B134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B134u;
}
