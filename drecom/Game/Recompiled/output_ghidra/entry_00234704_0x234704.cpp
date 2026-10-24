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

// Function: entry_00234704
// Address: 0x234704 - 0x2349d8
void entry_00234704_0x234704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00234704_0x234704");
#endif

    switch (ctx->pc) {
        case 0x234720u: goto label_234720;
        case 0x234738u: goto label_234738;
        case 0x234770u: goto label_234770;
        case 0x234968u: goto label_234968;
        case 0x234994u: goto label_234994;
        default: break;
    }

    ctx->pc = 0x234704u;

    // 0x234704: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x234704u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x234708: 0x3063ff5b  andi        $v1, $v1, 0xFF5B
    ctx->pc = 0x234708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65371);
    // 0x23470c: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x23470cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x234710: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x234710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x234714: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x234714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x234718: 0xc040c44  jal         func_103110
    ctx->pc = 0x234718u;
    SET_GPR_U32(ctx, 31, 0x234720u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x234720u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x234720u) { return; }
    ctx->pc = 0x234720u;
label_234720:
    // 0x234720: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x234720u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x234724: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x234724u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x234728: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x234728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x23472c: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x23472cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x234730: 0xc040c00  jal         func_103000
    ctx->pc = 0x234730u;
    SET_GPR_U32(ctx, 31, 0x234738u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x234738u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x234738u) { return; }
    ctx->pc = 0x234738u;
label_234738:
    // 0x234738: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x234738u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23473c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23473cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234740: 0x0  nop
    ctx->pc = 0x234740u;
    // NOP
    // 0x234744: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x234744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x234748: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x234748u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23474c: 0x0  nop
    ctx->pc = 0x23474cu;
    // NOP
    // 0x234750: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x234750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x234754: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x234754u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234758: 0x0  nop
    ctx->pc = 0x234758u;
    // NOP
    // 0x23475c: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x23475cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x234760: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x234760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x234764: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x234764u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x234768: 0xc040ca2  jal         func_103288
    ctx->pc = 0x234768u;
    SET_GPR_U32(ctx, 31, 0x234770u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x234770u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x234770u) { return; }
    ctx->pc = 0x234770u;
