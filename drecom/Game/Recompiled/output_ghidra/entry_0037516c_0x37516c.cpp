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

// Function: entry_0037516c
// Address: 0x37516c - 0x3751e8
void entry_0037516c_0x37516c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037516c_0x37516c");
#endif

    switch (ctx->pc) {
        case 0x375198u: goto label_375198;
        case 0x3751a0u: goto label_3751a0;
        default: break;
    }

    ctx->pc = 0x37516cu;

    // 0x37516c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37516cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375170: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375174: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x375174u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x375178: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37517c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x37517cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375180: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x375180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x375184: 0x3406b403  ori         $a2, $zero, 0xB403
    ctx->pc = 0x375184u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46083);
    // 0x375188: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x375188u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37518c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x37518cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x375190: 0xc0965d0  jal         func_259740
    ctx->pc = 0x375190u;
    SET_GPR_U32(ctx, 31, 0x375198u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x375190u, 0x375198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375198u;
label_375198:
    // 0x375198: 0xc067694  jal         func_19DA50
    ctx->pc = 0x375198u;
    SET_GPR_U32(ctx, 31, 0x3751A0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x375198u, 0x3751A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3751A0u;
label_3751a0:
    // 0x3751a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3751a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3751a4: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x3751a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x3751a8: 0x244201a4  addiu       $v0, $v0, 0x1A4
    ctx->pc = 0x3751a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 420));
    // 0x3751ac: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x3751acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3751b0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3751b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3751b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3751b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3751b8: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x3751b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x3751bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3751bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3751c0: 0x8c5002d0  lw          $s0, 0x2D0($v0)
    ctx->pc = 0x3751c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x3751c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3751c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3751c8: 0x0  nop
    ctx->pc = 0x3751c8u;
    // NOP
    // 0x3751cc: 0xe600011c  swc1        $f0, 0x11C($s0)
    ctx->pc = 0x3751ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    // 0x3751d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3751d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3751d4: 0x0  nop
    ctx->pc = 0x3751d4u;
    // NOP
    // 0x3751d8: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x3751d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x3751dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3751dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3751e0: 0x0  nop
    ctx->pc = 0x3751e0u;
    // NOP
    // 0x3751e4: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x3751e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    ctx->pc = 0x3751e8u;
}
