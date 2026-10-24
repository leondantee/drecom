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

// Function: entry_0028dd1c
// Address: 0x28dd1c - 0x28de8c
void entry_0028dd1c_0x28dd1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028dd1c_0x28dd1c");
#endif

    switch (ctx->pc) {
        case 0x28de58u: goto label_28de58;
        default: break;
    }

    ctx->pc = 0x28dd1cu;

    // 0x28dd1c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28dd1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28dd20: 0xac202250  sw          $zero, 0x2250($at)
    ctx->pc = 0x28dd20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622250u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622250u, _value); } while (0);
    // 0x28dd24: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x28dd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28dd28: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28dd28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28dd2c: 0xac2227d0  sw          $v0, 0x27D0($at)
    ctx->pc = 0x28dd2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6227D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6227D0u, _value); } while (0);
    // 0x28dd30: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x28dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x28dd34: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x28dd34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x28dd38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28dd38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28dd3c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28dd3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28dd40: 0xe42027e4  swc1        $f0, 0x27E4($at)
    ctx->pc = 0x28dd40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6227E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6227E4u, _value); } while (0); }
    // 0x28dd44: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x28dd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x28dd48: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28dd48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28dd4c: 0xa02227e9  sb          $v0, 0x27E9($at)
    ctx->pc = 0x28dd4cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6227E9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6227E9u, _value); } while (0);
    // 0x28dd50: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x28dd50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
    // 0x28dd54: 0x3443adfd  ori         $v1, $v0, 0xADFD
    ctx->pc = 0x28dd54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44541);
    // 0x28dd58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28dd58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28dd5c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28dd5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28dd60: 0xe42027e0  swc1        $f0, 0x27E0($at)
    ctx->pc = 0x28dd60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6227E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6227E0u, _value); } while (0); }
    // 0x28dd64: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x28dd64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x28dd68: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x28dd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x28dd6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28dd6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28dd70: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28dd70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28dd74: 0xe42027ec  swc1        $f0, 0x27EC($at)
    ctx->pc = 0x28dd74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6227ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6227ECu, _value); } while (0); }
    // 0x28dd78: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x28dd78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x28dd7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28dd7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28dd80: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28dd80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28dd84: 0xe42027f0  swc1        $f0, 0x27F0($at)
    ctx->pc = 0x28dd84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6227F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6227F0u, _value); } while (0); }
    // 0x28dd88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28dd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28dd8c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28dd8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28dd90: 0xa02227f5  sb          $v0, 0x27F5($at)
    ctx->pc = 0x28dd90u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6227F5u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6227F5u, _value); } while (0);
    // 0x28dd94: 0x92036624  lbu         $v1, 0x6624($s0)
    ctx->pc = 0x28dd94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28dd98: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x28dd98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28dd9c: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x28DD9Cu;
    {
        const bool branch_taken_0x28dd9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28dd9c) {
            ctx->pc = 0x28DE8Cu;
            return;
        }
    }
    ctx->pc = 0x28DDA4u;
    // 0x28dda4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28dda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28dda8: 0xa2025e04  sb          $v0, 0x5E04($s0)
    ctx->pc = 0x28dda8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24068), (uint8_t)GPR_U32(ctx, 2));
    // 0x28ddac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28ddacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28ddb0: 0xa2025dfc  sb          $v0, 0x5DFC($s0)
    ctx->pc = 0x28ddb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24060), (uint8_t)GPR_U32(ctx, 2));
    // 0x28ddb4: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x28ddb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
    // 0x28ddb8: 0x3462d70a  ori         $v0, $v1, 0xD70A
    ctx->pc = 0x28ddb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x28ddbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ddbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ddc0: 0x0  nop
    ctx->pc = 0x28ddc0u;
    // NOP
    // 0x28ddc4: 0xe6005df0  swc1        $f0, 0x5DF0($s0)
    ctx->pc = 0x28ddc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24048), bits); }
    // 0x28ddc8: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x28ddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x28ddcc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x28ddccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x28ddd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ddd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ddd4: 0x0  nop
    ctx->pc = 0x28ddd4u;
    // NOP
    // 0x28ddd8: 0xe6005df4  swc1        $f0, 0x5DF4($s0)
    ctx->pc = 0x28ddd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24052), bits); }
    // 0x28dddc: 0x3c033cf5  lui         $v1, 0x3CF5
    ctx->pc = 0x28dddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15605 << 16));
    // 0x28dde0: 0x3462c28f  ori         $v0, $v1, 0xC28F
    ctx->pc = 0x28dde0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x28dde4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28dde4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28dde8: 0x0  nop
    ctx->pc = 0x28dde8u;
    // NOP
    // 0x28ddec: 0xe6005df8  swc1        $f0, 0x5DF8($s0)
    ctx->pc = 0x28ddecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24056), bits); }
    // 0x28ddf0: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x28ddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x28ddf4: 0xae025db0  sw          $v0, 0x5DB0($s0)
    ctx->pc = 0x28ddf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 23984), GPR_U32(ctx, 2));
    // 0x28ddf8: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x28ddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
    // 0x28ddfc: 0x3443adfd  ori         $v1, $v0, 0xADFD
    ctx->pc = 0x28ddfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44541);
    // 0x28de00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28de00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28de04: 0x0  nop
    ctx->pc = 0x28de04u;
    // NOP
    // 0x28de08: 0xe6005dbc  swc1        $f0, 0x5DBC($s0)
    ctx->pc = 0x28de08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 23996), bits); }
    // 0x28de0c: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x28de0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x28de10: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x28de10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x28de14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28de14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28de18: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28de18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28de1c: 0xe42027e4  swc1        $f0, 0x27E4($at)
    ctx->pc = 0x28de1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6227E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6227E4u, _value); } while (0); }
    // 0x28de20: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28de20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28de24: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28de24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28de28: 0xa02327e8  sb          $v1, 0x27E8($at)
    ctx->pc = 0x28de28u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6227E8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6227E8u, _value); } while (0);
    // 0x28de2c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x28de2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x28de30: 0x24426158  addiu       $v0, $v0, 0x6158
    ctx->pc = 0x28de30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24920));
    // 0x28de34: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28de34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28de38: 0xac222800  sw          $v0, 0x2800($at)
    ctx->pc = 0x28de38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x622800u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622800u, _value); } while (0);
    // 0x28de3c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x28de3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x28de40: 0x24442808  addiu       $a0, $v0, 0x2808
    ctx->pc = 0x28de40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10248));
    // 0x28de44: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x28de44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x28de48: 0x2445e7d0  addiu       $a1, $v0, -0x1830
    ctx->pc = 0x28de48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961104));
    // 0x28de4c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x28de4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x28de50: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x28DE50u;
    SET_GPR_U32(ctx, 31, 0x28DE58u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x28DE58u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x28DE58u) { return; }
    ctx->pc = 0x28DE58u;
