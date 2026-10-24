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

// Function: entry_002776dc
// Address: 0x2776dc - 0x27781c
void entry_002776dc_0x2776dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002776dc_0x2776dc");
#endif

    switch (ctx->pc) {
        case 0x277778u: goto label_277778;
        case 0x2777f4u: goto label_2777f4;
        default: break;
    }

    ctx->pc = 0x2776dcu;

    // 0x2776dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2776dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2776e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2776e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2776e4: 0xa023d731  sb          $v1, -0x28CF($at)
    ctx->pc = 0x2776e4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD731u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD731u, _value); } while (0);
    // 0x2776e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2776e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2776ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2776ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2776f0: 0xa023d7d1  sb          $v1, -0x282F($at)
    ctx->pc = 0x2776f0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD7D1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD7D1u, _value); } while (0);
    // 0x2776f4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2776f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2776f8: 0x8c30f9e0  lw          $s0, -0x620($at)
    ctx->pc = 0x2776f8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61F9E0u));
    // 0x2776fc: 0x3c03448d  lui         $v1, 0x448D
    ctx->pc = 0x2776fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17549 << 16));
    // 0x277700: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x277700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x277704: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x277704u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277708: 0x0  nop
    ctx->pc = 0x277708u;
    // NOP
    // 0x27770c: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x27770cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x277710: 0x3c0341fa  lui         $v1, 0x41FA
    ctx->pc = 0x277710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16890 << 16));
    // 0x277714: 0x346384b1  ori         $v1, $v1, 0x84B1
    ctx->pc = 0x277714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)33969);
    // 0x277718: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x277718u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27771c: 0x0  nop
    ctx->pc = 0x27771cu;
    // NOP
    // 0x277720: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x277720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x277724: 0x3c03c58c  lui         $v1, 0xC58C
    ctx->pc = 0x277724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50572 << 16));
    // 0x277728: 0x34637c00  ori         $v1, $v1, 0x7C00
    ctx->pc = 0x277728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31744);
    // 0x27772c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27772cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277730: 0x0  nop
    ctx->pc = 0x277730u;
    // NOP
    // 0x277734: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x277734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x277738: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x277738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x27773c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27773cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277740: 0x0  nop
    ctx->pc = 0x277740u;
    // NOP
    // 0x277744: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x277744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x277748: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x277748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x27774c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x27774cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x277750: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x277750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x277754: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x277754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x277758: 0x8c241ae4  lw          $a0, 0x1AE4($at)
    ctx->pc = 0x277758u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1AE4u));
    // 0x27775c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x27775cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x277760: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x277760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x277764: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x277764u;
    {
        const bool branch_taken_0x277764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x277764) {
            ctx->pc = 0x27781Cu;
            return;
        }
    }
    ctx->pc = 0x27776Cu;
    // 0x27776c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x27776cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x277770: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x277770u;
    SET_GPR_U32(ctx, 31, 0x277778u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x277770u, 0x277778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277778u;
label_277778:
    // 0x277778: 0x3c02448d  lui         $v0, 0x448D
    ctx->pc = 0x277778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17549 << 16));
    // 0x27777c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x27777cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x277780: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277784: 0x0  nop
    ctx->pc = 0x277784u;
    // NOP
    // 0x277788: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x277788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x27778c: 0x3c0241fa  lui         $v0, 0x41FA
    ctx->pc = 0x27778cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16890 << 16));
    // 0x277790: 0x344284b1  ori         $v0, $v0, 0x84B1
    ctx->pc = 0x277790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33969);
    // 0x277794: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277798: 0x0  nop
    ctx->pc = 0x277798u;
    // NOP
    // 0x27779c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x27779cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2777a0: 0x3c02c58c  lui         $v0, 0xC58C
    ctx->pc = 0x2777a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50572 << 16));
    // 0x2777a4: 0x34427c00  ori         $v0, $v0, 0x7C00
    ctx->pc = 0x2777a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31744);
    // 0x2777a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2777a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2777ac: 0x0  nop
    ctx->pc = 0x2777acu;
    // NOP
    // 0x2777b0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2777b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2777b4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2777b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2777b8: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x2777b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2777bc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2777bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2777c0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2777c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2777c4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2777c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2777c8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2777c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2777cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2777ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2777d0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2777d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2777d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2777d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2777d8: 0x3444001d  ori         $a0, $v0, 0x1D
    ctx->pc = 0x2777d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29);
    // 0x2777dc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2777dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2777e0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2777e0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2777e4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2777e4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2777e8: 0x240800ca  addiu       $t0, $zero, 0xCA
    ctx->pc = 0x2777e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
    // 0x2777ec: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2777ECu;
    SET_GPR_U32(ctx, 31, 0x2777F4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2777ECu, 0x2777F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2777F4u;
label_2777f4:
    // 0x2777f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2777f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2777f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2777f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2777fc: 0xa023d871  sb          $v1, -0x278F($at)
    ctx->pc = 0x2777fcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD871u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD871u, _value); } while (0);
    // 0x277800: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x277800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x277804: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x277804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x277808: 0xa023d911  sb          $v1, -0x26EF($at)
    ctx->pc = 0x277808u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD911u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD911u, _value); } while (0);
    // 0x27780c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27780cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x277810: 0xac201a20  sw          $zero, 0x1A20($at)
    ctx->pc = 0x277810u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x621A20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621A20u, _value); } while (0);
    // 0x277814: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x277814u;
    {
        const bool branch_taken_0x277814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277814) {
            ctx->pc = 0x277834u;
            return;
        }
    }
    ctx->pc = 0x27781Cu;
}
