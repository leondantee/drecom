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

// Function: entry_0028d560
// Address: 0x28d560 - 0x28d658
void entry_0028d560_0x28d560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028d560_0x28d560");
#endif

    switch (ctx->pc) {
        case 0x28d624u: goto label_28d624;
        default: break;
    }

    ctx->pc = 0x28d560u;

    // 0x28d560: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d564: 0x8c2520f8  lw          $a1, 0x20F8($at)
    ctx->pc = 0x28d564u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6220F8u));
    // 0x28d568: 0x14a00060  bnez        $a1, . + 4 + (0x60 << 2)
    ctx->pc = 0x28D568u;
    {
        const bool branch_taken_0x28d568 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d568) {
            ctx->pc = 0x28D6ECu;
            return;
        }
    }
    ctx->pc = 0x28D570u;
    // 0x28d570: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d574: 0xac2020e8  sw          $zero, 0x20E8($at)
    ctx->pc = 0x28d574u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6220E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220E8u, _value); } while (0);
    // 0x28d578: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28d578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28d57c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d57cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d580: 0xa02221f8  sb          $v0, 0x21F8($at)
    ctx->pc = 0x28d580u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6221F8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6221F8u, _value); } while (0);
    // 0x28d584: 0x3c043cf5  lui         $a0, 0x3CF5
    ctx->pc = 0x28d584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15605 << 16));
    // 0x28d588: 0x3483c28f  ori         $v1, $a0, 0xC28F
    ctx->pc = 0x28d588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49807);
    // 0x28d58c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28d58cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d590: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d594: 0xe42021f4  swc1        $f0, 0x21F4($at)
    ctx->pc = 0x28d594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6221F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6221F4u, _value); } while (0); }
    // 0x28d598: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x28d598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x28d59c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d59cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d5a0: 0xa02321f9  sb          $v1, 0x21F9($at)
    ctx->pc = 0x28d5a0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6221F9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6221F9u, _value); } while (0);
    // 0x28d5a4: 0x3c153d80  lui         $s5, 0x3D80
    ctx->pc = 0x28d5a4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)15744 << 16));
    // 0x28d5a8: 0x36a3adfd  ori         $v1, $s5, 0xADFD
    ctx->pc = 0x28d5a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)44541);
    // 0x28d5ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28d5acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d5b0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d5b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d5b4: 0xe42021f0  swc1        $f0, 0x21F0($at)
    ctx->pc = 0x28d5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6221F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6221F0u, _value); } while (0); }
    // 0x28d5b8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x28d5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x28d5bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28d5bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d5c0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d5c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d5c4: 0xe42021fc  swc1        $f0, 0x21FC($at)
    ctx->pc = 0x28d5c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6221FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6221FCu, _value); } while (0); }
    // 0x28d5c8: 0x3c153dcc  lui         $s5, 0x3DCC
    ctx->pc = 0x28d5c8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)15820 << 16));
    // 0x28d5cc: 0x36a3cccd  ori         $v1, $s5, 0xCCCD
    ctx->pc = 0x28d5ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)52429);
    // 0x28d5d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28d5d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d5d4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d5d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d5d8: 0xe4202200  swc1        $f0, 0x2200($at)
    ctx->pc = 0x28d5d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622200u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622200u, _value); } while (0); }
    // 0x28d5dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28d5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d5e0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d5e4: 0xa0232205  sb          $v1, 0x2205($at)
    ctx->pc = 0x28d5e4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x622205u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x622205u, _value); } while (0);
    // 0x28d5e8: 0x92036624  lbu         $v1, 0x6624($s0)
    ctx->pc = 0x28d5e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28d5ec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x28d5ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28d5f0: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x28D5F0u;
    {
        const bool branch_taken_0x28d5f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d5f0) {
            ctx->pc = 0x28D658u;
            return;
        }
    }
    ctx->pc = 0x28D5F8u;
    // 0x28d5f8: 0x3c120062  lui         $s2, 0x62
    ctx->pc = 0x28d5f8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)98 << 16));
    // 0x28d5fc: 0x26426158  addiu       $v0, $s2, 0x6158
    ctx->pc = 0x28d5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 24920));
    // 0x28d600: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d604: 0xac222210  sw          $v0, 0x2210($at)
    ctx->pc = 0x28d604u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x622210u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622210u, _value); } while (0);
    // 0x28d608: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x28d608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x28d60c: 0x24442218  addiu       $a0, $v0, 0x2218
    ctx->pc = 0x28d60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8728));
    // 0x28d610: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x28d610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x28d614: 0x2465e7d0  addiu       $a1, $v1, -0x1830
    ctx->pc = 0x28d614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961104));
    // 0x28d618: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x28d618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x28d61c: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x28D61Cu;
    SET_GPR_U32(ctx, 31, 0x28D624u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x28D624u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x28D624u) { return; }
    ctx->pc = 0x28D624u;
label_28d624:
    // 0x28d624: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d628: 0xa4202242  sh          $zero, 0x2242($at)
    ctx->pc = 0x28d628u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622242u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x622242u, _value); } while (0);
    // 0x28d62c: 0x3006ffff  andi        $a2, $zero, 0xFFFF
    ctx->pc = 0x28d62cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x28d630: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d634: 0xa4262240  sh          $a2, 0x2240($at)
    ctx->pc = 0x28d634u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x622240u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x622240u, _value); } while (0);
    // 0x28d638: 0x240301cc  addiu       $v1, $zero, 0x1CC
    ctx->pc = 0x28d638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
    // 0x28d63c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d640: 0xa4232246  sh          $v1, 0x2246($at)
    ctx->pc = 0x28d640u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x622246u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x622246u, _value); } while (0);
    // 0x28d644: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x28d644u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28d648: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d64c: 0xa4252244  sh          $a1, 0x2244($at)
    ctx->pc = 0x28d64cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x622244u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x622244u, _value); } while (0);
    // 0x28d650: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x28D650u;
    {
        const bool branch_taken_0x28d650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d650) {
            ctx->pc = 0x28D6D8u;
            return;
        }
    }
    ctx->pc = 0x28D658u;
}
