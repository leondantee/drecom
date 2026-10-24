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

// Function: entry_00131898
// Address: 0x131898 - 0x1318f8
void entry_00131898_0x131898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131898_0x131898");
#endif

    switch (ctx->pc) {
        case 0x1318c8u: goto label_1318c8;
        default: break;
    }

    ctx->pc = 0x131898u;

    // 0x131898: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13189c: 0xc44011f8  lwc1        $f0, 0x11F8($v0)
    ctx->pc = 0x13189cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1318a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1318a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1318a4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1318a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1318a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1318a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1318ac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1318acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1318b0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1318b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1318b4: 0x2406031e  addiu       $a2, $zero, 0x31E
    ctx->pc = 0x1318b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 798));
    // 0x1318b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1318b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1318bc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1318bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1318c0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1318C0u;
    SET_GPR_U32(ctx, 31, 0x1318C8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1318C0u, 0x1318C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1318C8u;
label_1318c8:
    // 0x1318c8: 0x3c02c2b4  lui         $v0, 0xC2B4
    ctx->pc = 0x1318c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49844 << 16));
    // 0x1318cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1318ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1318d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1318d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1318d4: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1318d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x1318d8: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x1318d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x1318dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1318dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1318e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1318e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1318e4: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x1318e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x1318e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1318e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1318ec: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1318ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1318f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1318f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1318f4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1318f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1318f8u;
}
