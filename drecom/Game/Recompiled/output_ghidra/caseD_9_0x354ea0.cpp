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

// Function: caseD_9
// Address: 0x354ea0 - 0x355010
void caseD_9_0x354ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x354ea0");
#endif

    switch (ctx->pc) {
        case 0x354eecu: goto label_354eec;
        case 0x354f4cu: goto label_354f4c;
        default: break;
    }

    ctx->pc = 0x354ea0u;

    // 0x354ea0: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x354ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x354ea4: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x354ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x354ea8: 0x9d2821  addu        $a1, $a0, $sp
    ctx->pc = 0x354ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x354eac: 0x90a7010c  lbu         $a3, 0x10C($a1)
    ctx->pc = 0x354eacu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 268)));
    // 0x354eb0: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x354eb0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x354eb4: 0x84980  sll         $t1, $t0, 6
    ctx->pc = 0x354eb4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x354eb8: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x354eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x354ebc: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x354ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x354ec0: 0xa92021  addu        $a0, $a1, $t1
    ctx->pc = 0x354ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x354ec4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x354ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x354ec8: 0x90650002  lbu         $a1, 0x2($v1)
    ctx->pc = 0x354ec8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x354ecc: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x354eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x354ed0: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x354ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x354ed4: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x354ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x354ed8: 0x8cc30130  lw          $v1, 0x130($a2)
    ctx->pc = 0x354ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
    // 0x354edc: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x354edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x354ee0: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x354ee0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x354ee4: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x354EE4u;
    SET_GPR_U32(ctx, 31, 0x354EECu);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x354EE4u, 0x354EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354EECu;
label_354eec:
    // 0x354eec: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x354eecu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x354ef0: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x354ef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x354ef4: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x354ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x354ef8: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x354ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x354efc: 0x9063010c  lbu         $v1, 0x10C($v1)
    ctx->pc = 0x354efcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 268)));
    // 0x354f00: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x354f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x354f04: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x354f04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x354f08: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x354f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x354f0c: 0x8c830134  lw          $v1, 0x134($a0)
    ctx->pc = 0x354f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 308)));
    // 0x354f10: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x354f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x354f14: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x354f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x354f18: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x354f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x354f1c: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x354f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x354f20: 0x9042010c  lbu         $v0, 0x10C($v0)
    ctx->pc = 0x354f20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 268)));
    // 0x354f24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x354f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x354f28: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x354f28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x354f2c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x354f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x354f30: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x354f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x354f34: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x354f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x354f38: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x354f38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x354f3c: 0x26070040  addiu       $a3, $s0, 0x40
    ctx->pc = 0x354f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x354f40: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x354f40u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x354f44: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x354F44u;
    SET_GPR_U32(ctx, 31, 0x354F4Cu);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x354F44u, 0x354F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354F4Cu;
label_354f4c:
    // 0x354f4c: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x354f4cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x354f50: 0x26090150  addiu       $t1, $s0, 0x150
    ctx->pc = 0x354f50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x354f54: 0x3c043f4c  lui         $a0, 0x3F4C
    ctx->pc = 0x354f54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16204 << 16));
    // 0x354f58: 0x3483cccd  ori         $v1, $a0, 0xCCCD
    ctx->pc = 0x354f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x354f5c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x354f5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x354f60: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x354f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x354f64: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x354f64u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x354f68: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x354f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x354f6c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x354f6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x354f70: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x354f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x354f74: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x354f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x354f78: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x354f78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x354f7c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x354f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x354f80: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x354f80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x354f84: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x354f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x354f88: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x354f88u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x354f8c: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x354f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x354f90: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x354f90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x354f94: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x354f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x354f98: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x354f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x354f9c: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x354f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x354fa0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x354fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x354fa4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x354fa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x354fa8: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x354fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x354fac: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x354facu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x354fb0: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x354fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x354fb4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x354fb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x354fb8: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x354fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x354fbc: 0xc601012c  lwc1        $f1, 0x12C($s0)
    ctx->pc = 0x354fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x354fc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x354fc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354fc4: 0x0  nop
    ctx->pc = 0x354fc4u;
    // NOP
    // 0x354fc8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x354fc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x354fcc: 0x0  nop
    ctx->pc = 0x354fccu;
    // NOP
    // 0x354fd0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x354FD0u;
    {
        const bool branch_taken_0x354fd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x354fd0) {
            ctx->pc = 0x355010u;
            return;
        }
    }
    ctx->pc = 0x354FD8u;
    // 0x354fd8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x354fd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x354fdc: 0x0  nop
    ctx->pc = 0x354fdcu;
    // NOP
    // 0x354fe0: 0xe6010128  swc1        $f1, 0x128($s0)
    ctx->pc = 0x354fe0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x354fe4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x354fe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354fe8: 0x0  nop
    ctx->pc = 0x354fe8u;
    // NOP
    // 0x354fec: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x354fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x354ff0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x354ff0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354ff4: 0x0  nop
    ctx->pc = 0x354ff4u;
    // NOP
    // 0x354ff8: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x354ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x354ffc: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x354ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x355000: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x355000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x355004: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x355004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x355008: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x355008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x35500c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x35500cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x355010u;
}
