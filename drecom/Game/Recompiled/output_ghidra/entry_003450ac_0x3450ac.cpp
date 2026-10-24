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

// Function: entry_003450ac
// Address: 0x3450ac - 0x345134
void entry_003450ac_0x3450ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003450ac_0x3450ac");
#endif

    switch (ctx->pc) {
        case 0x3450d8u: goto label_3450d8;
        case 0x3450f4u: goto label_3450f4;
        case 0x34510cu: goto label_34510c;
        case 0x345118u: goto label_345118;
        case 0x345128u: goto label_345128;
        default: break;
    }

    ctx->pc = 0x3450acu;

    // 0x3450ac: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x3450acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x3450b0: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x3450b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x3450b4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3450b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3450b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3450b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3450bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3450bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3450c0: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x3450c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x3450c4: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x3450c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3450c8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x3450c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3450cc: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x3450ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x3450d0: 0xc05c848  jal         func_172120
    ctx->pc = 0x3450D0u;
    SET_GPR_U32(ctx, 31, 0x3450D8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x3450D0u, 0x3450D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3450D8u;
label_3450d8:
    // 0x3450d8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x3450d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x3450dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3450dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3450e0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x3450e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3450e4: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x3450e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3450e8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x3450e8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3450ec: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3450ECu;
    SET_GPR_U32(ctx, 31, 0x3450F4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3450ECu, 0x3450F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3450F4u;
label_3450f4:
    // 0x3450f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3450f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3450f8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x3450f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x3450fc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3450fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x345100: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x345100u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x345104: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x345104u;
    SET_GPR_U32(ctx, 31, 0x34510Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x345104u, 0x34510Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34510Cu;
label_34510c:
    // 0x34510c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34510cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x345110: 0xc05cd10  jal         func_173440
    ctx->pc = 0x345110u;
    SET_GPR_U32(ctx, 31, 0x345118u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x345110u, 0x345118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345118u;
label_345118:
    // 0x345118: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x345118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34511c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34511cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x345120: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x345120u;
    SET_GPR_U32(ctx, 31, 0x345128u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x345120u, 0x345128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345128u;
label_345128:
    // 0x345128: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x345128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34512c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34512Cu;
    SET_GPR_U32(ctx, 31, 0x345134u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34512Cu, 0x345134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345134u;
}