label_234770:
    // 0x234770: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x234770u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x234774: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x234774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x234778: 0x94c50006  lhu         $a1, 0x6($a2)
    ctx->pc = 0x234778u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x23477c: 0x30a3fffe  andi        $v1, $a1, 0xFFFE
    ctx->pc = 0x23477cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65534);
    // 0x234780: 0xa4c30006  sh          $v1, 0x6($a2)
    ctx->pc = 0x234780u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x234784: 0xa2800000  sb          $zero, 0x0($s4)
    ctx->pc = 0x234784u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x234788: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x234788u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23478c: 0x8fb201c0  lw          $s2, 0x1C0($sp)
    ctx->pc = 0x23478cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x234790: 0x26461330  addiu       $a2, $s2, 0x1330
    ctx->pc = 0x234790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4912));
    // 0x234794: 0x8cc50030  lw          $a1, 0x30($a2)
    ctx->pc = 0x234794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x234798: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x234798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x23479c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x23479cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2347a0: 0xacc50030  sw          $a1, 0x30($a2)
    ctx->pc = 0x2347a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 5));
    // 0x2347a4: 0x8e970034  lw          $s7, 0x34($s4)
    ctx->pc = 0x2347a4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x2347a8: 0x8ee30024  lw          $v1, 0x24($s7)
    ctx->pc = 0x2347a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 36)));
    // 0x2347ac: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2347acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2347b0: 0xaee30024  sw          $v1, 0x24($s7)
    ctx->pc = 0x2347b0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 36), GPR_U32(ctx, 3));
    // 0x2347b4: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x2347b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2347b8: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x2347b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2347bc: 0x24924010  addiu       $s2, $a0, 0x4010
    ctx->pc = 0x2347bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 16400));
    // 0x2347c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2347c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2347c4: 0x0  nop
    ctx->pc = 0x2347c4u;
    // NOP
    // 0x2347c8: 0xe6400128  swc1        $f0, 0x128($s2)
    ctx->pc = 0x2347c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 296), bits); }
    // 0x2347cc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x2347ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x2347d0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2347d0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2347d4: 0x0  nop
    ctx->pc = 0x2347d4u;
    // NOP
    // 0x2347d8: 0xe640012c  swc1        $f0, 0x12C($s2)
    ctx->pc = 0x2347d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 300), bits); }
    // 0x2347dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2347dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2347e0: 0x0  nop
    ctx->pc = 0x2347e0u;
    // NOP
    // 0x2347e4: 0xe6400130  swc1        $f0, 0x130($s2)
    ctx->pc = 0x2347e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 304), bits); }
    // 0x2347e8: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x2347e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2347ec: 0x24871330  addiu       $a3, $a0, 0x1330
    ctx->pc = 0x2347ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x2347f0: 0x8ce60030  lw          $a2, 0x30($a3)
    ctx->pc = 0x2347f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x2347f4: 0x2405fdff  addiu       $a1, $zero, -0x201
    ctx->pc = 0x2347f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x2347f8: 0xc52024  and         $a0, $a2, $a1
    ctx->pc = 0x2347f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x2347fc: 0xace40030  sw          $a0, 0x30($a3)
    ctx->pc = 0x2347fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 4));
    // 0x234800: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x234800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x234804: 0x948610a4  lhu         $a2, 0x10A4($a0)
    ctx->pc = 0x234804u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4260)));
    // 0x234808: 0x30c4ffff  andi        $a0, $a2, 0xFFFF
    ctx->pc = 0x234808u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x23480c: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x23480cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x234810: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x234810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x234814: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x234814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x234818: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x234818u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23481c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x23481cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x234820: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x234820u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x234824: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x234824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x234828: 0x2486cfd0  addiu       $a2, $a0, -0x3030
    ctx->pc = 0x234828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954960));
    // 0x23482c: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x23482cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x234830: 0xa4800014  sh          $zero, 0x14($a0)
    ctx->pc = 0x234830u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x234834: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x234834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x234838: 0x94a410a4  lhu         $a0, 0x10A4($a1)
    ctx->pc = 0x234838u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4260)));
    // 0x23483c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x23483cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x234840: 0x43040  sll         $a2, $a0, 1
    ctx->pc = 0x234840u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x234844: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x234844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x234848: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x234848u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x23484c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23484cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x234850: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x234850u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x234854: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x234854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x234858: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x234858u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x23485c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x23485cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x234860: 0x2485cfd0  addiu       $a1, $a0, -0x3030
    ctx->pc = 0x234860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954960));
    // 0x234864: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x234864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x234868: 0xa4800014  sh          $zero, 0x14($a0)
    ctx->pc = 0x234868u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x23486c: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x23486cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x234870: 0x948410a4  lhu         $a0, 0x10A4($a0)
    ctx->pc = 0x234870u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4260)));
    // 0x234874: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x234874u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x234878: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x234878u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x23487c: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x23487cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x234880: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x234880u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x234884: 0x24850002  addiu       $a1, $a0, 0x2
    ctx->pc = 0x234884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x234888: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x234888u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x23488c: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x23488cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x234890: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x234890u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x234894: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x234894u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x234898: 0x2485cfd0  addiu       $a1, $a0, -0x3030
    ctx->pc = 0x234898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954960));
    // 0x23489c: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x23489cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2348a0: 0xa4800014  sh          $zero, 0x14($a0)
    ctx->pc = 0x2348a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x2348a4: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x2348a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2348a8: 0x948410a4  lhu         $a0, 0x10A4($a0)
    ctx->pc = 0x2348a8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4260)));
    // 0x2348ac: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x2348acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2348b0: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2348b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2348b4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2348b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2348b8: 0x43040  sll         $a2, $a0, 1
    ctx->pc = 0x2348b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2348bc: 0x24c50003  addiu       $a1, $a2, 0x3
    ctx->pc = 0x2348bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x2348c0: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2348c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2348c4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2348c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2348c8: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x2348c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2348cc: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2348ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2348d0: 0x2486cfd0  addiu       $a2, $a0, -0x3030
    ctx->pc = 0x2348d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954960));
    // 0x2348d4: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x2348d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2348d8: 0xa4a00014  sh          $zero, 0x14($a1)
    ctx->pc = 0x2348d8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x2348dc: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x2348dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2348e0: 0x948410a4  lhu         $a0, 0x10A4($a0)
    ctx->pc = 0x2348e0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4260)));
    // 0x2348e4: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x2348e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2348e8: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2348e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2348ec: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2348ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2348f0: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2348f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2348f4: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x2348f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2348f8: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2348f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2348fc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2348fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x234900: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x234900u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x234904: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x234904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x234908: 0x2464cfd0  addiu       $a0, $v1, -0x3030
    ctx->pc = 0x234908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954960));
    // 0x23490c: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x23490cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x234910: 0xa4600014  sh          $zero, 0x14($v1)
    ctx->pc = 0x234910u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x234914: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x234914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x234918: 0x946310a4  lhu         $v1, 0x10A4($v1)
    ctx->pc = 0x234918u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4260)));
    // 0x23491c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x23491cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x234920: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x234920u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x234924: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x234924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x234928: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x234928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x23492c: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x23492cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x234930: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x234930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x234934: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x234934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x234938: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x234938u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x23493c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x23493cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x234940: 0x2443cfd0  addiu       $v1, $v0, -0x3030
    ctx->pc = 0x234940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954960));
    // 0x234944: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x234944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x234948: 0xa4400014  sh          $zero, 0x14($v0)
    ctx->pc = 0x234948u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x23494c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x23494cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x234950: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x234950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x234954: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x234954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x234958: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x234958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x23495c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x23495cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x234960: 0xc065580  jal         func_195600
    ctx->pc = 0x234960u;
    SET_GPR_U32(ctx, 31, 0x234968u);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x234960u, 0x234968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234968u;
