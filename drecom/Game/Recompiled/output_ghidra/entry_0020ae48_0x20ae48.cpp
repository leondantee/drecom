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

// Function: entry_0020ae48
// Address: 0x20ae48 - 0x20aef0
void entry_0020ae48_0x20ae48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020ae48_0x20ae48");
#endif

    switch (ctx->pc) {
        case 0x20ae70u: goto label_20ae70;
        default: break;
    }

    ctx->pc = 0x20ae48u;

    // 0x20ae48: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20ae48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20ae4c: 0xac2094e0  sw          $zero, -0x6B20($at)
    ctx->pc = 0x20ae4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6194E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6194E0u, _value); } while (0);
    // 0x20ae50: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20ae54: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x20ae54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20ae58: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x20ae58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x20ae5c: 0x24063c20  addiu       $a2, $zero, 0x3C20
    ctx->pc = 0x20ae5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15392));
    // 0x20ae60: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20ae60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ae64: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x20ae64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20ae68: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20AE68u;
    SET_GPR_U32(ctx, 31, 0x20AE70u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20AE68u, 0x20AE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AE70u;
label_20ae70:
    // 0x20ae70: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20ae70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20ae74: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x20ae74u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x20ae78: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x20ae78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20ae7c: 0xa460127a  sh          $zero, 0x127A($v1)
    ctx->pc = 0x20ae7cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x20ae80: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20ae80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20ae84: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x20ae84u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x20ae88: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20ae88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20ae8c: 0xac401344  sw          $zero, 0x1344($v0)
    ctx->pc = 0x20ae8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4932), GPR_U32(ctx, 0));
    // 0x20ae90: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20ae94: 0xac401348  sw          $zero, 0x1348($v0)
    ctx->pc = 0x20ae94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4936), GPR_U32(ctx, 0));
    // 0x20ae98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20ae98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ae9c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20ae9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20aea0: 0xe42094b8  swc1        $f0, -0x6B48($at)
    ctx->pc = 0x20aea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6194B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6194B8u, _value); } while (0); }
    // 0x20aea4: 0x3c0543e1  lui         $a1, 0x43E1
    ctx->pc = 0x20aea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17377 << 16));
    // 0x20aea8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x20aea8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20aeac: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20aeacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20aeb0: 0xe42094c0  swc1        $f0, -0x6B40($at)
    ctx->pc = 0x20aeb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6194C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6194C0u, _value); } while (0); }
    // 0x20aeb4: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x20aeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20aeb8: 0x90640002  lbu         $a0, 0x2($v1)
    ctx->pc = 0x20aeb8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20aebc: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x20aebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20aec0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x20aec0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x20aec4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20aec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20aec8: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20aec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20aecc: 0xa4430096  sh          $v1, 0x96($v0)
    ctx->pc = 0x20aeccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 150), (uint16_t)GPR_U32(ctx, 3));
    // 0x20aed0: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20aed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20aed4: 0xa4400094  sh          $zero, 0x94($v0)
    ctx->pc = 0x20aed4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 148), (uint16_t)GPR_U32(ctx, 0));
    // 0x20aed8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20aed8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20aedc: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20aee0: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x20aee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x20aee4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x20aee4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20aee8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x20AEE8u;
    {
        const bool branch_taken_0x20aee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20aee8) {
            ctx->pc = 0x20AF10u;
            return;
        }
    }
    ctx->pc = 0x20AEF0u;
}
