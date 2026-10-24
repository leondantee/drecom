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

// Function: entry_0020a118
// Address: 0x20a118 - 0x20a474
void entry_0020a118_0x20a118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020a118_0x20a118");
#endif

    switch (ctx->pc) {
        case 0x20a188u: goto label_20a188;
        case 0x20a19cu: goto label_20a19c;
        case 0x20a1d4u: goto label_20a1d4;
        case 0x20a234u: goto label_20a234;
        case 0x20a254u: goto label_20a254;
        case 0x20a358u: goto label_20a358;
        case 0x20a46cu: goto label_20a46c;
        default: break;
    }

    ctx->pc = 0x20a118u;

    // 0x20a118: 0x8faa0218  lw          $t2, 0x218($sp)
    ctx->pc = 0x20a118u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a11c: 0x8542127a  lh          $v0, 0x127A($t2)
    ctx->pc = 0x20a11cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4730)));
    // 0x20a120: 0x144000d4  bnez        $v0, . + 4 + (0xD4 << 2)
    ctx->pc = 0x20A120u;
    {
        const bool branch_taken_0x20a120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a120) {
            ctx->pc = 0x20A474u;
            return;
        }
    }
    ctx->pc = 0x20A128u;
    // 0x20a128: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a12c: 0xc4219488  lwc1        $f1, -0x6B78($at)
    ctx->pc = 0x20a12cu;
    { uint32_t bits = FAST_READ32(0x619488u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a130: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x20a130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x20a134: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20a134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a138: 0x0  nop
    ctx->pc = 0x20a138u;
    // NOP
    // 0x20a13c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20a13cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20a140: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a144: 0xe4209488  swc1        $f0, -0x6B78($at)
    ctx->pc = 0x20a144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619488u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619488u, _value); } while (0); }
    // 0x20a148: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a14c: 0xc4209488  lwc1        $f0, -0x6B78($at)
    ctx->pc = 0x20a14cu;
    { uint32_t bits = FAST_READ32(0x619488u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a150: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a154: 0x8c229310  lw          $v0, -0x6CF0($at)
    ctx->pc = 0x20a154u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x619310u));
    // 0x20a158: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x20a158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x20a15c: 0x8fa40218  lw          $a0, 0x218($sp)
    ctx->pc = 0x20a15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a160: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x20a160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a164: 0x3c023c83  lui         $v0, 0x3C83
    ctx->pc = 0x20a164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15491 << 16));
    // 0x20a168: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x20a168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x20a16c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x20a16cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20a170: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x20a170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x20a174: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x20a174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20a178: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x20a178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x20a17c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x20a17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x20a180: 0xc05c848  jal         func_172120
    ctx->pc = 0x20A180u;
    SET_GPR_U32(ctx, 31, 0x20A188u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x20A180u, 0x20A188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A188u;
label_20a188:
    // 0x20a188: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20a188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a18c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x20a18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a190: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x20a190u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20a194: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x20A194u;
    SET_GPR_U32(ctx, 31, 0x20A19Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x20A194u, 0x20A19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A19Cu;
label_20a19c:
    // 0x20a19c: 0x8fb10218  lw          $s1, 0x218($sp)
    ctx->pc = 0x20a19cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a1a0: 0xe62000d4  swc1        $f0, 0xD4($s1)
    ctx->pc = 0x20a1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    // 0x20a1a4: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20a1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a1a8: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x20a1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x20a1ac: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x20a1acu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20a1b0: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x20a1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x20a1b4: 0x24a692c0  addiu       $a2, $a1, -0x6D40
    ctx->pc = 0x20a1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939328));
    // 0x20a1b8: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x20a1b8u;
    do { __m128i _value = (GPR_VEC(ctx, 4)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6192C0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6192C0u, _value); } while (0);
    // 0x20a1bc: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20a1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a1c0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x20a1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x20a1c4: 0x24649280  addiu       $a0, $v1, -0x6D80
    ctx->pc = 0x20a1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939264));
    // 0x20a1c8: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x20a1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20a1cc: 0xc067844  jal         func_19E110
    ctx->pc = 0x20A1CCu;
    SET_GPR_U32(ctx, 31, 0x20A1D4u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x20A1CCu, 0x20A1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A1D4u;
label_20a1d4:
    // 0x20a1d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20a1d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a1d8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a1d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a1dc: 0xe42094ac  swc1        $f0, -0x6B54($at)
    ctx->pc = 0x20a1dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6194ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6194ACu, _value); } while (0); }
    // 0x20a1e0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a1e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a1e4: 0xe42094a0  swc1        $f0, -0x6B60($at)
    ctx->pc = 0x20a1e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6194A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6194A0u, _value); } while (0); }
    // 0x20a1e8: 0x8fa40218  lw          $a0, 0x218($sp)
    ctx->pc = 0x20a1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a1ec: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x20a1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a1f0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x20a1f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x20a1f4: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x20a1f4u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a1f8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20a1f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x20a1fc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a1fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a200: 0xe42094a4  swc1        $f0, -0x6B5C($at)
    ctx->pc = 0x20a200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6194A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6194A4u, _value); } while (0); }
    // 0x20a204: 0x8fa60218  lw          $a2, 0x218($sp)
    ctx->pc = 0x20a204u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a208: 0xc4c0128c  lwc1        $f0, 0x128C($a2)
    ctx->pc = 0x20a208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a20c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a20cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a210: 0xe42094a8  swc1        $f0, -0x6B58($at)
    ctx->pc = 0x20a210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6194A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6194A8u, _value); } while (0); }
    // 0x20a214: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20a214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20a218: 0x244494a0  addiu       $a0, $v0, -0x6B60
    ctx->pc = 0x20a218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939808));
    // 0x20a21c: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x20a21cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x20a220: 0x26059280  addiu       $a1, $s0, -0x6D80
    ctx->pc = 0x20a220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939264));
    // 0x20a224: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20a224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20a228: 0x244694a0  addiu       $a2, $v0, -0x6B60
    ctx->pc = 0x20a228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939808));
    // 0x20a22c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x20A22Cu;
    SET_GPR_U32(ctx, 31, 0x20A234u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x20A234u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20A234u) { return; }
    ctx->pc = 0x20A234u;
