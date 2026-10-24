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

// Function: entry_00284de4
// Address: 0x284de4 - 0x285284
void entry_00284de4_0x284de4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00284de4_0x284de4");
#endif

    switch (ctx->pc) {
        case 0x284f4cu: goto label_284f4c;
        case 0x284fe0u: goto label_284fe0;
        case 0x28509cu: goto label_28509c;
        case 0x285168u: goto label_285168;
        case 0x285254u: goto label_285254;
        default: break;
    }

    ctx->pc = 0x284de4u;

    // 0x284de4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x284de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x284de8: 0xae045de0  sw          $a0, 0x5DE0($s0)
    ctx->pc = 0x284de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24032), GPR_U32(ctx, 4));
    // 0x284dec: 0xae045dd8  sw          $a0, 0x5DD8($s0)
    ctx->pc = 0x284decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24024), GPR_U32(ctx, 4));
    // 0x284df0: 0x240501cc  addiu       $a1, $zero, 0x1CC
    ctx->pc = 0x284df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
    // 0x284df4: 0xae055ddc  sw          $a1, 0x5DDC($s0)
    ctx->pc = 0x284df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24028), GPR_U32(ctx, 5));
    // 0x284df8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x284df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x284dfc: 0xae065de4  sw          $a2, 0x5DE4($s0)
    ctx->pc = 0x284dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24036), GPR_U32(ctx, 6));
    // 0x284e00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x284e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x284e04: 0xa2025dfc  sb          $v0, 0x5DFC($s0)
    ctx->pc = 0x284e04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24060), (uint8_t)GPR_U32(ctx, 2));
    // 0x284e08: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x284e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x284e0c: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x284e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x284e10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x284e10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284e14: 0x0  nop
    ctx->pc = 0x284e14u;
    // NOP
    // 0x284e18: 0xe6005df0  swc1        $f0, 0x5DF0($s0)
    ctx->pc = 0x284e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24048), bits); }
    // 0x284e1c: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x284e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x284e20: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x284e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x284e24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x284e24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284e28: 0x0  nop
    ctx->pc = 0x284e28u;
    // NOP
    // 0x284e2c: 0xe6005df4  swc1        $f0, 0x5DF4($s0)
    ctx->pc = 0x284e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24052), bits); }
    // 0x284e30: 0x3c033cf5  lui         $v1, 0x3CF5
    ctx->pc = 0x284e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15605 << 16));
    // 0x284e34: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x284e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x284e38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x284e38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284e3c: 0x0  nop
    ctx->pc = 0x284e3cu;
    // NOP
    // 0x284e40: 0xe6005df8  swc1        $f0, 0x5DF8($s0)
    ctx->pc = 0x284e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24056), bits); }
    // 0x284e44: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x284e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x284e48: 0xae035db0  sw          $v1, 0x5DB0($s0)
    ctx->pc = 0x284e48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 23984), GPR_U32(ctx, 3));
    // 0x284e4c: 0x3c033d80  lui         $v1, 0x3D80
    ctx->pc = 0x284e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15744 << 16));
    // 0x284e50: 0x3464adfd  ori         $a0, $v1, 0xADFD
    ctx->pc = 0x284e50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)44541);
    // 0x284e54: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x284e54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284e58: 0x0  nop
    ctx->pc = 0x284e58u;
    // NOP
    // 0x284e5c: 0xe6005dbc  swc1        $f0, 0x5DBC($s0)
    ctx->pc = 0x284e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 23996), bits); }
    // 0x284e60: 0x82035de8  lb          $v1, 0x5DE8($s0)
    ctx->pc = 0x284e60u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24040)));
    // 0x284e64: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x284e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x284e68: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x284e68u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x284e6c: 0x247effff  addiu       $fp, $v1, -0x1
    ctx->pc = 0x284e6cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x284e70: 0x26115e08  addiu       $s1, $s0, 0x5E08
    ctx->pc = 0x284e70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24072));
    // 0x284e74: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x284e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x284e78: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x284e78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x284e7c: 0x3c034299  lui         $v1, 0x4299
    ctx->pc = 0x284e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17049 << 16));
    // 0x284e80: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x284e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x284e84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x284e84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284e88: 0x0  nop
    ctx->pc = 0x284e88u;
    // NOP
    // 0x284e8c: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x284e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x284e90: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x284e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x284e94: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x284e94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x284e98: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x284e98u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284e9c: 0x0  nop
    ctx->pc = 0x284e9cu;
    // NOP
    // 0x284ea0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x284ea0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x284ea4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x284ea4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x284ea8: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x284ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x284eac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x284eacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284eb0: 0x0  nop
    ctx->pc = 0x284eb0u;
    // NOP
    // 0x284eb4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x284eb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x284eb8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x284eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x284ebc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x284ebcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284ec0: 0x0  nop
    ctx->pc = 0x284ec0u;
    // NOP
    // 0x284ec4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x284ec4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x284ec8: 0xe6200084  swc1        $f0, 0x84($s1)
    ctx->pc = 0x284ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x284ecc: 0x3c04434d  lui         $a0, 0x434D
    ctx->pc = 0x284eccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17229 << 16));
    // 0x284ed0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x284ed0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284ed4: 0x0  nop
    ctx->pc = 0x284ed4u;
    // NOP
    // 0x284ed8: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x284ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x284edc: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x284edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x284ee0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x284ee0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284ee4: 0x0  nop
    ctx->pc = 0x284ee4u;
    // NOP
    // 0x284ee8: 0xe6200088  swc1        $f0, 0x88($s1)
    ctx->pc = 0x284ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
    // 0x284eec: 0x3c0443ef  lui         $a0, 0x43EF
    ctx->pc = 0x284eecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17391 << 16));
    // 0x284ef0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x284ef0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284ef4: 0x0  nop
    ctx->pc = 0x284ef4u;
    // NOP
    // 0x284ef8: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x284ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x284efc: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x284efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x284f00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x284f00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284f04: 0x0  nop
    ctx->pc = 0x284f04u;
    // NOP
    // 0x284f08: 0xe620008c  swc1        $f0, 0x8C($s1)
    ctx->pc = 0x284f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
    // 0x284f0c: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x284f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x284f10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x284f10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284f14: 0x0  nop
    ctx->pc = 0x284f14u;
    // NOP
    // 0x284f18: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x284f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x284f1c: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x284f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x284f20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x284f20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284f24: 0x0  nop
    ctx->pc = 0x284f24u;
    // NOP
    // 0x284f28: 0xe6200090  swc1        $f0, 0x90($s1)
    ctx->pc = 0x284f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
    // 0x284f2c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x284f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x284f30: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x284f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x284f34: 0x26260044  addiu       $a2, $s1, 0x44
    ctx->pc = 0x284f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x284f38: 0x26270084  addiu       $a3, $s1, 0x84
    ctx->pc = 0x284f38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
    // 0x284f3c: 0x262800c4  addiu       $t0, $s1, 0xC4
    ctx->pc = 0x284f3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    // 0x284f40: 0x26290104  addiu       $t1, $s1, 0x104
    ctx->pc = 0x284f40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    // 0x284f44: 0xc0a43e0  jal         func_290F80
    ctx->pc = 0x284F44u;
    SET_GPR_U32(ctx, 31, 0x284F4Cu);
    ctx->pc = 0x290F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F80u, 0x284F44u, 0x284F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284F4Cu;
