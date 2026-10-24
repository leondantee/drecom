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

// Function: entry_00294734
// Address: 0x294734 - 0x294814
void entry_00294734_0x294734(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00294734_0x294734");
#endif

    ctx->pc = 0x294734u;

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
            return;
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
            return;
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
    ctx->pc = 0x294814u;
}