label_20a234:
    // 0x20a234: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20a234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20a238: 0x244492c0  addiu       $a0, $v0, -0x6D40
    ctx->pc = 0x20a238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x20a23c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20a23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20a240: 0x244592c0  addiu       $a1, $v0, -0x6D40
    ctx->pc = 0x20a240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x20a244: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20a244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20a248: 0x244694a0  addiu       $a2, $v0, -0x6B60
    ctx->pc = 0x20a248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939808));
    // 0x20a24c: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x20A24Cu;
    SET_GPR_U32(ctx, 31, 0x20A254u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x20A254u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20A254u) { return; }
    ctx->pc = 0x20A254u;
label_20a254:
    // 0x20a254: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20a254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a258: 0x8443127e  lh          $v1, 0x127E($v0)
    ctx->pc = 0x20a258u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x20a25c: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x20a25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x20a260: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x20a260u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x20a264: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x20a264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x20a268: 0x14600195  bnez        $v1, . + 4 + (0x195 << 2)
    ctx->pc = 0x20A268u;
    {
        const bool branch_taken_0x20a268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a268) {
            ctx->pc = 0x20A8C0u;
            return;
        }
    }
    ctx->pc = 0x20A270u;
    // 0x20a270: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20a270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20a274: 0x2442a1b0  addiu       $v0, $v0, -0x5E50
    ctx->pc = 0x20a274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943152));
    // 0x20a278: 0x27a30160  addiu       $v1, $sp, 0x160
    ctx->pc = 0x20a278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x20a27c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x20a27cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x38A1B0u));
    // 0x20a280: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x20a280u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x20a284: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20a284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20a288: 0x2444a1c0  addiu       $a0, $v0, -0x5E40
    ctx->pc = 0x20a288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943168));
    // 0x20a28c: 0x27a30170  addiu       $v1, $sp, 0x170
    ctx->pc = 0x20a28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x20a290: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x20a290u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x38A1C0u));
    // 0x20a294: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x20a294u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x20a298: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20a298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20a29c: 0x2453a1d0  addiu       $s3, $v0, -0x5E30
    ctx->pc = 0x20a29cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943184));
    // 0x20a2a0: 0x27a30180  addiu       $v1, $sp, 0x180
    ctx->pc = 0x20a2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x20a2a4: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x20a2a4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x38A1D0u));
    // 0x20a2a8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x20a2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x20a2ac: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x20a2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x20a2b0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x20a2b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20a2b4: 0x3c0343af  lui         $v1, 0x43AF
    ctx->pc = 0x20a2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17327 << 16));
    // 0x20a2b8: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x20a2b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20a2bc: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x20a2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x20a2c0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x20a2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20a2c4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x20a2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x20a2c8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x20a2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20a2cc: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x20a2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x20a2d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20a2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20a2d4: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x20a2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x20a2d8: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x20a2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
    // 0x20a2dc: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x20a2dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20a2e0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20a2e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x20a2e4: 0x8c257508  lw          $a1, 0x7508($at)
    ctx->pc = 0x20a2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x387508u));
    // 0x20a2e8: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x20a2e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x20a2ec: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x20a2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x20a2f0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x20a2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x20a2f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20a2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20a2f8: 0x22a00  sll         $a1, $v0, 8
    ctx->pc = 0x20a2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x20a2fc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20a2fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x20a300: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x20a300u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x20a304: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x20a304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20a308: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x20a308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20a30c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20a30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a310: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x20a310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x20a314: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x20a314u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x20a318: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x20a318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x20a31c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20a31cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x20a320: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x20a320u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x20a324: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20a324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20a328: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20a328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20a32c: 0x304b00ff  andi        $t3, $v0, 0xFF
    ctx->pc = 0x20a32cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20a330: 0x8fa40218  lw          $a0, 0x218($sp)
    ctx->pc = 0x20a330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a334: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20a334u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20a338: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x20a338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x20a33c: 0x8fa70218  lw          $a3, 0x218($sp)
    ctx->pc = 0x20a33cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a340: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20a340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a344: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x20a344u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20a348: 0x27a90170  addiu       $t1, $sp, 0x170
    ctx->pc = 0x20a348u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x20a34c: 0x27aa0180  addiu       $t2, $sp, 0x180
    ctx->pc = 0x20a34cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x20a350: 0xc0bb7c0  jal         func_2EDF00
    ctx->pc = 0x20A350u;
    SET_GPR_U32(ctx, 31, 0x20A358u);
    ctx->pc = 0x2EDF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF00u, 0x20A350u, 0x20A358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A358u;