label_284f4c:
    // 0x284f4c: 0x26116090  addiu       $s1, $s0, 0x6090
    ctx->pc = 0x284f4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24720));
    // 0x284f50: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x284f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x284f54: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x284f54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x284f58: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x284f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x284f5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x284f5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284f60: 0x0  nop
    ctx->pc = 0x284f60u;
    // NOP
    // 0x284f64: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x284f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x284f68: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x284f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x284f6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x284f6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284f70: 0x0  nop
    ctx->pc = 0x284f70u;
    // NOP
    // 0x284f74: 0xe6200084  swc1        $f0, 0x84($s1)
    ctx->pc = 0x284f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x284f78: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x284f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
    // 0x284f7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x284f7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284f80: 0x0  nop
    ctx->pc = 0x284f80u;
    // NOP
    // 0x284f84: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x284f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x284f88: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x284f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x284f8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x284f8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284f90: 0x0  nop
    ctx->pc = 0x284f90u;
    // NOP
    // 0x284f94: 0xe6200088  swc1        $f0, 0x88($s1)
    ctx->pc = 0x284f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
    // 0x284f98: 0x3c0243a7  lui         $v0, 0x43A7
    ctx->pc = 0x284f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17319 << 16));
    // 0x284f9c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x284f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x284fa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x284fa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284fa4: 0x0  nop
    ctx->pc = 0x284fa4u;
    // NOP
    // 0x284fa8: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x284fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x284fac: 0x3c02438d  lui         $v0, 0x438D
    ctx->pc = 0x284facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17293 << 16));
    // 0x284fb0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x284fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x284fb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x284fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284fb8: 0x0  nop
    ctx->pc = 0x284fb8u;
    // NOP
    // 0x284fbc: 0xe620008c  swc1        $f0, 0x8C($s1)
    ctx->pc = 0x284fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
    // 0x284fc0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x284fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x284fc4: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x284fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x284fc8: 0x26260044  addiu       $a2, $s1, 0x44
    ctx->pc = 0x284fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x284fcc: 0x26270084  addiu       $a3, $s1, 0x84
    ctx->pc = 0x284fccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
    // 0x284fd0: 0x262800c4  addiu       $t0, $s1, 0xC4
    ctx->pc = 0x284fd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    // 0x284fd4: 0x26290104  addiu       $t1, $s1, 0x104
    ctx->pc = 0x284fd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    // 0x284fd8: 0xc0a43e0  jal         func_290F80
    ctx->pc = 0x284FD8u;
    SET_GPR_U32(ctx, 31, 0x284FE0u);
    ctx->pc = 0x290F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F80u, 0x284FD8u, 0x284FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284FE0u;
