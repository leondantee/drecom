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

// Function: entry_0037be68
// Address: 0x37be68 - 0x37bfd4
void entry_0037be68_0x37be68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037be68_0x37be68");
#endif

    ctx->pc = 0x37be68u;

    // 0x37be68: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37be68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37be6c: 0x8c220590  lw          $v0, 0x590($at)
    ctx->pc = 0x37be6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x9A0590u));
    // 0x37be70: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x37be70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x37be74: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x37BE74u;
    {
        const bool branch_taken_0x37be74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37be74) {
            ctx->pc = 0x37BE48u;
            return;
        }
    }
    ctx->pc = 0x37BE7Cu;
    // 0x37be7c: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37be7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37be80: 0x8c220598  lw          $v0, 0x598($at)
    ctx->pc = 0x37be80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x9A0598u));
    // 0x37be84: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x37be84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x37be88: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x37be88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x37be8c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x37be8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x37be90: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x37be90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37be94: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x37be94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x37be98: 0x2442b930  addiu       $v0, $v0, -0x46D0
    ctx->pc = 0x37be98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949168));
    // 0x37be9c: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x37be9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37bea0: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x37bea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x37bea4: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x37bea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x37bea8: 0x62b023  subu        $s6, $v1, $v0
    ctx->pc = 0x37bea8u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37beac: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x37beacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x37beb0: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x37beb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x37beb4: 0x62b823  subu        $s7, $v1, $v0
    ctx->pc = 0x37beb4u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37beb8: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x37beb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x37bebc: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x37bebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x37bec0: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x37bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x37bec4: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x37bec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x37bec8: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x37bec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x37becc: 0x56f023  subu        $fp, $v0, $s6
    ctx->pc = 0x37beccu;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x37bed0: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x37bed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x37bed4: 0x571023  subu        $v0, $v0, $s7
    ctx->pc = 0x37bed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x37bed8: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x37bed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x37bedc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37bedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37bee0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x37bee0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x37bee4: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x37bee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x37bee8: 0x34422b16  ori         $v0, $v0, 0x2B16
    ctx->pc = 0x37bee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x37beec: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x37beecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x37bef0: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x37bef0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x37bef4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x37bef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x37bef8: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x37bef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x37befc: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x37befcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x37bf00: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x37bf00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x37bf04: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x37bf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x37bf08: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x37bf08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37bf0c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x37bf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37bf10: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x37bf10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x37bf14: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x37bf14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x37bf18: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37bf18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37bf1c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37bf1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37bf20: 0x26420018  addiu       $v0, $s2, 0x18
    ctx->pc = 0x37bf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x37bf24: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37bf24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37bf28: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x37bf28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x37bf2c: 0x2642001c  addiu       $v0, $s2, 0x1C
    ctx->pc = 0x37bf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x37bf30: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37bf30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37bf34: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x37bf34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x37bf38: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x37bf38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37bf3c: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x37bf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x37bf40: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x37bf40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37bf44: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x37bf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x37bf48: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x37bf48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x37bf4c: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x37bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x37bf50: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37bf50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37bf54: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37bf54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37bf58: 0x26420024  addiu       $v0, $s2, 0x24
    ctx->pc = 0x37bf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x37bf5c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37bf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37bf60: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x37bf60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x37bf64: 0x26420028  addiu       $v0, $s2, 0x28
    ctx->pc = 0x37bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x37bf68: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37bf68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37bf6c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x37bf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x37bf70: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x37bf70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37bf74: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x37bf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x37bf78: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x37bf78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37bf7c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37bf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37bf80: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37bf80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37bf84: 0x26420014  addiu       $v0, $s2, 0x14
    ctx->pc = 0x37bf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x37bf88: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37bf88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37bf8c: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x37bf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x37bf90: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x37bf90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37bf94: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x37bf94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x37bf98: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x37bf98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37bf9c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37bf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37bfa0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37bfa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37bfa4: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x37bfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x37bfa8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37bfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37bfac: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x37bfacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x37bfb0: 0x2442e7a8  addiu       $v0, $v0, -0x1858
    ctx->pc = 0x37bfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961064));
    // 0x37bfb4: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x37bfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x37bfb8: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x37bfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x37bfbc: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x37bfbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x37bfc0: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x37bfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x37bfc4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37bfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37bfc8: 0x8e225dd0  lw          $v0, 0x5DD0($s1)
    ctx->pc = 0x37bfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24016)));
    // 0x37bfcc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37bfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37bfd0: 0xae225dd0  sw          $v0, 0x5DD0($s1)
    ctx->pc = 0x37bfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24016), GPR_U32(ctx, 2));
    ctx->pc = 0x37bfd4u;
}