label_20a358:
    // 0x20a358: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20a358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a35c: 0x8443127e  lh          $v1, 0x127E($v0)
    ctx->pc = 0x20a35cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x20a360: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x20a360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x20a364: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x20a364u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x20a368: 0x2841000b  slti        $at, $v0, 0xB
    ctx->pc = 0x20a368u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x20a36c: 0x14200154  bnez        $at, . + 4 + (0x154 << 2)
    ctx->pc = 0x20A36Cu;
    {
        const bool branch_taken_0x20a36c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a36c) {
            ctx->pc = 0x20A8C0u;
            return;
        }
    }
    ctx->pc = 0x20A374u;
    // 0x20a374: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20a374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20a378: 0x2444a1e0  addiu       $a0, $v0, -0x5E20
    ctx->pc = 0x20a378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943200));
    // 0x20a37c: 0x27a20190  addiu       $v0, $sp, 0x190
    ctx->pc = 0x20a37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x20a380: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x20a380u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x38A1E0u));
    // 0x20a384: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x20a384u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x20a388: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20a388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20a38c: 0x2444a1f0  addiu       $a0, $v0, -0x5E10
    ctx->pc = 0x20a38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943216));
    // 0x20a390: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x20a390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x20a394: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x20a394u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x38A1F0u));
    // 0x20a398: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x20a398u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x20a39c: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x20a39cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x20a3a0: 0x2482a200  addiu       $v0, $a0, -0x5E00
    ctx->pc = 0x20a3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943232));
    // 0x20a3a4: 0x27a301b0  addiu       $v1, $sp, 0x1B0
    ctx->pc = 0x20a3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x20a3a8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x20a3a8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x38A200u));
    // 0x20a3ac: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x20a3acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x20a3b0: 0x3c0443c8  lui         $a0, 0x43C8
    ctx->pc = 0x20a3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17352 << 16));
    // 0x20a3b4: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x20a3b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20a3b8: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x20a3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x20a3bc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x20a3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20a3c0: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x20a3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x20a3c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x20a3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20a3c8: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x20a3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x20a3cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20a3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20a3d0: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x20a3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x20a3d4: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x20a3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x20a3d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20a3d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20a3dc: 0x3c0443af  lui         $a0, 0x43AF
    ctx->pc = 0x20a3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17327 << 16));
    // 0x20a3e0: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x20a3e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20a3e4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20a3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x20a3e8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x20a3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x20a3ec: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x20a3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x20a3f0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x20a3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20a3f4: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x20a3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20a3f8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x20a3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x20a3fc: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x20a3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x20a400: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20a400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x20a404: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x20a404u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x20a408: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x20a408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20a40c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x20a40cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20a410: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x20a410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20a414: 0x3044ff00  andi        $a0, $v0, 0xFF00
    ctx->pc = 0x20a414u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x20a418: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x20a418u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x20a41c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20a41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20a420: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20a420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x20a424: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x20a424u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x20a428: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x20a428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x20a42c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20a42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20a430: 0x304b00ff  andi        $t3, $v0, 0xFF
    ctx->pc = 0x20a430u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20a434: 0x8fa50218  lw          $a1, 0x218($sp)
    ctx->pc = 0x20a434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a438: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x20a438u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x20a43c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20a43cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a440: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x20a440u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x20a444: 0x27a70190  addiu       $a3, $sp, 0x190
    ctx->pc = 0x20a444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x20a448: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x20a448u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x20a44c: 0x8fa80218  lw          $t0, 0x218($sp)
    ctx->pc = 0x20a44cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a450: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x20a450u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x20a454: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x20a454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20a458: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x20a458u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20a45c: 0x27a901a0  addiu       $t1, $sp, 0x1A0
    ctx->pc = 0x20a45cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x20a460: 0x27aa01b0  addiu       $t2, $sp, 0x1B0
    ctx->pc = 0x20a460u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x20a464: 0xc0bb7c0  jal         func_2EDF00
    ctx->pc = 0x20A464u;
    SET_GPR_U32(ctx, 31, 0x20A46Cu);
    ctx->pc = 0x2EDF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF00u, 0x20A464u, 0x20A46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A46Cu;
label_20a46c:
    // 0x20a46c: 0x10000114  b           . + 4 + (0x114 << 2)
    ctx->pc = 0x20A46Cu;
    {
        const bool branch_taken_0x20a46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a46c) {
            ctx->pc = 0x20A8C0u;
            return;
        }
    }
    ctx->pc = 0x20A474u;
}
