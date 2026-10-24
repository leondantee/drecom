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

// Function: entry_0034765c
// Address: 0x34765c - 0x347770
void entry_0034765c_0x34765c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034765c_0x34765c");
#endif

    ctx->pc = 0x34765cu;

    // 0x34765c: 0x32a300ff  andi        $v1, $s5, 0xFF
    ctx->pc = 0x34765cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x347660: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x347660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x347664: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x347664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x347668: 0x90630088  lbu         $v1, 0x88($v1)
    ctx->pc = 0x347668u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x34766c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x34766cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x347670: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x347670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x347674: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x347674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x347678: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x347678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x34767c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x34767cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x347680: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x347680u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x347684: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347688: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x347688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x34768c: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x34768cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x347690: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x347690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x347694: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x347694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x347698: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x347698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x34769c: 0x14600034  bnez        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x34769Cu;
    {
        const bool branch_taken_0x34769c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34769c) {
            ctx->pc = 0x347770u;
            return;
        }
    }
    ctx->pc = 0x3476A4u;
    // 0x3476a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3476a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3476a8: 0x0  nop
    ctx->pc = 0x3476a8u;
    // NOP
    // 0x3476ac: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x3476acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x3476b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3476b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3476b4: 0x0  nop
    ctx->pc = 0x3476b4u;
    // NOP
    // 0x3476b8: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x3476b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x3476bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3476bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3476c0: 0x0  nop
    ctx->pc = 0x3476c0u;
    // NOP
    // 0x3476c4: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x3476c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x3476c8: 0xc6600120  lwc1        $f0, 0x120($s3)
    ctx->pc = 0x3476c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3476cc: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x3476ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x3476d0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3476d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3476d4: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x3476d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3476d8: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x3476d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x3476dc: 0xc6600128  lwc1        $f0, 0x128($s3)
    ctx->pc = 0x3476dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3476e0: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x3476e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x3476e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3476e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3476e8: 0x0  nop
    ctx->pc = 0x3476e8u;
    // NOP
    // 0x3476ec: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x3476ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x3476f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3476f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3476f4: 0x0  nop
    ctx->pc = 0x3476f4u;
    // NOP
    // 0x3476f8: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x3476f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x3476fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3476fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347700: 0x0  nop
    ctx->pc = 0x347700u;
    // NOP
    // 0x347704: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x347704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x347708: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x347708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34770c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x34770cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x347710: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x347710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x347714: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x347714u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x347718: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x347718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34771c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34771cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x347720: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x347720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x347724: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x347724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x347728: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347728u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34772c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34772cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x347730: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x347730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x347734: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x347734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x347738: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347738u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34773c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34773cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x347740: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x347740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x347744: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x347744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x347748: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347748u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34774c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34774cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x347750: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x347750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x347754: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x347754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x347758: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x347758u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34775c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x34775cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x347760: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x347760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x347764: 0xa4640014  sh          $a0, 0x14($v1)
    ctx->pc = 0x347764u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x347768: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x347768u;
    {
        const bool branch_taken_0x347768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x347768) {
            ctx->pc = 0x347BC8u;
            return;
        }
    }
    ctx->pc = 0x347770u;
}
