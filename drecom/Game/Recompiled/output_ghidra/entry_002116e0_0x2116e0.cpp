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

// Function: entry_002116e0
// Address: 0x2116e0 - 0x21191c
void entry_002116e0_0x2116e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002116e0_0x2116e0");
#endif

    switch (ctx->pc) {
        case 0x211794u: goto label_211794;
        case 0x2117b8u: goto label_2117b8;
        case 0x2117e0u: goto label_2117e0;
        default: break;
    }

    ctx->pc = 0x2116e0u;

    // 0x2116e0: 0x3c033fa6  lui         $v1, 0x3FA6
    ctx->pc = 0x2116e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16294 << 16));
    // 0x2116e4: 0x34666666  ori         $a2, $v1, 0x6666
    ctx->pc = 0x2116e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x2116e8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2116e8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2116ec: 0x8fa90528  lw          $t1, 0x528($sp)
    ctx->pc = 0x2116ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x2116f0: 0xe52001a8  swc1        $f0, 0x1A8($t1)
    ctx->pc = 0x2116f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 424), bits); }
    // 0x2116f4: 0x8faa0528  lw          $t2, 0x528($sp)
    ctx->pc = 0x2116f4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x2116f8: 0xe54001a4  swc1        $f0, 0x1A4($t2)
    ctx->pc = 0x2116f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 420), bits); }
    // 0x2116fc: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x2116fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x211700: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x211700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x211704: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x211704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x211708: 0x84851278  lh          $a1, 0x1278($a0)
    ctx->pc = 0x211708u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x21170c: 0x5343c  dsll32      $a2, $a1, 16
    ctx->pc = 0x21170cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
    // 0x211710: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x211710u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x211714: 0x28c90226  slti        $t1, $a2, 0x226
    ctx->pc = 0x211714u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)550) ? 1 : 0);
    // 0x211718: 0x15200080  bnez        $t1, . + 4 + (0x80 << 2)
    ctx->pc = 0x211718u;
    {
        const bool branch_taken_0x211718 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x211718) {
            ctx->pc = 0x21191Cu;
            return;
        }
    }
    ctx->pc = 0x211720u;
    // 0x211720: 0x8faa0528  lw          $t2, 0x528($sp)
    ctx->pc = 0x211720u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x211724: 0x85461278  lh          $a2, 0x1278($t2)
    ctx->pc = 0x211724u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4728)));
    // 0x211728: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x211728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
    // 0x21172c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x21172cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x211730: 0x2861022c  slti        $at, $v1, 0x22C
    ctx->pc = 0x211730u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)556) ? 1 : 0);
    // 0x211734: 0x10200079  beqz        $at, . + 4 + (0x79 << 2)
    ctx->pc = 0x211734u;
    {
        const bool branch_taken_0x211734 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x211734) {
            ctx->pc = 0x21191Cu;
            return;
        }
    }
    ctx->pc = 0x21173Cu;
    // 0x21173c: 0x3c0ac59c  lui         $t2, 0xC59C
    ctx->pc = 0x21173cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)50588 << 16));
    // 0x211740: 0x35494000  ori         $t1, $t2, 0x4000
    ctx->pc = 0x211740u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)16384);
    // 0x211744: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x211744u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211748: 0x0  nop
    ctx->pc = 0x211748u;
    // NOP
    // 0x21174c: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x21174cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x211750: 0x3c0544da  lui         $a1, 0x44DA
    ctx->pc = 0x211750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17626 << 16));
    // 0x211754: 0x34a2c000  ori         $v0, $a1, 0xC000
    ctx->pc = 0x211754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49152);
    // 0x211758: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x211758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21175c: 0x0  nop
    ctx->pc = 0x21175cu;
    // NOP
    // 0x211760: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x211760u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x211764: 0x3c0745be  lui         $a3, 0x45BE
    ctx->pc = 0x211764u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17854 << 16));
    // 0x211768: 0x34e6a000  ori         $a2, $a3, 0xA000
    ctx->pc = 0x211768u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)40960);
    // 0x21176c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x21176cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211770: 0x0  nop
    ctx->pc = 0x211770u;
    // NOP
    // 0x211774: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x211774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x211778: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x211778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x21177c: 0x8c289380  lw          $t0, -0x6C80($at)
    ctx->pc = 0x21177cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x619380u));
    // 0x211780: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x211780u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x211784: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x211784u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x211788: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x211788u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x21178c: 0xc05dafc  jal         func_176BF0
    ctx->pc = 0x21178Cu;
    SET_GPR_U32(ctx, 31, 0x211794u);
    ctx->pc = 0x176BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176BF0u, 0x21178Cu, 0x211794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211794u;
