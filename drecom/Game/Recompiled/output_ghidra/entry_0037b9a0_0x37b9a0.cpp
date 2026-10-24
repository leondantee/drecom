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

// Function: entry_0037b9a0
// Address: 0x37b9a0 - 0x37bb00
void entry_0037b9a0_0x37b9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037b9a0_0x37b9a0");
#endif

    ctx->pc = 0x37b9a0u;

    // 0x37b9a0: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b9a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b9a4: 0x8c220580  lw          $v0, 0x580($at)
    ctx->pc = 0x37b9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x9A0580u));
    // 0x37b9a8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x37b9a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x37b9ac: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x37B9ACu;
    {
        const bool branch_taken_0x37b9ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37b9ac) {
            ctx->pc = 0x37B980u;
            return;
        }
    }
    ctx->pc = 0x37B9B4u;
    // 0x37b9b4: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b9b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b9b8: 0x8c220588  lw          $v0, 0x588($at)
    ctx->pc = 0x37b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x9A0588u));
    // 0x37b9bc: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x37b9bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x37b9c0: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x37b9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x37b9c4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x37b9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x37b9c8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x37b9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37b9cc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x37b9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x37b9d0: 0x2442b930  addiu       $v0, $v0, -0x46D0
    ctx->pc = 0x37b9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949168));
    // 0x37b9d4: 0x43a821  addu        $s5, $v0, $v1
    ctx->pc = 0x37b9d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37b9d8: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x37b9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x37b9dc: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x37b9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x37b9e0: 0x62f023  subu        $fp, $v1, $v0
    ctx->pc = 0x37b9e0u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37b9e4: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x37b9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x37b9e8: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x37b9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x37b9ec: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x37b9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37b9f0: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x37b9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x37b9f4: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x37b9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x37b9f8: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x37b9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x37b9fc: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x37b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x37ba00: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x37ba00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x37ba04: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x37ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x37ba08: 0x5e1023  subu        $v0, $v0, $fp
    ctx->pc = 0x37ba08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x37ba0c: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x37ba0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x37ba10: 0x240301c0  addiu       $v1, $zero, 0x1C0
    ctx->pc = 0x37ba10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x37ba14: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x37ba14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37ba18: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x37ba18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37ba1c: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x37ba1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x37ba20: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37ba20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37ba24: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x37ba24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x37ba28: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x37ba28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x37ba2c: 0x34422b16  ori         $v0, $v0, 0x2B16
    ctx->pc = 0x37ba2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x37ba30: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x37ba30u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x37ba34: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x37ba34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
    // 0x37ba38: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x37ba38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x37ba3c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x37ba3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x37ba40: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x37ba40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x37ba44: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x37ba44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x37ba48: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x37ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37ba4c: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x37ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x37ba50: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x37ba50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37ba54: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x37ba54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x37ba58: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x37ba58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x37ba5c: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x37ba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x37ba60: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37ba60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37ba64: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37ba64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37ba68: 0x26820018  addiu       $v0, $s4, 0x18
    ctx->pc = 0x37ba68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x37ba6c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37ba6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37ba70: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x37ba70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x37ba74: 0x2682001c  addiu       $v0, $s4, 0x1C
    ctx->pc = 0x37ba74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
    // 0x37ba78: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37ba78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37ba7c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x37ba7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x37ba80: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x37ba80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37ba84: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x37ba84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x37ba88: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x37ba88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37ba8c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x37ba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x37ba90: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x37ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x37ba94: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x37ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x37ba98: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37ba98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37ba9c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37ba9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37baa0: 0x26820024  addiu       $v0, $s4, 0x24
    ctx->pc = 0x37baa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
    // 0x37baa4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37baa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37baa8: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x37baa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x37baac: 0x26820028  addiu       $v0, $s4, 0x28
    ctx->pc = 0x37baacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
    // 0x37bab0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37bab0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37bab4: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x37bab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x37bab8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x37bab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37babc: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x37babcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x37bac0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x37bac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37bac4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37bac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37bac8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37bac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37bacc: 0x26820014  addiu       $v0, $s4, 0x14
    ctx->pc = 0x37baccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x37bad0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37bad0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37bad4: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x37bad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x37bad8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x37bad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37badc: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x37badcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x37bae0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x37bae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37bae4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37bae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37bae8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37bae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37baec: 0x26820020  addiu       $v0, $s4, 0x20
    ctx->pc = 0x37baecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x37baf0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37baf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37baf4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x37baf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x37baf8: 0x2442e7a8  addiu       $v0, $v0, -0x1858
    ctx->pc = 0x37baf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961064));
    // 0x37bafc: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x37bafcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x37bb00u;
}
