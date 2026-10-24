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

// Function: entry_0026adf0
// Address: 0x26adf0 - 0x26ae90
void entry_0026adf0_0x26adf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026adf0_0x26adf0");
#endif

    switch (ctx->pc) {
        case 0x26ae24u: goto label_26ae24;
        case 0x26ae60u: goto label_26ae60;
        default: break;
    }

    ctx->pc = 0x26adf0u;

    // 0x26adf0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26adf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26adf4: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x26adf4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x26adf8: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x26adf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x26adfc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26adfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26ae00: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x26ae00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x26ae04: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26ae04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ae08: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ae0c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26ae0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x26ae10: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x26ae10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x26ae14: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x26ae14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26ae18: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26ae18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26ae1c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x26AE1Cu;
    SET_GPR_U32(ctx, 31, 0x26AE24u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26AE1Cu, 0x26AE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AE24u;
label_26ae24:
    // 0x26ae24: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26ae24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ae28: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26ae28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26ae2c: 0x2402fff5  addiu       $v0, $zero, -0xB
    ctx->pc = 0x26ae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
    // 0x26ae30: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26ae30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26ae34: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x26ae34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x26ae38: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x26ae38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x26ae3c: 0x8c23a538  lw          $v1, -0x5AC8($at)
    ctx->pc = 0x26ae3cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5FA538u));
    // 0x26ae40: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x26ae40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x26ae44: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26ae44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26ae48: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x26ae48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x26ae4c: 0xac22a538  sw          $v0, -0x5AC8($at)
    ctx->pc = 0x26ae4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FA538u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FA538u, _value); } while (0);
    // 0x26ae50: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ae54: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x26ae54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x26ae58: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x26AE58u;
    SET_GPR_U32(ctx, 31, 0x26AE60u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26AE58u, 0x26AE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AE60u;
label_26ae60:
    // 0x26ae60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26ae60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ae64: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ae64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ae68: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x26ae68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    // 0x26ae6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26ae6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ae70: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ae70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ae74: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x26ae74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
    // 0x26ae78: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ae78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ae7c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x26ae7cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x26ae80: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26ae80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ae84: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x26ae84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x26ae88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26ae88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26ae8c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x26ae8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x26ae90u;
}
