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

// Function: entry_003776b0
// Address: 0x3776b0 - 0x377798
void entry_003776b0_0x3776b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003776b0_0x3776b0");
#endif

    ctx->pc = 0x3776b0u;

    // 0x3776b0: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x3776b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3776b4: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x3776b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x3776b8: 0x24630220  addiu       $v1, $v1, 0x220
    ctx->pc = 0x3776b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
    // 0x3776bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3776bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3776c0: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x3776c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x3776c4: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x3776C4u;
    {
        const bool branch_taken_0x3776c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3776c4) {
            ctx->pc = 0x3777B0u;
            return;
        }
    }
    ctx->pc = 0x3776CCu;
    // 0x3776cc: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x3776ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3776d0: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x3776d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x3776d4: 0x24630220  addiu       $v1, $v1, 0x220
    ctx->pc = 0x3776d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
    // 0x3776d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3776d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3776dc: 0x8c720040  lw          $s2, 0x40($v1)
    ctx->pc = 0x3776dcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x3776e0: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x3776e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x3776e4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3776e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3776e8: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x3776e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x3776ec: 0x94230394  lhu         $v1, 0x394($at)
    ctx->pc = 0x3776ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x9A0394u));
    // 0x3776f0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3776f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3776f4: 0x1483002e  bne         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x3776F4u;
    {
        const bool branch_taken_0x3776f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3776f4) {
            ctx->pc = 0x3777B0u;
            return;
        }
    }
    ctx->pc = 0x3776FCu;
    // 0x3776fc: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x3776fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x377700: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x377700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x377704: 0x24630350  addiu       $v1, $v1, 0x350
    ctx->pc = 0x377704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 848));
    // 0x377708: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x377708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37770c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x37770cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x377710: 0x92430012  lbu         $v1, 0x12($s2)
    ctx->pc = 0x377710u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x377714: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x377714u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x377718: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x377718u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x37771c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x37771cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x377720: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x377720u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x377724: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x377724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x377728: 0x8c230390  lw          $v1, 0x390($at)
    ctx->pc = 0x377728u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A0390u));
    // 0x37772c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x37772cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x377730: 0x24730b44  addiu       $s3, $v1, 0xB44
    ctx->pc = 0x377730u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 2884));
    // 0x377734: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x377734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x377738: 0xae030364  sw          $v1, 0x364($s0)
    ctx->pc = 0x377738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 3));
    // 0x37773c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37773cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x377740: 0xa6030038  sh          $v1, 0x38($s0)
    ctx->pc = 0x377740u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 3));
    // 0x377744: 0xa600003a  sh          $zero, 0x3A($s0)
    ctx->pc = 0x377744u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 58), (uint16_t)GPR_U32(ctx, 0));
    // 0x377748: 0xa600003c  sh          $zero, 0x3C($s0)
    ctx->pc = 0x377748u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 60), (uint16_t)GPR_U32(ctx, 0));
    // 0x37774c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x37774cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x377750: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x377750u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x377754: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x377754u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x377758: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x377758u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x37775c: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x37775cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x377760: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x377760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x377764: 0x26520024  addiu       $s2, $s2, 0x24
    ctx->pc = 0x377764u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x377768: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x377768u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x37776c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x37776cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x377770: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x377770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x377774: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x377774u;
    {
        const bool branch_taken_0x377774 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x377774) {
            ctx->pc = 0x377798u;
            return;
        }
    }
    ctx->pc = 0x37777Cu;
    // 0x37777c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x37777cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x377780: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x377780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x377784: 0x24630220  addiu       $v1, $v1, 0x220
    ctx->pc = 0x377784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
    // 0x377788: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x377788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37778c: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x37778cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x377790: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x377790u;
    {
        const bool branch_taken_0x377790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x377790) {
            ctx->pc = 0x3777B0u;
            return;
        }
    }
    ctx->pc = 0x377798u;
}
