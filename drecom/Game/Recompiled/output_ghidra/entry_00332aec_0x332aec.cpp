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

// Function: entry_00332aec
// Address: 0x332aec - 0x332ed0
void entry_00332aec_0x332aec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00332aec_0x332aec");
#endif

    switch (ctx->pc) {
        case 0x332c80u: goto label_332c80;
        case 0x332d10u: goto label_332d10;
        case 0x332dd4u: goto label_332dd4;
        case 0x332e60u: goto label_332e60;
        default: break;
    }

    ctx->pc = 0x332aecu;

    // 0x332aec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x332aecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332af0: 0x0  nop
    ctx->pc = 0x332af0u;
    // NOP
    // 0x332af4: 0xe6206620  swc1        $f0, 0x6620($s1)
    ctx->pc = 0x332af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 26144), bits); }
    // 0x332af8: 0x8e23685c  lw          $v1, 0x685C($s1)
    ctx->pc = 0x332af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26716)));
    // 0x332afc: 0x34640001  ori         $a0, $v1, 0x1
    ctx->pc = 0x332afcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x332b00: 0xae24685c  sw          $a0, 0x685C($s1)
    ctx->pc = 0x332b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26716), GPR_U32(ctx, 4));
    // 0x332b04: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x332b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x332b08: 0xae235de0  sw          $v1, 0x5DE0($s1)
    ctx->pc = 0x332b08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24032), GPR_U32(ctx, 3));
    // 0x332b0c: 0xae235dd8  sw          $v1, 0x5DD8($s1)
    ctx->pc = 0x332b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24024), GPR_U32(ctx, 3));
    // 0x332b10: 0x240301cc  addiu       $v1, $zero, 0x1CC
    ctx->pc = 0x332b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
    // 0x332b14: 0xae235ddc  sw          $v1, 0x5DDC($s1)
    ctx->pc = 0x332b14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24028), GPR_U32(ctx, 3));
    // 0x332b18: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x332b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x332b1c: 0xae235de4  sw          $v1, 0x5DE4($s1)
    ctx->pc = 0x332b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24036), GPR_U32(ctx, 3));
    // 0x332b20: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x332b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x332b24: 0xa2235dfc  sb          $v1, 0x5DFC($s1)
    ctx->pc = 0x332b24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24060), (uint8_t)GPR_U32(ctx, 3));
    // 0x332b28: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x332b28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
    // 0x332b2c: 0x3462d70a  ori         $v0, $v1, 0xD70A
    ctx->pc = 0x332b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x332b30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x332b30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332b34: 0x0  nop
    ctx->pc = 0x332b34u;
    // NOP
    // 0x332b38: 0xe6205df0  swc1        $f0, 0x5DF0($s1)
    ctx->pc = 0x332b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24048), bits); }
    // 0x332b3c: 0x3c123d4c  lui         $s2, 0x3D4C
    ctx->pc = 0x332b3cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)15692 << 16));
    // 0x332b40: 0x3642cccd  ori         $v0, $s2, 0xCCCD
    ctx->pc = 0x332b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)52429);
    // 0x332b44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x332b44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332b48: 0x0  nop
    ctx->pc = 0x332b48u;
    // NOP
    // 0x332b4c: 0xe6205df4  swc1        $f0, 0x5DF4($s1)
    ctx->pc = 0x332b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24052), bits); }
    // 0x332b50: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x332b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
    // 0x332b54: 0x3452c28f  ori         $s2, $v0, 0xC28F
    ctx->pc = 0x332b54u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x332b58: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x332b58u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332b5c: 0x0  nop
    ctx->pc = 0x332b5cu;
    // NOP
    // 0x332b60: 0xe6205df8  swc1        $f0, 0x5DF8($s1)
    ctx->pc = 0x332b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24056), bits); }
    // 0x332b64: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x332b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x332b68: 0xae225db0  sw          $v0, 0x5DB0($s1)
    ctx->pc = 0x332b68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 23984), GPR_U32(ctx, 2));
    // 0x332b6c: 0x3c033d80  lui         $v1, 0x3D80
    ctx->pc = 0x332b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15744 << 16));
    // 0x332b70: 0x3472adfd  ori         $s2, $v1, 0xADFD
    ctx->pc = 0x332b70u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)44541);
    // 0x332b74: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x332b74u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332b78: 0x0  nop
    ctx->pc = 0x332b78u;
    // NOP
    // 0x332b7c: 0xe6205dbc  swc1        $f0, 0x5DBC($s1)
    ctx->pc = 0x332b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 23996), bits); }
    // 0x332b80: 0x82235deb  lb          $v1, 0x5DEB($s1)
    ctx->pc = 0x332b80u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24043)));
    // 0x332b84: 0x3be3c  dsll32      $s7, $v1, 24
    ctx->pc = 0x332b84u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) << (32 + 24));
    // 0x332b88: 0x17be3f  dsra32      $s7, $s7, 24
    ctx->pc = 0x332b88u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 24));
    // 0x332b8c: 0x8e236850  lw          $v1, 0x6850($s1)
    ctx->pc = 0x332b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26704)));
    // 0x332b90: 0x2e3f023  subu        $fp, $s7, $v1
    ctx->pc = 0x332b90u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x332b94: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332b98: 0xac3e2780  sw          $fp, 0x2780($at)
    ctx->pc = 0x332b98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 30)); ps2TraceGuestWrite(rdram, 0x892780u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892780u, _value); } while (0);
    // 0x332b9c: 0x26305e08  addiu       $s0, $s1, 0x5E08
    ctx->pc = 0x332b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24072));
    // 0x332ba0: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x332ba0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x332ba4: 0xae150000  sw          $s5, 0x0($s0)
    ctx->pc = 0x332ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 21));
    // 0x332ba8: 0x3c164299  lui         $s6, 0x4299
    ctx->pc = 0x332ba8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)17049 << 16));
    // 0x332bac: 0x36c3999a  ori         $v1, $s6, 0x999A
    ctx->pc = 0x332bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)39322);
    // 0x332bb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x332bb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332bb4: 0x0  nop
    ctx->pc = 0x332bb4u;
    // NOP
    // 0x332bb8: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x332bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x332bbc: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x332bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
    // 0x332bc0: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x332bc0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x332bc4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332bc8: 0x8c252780  lw          $a1, 0x2780($at)
    ctx->pc = 0x332bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x892780u));
    // 0x332bcc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x332bccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332bd0: 0x0  nop
    ctx->pc = 0x332bd0u;
    // NOP
    // 0x332bd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x332bd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x332bd8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x332bd8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x332bdc: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x332bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x332be0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x332be0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332be4: 0x0  nop
    ctx->pc = 0x332be4u;
    // NOP
    // 0x332be8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x332be8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x332bec: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x332becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x332bf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x332bf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332bf4: 0x0  nop
    ctx->pc = 0x332bf4u;
    // NOP
    // 0x332bf8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x332bf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x332bfc: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x332bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x332c00: 0x3c03434d  lui         $v1, 0x434D
    ctx->pc = 0x332c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17229 << 16));
    // 0x332c04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x332c04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332c08: 0x0  nop
    ctx->pc = 0x332c08u;
    // NOP
    // 0x332c0c: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x332c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x332c10: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x332c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x332c14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x332c14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332c18: 0x0  nop
    ctx->pc = 0x332c18u;
    // NOP
    // 0x332c1c: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x332c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x332c20: 0x3c0243ef  lui         $v0, 0x43EF
    ctx->pc = 0x332c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17391 << 16));
    // 0x332c24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x332c24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332c28: 0x0  nop
    ctx->pc = 0x332c28u;
    // NOP
    // 0x332c2c: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x332c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x332c30: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x332c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x332c34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x332c34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332c38: 0x0  nop
    ctx->pc = 0x332c38u;
    // NOP
    // 0x332c3c: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x332c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x332c40: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x332c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x332c44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x332c44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332c48: 0x0  nop
    ctx->pc = 0x332c48u;
    // NOP
    // 0x332c4c: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x332c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x332c50: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x332c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x332c54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x332c54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332c58: 0x0  nop
    ctx->pc = 0x332c58u;
    // NOP
    // 0x332c5c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x332c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x332c60: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x332c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x332c64: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x332c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x332c68: 0x26060044  addiu       $a2, $s0, 0x44
    ctx->pc = 0x332c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x332c6c: 0x26070084  addiu       $a3, $s0, 0x84
    ctx->pc = 0x332c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x332c70: 0x260800c4  addiu       $t0, $s0, 0xC4
    ctx->pc = 0x332c70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    // 0x332c74: 0x26090104  addiu       $t1, $s0, 0x104
    ctx->pc = 0x332c74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    // 0x332c78: 0xc0a43e0  jal         func_290F80
    ctx->pc = 0x332C78u;
    SET_GPR_U32(ctx, 31, 0x332C80u);
    ctx->pc = 0x290F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F80u, 0x332C78u, 0x332C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332C80u;