label_284fe0:
    // 0x284fe0: 0x26115f4c  addiu       $s1, $s0, 0x5F4C
    ctx->pc = 0x284fe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24396));
    // 0x284fe4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x284fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x284fe8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x284fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x284fec: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x284fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x284ff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x284ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284ff4: 0x0  nop
    ctx->pc = 0x284ff4u;
    // NOP
    // 0x284ff8: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x284ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x284ffc: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x284ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x285000: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x285000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285004: 0x0  nop
    ctx->pc = 0x285004u;
    // NOP
    // 0x285008: 0xe6200084  swc1        $f0, 0x84($s1)
    ctx->pc = 0x285008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x28500c: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x28500cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
    // 0x285010: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x285010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285014: 0x0  nop
    ctx->pc = 0x285014u;
    // NOP
    // 0x285018: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x285018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x28501c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x28501cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x285020: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x285020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285024: 0x0  nop
    ctx->pc = 0x285024u;
    // NOP
    // 0x285028: 0xe6200088  swc1        $f0, 0x88($s1)
    ctx->pc = 0x285028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
    // 0x28502c: 0x3c024299  lui         $v0, 0x4299
    ctx->pc = 0x28502cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17049 << 16));
    // 0x285030: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x285030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x285034: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x285034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285038: 0x0  nop
    ctx->pc = 0x285038u;
    // NOP
    // 0x28503c: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x28503cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x285040: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x285040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x285044: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x285044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x285048: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x285048u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28504c: 0x0  nop
    ctx->pc = 0x28504cu;
    // NOP
    // 0x285050: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x285050u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x285054: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x285054u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x285058: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x285058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x28505c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28505cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285060: 0x0  nop
    ctx->pc = 0x285060u;
    // NOP
    // 0x285064: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x285064u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x285068: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x285068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x28506c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28506cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285070: 0x0  nop
    ctx->pc = 0x285070u;
    // NOP
    // 0x285074: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x285074u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x285078: 0xe620008c  swc1        $f0, 0x8C($s1)
    ctx->pc = 0x285078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
    // 0x28507c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x28507cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x285080: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x285080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x285084: 0x26260044  addiu       $a2, $s1, 0x44
    ctx->pc = 0x285084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x285088: 0x26270084  addiu       $a3, $s1, 0x84
    ctx->pc = 0x285088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
    // 0x28508c: 0x262800c4  addiu       $t0, $s1, 0xC4
    ctx->pc = 0x28508cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    // 0x285090: 0x26290104  addiu       $t1, $s1, 0x104
    ctx->pc = 0x285090u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    // 0x285094: 0xc0a43e0  jal         func_290F80
    ctx->pc = 0x285094u;
    SET_GPR_U32(ctx, 31, 0x28509Cu);
    ctx->pc = 0x290F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F80u, 0x285094u, 0x28509Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28509Cu;
