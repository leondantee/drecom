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

// Function: entry_0034784c
// Address: 0x34784c - 0x347960
void entry_0034784c_0x34784c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034784c_0x34784c");
#endif

    ctx->pc = 0x34784cu;

    // 0x34784c: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x34784cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x347850: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x347850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x347854: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x347854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x347858: 0x9063008c  lbu         $v1, 0x8C($v1)
    ctx->pc = 0x347858u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x34785c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x34785cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x347860: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x347860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x347864: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x347864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x347868: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x347868u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x34786c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x34786cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x347870: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x347870u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x347874: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347878: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x347878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x34787c: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x34787cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x347880: 0x26230150  addiu       $v1, $s1, 0x150
    ctx->pc = 0x347880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x347884: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x347884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x347888: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x347888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x34788c: 0x14600034  bnez        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x34788Cu;
    {
        const bool branch_taken_0x34788c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34788c) {
            ctx->pc = 0x347960u;
            return;
        }
    }
    ctx->pc = 0x347894u;
    // 0x347894: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x347894u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347898: 0x0  nop
    ctx->pc = 0x347898u;
    // NOP
    // 0x34789c: 0xe6200128  swc1        $f0, 0x128($s1)
    ctx->pc = 0x34789cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x3478a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3478a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3478a4: 0x0  nop
    ctx->pc = 0x3478a4u;
    // NOP
    // 0x3478a8: 0xe620012c  swc1        $f0, 0x12C($s1)
    ctx->pc = 0x3478a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 300), bits); }
    // 0x3478ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3478acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3478b0: 0x0  nop
    ctx->pc = 0x3478b0u;
    // NOP
    // 0x3478b4: 0xe6200130  swc1        $f0, 0x130($s1)
    ctx->pc = 0x3478b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 304), bits); }
    // 0x3478b8: 0xc6800120  lwc1        $f0, 0x120($s4)
    ctx->pc = 0x3478b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3478bc: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x3478bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x3478c0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3478c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3478c4: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x3478c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3478c8: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x3478c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x3478cc: 0xc6800128  lwc1        $f0, 0x128($s4)
    ctx->pc = 0x3478ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3478d0: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x3478d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x3478d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3478d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3478d8: 0x0  nop
    ctx->pc = 0x3478d8u;
    // NOP
    // 0x3478dc: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x3478dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x3478e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3478e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3478e4: 0x0  nop
    ctx->pc = 0x3478e4u;
    // NOP
    // 0x3478e8: 0xe6200108  swc1        $f0, 0x108($s1)
    ctx->pc = 0x3478e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
    // 0x3478ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3478ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3478f0: 0x0  nop
    ctx->pc = 0x3478f0u;
    // NOP
    // 0x3478f4: 0xe620010c  swc1        $f0, 0x10C($s1)
    ctx->pc = 0x3478f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 268), bits); }
    // 0x3478f8: 0x26240150  addiu       $a0, $s1, 0x150
    ctx->pc = 0x3478f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x3478fc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3478fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x347900: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x347900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x347904: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x347904u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x347908: 0x26230150  addiu       $v1, $s1, 0x150
    ctx->pc = 0x347908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x34790c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34790cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x347910: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x347910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x347914: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x347914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x347918: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347918u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34791c: 0x26230150  addiu       $v1, $s1, 0x150
    ctx->pc = 0x34791cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x347920: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x347920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x347924: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x347924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x347928: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347928u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34792c: 0x26230150  addiu       $v1, $s1, 0x150
    ctx->pc = 0x34792cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x347930: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x347930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x347934: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x347934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x347938: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347938u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34793c: 0x26230150  addiu       $v1, $s1, 0x150
    ctx->pc = 0x34793cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x347940: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x347940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x347944: 0x26230150  addiu       $v1, $s1, 0x150
    ctx->pc = 0x347944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x347948: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x347948u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34794c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x34794cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x347950: 0x26230150  addiu       $v1, $s1, 0x150
    ctx->pc = 0x347950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x347954: 0xa4640014  sh          $a0, 0x14($v1)
    ctx->pc = 0x347954u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x347958: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x347958u;
    {
        const bool branch_taken_0x347958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x347958) {
            ctx->pc = 0x347978u;
            return;
        }
    }
    ctx->pc = 0x347960u;
}