label_234968:
    // 0x234968: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x234968u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23496c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x23496cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x234970: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x234970u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x234974: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x234974u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x234978: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x234978u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x23497c: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x23497cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x234980: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x234980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x234984: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x234984u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x234988: 0x70603e28  paddub      $a3, $v1, $zero
    ctx->pc = 0x234988u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x23498c: 0xc0655c0  jal         func_195700
    ctx->pc = 0x23498Cu;
    SET_GPR_U32(ctx, 31, 0x234994u);
    ctx->pc = 0x195700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195700u, 0x23498Cu, 0x234994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234994u;
label_234994:
    // 0x234994: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x234994u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x234998: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x234998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x23499c: 0x2495acd0  addiu       $s5, $a0, -0x5330
    ctx->pc = 0x23499cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946000));
    // 0x2349a0: 0xa2a00001  sb          $zero, 0x1($s5)
    ctx->pc = 0x2349a0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x38ACD1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x38ACD1u, _value); } while (0);
    // 0x2349a4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x2349a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x2349a8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2349a8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2349ac: 0x0  nop
    ctx->pc = 0x2349acu;
    // NOP
    // 0x2349b0: 0xe6a00004  swc1        $f0, 0x4($s5)
    ctx->pc = 0x2349b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x38ACD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38ACD4u, _value); } while (0); }
    // 0x2349b4: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x2349b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
    // 0x2349b8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2349b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2349bc: 0x0  nop
    ctx->pc = 0x2349bcu;
    // NOP
    // 0x2349c0: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x2349c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x38ACD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38ACD8u, _value); } while (0); }
    // 0x2349c4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2349c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2349c8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2349c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2349cc: 0x0  nop
    ctx->pc = 0x2349ccu;
    // NOP
    // 0x2349d0: 0xe6a0000c  swc1        $f0, 0xC($s5)
    ctx->pc = 0x2349d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x38ACDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38ACDCu, _value); } while (0); }
    // 0x2349d4: 0x2416000f  addiu       $s6, $zero, 0xF
    ctx->pc = 0x2349d4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x2349d8u;
}