label_28509c:
    // 0x28509c: 0x261161d4  addiu       $s1, $s0, 0x61D4
    ctx->pc = 0x28509cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 25044));
    // 0x2850a0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2850a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2850a4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2850a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2850a8: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x2850a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x2850ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2850acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2850b0: 0x0  nop
    ctx->pc = 0x2850b0u;
    // NOP
    // 0x2850b4: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x2850b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x2850b8: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x2850b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x2850bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2850bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2850c0: 0x0  nop
    ctx->pc = 0x2850c0u;
    // NOP
    // 0x2850c4: 0xe6200084  swc1        $f0, 0x84($s1)
    ctx->pc = 0x2850c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x2850c8: 0x3c0243c0  lui         $v0, 0x43C0
    ctx->pc = 0x2850c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17344 << 16));
    // 0x2850cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2850ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2850d0: 0x0  nop
    ctx->pc = 0x2850d0u;
    // NOP
    // 0x2850d4: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x2850d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x2850d8: 0x3c024260  lui         $v0, 0x4260
    ctx->pc = 0x2850d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16992 << 16));
    // 0x2850dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2850dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2850e0: 0x0  nop
    ctx->pc = 0x2850e0u;
    // NOP
    // 0x2850e4: 0xe6200088  swc1        $f0, 0x88($s1)
    ctx->pc = 0x2850e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
    // 0x2850e8: 0x3c0242e0  lui         $v0, 0x42E0
    ctx->pc = 0x2850e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17120 << 16));
    // 0x2850ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2850ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2850f0: 0x0  nop
    ctx->pc = 0x2850f0u;
    // NOP
    // 0x2850f4: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x2850f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x2850f8: 0x3c024340  lui         $v0, 0x4340
    ctx->pc = 0x2850f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17216 << 16));
    // 0x2850fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2850fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285100: 0x0  nop
    ctx->pc = 0x285100u;
    // NOP
    // 0x285104: 0xe620008c  swc1        $f0, 0x8C($s1)
    ctx->pc = 0x285104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
    // 0x285108: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x285108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x28510c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28510cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285110: 0x0  nop
    ctx->pc = 0x285110u;
    // NOP
    // 0x285114: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x285114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x285118: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x285118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x28511c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28511cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285120: 0x0  nop
    ctx->pc = 0x285120u;
    // NOP
    // 0x285124: 0xe6200090  swc1        $f0, 0x90($s1)
    ctx->pc = 0x285124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
    // 0x285128: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x285128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x28512c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28512cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285130: 0x0  nop
    ctx->pc = 0x285130u;
    // NOP
    // 0x285134: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x285134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x285138: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x285138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x28513c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28513cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285140: 0x0  nop
    ctx->pc = 0x285140u;
    // NOP
    // 0x285144: 0xe6200094  swc1        $f0, 0x94($s1)
    ctx->pc = 0x285144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
    // 0x285148: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x285148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28514c: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x28514cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x285150: 0x26260044  addiu       $a2, $s1, 0x44
    ctx->pc = 0x285150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x285154: 0x26270084  addiu       $a3, $s1, 0x84
    ctx->pc = 0x285154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
    // 0x285158: 0x262800c4  addiu       $t0, $s1, 0xC4
    ctx->pc = 0x285158u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    // 0x28515c: 0x26290104  addiu       $t1, $s1, 0x104
    ctx->pc = 0x28515cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    // 0x285160: 0xc0a43e0  jal         func_290F80
    ctx->pc = 0x285160u;
    SET_GPR_U32(ctx, 31, 0x285168u);
    ctx->pc = 0x290F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F80u, 0x285160u, 0x285168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285168u;