label_332c80:
    // 0x332c80: 0x26306090  addiu       $s0, $s1, 0x6090
    ctx->pc = 0x332c80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24720));
    // 0x332c84: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x332c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x332c88: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x332c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x332c8c: 0x3c044380  lui         $a0, 0x4380
    ctx->pc = 0x332c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17280 << 16));
    // 0x332c90: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x332c90u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332c94: 0x0  nop
    ctx->pc = 0x332c94u;
    // NOP
    // 0x332c98: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x332c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x332c9c: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x332c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x332ca0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x332ca0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332ca4: 0x0  nop
    ctx->pc = 0x332ca4u;
    // NOP
    // 0x332ca8: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x332ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x332cac: 0x3c03435c  lui         $v1, 0x435C
    ctx->pc = 0x332cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17244 << 16));
    // 0x332cb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x332cb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332cb4: 0x0  nop
    ctx->pc = 0x332cb4u;
    // NOP
    // 0x332cb8: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x332cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x332cbc: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x332cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x332cc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x332cc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332cc4: 0x0  nop
    ctx->pc = 0x332cc4u;
    // NOP
    // 0x332cc8: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x332cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x332ccc: 0x3c0343a7  lui         $v1, 0x43A7
    ctx->pc = 0x332cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17319 << 16));
    // 0x332cd0: 0x346a3333  ori         $t2, $v1, 0x3333
    ctx->pc = 0x332cd0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x332cd4: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x332cd4u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332cd8: 0x0  nop
    ctx->pc = 0x332cd8u;
    // NOP
    // 0x332cdc: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x332cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x332ce0: 0x3c02438b  lui         $v0, 0x438B
    ctx->pc = 0x332ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17291 << 16));
    // 0x332ce4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x332ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332ce8: 0x0  nop
    ctx->pc = 0x332ce8u;
    // NOP
    // 0x332cec: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x332cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x332cf0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x332cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x332cf4: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x332cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x332cf8: 0x26060044  addiu       $a2, $s0, 0x44
    ctx->pc = 0x332cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x332cfc: 0x26070084  addiu       $a3, $s0, 0x84
    ctx->pc = 0x332cfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x332d00: 0x260800c4  addiu       $t0, $s0, 0xC4
    ctx->pc = 0x332d00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    // 0x332d04: 0x26090104  addiu       $t1, $s0, 0x104
    ctx->pc = 0x332d04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    // 0x332d08: 0xc0a43e0  jal         func_290F80
    ctx->pc = 0x332D08u;
    SET_GPR_U32(ctx, 31, 0x332D10u);
    ctx->pc = 0x290F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F80u, 0x332D08u, 0x332D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332D10u;
