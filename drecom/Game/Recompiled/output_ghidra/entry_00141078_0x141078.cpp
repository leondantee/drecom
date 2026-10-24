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

// Function: entry_00141078
// Address: 0x141078 - 0x1412a0
void entry_00141078_0x141078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141078_0x141078");
#endif

    switch (ctx->pc) {
        case 0x1411d8u: goto label_1411d8;
        case 0x14121cu: goto label_14121c;
        case 0x141254u: goto label_141254;
        case 0x141288u: goto label_141288;
        default: break;
    }

    ctx->pc = 0x141078u;

    // 0x141078: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x141078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14107c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x14107cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x141080: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x141080u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x141084: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x141084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x141088: 0x34437000  ori         $v1, $v0, 0x7000
    ctx->pc = 0x141088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x14108c: 0x26220018  addiu       $v0, $s1, 0x18
    ctx->pc = 0x14108cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x141090: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x141090u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x141094: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x141094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x141098: 0x2622001c  addiu       $v0, $s1, 0x1C
    ctx->pc = 0x141098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x14109c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x14109cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1410a0: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1410a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1410a4: 0x34439000  ori         $v1, $v0, 0x9000
    ctx->pc = 0x1410a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1410a8: 0x26220024  addiu       $v0, $s1, 0x24
    ctx->pc = 0x1410a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x1410ac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1410acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1410b0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1410b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1410b4: 0x26220028  addiu       $v0, $s1, 0x28
    ctx->pc = 0x1410b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x1410b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1410b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1410bc: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x1410bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x1410c0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1410c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1410c4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1410c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1410c8: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x1410c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1410cc: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1410ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1410d0: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x1410d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x1410d4: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x1410d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x1410d8: 0x430019  multu       $v0, $v1
    ctx->pc = 0x1410d8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1410dc: 0x0  nop
    ctx->pc = 0x1410dcu;
    // NOP
    // 0x1410e0: 0x0  nop
    ctx->pc = 0x1410e0u;
    // NOP
    // 0x1410e4: 0x1010  mfhi        $v0
    ctx->pc = 0x1410e4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1410e8: 0x2a942  srl         $s5, $v0, 5
    ctx->pc = 0x1410e8u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1410ec: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x1410ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x1410f0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1410f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1410f4: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x1410f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x1410f8: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x1410f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1410fc: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1410fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x141100: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x141100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x141104: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x141104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x141108: 0x430019  multu       $v0, $v1
    ctx->pc = 0x141108u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x14110c: 0x0  nop
    ctx->pc = 0x14110cu;
    // NOP
    // 0x141110: 0x0  nop
    ctx->pc = 0x141110u;
    // NOP
    // 0x141114: 0x1010  mfhi        $v0
    ctx->pc = 0x141114u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x141118: 0x2b142  srl         $s6, $v0, 5
    ctx->pc = 0x141118u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x14111c: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x14111cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x141120: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x141120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x141124: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x141124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x141128: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x141128u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14112c: 0x22340  sll         $a0, $v0, 13
    ctx->pc = 0x14112cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
    // 0x141130: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x141130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x141134: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x141134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x141138: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x141138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x14113c: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x14113cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x141140: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x141140u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x141144: 0x0  nop
    ctx->pc = 0x141144u;
    // NOP
    // 0x141148: 0x1010  mfhi        $v0
    ctx->pc = 0x141148u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x14114c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x14114cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x141150: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x141150u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x141154: 0x43b821  addu        $s7, $v0, $v1
    ctx->pc = 0x141154u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x141158: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x141158u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x14115c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14115cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x141160: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x141160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x141164: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x141164u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x141168: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x141168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x14116c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x14116cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x141170: 0x22240  sll         $a0, $v0, 9
    ctx->pc = 0x141170u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x141174: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x141174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x141178: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x141178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x14117c: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x14117cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x141180: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x141180u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x141184: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x141184u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x141188: 0x0  nop
    ctx->pc = 0x141188u;
    // NOP
    // 0x14118c: 0x1010  mfhi        $v0
    ctx->pc = 0x14118cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x141190: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x141190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x141194: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x141194u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x141198: 0x43f021  addu        $fp, $v0, $v1
    ctx->pc = 0x141198u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14119c: 0x161400  sll         $v0, $s6, 16
    ctx->pc = 0x14119cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x1411a0: 0x2a21825  or          $v1, $s5, $v0
    ctx->pc = 0x1411a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x1411a4: 0x26220014  addiu       $v0, $s1, 0x14
    ctx->pc = 0x1411a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1411a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1411a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1411ac: 0x2b71821  addu        $v1, $s5, $s7
    ctx->pc = 0x1411acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 23)));
    // 0x1411b0: 0x2de1021  addu        $v0, $s6, $fp
    ctx->pc = 0x1411b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 30)));
    // 0x1411b4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1411b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1411b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1411b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1411bc: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x1411bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1411c0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1411c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1411c4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1411c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1411c8: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1411c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1411cc: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1411ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1411d0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1411D0u;
    SET_GPR_U32(ctx, 31, 0x1411D8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1411D0u, 0x1411D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1411D8u;
label_1411d8:
    // 0x1411d8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1411d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1411dc: 0x245291c0  addiu       $s2, $v0, -0x6E40
    ctx->pc = 0x1411dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939072));
    // 0x1411e0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1411e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1411e4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1411e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E91C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E91C0u, _value); } while (0);
    // 0x1411e8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1411e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1411ec: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x1411ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x1411f0: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1411f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E91C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E91C4u, _value); } while (0);
    // 0x1411f4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1411f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1411f8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1411f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1411fc: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1411fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x141200: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x141200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x141204: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x141204u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x141208: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x141208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x14120c: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x14120cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x141210: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x141210u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x141214: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x141214u;
    SET_GPR_U32(ctx, 31, 0x14121Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x141214u, 0x14121Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14121Cu;
label_14121c:
    // 0x14121c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x14121cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x141220: 0x245291b0  addiu       $s2, $v0, -0x6E50
    ctx->pc = 0x141220u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939056));
    // 0x141224: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x141224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x141228: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x141228u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E91B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E91B0u, _value); } while (0);
    // 0x14122c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x14122cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x141230: 0x34421015  ori         $v0, $v0, 0x1015
    ctx->pc = 0x141230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
    // 0x141234: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x141234u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E91B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E91B4u, _value); } while (0);
    // 0x141238: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x141238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x14123c: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x14123cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E91B8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3E91B8u, _value); } while (0);
    // 0x141240: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x141240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x141244: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x141244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x141248: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x141248u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x14124c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x14124Cu;
    SET_GPR_U32(ctx, 31, 0x141254u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x14124Cu, 0x141254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141254u;
label_141254:
    // 0x141254: 0x92030005  lbu         $v1, 0x5($s0)
    ctx->pc = 0x141254u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x141258: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x141258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14125c: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x14125cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x141260: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x141260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x141264: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x141264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x141268: 0x14620093  bne         $v1, $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x141268u;
    {
        const bool branch_taken_0x141268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x141268) {
            ctx->pc = 0x1414B8u;
            return;
        }
    }
    ctx->pc = 0x141270u;
    // 0x141270: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x141270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x141274: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x141274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x141278: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x141278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14127c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x14127cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x141280: 0xc067c24  jal         func_19F090
    ctx->pc = 0x141280u;
    SET_GPR_U32(ctx, 31, 0x141288u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x141280u, 0x141288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141288u;
label_141288:
    // 0x141288: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x141288u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x14128c: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x14128cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x141290: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x141290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x141294: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x141294u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x141298: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x141298u;
    {
        const bool branch_taken_0x141298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x141298) {
            ctx->pc = 0x1414B8u;
            return;
        }
    }
    ctx->pc = 0x1412A0u;
}
