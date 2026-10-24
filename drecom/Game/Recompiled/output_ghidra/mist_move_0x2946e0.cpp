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

// Function: mist_move
// Address: 0x2946e0 - 0x294d34
void mist_move_0x2946e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mist_move_0x2946e0");
#endif

    switch (ctx->pc) {
        case 0x294720u: goto label_294720;
        case 0x294864u: goto label_294864;
        default: break;
    }

    ctx->pc = 0x2946e0u;

    // 0x2946e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2946e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2946e4: 0x7fbf0080  sq          $ra, 0x80($sp)
    ctx->pc = 0x2946e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
    // 0x2946e8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2946e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2946ec: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2946ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2946f0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2946f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2946f4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2946f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2946f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2946f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2946fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2946fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x294700: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x294700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x294704: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x294704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x294708: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x294708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x29470c: 0x8c235b80  lw          $v1, 0x5B80($at)
    ctx->pc = 0x29470cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x625B80u));
    // 0x294710: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x294710u;
    {
        const bool branch_taken_0x294710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x294710) {
            ctx->pc = 0x294734u;
            goto label_294734;
        }
    }
    ctx->pc = 0x294718u;
    // 0x294718: 0xc0a5070  jal         func_2941C0
    ctx->pc = 0x294718u;
    SET_GPR_U32(ctx, 31, 0x294720u);
    ctx->pc = 0x2941C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2941C0u, 0x294718u, 0x294720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294720u;
label_294720:
    // 0x294720: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x294720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x294724: 0x8c235b80  lw          $v1, 0x5B80($at)
    ctx->pc = 0x294724u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x625B80u));
    // 0x294728: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x294728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x29472c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x29472cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x294730: 0xac235b80  sw          $v1, 0x5B80($at)
    ctx->pc = 0x294730u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x625B80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x625B80u, _value); } while (0);
label_294734:
    // 0x294734: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x294734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x294738: 0x8c235b90  lw          $v1, 0x5B90($at)
    ctx->pc = 0x294738u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x625B90u));
    // 0x29473c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x29473cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x294740: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x294740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x294744: 0xac235b90  sw          $v1, 0x5B90($at)
    ctx->pc = 0x294744u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x625B90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x625B90u, _value); } while (0);
    // 0x294748: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x294748u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x29474c: 0x14200040  bnez        $at, . + 4 + (0x40 << 2)
    ctx->pc = 0x29474Cu;
    {
        const bool branch_taken_0x29474c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x29474c) {
            ctx->pc = 0x294850u;
            goto label_294850;
        }
    }
    ctx->pc = 0x294754u;
    // 0x294754: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x294754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x294758: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x294758u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x29475c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x29475cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x294760: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x294760u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x294764: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294768: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x294768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29476c: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x29476cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x294770: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x294770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x294774: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x294774u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x294778: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x294778u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x29477c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x29477cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x294780: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294784: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x294784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x294788: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x294788u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x29478c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x29478cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x294790: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x294790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x294794: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x294794u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x294798: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x294798u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29479c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x29479cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x2947a0: 0x8c236880  lw          $v1, 0x6880($at)
    ctx->pc = 0x2947a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x396880u));
    // 0x2947a4: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2947a4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2947a8: 0x0  nop
    ctx->pc = 0x2947a8u;
    // NOP
    // 0x2947ac: 0x0  nop
    ctx->pc = 0x2947acu;
    // NOP
    // 0x2947b0: 0xb810  mfhi        $s7
    ctx->pc = 0x2947b0u;
    SET_GPR_U64(ctx, 23, ctx->hi);
    // 0x2947b4: 0x1718c0  sll         $v1, $s7, 3
    ctx->pc = 0x2947b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
    // 0x2947b8: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x2947b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x2947bc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2947bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2947c0: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x2947c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x2947c4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2947c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2947c8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2947c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x2947cc: 0x24635c80  addiu       $v1, $v1, 0x5C80
    ctx->pc = 0x2947ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23680));
    // 0x2947d0: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x2947d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2947d4: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x2947d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2947d8: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x2947d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x2947dc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2947dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2947e0: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x2947e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    // 0x2947e4: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x2947e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2947e8: 0x2c610081  sltiu       $at, $v1, 0x81
    ctx->pc = 0x2947e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x2947ec: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2947ECu;
    {
        const bool branch_taken_0x2947ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2947ec) {
            ctx->pc = 0x294814u;
            goto label_294814;
        }
    }
    ctx->pc = 0x2947F4u;
    // 0x2947f4: 0x8e040088  lw          $a0, 0x88($s0)
    ctx->pc = 0x2947f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x2947f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2947f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2947fc: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x2947fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x294800: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x294800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
    // 0x294804: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x294804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x294808: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x294808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x29480c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x29480cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x294810: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x294810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
