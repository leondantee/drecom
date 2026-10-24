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

// Function: caseD_7
// Address: 0x3548d4 - 0x354a20
void caseD_7_0x3548d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x3548d4");
#endif

    switch (ctx->pc) {
        case 0x354920u: goto label_354920;
        case 0x354974u: goto label_354974;
        default: break;
    }

    ctx->pc = 0x3548d4u;

    // 0x3548d4: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x3548d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3548d8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3548d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3548dc: 0x7d2821  addu        $a1, $v1, $sp
    ctx->pc = 0x3548dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x3548e0: 0x90a4010c  lbu         $a0, 0x10C($a1)
    ctx->pc = 0x3548e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 268)));
    // 0x3548e4: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x3548e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3548e8: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x3548e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3548ec: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x3548ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3548f0: 0x8ca70130  lw          $a3, 0x130($a1)
    ctx->pc = 0x3548f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x3548f4: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x3548f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x3548f8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x3548f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3548fc: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x3548fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x354900: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x354900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x354904: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x354904u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x354908: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x354908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x35490c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x35490cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x354910: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x354910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x354914: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x354914u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x354918: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x354918u;
    SET_GPR_U32(ctx, 31, 0x354920u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x354918u, 0x354920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354920u;
label_354920:
    // 0x354920: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x354920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x354924: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x354924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x354928: 0x9d2821  addu        $a1, $a0, $sp
    ctx->pc = 0x354928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x35492c: 0x90a7010c  lbu         $a3, 0x10C($a1)
    ctx->pc = 0x35492cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 268)));
    // 0x354930: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x354930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x354934: 0x22180  sll         $a0, $v0, 6
    ctx->pc = 0x354934u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x354938: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x354938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x35493c: 0x8ca20134  lw          $v0, 0x134($a1)
    ctx->pc = 0x35493cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 308)));
    // 0x354940: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x354940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x354944: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x354944u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x354948: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x354948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x35494c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x35494cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x354950: 0x9042010c  lbu         $v0, 0x10C($v0)
    ctx->pc = 0x354950u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 268)));
    // 0x354954: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x354954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x354958: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x354958u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x35495c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x35495cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x354960: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x354960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x354964: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x354964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x354968: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x354968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x35496c: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x35496Cu;
    SET_GPR_U32(ctx, 31, 0x354974u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x35496Cu, 0x354974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354974u;
label_354974:
    // 0x354974: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x354974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x354978: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x354978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35497c: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x35497cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x354980: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x354980u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x354984: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x354984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x354988: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x354988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x35498c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x35498cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x354990: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x354990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x354994: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x354994u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x354998: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x354998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x35499c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x35499cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3549a0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x3549a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3549a4: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x3549a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3549a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3549a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3549ac: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x3549acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x3549b0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x3549b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3549b4: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x3549b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3549b8: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x3549b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3549bc: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x3549bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3549c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3549c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3549c4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x3549c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x3549c8: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x3549c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3549cc: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x3549ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3549d0: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x3549d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x3549d4: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x3549d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x3549d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3549d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3549dc: 0x0  nop
    ctx->pc = 0x3549dcu;
    // NOP
    // 0x3549e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3549e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3549e4: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x3549e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x3549e8: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x3549e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3549ec: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x3549ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3549f0: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x3549f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3549f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3549f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3549f8: 0x0  nop
    ctx->pc = 0x3549f8u;
    // NOP
    // 0x3549fc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x3549FCu;
    {
        const bool branch_taken_0x3549fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3549fc) {
            ctx->pc = 0x354A20u;
            return;
        }
    }
    ctx->pc = 0x354A04u;
    // 0x354a04: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x354a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x354a08: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x354a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x354a0c: 0xa4640014  sh          $a0, 0x14($v1)
    ctx->pc = 0x354a0cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x354a10: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x354a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x354a14: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x354a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x354a18: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x354a18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x354a1c: 0x0  nop
    ctx->pc = 0x354a1cu;
    // NOP
    ctx->pc = 0x354a20u;
}
