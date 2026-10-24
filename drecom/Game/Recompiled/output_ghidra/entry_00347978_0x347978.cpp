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

// Function: entry_00347978
// Address: 0x347978 - 0x347b04
void entry_00347978_0x347978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00347978_0x347978");
#endif

    ctx->pc = 0x347978u;

    // 0x347978: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34797c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x34797cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x347980: 0x24723840  addiu       $s2, $v1, 0x3840
    ctx->pc = 0x347980u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 14400));
    // 0x347984: 0xc6410128  lwc1        $f1, 0x128($s2)
    ctx->pc = 0x347984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x347988: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x347988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x34798c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x34798cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x347990: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347990u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347994: 0x0  nop
    ctx->pc = 0x347994u;
    // NOP
    // 0x347998: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x347998u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34799c: 0xe6400128  swc1        $f0, 0x128($s2)
    ctx->pc = 0x34799cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 296), bits); }
    // 0x3479a0: 0xc641012c  lwc1        $f1, 0x12C($s2)
    ctx->pc = 0x3479a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3479a4: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x3479a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x3479a8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3479a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x3479ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3479acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3479b0: 0x0  nop
    ctx->pc = 0x3479b0u;
    // NOP
    // 0x3479b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3479b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3479b8: 0xe640012c  swc1        $f0, 0x12C($s2)
    ctx->pc = 0x3479b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 300), bits); }
    // 0x3479bc: 0xc6410130  lwc1        $f1, 0x130($s2)
    ctx->pc = 0x3479bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3479c0: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x3479c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x3479c4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3479c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x3479c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3479c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3479cc: 0x0  nop
    ctx->pc = 0x3479ccu;
    // NOP
    // 0x3479d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3479d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3479d4: 0xe6400130  swc1        $f0, 0x130($s2)
    ctx->pc = 0x3479d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 304), bits); }
    // 0x3479d8: 0xc6410128  lwc1        $f1, 0x128($s2)
    ctx->pc = 0x3479d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3479dc: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x3479dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x3479e0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3479e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x3479e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3479e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3479e8: 0x0  nop
    ctx->pc = 0x3479e8u;
    // NOP
    // 0x3479ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3479ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3479f0: 0x0  nop
    ctx->pc = 0x3479f0u;
    // NOP
    // 0x3479f4: 0x45000074  bc1f        . + 4 + (0x74 << 2)
    ctx->pc = 0x3479F4u;
    {
        const bool branch_taken_0x3479f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3479f4) {
            ctx->pc = 0x347BC8u;
            return;
        }
    }
    ctx->pc = 0x3479FCu;
    // 0x3479fc: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x3479fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x347a00: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x347a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x347a04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347a04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347a08: 0x0  nop
    ctx->pc = 0x347a08u;
    // NOP
    // 0x347a0c: 0xe6400128  swc1        $f0, 0x128($s2)
    ctx->pc = 0x347a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 296), bits); }
    // 0x347a10: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x347a10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x347a14: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x347a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x347a18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347a18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347a1c: 0x0  nop
    ctx->pc = 0x347a1cu;
    // NOP
    // 0x347a20: 0xe640012c  swc1        $f0, 0x12C($s2)
    ctx->pc = 0x347a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 300), bits); }
    // 0x347a24: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x347a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x347a28: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x347a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x347a2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347a2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347a30: 0x0  nop
    ctx->pc = 0x347a30u;
    // NOP
    // 0x347a34: 0xe6400130  swc1        $f0, 0x130($s2)
    ctx->pc = 0x347a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 304), bits); }
    // 0x347a38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x347a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347a3c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347a40: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x347a40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x347a44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x347a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347a48: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347a4c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x347a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x347a50: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347a54: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x347a54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x347a58: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347a5c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x347a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x347a60: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347a64: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x347a64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x347a68: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x347a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x347a6c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347a70: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x347a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347a74: 0xa4640068  sh          $a0, 0x68($v1)
    ctx->pc = 0x347a74u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 104), (uint16_t)GPR_U32(ctx, 4));
    // 0x347a78: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347a7c: 0x24721330  addiu       $s2, $v1, 0x1330
    ctx->pc = 0x347a7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347a80: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x347a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x347a84: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x347a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x347a88: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x347a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x347a8c: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x347a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x347a90: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347a94: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x347a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x347a98: 0x24720960  addiu       $s2, $v1, 0x960
    ctx->pc = 0x347a98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 2400));
    // 0x347a9c: 0x26440150  addiu       $a0, $s2, 0x150
    ctx->pc = 0x347a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x347aa0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x347aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x347aa4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x347aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x347aa8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x347aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x347aac: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347ab0: 0x24661330  addiu       $a2, $v1, 0x1330
    ctx->pc = 0x347ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347ab4: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x347ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x347ab8: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x347ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x347abc: 0x642824  and         $a1, $v1, $a0
    ctx->pc = 0x347abcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x347ac0: 0xacc5000c  sw          $a1, 0xC($a2)
    ctx->pc = 0x347ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
    // 0x347ac4: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x347ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347ac8: 0x94c7000e  lhu         $a3, 0xE($a2)
    ctx->pc = 0x347ac8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x347acc: 0x30e8bfff  andi        $t0, $a3, 0xBFFF
    ctx->pc = 0x347accu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)49151);
    // 0x347ad0: 0xa4c8000e  sh          $t0, 0xE($a2)
    ctx->pc = 0x347ad0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 14), (uint16_t)GPR_U32(ctx, 8));
    // 0x347ad4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347ad8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x347ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347adc: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x347adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x347ae0: 0x30640008  andi        $a0, $v1, 0x8
    ctx->pc = 0x347ae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x347ae4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x347AE4u;
    {
        const bool branch_taken_0x347ae4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x347ae4) {
            ctx->pc = 0x347B04u;
            return;
        }
    }
    ctx->pc = 0x347AECu;
    // 0x347aec: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x347aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x347af0: 0x2463a340  addiu       $v1, $v1, -0x5CC0
    ctx->pc = 0x347af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943552));
    // 0x347af4: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x347af4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347af8: 0xaca31228  sw          $v1, 0x1228($a1)
    ctx->pc = 0x347af8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4648), GPR_U32(ctx, 3));
    // 0x347afc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x347AFCu;
    {
        const bool branch_taken_0x347afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x347afc) {
            ctx->pc = 0x347B14u;
            return;
        }
    }
    ctx->pc = 0x347B04u;
}