label_294814:
    // 0x294814: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x294814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x294818: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x294818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x29481c: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x29481cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x294820: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x294820u;
    {
        const bool branch_taken_0x294820 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x294820) {
            ctx->pc = 0x294848u;
            goto label_294848;
        }
    }
    ctx->pc = 0x294828u;
    // 0x294828: 0x8e040088  lw          $a0, 0x88($s0)
    ctx->pc = 0x294828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x29482c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29482cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x294830: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x294830u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x294834: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x294834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
    // 0x294838: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x294838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x29483c: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x29483cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x294840: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x294840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x294844: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x294844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
label_294848:
    // 0x294848: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x294848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x29484c: 0xac205b90  sw          $zero, 0x5B90($at)
    ctx->pc = 0x29484cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x625B90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x625B90u, _value); } while (0);
label_294850:
    // 0x294850: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x294850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x294854: 0x24705c80  addiu       $s0, $v1, 0x5C80
    ctx->pc = 0x294854u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23680));
    // 0x294858: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x294858u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29485c: 0x10000124  b           . + 4 + (0x124 << 2)
    ctx->pc = 0x29485Cu;
    {
        const bool branch_taken_0x29485c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29485c) {
            ctx->pc = 0x294CF0u;
            goto label_294cf0;
        }
    }
    ctx->pc = 0x294864u;
label_294864:
    // 0x294864: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x294864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x294868: 0x14600058  bnez        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x294868u;
    {
        const bool branch_taken_0x294868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x294868) {
            ctx->pc = 0x2949CCu;
            goto label_2949cc;
        }
    }
    ctx->pc = 0x294870u;
    // 0x294870: 0x261100e0  addiu       $s1, $s0, 0xE0
    ctx->pc = 0x294870u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x294874: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x294874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294878: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x294878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29487c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29487cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x294880: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x294880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x294884: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x294884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294888: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x294888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29488c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29488cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x294890: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x294890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x294894: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x294894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294898: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x294898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29489c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29489cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2948a0: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x2948a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x2948a4: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x2948a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2948a8: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x2948a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2948ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2948acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2948b0: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x2948b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x2948b4: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x2948b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2948b8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2948b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2948bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2948bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2948c0: 0x0  nop
    ctx->pc = 0x2948c0u;
    // NOP
    // 0x2948c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2948c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2948c8: 0x0  nop
    ctx->pc = 0x2948c8u;
    // NOP
    // 0x2948cc: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x2948CCu;
    {
        const bool branch_taken_0x2948cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2948cc) {
            ctx->pc = 0x294940u;
            goto label_294940;
        }
    }
    ctx->pc = 0x2948D4u;
    // 0x2948d4: 0x8e120078  lw          $s2, 0x78($s0)
    ctx->pc = 0x2948d4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x2948d8: 0x122140  sll         $a0, $s2, 5
    ctx->pc = 0x2948d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x2948dc: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2948dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2948e0: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x2948e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x2948e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2948e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2948e8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2948e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2948ec: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2948ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2948f0: 0x122140  sll         $a0, $s2, 5
    ctx->pc = 0x2948f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x2948f4: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2948f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2948f8: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x2948f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x2948fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2948fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294900: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x294900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294904: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x294904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x294908: 0x122140  sll         $a0, $s2, 5
    ctx->pc = 0x294908u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x29490c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x29490cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x294910: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x294910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x294914: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294918: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x294918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29491c: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x29491cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x294920: 0x122140  sll         $a0, $s2, 5
    ctx->pc = 0x294920u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x294924: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x294924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x294928: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x294928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x29492c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x29492cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294930: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x294930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294934: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x294934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x294938: 0x100000eb  b           . + 4 + (0xEB << 2)
    ctx->pc = 0x294938u;
    {
        const bool branch_taken_0x294938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x294938) {
            ctx->pc = 0x294CE8u;
            goto label_294ce8;
        }
    }
    ctx->pc = 0x294940u;