label_28de58:
    // 0x28de58: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28de58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28de5c: 0xa4202832  sh          $zero, 0x2832($at)
    ctx->pc = 0x28de5cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622832u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x622832u, _value); } while (0);
    // 0x28de60: 0x3002ffff  andi        $v0, $zero, 0xFFFF
    ctx->pc = 0x28de60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x28de64: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28de64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28de68: 0xa4222830  sh          $v0, 0x2830($at)
    ctx->pc = 0x28de68u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x622830u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x622830u, _value); } while (0);
    // 0x28de6c: 0x240201cc  addiu       $v0, $zero, 0x1CC
    ctx->pc = 0x28de6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
    // 0x28de70: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28de70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28de74: 0xa4222836  sh          $v0, 0x2836($at)
    ctx->pc = 0x28de74u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x622836u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x622836u, _value); } while (0);
    // 0x28de78: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28de78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28de7c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28de7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28de80: 0xa4222834  sh          $v0, 0x2834($at)
    ctx->pc = 0x28de80u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x622834u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x622834u, _value); } while (0);
    // 0x28de84: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x28DE84u;
    {
        const bool branch_taken_0x28de84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28de84) {
            ctx->pc = 0x28DF84u;
            return;
        }
    }
    ctx->pc = 0x28DE8Cu;
}