label_211794:
    // 0x211794: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x211794u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x211798: 0x3c0a461c  lui         $t2, 0x461C
    ctx->pc = 0x211798u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17948 << 16));
    // 0x21179c: 0x35424000  ori         $v0, $t2, 0x4000
    ctx->pc = 0x21179cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)16384);
    // 0x2117a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2117a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2117a4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2117a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2117a8: 0x8c2a9380  lw          $t2, -0x6C80($at)
    ctx->pc = 0x2117a8u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x619380u));
    // 0x2117ac: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x2117acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2117b0: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x2117B0u;
    SET_GPR_U32(ctx, 31, 0x2117B8u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x2117B0u, 0x2117B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2117B8u;
label_2117b8:
    // 0x2117b8: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2117b8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2117bc: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x2117bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
    // 0x2117c0: 0x34684000  ori         $t0, $v1, 0x4000
    ctx->pc = 0x2117c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2117c4: 0x44886800  mtc1        $t0, $f13
    ctx->pc = 0x2117c4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2117c8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2117c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2117cc: 0x8c299380  lw          $t1, -0x6C80($at)
    ctx->pc = 0x2117ccu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x619380u));
    // 0x2117d0: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x2117d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2117d4: 0x46006b06  mov.s       $f12, $f13
    ctx->pc = 0x2117d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[13]);
    // 0x2117d8: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x2117D8u;
    SET_GPR_U32(ctx, 31, 0x2117E0u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x2117D8u, 0x2117E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2117E0u;
label_2117e0:
    // 0x2117e0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2117e0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2117e4: 0x3c0a4248  lui         $t2, 0x4248
    ctx->pc = 0x2117e4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16968 << 16));
    // 0x2117e8: 0x448a7000  mtc1        $t2, $f14
    ctx->pc = 0x2117e8u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2117ec: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2117ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2117f0: 0x8c239380  lw          $v1, -0x6C80($at)
    ctx->pc = 0x2117f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x619380u));
    // 0x2117f4: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x2117f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2117f8: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x2117f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2117fc: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x2117fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x211800: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x211800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x211804: 0x24a3bd00  addiu       $v1, $a1, -0x4300
    ctx->pc = 0x211804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x211808: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x211808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21180c: 0xe46e0070  swc1        $f14, 0x70($v1)
    ctx->pc = 0x21180cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x211810: 0x3c044248  lui         $a0, 0x4248
    ctx->pc = 0x211810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16968 << 16));
    // 0x211814: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x211814u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211818: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x211818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x21181c: 0x8c239380  lw          $v1, -0x6C80($at)
    ctx->pc = 0x21181cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x619380u));
    // 0x211820: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x211820u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x211824: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x211824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x211828: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x211828u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x21182c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x21182cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x211830: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x211830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x211834: 0x862821  addu        $a1, $a0, $a2
    ctx->pc = 0x211834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x211838: 0xe4a00074  swc1        $f0, 0x74($a1)
    ctx->pc = 0x211838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 116), bits); }
    // 0x21183c: 0x3c064348  lui         $a2, 0x4348
    ctx->pc = 0x21183cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17224 << 16));
    // 0x211840: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x211840u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x211844: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x211844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x211848: 0x8c239380  lw          $v1, -0x6C80($at)
    ctx->pc = 0x211848u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x619380u));
    // 0x21184c: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x21184cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x211850: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x211850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x211854: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x211854u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x211858: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x211858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x21185c: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x21185cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x211860: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x211860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x211864: 0xe4610078  swc1        $f1, 0x78($v1)
    ctx->pc = 0x211864u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x211868: 0x3c053e48  lui         $a1, 0x3E48
    ctx->pc = 0x211868u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15944 << 16));
    // 0x21186c: 0x34a4c8c9  ori         $a0, $a1, 0xC8C9
    ctx->pc = 0x21186cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)51401);
    // 0x211870: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x211870u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211874: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x211874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x211878: 0x8c269380  lw          $a2, -0x6C80($at)
    ctx->pc = 0x211878u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x619380u));
    // 0x21187c: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x21187cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x211880: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x211880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x211884: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x211884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x211888: 0x3c080048  lui         $t0, 0x48
    ctx->pc = 0x211888u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
    // 0x21188c: 0x2505bd00  addiu       $a1, $t0, -0x4300
    ctx->pc = 0x21188cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4294950144));
    // 0x211890: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x211890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x211894: 0xe4c00080  swc1        $f0, 0x80($a2)
    ctx->pc = 0x211894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 128), bits); }
    // 0x211898: 0x3c0a3e48  lui         $t2, 0x3E48
    ctx->pc = 0x211898u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)15944 << 16));
    // 0x21189c: 0x3549c8c9  ori         $t1, $t2, 0xC8C9
    ctx->pc = 0x21189cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)51401);
    // 0x2118a0: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2118a0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2118a4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2118a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2118a8: 0x8c2b9380  lw          $t3, -0x6C80($at)
    ctx->pc = 0x2118a8u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x619380u));
    // 0x2118ac: 0xb1840  sll         $v1, $t3, 1
    ctx->pc = 0x2118acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x2118b0: 0x6b9021  addu        $s2, $v1, $t3
    ctx->pc = 0x2118b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2118b4: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x2118b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2118b8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2118b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2118bc: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x2118bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x2118c0: 0x659021  addu        $s2, $v1, $a1
    ctx->pc = 0x2118c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2118c4: 0xe6400084  swc1        $f0, 0x84($s2)
    ctx->pc = 0x2118c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 132), bits); }
    // 0x2118c8: 0x3c063f48  lui         $a2, 0x3F48
    ctx->pc = 0x2118c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16200 << 16));
    // 0x2118cc: 0x34d6c8c9  ori         $s6, $a2, 0xC8C9
    ctx->pc = 0x2118ccu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)51401);
    // 0x2118d0: 0x44960800  mtc1        $s6, $f1
    ctx->pc = 0x2118d0u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2118d4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2118d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2118d8: 0x8c279380  lw          $a3, -0x6C80($at)
    ctx->pc = 0x2118d8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x619380u));
    // 0x2118dc: 0x74040  sll         $t0, $a3, 1
    ctx->pc = 0x2118dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2118e0: 0x1074821  addu        $t1, $t0, $a3
    ctx->pc = 0x2118e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2118e4: 0x95100  sll         $t2, $t1, 4
    ctx->pc = 0x2118e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x2118e8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2118e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2118ec: 0x2474bd00  addiu       $s4, $v1, -0x4300
    ctx->pc = 0x2118ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x2118f0: 0x28a2021  addu        $a0, $s4, $t2
    ctx->pc = 0x2118f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 10)));
    // 0x2118f4: 0xe4810088  swc1        $f1, 0x88($a0)
    ctx->pc = 0x2118f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
    // 0x2118f8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2118f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2118fc: 0x8c239380  lw          $v1, -0x6C80($at)
    ctx->pc = 0x2118fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x619380u));
    // 0x211900: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x211900u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x211904: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x211904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x211908: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x211908u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x21190c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x21190cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x211910: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x211910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x211914: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x211914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x211918: 0xac60007c  sw          $zero, 0x7C($v1)
    ctx->pc = 0x211918u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 0));
    ctx->pc = 0x21191cu;
}
