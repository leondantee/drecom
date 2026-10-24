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

// Function: entry_002062ec
// Address: 0x2062ec - 0x2063a0
void entry_002062ec_0x2062ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002062ec_0x2062ec");
#endif

    ctx->pc = 0x2062ecu;

    // 0x2062ec: 0x72208628  paddub      $s0, $s1, $zero
    ctx->pc = 0x2062ecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2062f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2062f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2062f4: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x2062f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x2062f8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2062f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2062fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2062fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x206300: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x206300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x206304: 0xac2292e0  sw          $v0, -0x6D20($at)
    ctx->pc = 0x206304u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6192E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192E0u, _value); } while (0);
    // 0x206308: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x206308u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20630c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20630cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x206310: 0xe42092f0  swc1        $f0, -0x6D10($at)
    ctx->pc = 0x206310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192F0u, _value); } while (0); }
    // 0x206314: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x206314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206318: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x206318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x20631c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x20631cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x206320: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x206320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x206324: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x206324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206328: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x206328u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x20632c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x20632cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x206330: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x206330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206334: 0x0  nop
    ctx->pc = 0x206334u;
    // NOP
    // 0x206338: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x206338u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20633c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20633cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x206340: 0xe42092f4  swc1        $f0, -0x6D0C($at)
    ctx->pc = 0x206340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192F4u, _value); } while (0); }
    // 0x206344: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x206344u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206348: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x206348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20634c: 0xe42092f8  swc1        $f0, -0x6D08($at)
    ctx->pc = 0x20634cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192F8u, _value); } while (0); }
    // 0x206350: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x206350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x206354: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x206354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206358: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x206358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20635c: 0xe42092fc  swc1        $f0, -0x6D04($at)
    ctx->pc = 0x20635cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192FCu, _value); } while (0); }
    // 0x206360: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x206360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x206364: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x206364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206368: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x206368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20636c: 0xe4209300  swc1        $f0, -0x6D00($at)
    ctx->pc = 0x20636cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619300u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619300u, _value); } while (0); }
    // 0x206370: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206374: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x206374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x206378: 0xa4229304  sh          $v0, -0x6CFC($at)
    ctx->pc = 0x206378u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x619304u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x619304u, _value); } while (0);
    // 0x20637c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20637cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x206380: 0xa0209306  sb          $zero, -0x6CFA($at)
    ctx->pc = 0x206380u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619306u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x619306u, _value); } while (0);
    // 0x206384: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x206384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x206388: 0xa0209307  sb          $zero, -0x6CF9($at)
    ctx->pc = 0x206388u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619307u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x619307u, _value); } while (0);
    // 0x20638c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20638cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206390: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x206390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x206394: 0x244592e0  addiu       $a1, $v0, -0x6D20
    ctx->pc = 0x206394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939360));
    // 0x206398: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x206398u;
    SET_GPR_U32(ctx, 31, 0x2063A0u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x206398u, 0x2063A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2063A0u;
}