label_294940:
    // 0x294940: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x294940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294944: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x294944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x294948: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x294948u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29494c: 0x0  nop
    ctx->pc = 0x29494cu;
    // NOP
    // 0x294950: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x294950u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x294954: 0x0  nop
    ctx->pc = 0x294954u;
    // NOP
    // 0x294958: 0x450000e3  bc1f        . + 4 + (0xE3 << 2)
    ctx->pc = 0x294958u;
    {
        const bool branch_taken_0x294958 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x294958) {
            ctx->pc = 0x294CE8u;
            goto label_294ce8;
        }
    }
    ctx->pc = 0x294960u;
    // 0x294960: 0x8e120078  lw          $s2, 0x78($s0)
    ctx->pc = 0x294960u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x294964: 0x122140  sll         $a0, $s2, 5
    ctx->pc = 0x294964u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x294968: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x294968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x29496c: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x29496cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x294970: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294974: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x294974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294978: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x294978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x29497c: 0x122140  sll         $a0, $s2, 5
    ctx->pc = 0x29497cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x294980: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x294980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x294984: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x294984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x294988: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29498c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x29498cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294990: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x294990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x294994: 0x122140  sll         $a0, $s2, 5
    ctx->pc = 0x294994u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x294998: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x294998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x29499c: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x29499cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x2949a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2949a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2949a4: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2949a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2949a8: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x2949a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x2949ac: 0x122140  sll         $a0, $s2, 5
    ctx->pc = 0x2949acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x2949b0: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2949b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2949b4: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x2949b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x2949b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2949b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2949bc: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x2949bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2949c0: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x2949c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x2949c4: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x2949C4u;
    {
        const bool branch_taken_0x2949c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2949c4) {
            ctx->pc = 0x294CE8u;
            goto label_294ce8;
        }
    }
    ctx->pc = 0x2949CCu;
label_2949cc:
    // 0x2949cc: 0x26160090  addiu       $s6, $s0, 0x90
    ctx->pc = 0x2949ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2949d0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2949d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2949d4: 0x8c245b88  lw          $a0, 0x5B88($at)
    ctx->pc = 0x2949d4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x625B88u));
    // 0x2949d8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2949d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2949dc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2949dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2949e0: 0xac235b88  sw          $v1, 0x5B88($at)
    ctx->pc = 0x2949e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x625B88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x625B88u, _value); } while (0);
    // 0x2949e4: 0x28810065  slti        $at, $a0, 0x65
    ctx->pc = 0x2949e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x2949e8: 0x1420008b  bnez        $at, . + 4 + (0x8B << 2)
    ctx->pc = 0x2949E8u;
    {
        const bool branch_taken_0x2949e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2949e8) {
            ctx->pc = 0x294C18u;
            goto label_294c18;
        }
    }
    ctx->pc = 0x2949F0u;
    // 0x2949f0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2949f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2949f4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2949f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2949f8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2949f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2949fc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2949fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x294a00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294a04: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x294a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x294a08: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x294a08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x294a0c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x294a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x294a10: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x294a10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x294a14: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x294a14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x294a18: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x294a18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x294a1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294a20: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x294a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x294a24: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x294a24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x294a28: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x294a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x294a2c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x294a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x294a30: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x294a30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x294a34: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x294a34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x294a38: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x294a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x294a3c: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x294a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x294a40: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x294A40u;
    {
        const bool branch_taken_0x294a40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x294a40) {
            ctx->pc = 0x294A54u;
            goto label_294a54;
        }
    }
    ctx->pc = 0x294A48u;
    // 0x294a48: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x294a48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294a4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x294A4Cu;
    {
        const bool branch_taken_0x294a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x294a4c) {
            ctx->pc = 0x294A58u;
            goto label_294a58;
        }
    }
    ctx->pc = 0x294A54u;
label_294a54:
    // 0x294a54: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x294a54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_294a58:
    // 0x294a58: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x294a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x294a5c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x294a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x294a60: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x294a60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x294a64: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x294a64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x294a68: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294a6c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x294a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x294a70: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x294a70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x294a74: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x294a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x294a78: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x294a78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x294a7c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x294a7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x294a80: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x294a80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x294a84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294a88: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x294a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x294a8c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x294a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x294a90: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x294a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x294a94: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x294a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x294a98: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x294a98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x294a9c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x294a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x294aa0: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x294AA0u;
    {
        const bool branch_taken_0x294aa0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x294aa0) {
            ctx->pc = 0x294ABCu;
            goto label_294abc;
        }
    }
    ctx->pc = 0x294AA8u;
    // 0x294aa8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x294aa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294aac: 0x0  nop
    ctx->pc = 0x294aacu;
    // NOP
    // 0x294ab0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x294ab0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x294ab4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x294AB4u;
    {
        const bool branch_taken_0x294ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x294ab4) {
            ctx->pc = 0x294AD8u;
            goto label_294ad8;
        }
    }
    ctx->pc = 0x294ABCu;
