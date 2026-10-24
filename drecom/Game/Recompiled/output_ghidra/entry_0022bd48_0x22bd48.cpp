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

// Function: entry_0022bd48
// Address: 0x22bd48 - 0x22be68
void entry_0022bd48_0x22bd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022bd48_0x22bd48");
#endif

    switch (ctx->pc) {
        case 0x22bdf4u: goto label_22bdf4;
        default: break;
    }

    ctx->pc = 0x22bd48u;

    // 0x22bd48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22bd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22bd4c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22bd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bd50: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x22bd50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x22bd54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22bd54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bd58: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22bd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bd5c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22bd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22bd60: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x22bd60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x22bd64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22bd64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bd68: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bd6c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22bd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22bd70: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22bd70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x22bd74: 0x3c0240a6  lui         $v0, 0x40A6
    ctx->pc = 0x22bd74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16550 << 16));
    // 0x22bd78: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x22bd78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x22bd7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22bd7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bd80: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22bd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bd84: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22bd88: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x22bd88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x22bd8c: 0x3c0240a6  lui         $v0, 0x40A6
    ctx->pc = 0x22bd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16550 << 16));
    // 0x22bd90: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x22bd90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x22bd94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22bd94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bd98: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22bd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bd9c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22bd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22bda0: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x22bda0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x22bda4: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x22bda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x22bda8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22bda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22bdac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22bdacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bdb0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22bdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bdb4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22bdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22bdb8: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x22bdb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x22bdbc: 0x3c023c49  lui         $v0, 0x3C49
    ctx->pc = 0x22bdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
    // 0x22bdc0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22bdc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22bdc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22bdc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bdc8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22bdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bdcc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22bdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22bdd0: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x22bdd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x22bdd4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22bdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bdd8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x22bdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bddc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22bddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22bde0: 0x24061e22  addiu       $a2, $zero, 0x1E22
    ctx->pc = 0x22bde0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7714));
    // 0x22bde4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22bde4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22bde8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22bde8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22bdec: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22BDECu;
    SET_GPR_U32(ctx, 31, 0x22BDF4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22BDECu, 0x22BDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BDF4u;
label_22bdf4:
    // 0x22bdf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22bdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22bdf8: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x22bdf8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x22bdfc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22bdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22be00: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x22be00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x22be04: 0x24504010  addiu       $s0, $v0, 0x4010
    ctx->pc = 0x22be04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16400));
    // 0x22be08: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x22be08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x22be0c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x22be0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x22be10: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x22be10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x22be14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22be14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22be18: 0x0  nop
    ctx->pc = 0x22be18u;
    // NOP
    // 0x22be1c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x22be1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x22be20: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22be20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22be24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22be24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22be28: 0x0  nop
    ctx->pc = 0x22be28u;
    // NOP
    // 0x22be2c: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x22be2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x22be30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22be30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22be34: 0x0  nop
    ctx->pc = 0x22be34u;
    // NOP
    // 0x22be38: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x22be38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x22be3c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22be3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22be40: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x22be40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x22be44: 0x2402f000  addiu       $v0, $zero, -0x1000
    ctx->pc = 0x22be44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x22be48: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22be48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22be4c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22be4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22be50: 0xac221a58  sw          $v0, 0x1A58($at)
    ctx->pc = 0x22be50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x22be54: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22be54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22be58: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x22be58u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22be5c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22be5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22be60: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22be60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22be64: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x22be64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    ctx->pc = 0x22be68u;
}
