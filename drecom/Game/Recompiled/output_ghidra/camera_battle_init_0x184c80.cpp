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

// Function: camera_battle_init
// Address: 0x184c80 - 0x184e24
void camera_battle_init_0x184c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("camera_battle_init_0x184c80");
#endif

    ctx->pc = 0x184c80u;

    // 0x184c80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x184c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x184c84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x184c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x184c88: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x184c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x184c8c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x184c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x184c90: 0x8c300af0  lw          $s0, 0xAF0($at)
    ctx->pc = 0x184c90u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x184c94: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x184c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x184c98: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x184c98u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x184c9c: 0x3c03fffd  lui         $v1, 0xFFFD
    ctx->pc = 0x184c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65533 << 16));
    // 0x184ca0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x184ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x184ca4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x184ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x184ca8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x184ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x184cac: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x184cacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x184cb0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x184cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x184cb4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x184cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x184cb8: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x184cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x184cbc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x184cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x184cc0: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x184cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x184cc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x184cc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184cc8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184ccc: 0xe4200328  swc1        $f0, 0x328($at)
    ctx->pc = 0x184cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x480328u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480328u, _value); } while (0); }
    // 0x184cd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x184cd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184cd4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184cd8: 0xe420032c  swc1        $f0, 0x32C($at)
    ctx->pc = 0x184cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x48032Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48032Cu, _value); } while (0); }
    // 0x184cdc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x184cdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184ce0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184ce4: 0xe4200330  swc1        $f0, 0x330($at)
    ctx->pc = 0x184ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x480330u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480330u, _value); } while (0); }
    // 0x184ce8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x184ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x184cec: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184cf0: 0xac230340  sw          $v1, 0x340($at)
    ctx->pc = 0x184cf0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x480340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480340u, _value); } while (0);
    // 0x184cf4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x184cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x184cf8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x184cf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184cfc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184d00: 0xe4200300  swc1        $f0, 0x300($at)
    ctx->pc = 0x184d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x480300u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480300u, _value); } while (0); }
    // 0x184d04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x184d04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184d08: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184d0c: 0xe4200304  swc1        $f0, 0x304($at)
    ctx->pc = 0x184d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x480304u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480304u, _value); } while (0); }
    // 0x184d10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x184d10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184d14: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184d18: 0xe4200308  swc1        $f0, 0x308($at)
    ctx->pc = 0x184d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x480308u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480308u, _value); } while (0); }
    // 0x184d1c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x184d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x184d20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x184d20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184d24: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184d28: 0xe420030c  swc1        $f0, 0x30C($at)
    ctx->pc = 0x184d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x48030Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48030Cu, _value); } while (0); }
    // 0x184d2c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184d30: 0xa0200345  sb          $zero, 0x345($at)
    ctx->pc = 0x184d30u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x480345u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x480345u, _value); } while (0);
    // 0x184d34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x184d34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184d38: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184d3c: 0xe4200334  swc1        $f0, 0x334($at)
    ctx->pc = 0x184d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x480334u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480334u, _value); } while (0); }
    // 0x184d40: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184d44: 0xa0200344  sb          $zero, 0x344($at)
    ctx->pc = 0x184d44u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x480344u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x480344u, _value); } while (0);
    // 0x184d48: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x184d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x184d4c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184d50: 0xac23033c  sw          $v1, 0x33C($at)
    ctx->pc = 0x184d50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x48033Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48033Cu, _value); } while (0);
    // 0x184d54: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184d58: 0xa0200346  sb          $zero, 0x346($at)
    ctx->pc = 0x184d58u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x480346u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x480346u, _value); } while (0);
    // 0x184d5c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184d60: 0xa0200347  sb          $zero, 0x347($at)
    ctx->pc = 0x184d60u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x480347u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x480347u, _value); } while (0);
    // 0x184d64: 0xc60001a4  lwc1        $f0, 0x1A4($s0)
    ctx->pc = 0x184d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184d68: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184d6c: 0xe4200338  swc1        $f0, 0x338($at)
    ctx->pc = 0x184d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x480338u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480338u, _value); } while (0); }
    // 0x184d70: 0x3c034cbe  lui         $v1, 0x4CBE
    ctx->pc = 0x184d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19646 << 16));
    // 0x184d74: 0x3463bc20  ori         $v1, $v1, 0xBC20
    ctx->pc = 0x184d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48160);
    // 0x184d78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x184d78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184d7c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184d80: 0xe4200310  swc1        $f0, 0x310($at)
    ctx->pc = 0x184d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x480310u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480310u, _value); } while (0); }
    // 0x184d84: 0x3c034cbe  lui         $v1, 0x4CBE
    ctx->pc = 0x184d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19646 << 16));
    // 0x184d88: 0x3463bc20  ori         $v1, $v1, 0xBC20
    ctx->pc = 0x184d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48160);
    // 0x184d8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x184d8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184d90: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184d94: 0xe4200314  swc1        $f0, 0x314($at)
    ctx->pc = 0x184d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x480314u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480314u, _value); } while (0); }
    // 0x184d98: 0x3c034cbe  lui         $v1, 0x4CBE
    ctx->pc = 0x184d98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19646 << 16));
    // 0x184d9c: 0x3463bc20  ori         $v1, $v1, 0xBC20
    ctx->pc = 0x184d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48160);
    // 0x184da0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x184da0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184da4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184da8: 0xe4200318  swc1        $f0, 0x318($at)
    ctx->pc = 0x184da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x480318u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480318u, _value); } while (0); }
    // 0x184dac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x184dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x184db0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x184db0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184db4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184db8: 0xe420031c  swc1        $f0, 0x31C($at)
    ctx->pc = 0x184db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x48031Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48031Cu, _value); } while (0); }
    // 0x184dbc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x184dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x184dc0: 0x8c240068  lw          $a0, 0x68($at)
    ctx->pc = 0x184dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0068u));
    // 0x184dc4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x184dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x184dc8: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x184DC8u;
    {
        const bool branch_taken_0x184dc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x184dc8) {
            ctx->pc = 0x184DECu;
            goto label_184dec;
        }
    }
    ctx->pc = 0x184DD0u;
    // 0x184dd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x184dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x184dd4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x184DD4u;
    {
        const bool branch_taken_0x184dd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x184dd4) {
            ctx->pc = 0x184DE4u;
            goto label_184de4;
        }
    }
    ctx->pc = 0x184DDCu;
    // 0x184ddc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x184DDCu;
    {
        const bool branch_taken_0x184ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184ddc) {
            ctx->pc = 0x184E14u;
            goto label_184e14;
        }
    }
    ctx->pc = 0x184DE4u;
label_184de4:
    // 0x184de4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x184DE4u;
    {
        const bool branch_taken_0x184de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184de4) {
            ctx->pc = 0x184E14u;
            goto label_184e14;
        }
    }
    ctx->pc = 0x184DECu;
label_184dec:
    // 0x184dec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x184decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x184df0: 0x8c24006c  lw          $a0, 0x6C($at)
    ctx->pc = 0x184df0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D006Cu));
    // 0x184df4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x184df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x184df8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x184DF8u;
    {
        const bool branch_taken_0x184df8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x184df8) {
            ctx->pc = 0x184E08u;
            goto label_184e08;
        }
    }
    ctx->pc = 0x184E00u;
    // 0x184e00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x184E00u;
    {
        const bool branch_taken_0x184e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184e00) {
            ctx->pc = 0x184E14u;
            goto label_184e14;
        }
    }
    ctx->pc = 0x184E08u;
label_184e08:
    // 0x184e08: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x184e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x184e0c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184e10: 0xa0230344  sb          $v1, 0x344($at)
    ctx->pc = 0x184e10u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x480344u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x480344u, _value); } while (0);
label_184e14:
    // 0x184e14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x184e14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184e18: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x184e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x184e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x184E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184E24u;
}