label_294abc:
    // 0x294abc: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x294abcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x294ac0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x294ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x294ac4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x294ac4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x294ac8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x294ac8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294acc: 0x0  nop
    ctx->pc = 0x294accu;
    // NOP
    // 0x294ad0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x294ad0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x294ad4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x294ad4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_294ad8:
    // 0x294ad8: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x294ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x294adc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x294adcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294ae0: 0x0  nop
    ctx->pc = 0x294ae0u;
    // NOP
    // 0x294ae4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x294ae4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x294ae8: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x294ae8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294aec: 0x0  nop
    ctx->pc = 0x294aecu;
    // NOP
    // 0x294af0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x294af0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x294af4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x294af4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x294af8: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x294af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x294afc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x294afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x294b00: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x294b00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x294b04: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x294b04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x294b08: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x294b08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x294b0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294b10: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x294b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x294b14: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x294b14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x294b18: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x294b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x294b1c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x294b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x294b20: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x294b20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x294b24: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x294b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x294b28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294b2c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x294b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x294b30: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x294b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x294b34: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x294b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x294b38: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x294b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x294b3c: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x294b3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x294b40: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x294b40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x294b44: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x294b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x294b48: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x294b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x294b4c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x294B4Cu;
    {
        const bool branch_taken_0x294b4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x294b4c) {
            ctx->pc = 0x294B60u;
            goto label_294b60;
        }
    }
    ctx->pc = 0x294B54u;
    // 0x294b54: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x294b54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294b58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x294B58u;
    {
        const bool branch_taken_0x294b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x294b58) {
            ctx->pc = 0x294B68u;
            goto label_294b68;
        }
    }
    ctx->pc = 0x294B60u;
label_294b60:
    // 0x294b60: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x294b60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x294b64: 0x0  nop
    ctx->pc = 0x294b64u;
    // NOP
label_294b68:
    // 0x294b68: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x294b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x294b6c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x294b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x294b70: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x294b70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x294b74: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x294b74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x294b78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294b7c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x294b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x294b80: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x294b80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x294b84: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x294b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x294b88: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x294b88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x294b8c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x294b8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x294b90: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x294b90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x294b94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294b98: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x294b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x294b9c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x294b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x294ba0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x294ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x294ba4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x294ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x294ba8: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x294ba8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x294bac: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x294bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x294bb0: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x294BB0u;
    {
        const bool branch_taken_0x294bb0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x294bb0) {
            ctx->pc = 0x294BCCu;
            goto label_294bcc;
        }
    }
    ctx->pc = 0x294BB8u;
    // 0x294bb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x294bb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294bbc: 0x0  nop
    ctx->pc = 0x294bbcu;
    // NOP
    // 0x294bc0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x294bc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x294bc4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x294BC4u;
    {
        const bool branch_taken_0x294bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x294bc4) {
            ctx->pc = 0x294BE8u;
            goto label_294be8;
        }
    }
    ctx->pc = 0x294BCCu;
label_294bcc:
    // 0x294bcc: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x294bccu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x294bd0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x294bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x294bd4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x294bd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x294bd8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x294bd8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294bdc: 0x0  nop
    ctx->pc = 0x294bdcu;
    // NOP
    // 0x294be0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x294be0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x294be4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x294be4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_294be8:
    // 0x294be8: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x294be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x294bec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x294becu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294bf0: 0x0  nop
    ctx->pc = 0x294bf0u;
    // NOP
    // 0x294bf4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x294bf4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x294bf8: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x294bf8u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294bfc: 0x0  nop
    ctx->pc = 0x294bfcu;
    // NOP
    // 0x294c00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x294c00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x294c04: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x294c04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x294c08: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x294c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x294c0c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x294c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x294c10: 0xac205b88  sw          $zero, 0x5B88($at)
    ctx->pc = 0x294c10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x625B88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x625B88u, _value); } while (0);
    // 0x294c14: 0x0  nop
    ctx->pc = 0x294c14u;
    // NOP