label_332d10:
    // 0x332d10: 0x26305f4c  addiu       $s0, $s1, 0x5F4C
    ctx->pc = 0x332d10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24396));
    // 0x332d14: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x332d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x332d18: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x332d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x332d1c: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x332d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x332d20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x332d20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332d24: 0x0  nop
    ctx->pc = 0x332d24u;
    // NOP
    // 0x332d28: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x332d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x332d2c: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x332d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x332d30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x332d30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332d34: 0x0  nop
    ctx->pc = 0x332d34u;
    // NOP
    // 0x332d38: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x332d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x332d3c: 0x3c05435c  lui         $a1, 0x435C
    ctx->pc = 0x332d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17244 << 16));
    // 0x332d40: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x332d40u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332d44: 0x0  nop
    ctx->pc = 0x332d44u;
    // NOP
    // 0x332d48: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x332d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x332d4c: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x332d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x332d50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x332d50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332d54: 0x0  nop
    ctx->pc = 0x332d54u;
    // NOP
    // 0x332d58: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x332d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x332d5c: 0x3c024299  lui         $v0, 0x4299
    ctx->pc = 0x332d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17049 << 16));
    // 0x332d60: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x332d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x332d64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x332d64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332d68: 0x0  nop
    ctx->pc = 0x332d68u;
    // NOP
    // 0x332d6c: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x332d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x332d70: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x332d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x332d74: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x332d74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x332d78: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332d7c: 0x8c222780  lw          $v0, 0x2780($at)
    ctx->pc = 0x332d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x892780u));
    // 0x332d80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x332d80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332d84: 0x0  nop
    ctx->pc = 0x332d84u;
    // NOP
    // 0x332d88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x332d88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x332d8c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x332d8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x332d90: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x332d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x332d94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x332d94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332d98: 0x0  nop
    ctx->pc = 0x332d98u;
    // NOP
    // 0x332d9c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x332d9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x332da0: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x332da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x332da4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x332da4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332da8: 0x0  nop
    ctx->pc = 0x332da8u;
    // NOP
    // 0x332dac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x332dacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x332db0: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x332db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x332db4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x332db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x332db8: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x332db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x332dbc: 0x26060044  addiu       $a2, $s0, 0x44
    ctx->pc = 0x332dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x332dc0: 0x26070084  addiu       $a3, $s0, 0x84
    ctx->pc = 0x332dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x332dc4: 0x260800c4  addiu       $t0, $s0, 0xC4
    ctx->pc = 0x332dc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    // 0x332dc8: 0x26090104  addiu       $t1, $s0, 0x104
    ctx->pc = 0x332dc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    // 0x332dcc: 0xc0a43e0  jal         func_290F80
    ctx->pc = 0x332DCCu;
    SET_GPR_U32(ctx, 31, 0x332DD4u);
    ctx->pc = 0x290F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F80u, 0x332DCCu, 0x332DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332DD4u;
