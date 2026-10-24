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

// Function: entry_003346e4
// Address: 0x3346e4 - 0x334948
void entry_003346e4_0x3346e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003346e4_0x3346e4");
#endif

    switch (ctx->pc) {
        case 0x33474cu: goto label_33474c;
        case 0x334778u: goto label_334778;
        case 0x3348acu: goto label_3348ac;
        case 0x334924u: goto label_334924;
        default: break;
    }

    ctx->pc = 0x3346e4u;

    // 0x3346e4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x3346e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3346e8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3346e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3346ec: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3346ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3346f0: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x3346f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x3346f4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3346f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3346f8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3346f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3346fc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3346fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x334700: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x334700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x334704: 0x8ef50000  lw          $s5, 0x0($s7)
    ctx->pc = 0x334704u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x334708: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x334708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x33470c: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x33470cu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x334710: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x334710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x334714: 0x2a2f021  addu        $fp, $s5, $v0
    ctx->pc = 0x334714u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x334718: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x334718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x33471c: 0x2c31021  addu        $v0, $s6, $v1
    ctx->pc = 0x33471cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x334720: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x334720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x334724: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x334724u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x334728: 0x0  nop
    ctx->pc = 0x334728u;
    // NOP
    // 0x33472c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x33472cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x334730: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x334730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x334734: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x334734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x334738: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x334738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33473c: 0x0  nop
    ctx->pc = 0x33473cu;
    // NOP
    // 0x334740: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x334740u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x334744: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x334744u;
    SET_GPR_U32(ctx, 31, 0x33474Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x334744u, 0x33474Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33474Cu;
label_33474c:
    // 0x33474c: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x33474cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x334750: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x334750u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x334754: 0x0  nop
    ctx->pc = 0x334754u;
    // NOP
    // 0x334758: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x334758u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33475c: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x33475cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x334760: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x334760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x334764: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x334764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x334768: 0x0  nop
    ctx->pc = 0x334768u;
    // NOP
    // 0x33476c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x33476cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x334770: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x334770u;
    SET_GPR_U32(ctx, 31, 0x334778u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x334770u, 0x334778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334778u;
label_334778:
    // 0x334778: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x334778u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x33477c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x33477cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x334780: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x334780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x334784: 0x3c036400  lui         $v1, 0x6400
    ctx->pc = 0x334784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25600 << 16));
    // 0x334788: 0x34622b16  ori         $v0, $v1, 0x2B16
    ctx->pc = 0x334788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11030);
    // 0x33478c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x33478cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x334790: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x334790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x334794: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x334794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x334798: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x334798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x33479c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x33479cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x3347a0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3347a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3347a4: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x3347a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3347a8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3347a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3347ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3347acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3347b0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x3347b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3347b4: 0xc31025  or          $v0, $a2, $v1
    ctx->pc = 0x3347b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x3347b8: 0x26060014  addiu       $a2, $s0, 0x14
    ctx->pc = 0x3347b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x3347bc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x3347bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x3347c0: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x3347c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3347c4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x3347c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x3347c8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3347c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3347cc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3347ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3347d0: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x3347d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x3347d4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3347d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3347d8: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x3347d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3347dc: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x3347dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x3347e0: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x3347e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3347e4: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x3347e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x3347e8: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x3347e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x3347ec: 0x23200  sll         $a2, $v0, 8
    ctx->pc = 0x3347ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3347f0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x3347f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3347f4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x3347f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x3347f8: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x3347f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3347fc: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x3347fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x334800: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x334800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x334804: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x334804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x334808: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x334808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x33480c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x33480cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x334810: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x334810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x334814: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x334814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x334818: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x334818u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33481c: 0x1618c0  sll         $v1, $s6, 3
    ctx->pc = 0x33481cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x334820: 0x24627900  addiu       $v0, $v1, 0x7900
    ctx->pc = 0x334820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x334824: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x334824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x334828: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x334828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x33482c: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x33482cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x334830: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x334830u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x334834: 0x3402fff9  ori         $v0, $zero, 0xFFF9
    ctx->pc = 0x334834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x334838: 0x2606001c  addiu       $a2, $s0, 0x1C
    ctx->pc = 0x334838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x33483c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x33483cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x334840: 0x1e3100  sll         $a2, $fp, 4
    ctx->pc = 0x334840u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x334844: 0x24c27000  addiu       $v0, $a2, 0x7000
    ctx->pc = 0x334844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 28672));
    // 0x334848: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x334848u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33484c: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x33484cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x334850: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x334850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x334854: 0x24467900  addiu       $a2, $v0, 0x7900
    ctx->pc = 0x334854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x334858: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x334858u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x33485c: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x33485cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x334860: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x334860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x334864: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x334864u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x334868: 0x3403fff9  ori         $v1, $zero, 0xFFF9
    ctx->pc = 0x334868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x33486c: 0x26020028  addiu       $v0, $s0, 0x28
    ctx->pc = 0x33486cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x334870: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x334870u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x334874: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x334874u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x334878: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x334878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33487c: 0x246600a3  addiu       $a2, $v1, 0xA3
    ctx->pc = 0x33487cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 163));
    // 0x334880: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x334880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x334884: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x334884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x334888: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x334888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x33488c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33488cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x334890: 0x2442cca0  addiu       $v0, $v0, -0x3360
    ctx->pc = 0x334890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x334894: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x334894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x334898: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x334898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x33489c: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x33489cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x3348a0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x3348a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3348a4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x3348A4u;
    SET_GPR_U32(ctx, 31, 0x3348ACu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x3348A4u, 0x3348ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3348ACu;
label_3348ac:
    // 0x3348ac: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3348acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3348b0: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x3348b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x3348b4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x3348b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x3348b8: 0x34631009  ori         $v1, $v1, 0x1009
    ctx->pc = 0x3348b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4105);
    // 0x3348bc: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x3348bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x3348c0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3348c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3348c4: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x3348c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3348c8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3348c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3348cc: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x3348ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x3348d0: 0x3444000a  ori         $a0, $v0, 0xA
    ctx->pc = 0x3348d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x3348d4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x3348d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3348d8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3348d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3348dc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3348dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3348e0: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x3348e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x3348e4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3348e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3348e8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3348e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3348ec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3348ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3348f0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3348f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3348f4: 0x32e38  dsll        $a1, $v1, 24
    ctx->pc = 0x3348f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 24);
    // 0x3348f8: 0xa41825  or          $v1, $a1, $a0
    ctx->pc = 0x3348f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3348fc: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x3348fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x334900: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x334900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x334904: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x334904u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x334908: 0x228bc  dsll32      $a1, $v0, 2
    ctx->pc = 0x334908u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 2));
    // 0x33490c: 0xa31025  or          $v0, $a1, $v1
    ctx->pc = 0x33490cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x334910: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x334910u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x334914: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x334914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x334918: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x334918u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x33491c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x33491Cu;
    SET_GPR_U32(ctx, 31, 0x334924u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x33491Cu, 0x334924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334924u;
label_334924:
    // 0x334924: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x334924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x334928: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x334928u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x33492c: 0x2607002c  addiu       $a3, $s0, 0x2C
    ctx->pc = 0x33492cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x334930: 0x70e08628  paddub      $s0, $a3, $zero
    ctx->pc = 0x334930u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x334934: 0x26e60008  addiu       $a2, $s7, 0x8
    ctx->pc = 0x334934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x334938: 0x70c0be28  paddub      $s7, $a2, $zero
    ctx->pc = 0x334938u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x33493c: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x33493cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x334940: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x334940u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x334944: 0x0  nop
    ctx->pc = 0x334944u;
    // NOP
    ctx->pc = 0x334948u;
}