label_285168:
    // 0x285168: 0x26116318  addiu       $s1, $s0, 0x6318
    ctx->pc = 0x285168u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 25368));
    // 0x28516c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x28516cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x285170: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x285170u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x285174: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x285174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x285178: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x285178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28517c: 0x0  nop
    ctx->pc = 0x28517cu;
    // NOP
    // 0x285180: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x285180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x285184: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x285184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x285188: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x285188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28518c: 0x0  nop
    ctx->pc = 0x28518cu;
    // NOP
    // 0x285190: 0xe6200084  swc1        $f0, 0x84($s1)
    ctx->pc = 0x285190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x285194: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x285194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
    // 0x285198: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x285198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28519c: 0x0  nop
    ctx->pc = 0x28519cu;
    // NOP
    // 0x2851a0: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x2851a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x2851a4: 0x3c024390  lui         $v0, 0x4390
    ctx->pc = 0x2851a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17296 << 16));
    // 0x2851a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2851a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2851ac: 0x0  nop
    ctx->pc = 0x2851acu;
    // NOP
    // 0x2851b0: 0xe6200088  swc1        $f0, 0x88($s1)
    ctx->pc = 0x2851b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
    // 0x2851b4: 0x3c024330  lui         $v0, 0x4330
    ctx->pc = 0x2851b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17200 << 16));
    // 0x2851b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2851b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2851bc: 0x0  nop
    ctx->pc = 0x2851bcu;
    // NOP
    // 0x2851c0: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x2851c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x2851c4: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x2851c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x2851c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2851c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2851cc: 0x0  nop
    ctx->pc = 0x2851ccu;
    // NOP
    // 0x2851d0: 0xe620008c  swc1        $f0, 0x8C($s1)
    ctx->pc = 0x2851d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
    // 0x2851d4: 0x3c0242ce  lui         $v0, 0x42CE
    ctx->pc = 0x2851d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17102 << 16));
    // 0x2851d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2851d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2851dc: 0x0  nop
    ctx->pc = 0x2851dcu;
    // NOP
    // 0x2851e0: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x2851e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x2851e4: 0x3c024306  lui         $v0, 0x4306
    ctx->pc = 0x2851e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17158 << 16));
    // 0x2851e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2851e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2851ec: 0x0  nop
    ctx->pc = 0x2851ecu;
    // NOP
    // 0x2851f0: 0xe6200090  swc1        $f0, 0x90($s1)
    ctx->pc = 0x2851f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
    // 0x2851f4: 0x3c0243c0  lui         $v0, 0x43C0
    ctx->pc = 0x2851f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17344 << 16));
    // 0x2851f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2851f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2851fc: 0x0  nop
    ctx->pc = 0x2851fcu;
    // NOP
    // 0x285200: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x285200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x285204: 0x3c024260  lui         $v0, 0x4260
    ctx->pc = 0x285204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16992 << 16));
    // 0x285208: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x285208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28520c: 0x0  nop
    ctx->pc = 0x28520cu;
    // NOP
    // 0x285210: 0xe6200094  swc1        $f0, 0x94($s1)
    ctx->pc = 0x285210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
    // 0x285214: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x285214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x285218: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x285218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28521c: 0x0  nop
    ctx->pc = 0x28521cu;
    // NOP
    // 0x285220: 0xe6200058  swc1        $f0, 0x58($s1)
    ctx->pc = 0x285220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
    // 0x285224: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x285224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x285228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x285228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28522c: 0x0  nop
    ctx->pc = 0x28522cu;
    // NOP
    // 0x285230: 0xe6200098  swc1        $f0, 0x98($s1)
    ctx->pc = 0x285230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
    // 0x285234: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x285234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x285238: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x285238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x28523c: 0x26260044  addiu       $a2, $s1, 0x44
    ctx->pc = 0x28523cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x285240: 0x26270084  addiu       $a3, $s1, 0x84
    ctx->pc = 0x285240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
    // 0x285244: 0x262800c4  addiu       $t0, $s1, 0xC4
    ctx->pc = 0x285244u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    // 0x285248: 0x26290104  addiu       $t1, $s1, 0x104
    ctx->pc = 0x285248u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    // 0x28524c: 0xc0a43e0  jal         func_290F80
    ctx->pc = 0x28524Cu;
    SET_GPR_U32(ctx, 31, 0x285254u);
    ctx->pc = 0x290F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F80u, 0x28524Cu, 0x285254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285254u;
label_285254:
    // 0x285254: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x285254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x285258: 0x8c241b98  lw          $a0, 0x1B98($at)
    ctx->pc = 0x285258u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x621B98u));
    // 0x28525c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28525cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x285260: 0x108300b8  beq         $a0, $v1, . + 4 + (0xB8 << 2)
    ctx->pc = 0x285260u;
    {
        const bool branch_taken_0x285260 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x285260) {
            ctx->pc = 0x285544u;
            return;
        }
    }
    ctx->pc = 0x285268u;
    // 0x285268: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x285268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28526c: 0x10830026  beq         $a0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x28526Cu;
    {
        const bool branch_taken_0x28526c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x28526c) {
            ctx->pc = 0x285308u;
            return;
        }
    }
    ctx->pc = 0x285274u;
    // 0x285274: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x285274u;
    {
        const bool branch_taken_0x285274 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x285274) {
            ctx->pc = 0x285284u;
            return;
        }
    }
    ctx->pc = 0x28527Cu;
    // 0x28527c: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x28527Cu;
    {
        const bool branch_taken_0x28527c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28527c) {
            ctx->pc = 0x285660u;
            return;
        }
    }
    ctx->pc = 0x285284u;
}