label_294c18:
    // 0x294c18: 0xc6010090  lwc1        $f1, 0x90($s0)
    ctx->pc = 0x294c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294c1c: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x294c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294c20: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x294c20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x294c24: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x294c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x294c28: 0xc6010090  lwc1        $f1, 0x90($s0)
    ctx->pc = 0x294c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294c2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x294c2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294c30: 0x0  nop
    ctx->pc = 0x294c30u;
    // NOP
    // 0x294c34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x294c34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x294c38: 0x0  nop
    ctx->pc = 0x294c38u;
    // NOP
    // 0x294c3c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x294C3Cu;
    {
        const bool branch_taken_0x294c3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x294c3c) {
            ctx->pc = 0x294C50u;
            goto label_294c50;
        }
    }
    ctx->pc = 0x294C44u;
    // 0x294c44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x294c44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294c48: 0x0  nop
    ctx->pc = 0x294c48u;
    // NOP
    // 0x294c4c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x294c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
label_294c50:
    // 0x294c50: 0xc6010090  lwc1        $f1, 0x90($s0)
    ctx->pc = 0x294c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294c54: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x294c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x294c58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x294c58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294c5c: 0x0  nop
    ctx->pc = 0x294c5cu;
    // NOP
    // 0x294c60: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x294c60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x294c64: 0x0  nop
    ctx->pc = 0x294c64u;
    // NOP
    // 0x294c68: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x294C68u;
    {
        const bool branch_taken_0x294c68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x294c68) {
            ctx->pc = 0x294C80u;
            goto label_294c80;
        }
    }
    ctx->pc = 0x294C70u;
    // 0x294c70: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x294c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x294c74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x294c74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294c78: 0x0  nop
    ctx->pc = 0x294c78u;
    // NOP
    // 0x294c7c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x294c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
label_294c80:
    // 0x294c80: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x294c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294c84: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x294c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294c88: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x294c88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x294c8c: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x294c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x294c90: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x294c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294c94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x294c94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294c98: 0x0  nop
    ctx->pc = 0x294c98u;
    // NOP
    // 0x294c9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x294c9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x294ca0: 0x0  nop
    ctx->pc = 0x294ca0u;
    // NOP
    // 0x294ca4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x294CA4u;
    {
        const bool branch_taken_0x294ca4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x294ca4) {
            ctx->pc = 0x294CB8u;
            goto label_294cb8;
        }
    }
    ctx->pc = 0x294CACu;
    // 0x294cac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x294cacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294cb0: 0x0  nop
    ctx->pc = 0x294cb0u;
    // NOP
    // 0x294cb4: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x294cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
label_294cb8:
    // 0x294cb8: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x294cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294cbc: 0x3c0343e0  lui         $v1, 0x43E0
    ctx->pc = 0x294cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17376 << 16));
    // 0x294cc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x294cc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294cc4: 0x0  nop
    ctx->pc = 0x294cc4u;
    // NOP
    // 0x294cc8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x294cc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x294ccc: 0x0  nop
    ctx->pc = 0x294cccu;
    // NOP
    // 0x294cd0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x294CD0u;
    {
        const bool branch_taken_0x294cd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x294cd0) {
            ctx->pc = 0x294CE8u;
            goto label_294ce8;
        }
    }
    ctx->pc = 0x294CD8u;
    // 0x294cd8: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x294cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x294cdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x294cdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294ce0: 0x0  nop
    ctx->pc = 0x294ce0u;
    // NOP
    // 0x294ce4: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x294ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
label_294ce8:
    // 0x294ce8: 0x26100130  addiu       $s0, $s0, 0x130
    ctx->pc = 0x294ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x294cec: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x294cecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_294cf0:
    // 0x294cf0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x294cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x294cf4: 0x8c236880  lw          $v1, 0x6880($at)
    ctx->pc = 0x294cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x396880u));
    // 0x294cf8: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x294cf8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x294cfc: 0x1460fed9  bnez        $v1, . + 4 + (-0x127 << 2)
    ctx->pc = 0x294CFCu;
    {
        const bool branch_taken_0x294cfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x294cfc) {
            ctx->pc = 0x294864u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294864;
        }
    }
    ctx->pc = 0x294D04u;
    // 0x294d04: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x294d04u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x294d08: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x294d08u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x294d0c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x294d0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x294d10: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x294d10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x294d14: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x294d14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x294d18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x294d18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x294d1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x294d1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294d20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x294d20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294d24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x294d24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294d28: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x294d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x294d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x294D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294D34u;
}
