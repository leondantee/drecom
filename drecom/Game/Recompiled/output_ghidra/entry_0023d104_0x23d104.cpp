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

// Function: entry_0023d104
// Address: 0x23d104 - 0x23d284
void entry_0023d104_0x23d104(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023d104_0x23d104");
#endif

    switch (ctx->pc) {
        case 0x23d16cu: goto label_23d16c;
        case 0x23d1a4u: goto label_23d1a4;
        case 0x23d1c4u: goto label_23d1c4;
        case 0x23d1dcu: goto label_23d1dc;
        case 0x23d1e8u: goto label_23d1e8;
        case 0x23d234u: goto label_23d234;
        case 0x23d25cu: goto label_23d25c;
        default: break;
    }

    ctx->pc = 0x23d104u;

    // 0x23d104: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x23d104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x23d108: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x23d108u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d10c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x23d10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x23d110: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23d110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d114: 0x0  nop
    ctx->pc = 0x23d114u;
    // NOP
    // 0x23d118: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23d118u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23d11c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x23d11cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x23d120: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x23d120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x23d124: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x23d124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x23d128: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23d128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23d12c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x23d12cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x23d130: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x23d130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d134: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x23d134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d138: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x23d138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d13c: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x23d13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x23d140: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23d140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23d144: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x23d144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x23d148: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x23d148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x23d14c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x23d14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23d150: 0xc46d00d0  lwc1        $f13, 0xD0($v1)
    ctx->pc = 0x23d150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23d154: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23d154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23d158: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x23d158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23d15c: 0x27a600a4  addiu       $a2, $sp, 0xA4
    ctx->pc = 0x23d15cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x23d160: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x23d160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x23d164: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x23D164u;
    SET_GPR_U32(ctx, 31, 0x23D16Cu);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x23D164u, 0x23D16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D16Cu;
label_23d16c:
    // 0x23d16c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x23d16cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x23d170: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x23d170u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d174: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x23d174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x23d178: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23d178u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d17c: 0x0  nop
    ctx->pc = 0x23d17cu;
    // NOP
    // 0x23d180: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23d180u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23d184: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x23d184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x23d188: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x23d188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x23d18c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d190: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x23d190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d194: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x23d194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d198: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23d198u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23d19c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x23D19Cu;
    SET_GPR_U32(ctx, 31, 0x23D1A4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x23D19Cu, 0x23D1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D1A4u;
label_23d1a4:
    // 0x23d1a4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d1a8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x23d1a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x23d1ac: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d1b0: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x23d1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d1b4: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x23d1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d1b8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23d1b8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23d1bc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x23D1BCu;
    SET_GPR_U32(ctx, 31, 0x23D1C4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x23D1BCu, 0x23D1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D1C4u;
label_23d1c4:
    // 0x23d1c4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d1c8: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x23d1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x23d1cc: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x23d1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d1d0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23d1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23d1d4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x23D1D4u;
    SET_GPR_U32(ctx, 31, 0x23D1DCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x23D1D4u, 0x23D1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D1DCu;
label_23d1dc:
    // 0x23d1dc: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x23d1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d1e0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x23D1E0u;
    SET_GPR_U32(ctx, 31, 0x23D1E8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23D1E0u, 0x23D1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D1E8u;
label_23d1e8:
    // 0x23d1e8: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x23d1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d1ec: 0x908209e7  lbu         $v0, 0x9E7($a0)
    ctx->pc = 0x23d1ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
    // 0x23d1f0: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x23D1F0u;
    {
        const bool branch_taken_0x23d1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d1f0) {
            ctx->pc = 0x23D284u;
            return;
        }
    }
    ctx->pc = 0x23D1F8u;
    // 0x23d1f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23d1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23d1fc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d200: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x23d200u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x23d204: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x23d204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d208: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d20c: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x23d20cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x23d210: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23d210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23d214: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23d214u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x23d218: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x23d218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23d21c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x23d21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d220: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x23d220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x23d224: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23d224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d228: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23d228u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23d22c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23D22Cu;
    SET_GPR_U32(ctx, 31, 0x23D234u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23D22Cu, 0x23D234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D234u;
label_23d234:
    // 0x23d234: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23d234u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d238: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d23c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23d23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23d240: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23d240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23d244: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23d244u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d248: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d24c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23d24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23d250: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x23d250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x23d254: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23D254u;
    SET_GPR_U32(ctx, 31, 0x23D25Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23D254u, 0x23D25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D25Cu;
label_23d25c:
    // 0x23d25c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23d25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23d260: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x23d260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x23d264: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x23d264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x23d268: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x23d268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23d26c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23d26cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x23d270: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d274: 0xa443127c  sh          $v1, 0x127C($v0)
    ctx->pc = 0x23d274u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x23d278: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x23d278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x23d27c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d280: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x23d280u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x23d284u;
}