label_332dd4:
    // 0x332dd4: 0x2630645c  addiu       $s0, $s1, 0x645C
    ctx->pc = 0x332dd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 25692));
    // 0x332dd8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x332dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x332ddc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x332ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x332de0: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x332de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x332de4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x332de4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332de8: 0x0  nop
    ctx->pc = 0x332de8u;
    // NOP
    // 0x332dec: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x332decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x332df0: 0x3c044360  lui         $a0, 0x4360
    ctx->pc = 0x332df0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17248 << 16));
    // 0x332df4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x332df4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332df8: 0x0  nop
    ctx->pc = 0x332df8u;
    // NOP
    // 0x332dfc: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x332dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x332e00: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x332e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x332e04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x332e04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332e08: 0x0  nop
    ctx->pc = 0x332e08u;
    // NOP
    // 0x332e0c: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x332e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x332e10: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x332e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x332e14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x332e14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332e18: 0x0  nop
    ctx->pc = 0x332e18u;
    // NOP
    // 0x332e1c: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x332e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x332e20: 0x3c0a4380  lui         $t2, 0x4380
    ctx->pc = 0x332e20u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17280 << 16));
    // 0x332e24: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x332e24u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332e28: 0x0  nop
    ctx->pc = 0x332e28u;
    // NOP
    // 0x332e2c: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x332e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x332e30: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x332e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x332e34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x332e34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332e38: 0x0  nop
    ctx->pc = 0x332e38u;
    // NOP
    // 0x332e3c: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x332e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x332e40: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x332e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x332e44: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x332e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x332e48: 0x26060044  addiu       $a2, $s0, 0x44
    ctx->pc = 0x332e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x332e4c: 0x26070084  addiu       $a3, $s0, 0x84
    ctx->pc = 0x332e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x332e50: 0x260800c4  addiu       $t0, $s0, 0xC4
    ctx->pc = 0x332e50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    // 0x332e54: 0x26090104  addiu       $t1, $s0, 0x104
    ctx->pc = 0x332e54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    // 0x332e58: 0xc0a43e0  jal         func_290F80
    ctx->pc = 0x332E58u;
    SET_GPR_U32(ctx, 31, 0x332E60u);
    ctx->pc = 0x290F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F80u, 0x332E58u, 0x332E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332E60u;
label_332e60:
    // 0x332e60: 0x26230620  addiu       $v1, $s1, 0x620
    ctx->pc = 0x332e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    // 0x332e64: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332e68: 0xac232790  sw          $v1, 0x2790($at)
    ctx->pc = 0x332e68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x892790u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892790u, _value); } while (0);
    // 0x332e6c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x332e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x332e70: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332e74: 0x8c232790  lw          $v1, 0x2790($at)
    ctx->pc = 0x332e74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892790u));
    // 0x332e78: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x332e78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x332e7c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332e80: 0xac202720  sw          $zero, 0x2720($at)
    ctx->pc = 0x332e80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x892720u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892720u, _value); } while (0);
    // 0x332e84: 0x9224683f  lbu         $a0, 0x683F($s1)
    ctx->pc = 0x332e84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26687)));
    // 0x332e88: 0x309400ff  andi        $s4, $a0, 0xFF
    ctx->pc = 0x332e88u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x332e8c: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x332e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x332e90: 0x9023c98e  lbu         $v1, -0x3672($at)
    ctx->pc = 0x332e90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x62C98Eu));
    // 0x332e94: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x332e94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x332e98: 0x949823  subu        $s3, $a0, $s4
    ctx->pc = 0x332e98u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x332e9c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332ea0: 0xac202780  sw          $zero, 0x2780($at)
    ctx->pc = 0x332ea0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x892780u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892780u, _value); } while (0);
    // 0x332ea4: 0x1a60001e  blez        $s3, . + 4 + (0x1E << 2)
    ctx->pc = 0x332EA4u;
    {
        const bool branch_taken_0x332ea4 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x332ea4) {
            ctx->pc = 0x332F20u;
            return;
        }
    }
    ctx->pc = 0x332EACu;
    // 0x332eac: 0x8e226850  lw          $v0, 0x6850($s1)
    ctx->pc = 0x332eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26704)));
    // 0x332eb0: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x332eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x332eb4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332eb8: 0x8c222780  lw          $v0, 0x2780($at)
    ctx->pc = 0x332eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x892780u));
    // 0x332ebc: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x332ebcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x332ec0: 0x254082a  slt         $at, $s2, $s4
    ctx->pc = 0x332ec0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x332ec4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x332EC4u;
    {
        const bool branch_taken_0x332ec4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x332ec4) {
            ctx->pc = 0x332ED0u;
            return;
        }
    }
    ctx->pc = 0x332ECCu;
    // 0x332ecc: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x332eccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    ctx->pc = 0x332ed0u;
}
