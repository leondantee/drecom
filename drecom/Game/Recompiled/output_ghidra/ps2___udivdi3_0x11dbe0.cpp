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

// Function: __udivdi3
// Address: 0x11dbe0 - 0x11e1b0
void ps2___udivdi3_0x11dbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___udivdi3_0x11dbe0");
#endif

    ctx->pc = 0x11dbe0u;

    // 0x11dbe0: 0x5403f  dsra32      $t0, $a1, 0
    ctx->pc = 0x11dbe0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x11dbe4: 0x4583f  dsra32      $t3, $a0, 0
    ctx->pc = 0x11dbe4u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11dbe8: 0x5483c  dsll32      $t1, $a1, 0
    ctx->pc = 0x11dbe8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11dbec: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x11dbecu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x11dbf0: 0x4603c  dsll32      $t4, $a0, 0
    ctx->pc = 0x11dbf0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) << (32 + 0));
    // 0x11dbf4: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x11dbf4u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x11dbf8: 0x150000f2  bnez        $t0, . + 4 + (0xF2 << 2)
    ctx->pc = 0x11DBF8u;
    {
        const bool branch_taken_0x11dbf8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DBF8u;
        // 0x11dbfc: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dbf8) {
            ctx->pc = 0x11DFC4u;
            goto label_11dfc4;
        }
    }
    ctx->pc = 0x11DC00u;
    // 0x11dc00: 0x169102b  sltu        $v0, $t3, $t1
    ctx->pc = 0x11dc00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x11dc04: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x11DC04u;
    {
        const bool branch_taken_0x11dc04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DC04u;
        // 0x11dc08: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc04) {
            ctx->pc = 0x11DD54u;
            goto label_11dd54;
        }
    }
    ctx->pc = 0x11DC0Cu;
    // 0x11dc0c: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x11dc0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x11dc10: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11DC10u;
    {
        const bool branch_taken_0x11dc10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DC10u;
        // 0x11dc14: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc10) {
            ctx->pc = 0x11DC28u;
            goto label_11dc28;
        }
    }
    ctx->pc = 0x11DC18u;
    // 0x11dc18: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x11dc18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x11dc1c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x11dc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11dc20: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11DC20u;
    {
        const bool branch_taken_0x11dc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DC20u;
        // 0x11dc24: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc20) {
            ctx->pc = 0x11DC40u;
            goto label_11dc40;
        }
    }
    ctx->pc = 0x11DC28u;
label_11dc28:
    // 0x11dc28: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x11dc28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x11dc2c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11dc2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11dc30: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x11dc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11dc34: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x11dc34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x11dc38: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x11dc38u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x11dc3c: 0x0  nop
    ctx->pc = 0x11dc3cu;
    // NOP
label_11dc40:
    // 0x11dc40: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11dc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x11dc44: 0xa92006  srlv        $a0, $t1, $a1
    ctx->pc = 0x11dc44u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
    // 0x11dc48: 0x2442df28  addiu       $v0, $v0, -0x20D8
    ctx->pc = 0x11dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958888));
    // 0x11dc4c: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x11dc4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11dc50: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11dc50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11dc54: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x11dc54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11dc58: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x11dc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11dc5c: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x11dc5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x11dc60: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x11DC60u;
    {
        const bool branch_taken_0x11dc60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DC60u;
        // 0x11dc64: 0xe61023  subu        $v0, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc60) {
            ctx->pc = 0x11DC7Cu;
            goto label_11dc7c;
        }
    }
    ctx->pc = 0x11DC68u;
    // 0x11dc68: 0xcb1804  sllv        $v1, $t3, $a2
    ctx->pc = 0x11dc68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x11dc6c: 0x4c1006  srlv        $v0, $t4, $v0
    ctx->pc = 0x11dc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x11dc70: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x11dc70u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x11dc74: 0x625825  or          $t3, $v1, $v0
    ctx->pc = 0x11dc74u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x11dc78: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x11dc78u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
label_11dc7c:
    // 0x11dc7c: 0x92c02  srl         $a1, $t1, 16
    ctx->pc = 0x11dc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x11dc80: 0x3128ffff  andi        $t0, $t1, 0xFFFF
    ctx->pc = 0x11dc80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x11dc84: 0x165001b  divu        $zero, $t3, $a1
    ctx->pc = 0x11dc84u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,11); } }
    // 0x11dc88: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x11dc88u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x11dc8c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11DC8Cu;
    {
        const bool branch_taken_0x11dc8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11dc8c) {
            ctx->pc = 0x11DC90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DC8Cu;
            // 0x11dc90: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DC94u;
            goto label_11dc94;
        }
    }
    ctx->pc = 0x11DC94u;
label_11dc94:
    // 0x11dc94: 0x1012  mflo        $v0
    ctx->pc = 0x11dc94u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11dc98: 0x1810  mfhi        $v1
    ctx->pc = 0x11dc98u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11dc9c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x11dc9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dca0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11dca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11dca4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11dca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11dca8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11dca8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11dcac: 0xe83018  mult        $a2, $a3, $t0
    ctx->pc = 0x11dcacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x11dcb0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11dcb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11dcb4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11dcb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11dcb8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x11DCB8u;
    {
        const bool branch_taken_0x11dcb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11dcb8) {
            ctx->pc = 0x11DCBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DCB8u;
            // 0x11dcbc: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DCECu;
            goto label_11dcec;
        }
    }
    ctx->pc = 0x11DCC0u;
    // 0x11dcc0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x11dcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x11dcc4: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x11dcc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x11dcc8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11DCC8u;
    {
        const bool branch_taken_0x11dcc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DCC8u;
        // 0x11dccc: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dcc8) {
            ctx->pc = 0x11DCE8u;
            goto label_11dce8;
        }
    }
    ctx->pc = 0x11DCD0u;
    // 0x11dcd0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11dcd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11dcd4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11DCD4u;
    {
        const bool branch_taken_0x11dcd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11dcd4) {
            ctx->pc = 0x11DCD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DCD4u;
            // 0x11dcd8: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DCECu;
            goto label_11dcec;
        }
    }
    ctx->pc = 0x11DCDCu;
    // 0x11dcdc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x11dcdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x11dce0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x11dce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x11dce4: 0x0  nop
    ctx->pc = 0x11dce4u;
    // NOP
label_11dce8:
    // 0x11dce8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x11dce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_11dcec:
    // 0x11dcec: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11DCECu;
    {
        const bool branch_taken_0x11dcec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11dcec) {
            ctx->pc = 0x11DCF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DCECu;
            // 0x11dcf0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DCF4u;
            goto label_11dcf4;
        }
    }
    ctx->pc = 0x11DCF4u;
label_11dcf4:
    // 0x11dcf4: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x11dcf4u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x11dcf8: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x11dcf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x11dcfc: 0x1012  mflo        $v0
    ctx->pc = 0x11dcfcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11dd00: 0x1810  mfhi        $v1
    ctx->pc = 0x11dd00u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11dd04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11dd04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd08: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11dd08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11dd0c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11dd0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11dd10: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11dd10u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11dd14: 0xa83018  mult        $a2, $a1, $t0
    ctx->pc = 0x11dd14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x11dd18: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11dd18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11dd1c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11dd1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11dd20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11DD20u;
    {
        const bool branch_taken_0x11dd20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD20u;
        // 0x11dd24: 0x691821  addu        $v1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd20) {
            ctx->pc = 0x11DD40u;
            goto label_11dd40;
        }
    }
    ctx->pc = 0x11DD28u;
    // 0x11dd28: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x11dd28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x11dd2c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11DD2Cu;
    {
        const bool branch_taken_0x11dd2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD2Cu;
        // 0x11dd30: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd2c) {
            ctx->pc = 0x11DD40u;
            goto label_11dd40;
        }
    }
    ctx->pc = 0x11DD34u;
    // 0x11dd34: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11dd34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11dd38: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11DD38u;
    {
        const bool branch_taken_0x11dd38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11dd38) {
            ctx->pc = 0x11DD3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DD38u;
            // 0x11dd3c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DD40u;
            goto label_11dd40;
        }
    }
    ctx->pc = 0x11DD40u;
label_11dd40:
    // 0x11dd40: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x11dd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x11dd44: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x11dd44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x11dd48: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11dd48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11dd4c: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x11DD4Cu;
    {
        const bool branch_taken_0x11dd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD4Cu;
        // 0x11dd50: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd4c) {
            ctx->pc = 0x11E190u;
            goto label_11e190;
        }
    }
    ctx->pc = 0x11DD54u;
label_11dd54:
    // 0x11dd54: 0x1520000a  bnez        $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x11DD54u;
    {
        const bool branch_taken_0x11dd54 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD54u;
        // 0x11dd58: 0x49102b  sltu        $v0, $v0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd54) {
            ctx->pc = 0x11DD80u;
            goto label_11dd80;
        }
    }
    ctx->pc = 0x11DD5Cu;
    // 0x11dd5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11dd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11dd60: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11DD60u;
    {
        const bool branch_taken_0x11dd60 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x11dd60) {
            ctx->pc = 0x11DD64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DD60u;
            // 0x11dd64: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DD68u;
            goto label_11dd68;
        }
    }
    ctx->pc = 0x11DD68u;
label_11dd68:
    // 0x11dd68: 0x48001b  divu        $zero, $v0, $t0
    ctx->pc = 0x11dd68u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x11dd6c: 0x1012  mflo        $v0
    ctx->pc = 0x11dd6cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11dd70: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x11dd70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd74: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x11dd74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x11dd78: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x11dd78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x11dd7c: 0x0  nop
    ctx->pc = 0x11dd7cu;
    // NOP
label_11dd80:
    // 0x11dd80: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11DD80u;
    {
        const bool branch_taken_0x11dd80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD80u;
        // 0x11dd84: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd80) {
            ctx->pc = 0x11DD98u;
            goto label_11dd98;
        }
    }
    ctx->pc = 0x11DD88u;
    // 0x11dd88: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x11dd88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x11dd8c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x11dd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11dd90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11DD90u;
    {
        const bool branch_taken_0x11dd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD90u;
        // 0x11dd94: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd90) {
            ctx->pc = 0x11DDB0u;
            goto label_11ddb0;
        }
    }
    ctx->pc = 0x11DD98u;
label_11dd98:
    // 0x11dd98: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x11dd98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x11dd9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11dd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11dda0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x11dda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11dda4: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x11dda4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x11dda8: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x11dda8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x11ddac: 0x0  nop
    ctx->pc = 0x11ddacu;
    // NOP
label_11ddb0:
    // 0x11ddb0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11ddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x11ddb4: 0xa92006  srlv        $a0, $t1, $a1
    ctx->pc = 0x11ddb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
    // 0x11ddb8: 0x2442df28  addiu       $v0, $v0, -0x20D8
    ctx->pc = 0x11ddb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958888));
    // 0x11ddbc: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x11ddbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11ddc0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11ddc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11ddc4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x11ddc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11ddc8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x11ddc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11ddcc: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x11ddccu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x11ddd0: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x11DDD0u;
    {
        const bool branch_taken_0x11ddd0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DDD0u;
        // 0x11ddd4: 0xe63823  subu        $a3, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ddd0) {
            ctx->pc = 0x11DDECu;
            goto label_11ddec;
        }
    }
    ctx->pc = 0x11DDD8u;
    // 0x11ddd8: 0x1695823  subu        $t3, $t3, $t1
    ctx->pc = 0x11ddd8u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x11dddc: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x11dddcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11dde0: 0x94402  srl         $t0, $t1, 16
    ctx->pc = 0x11dde0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x11dde4: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x11DDE4u;
    {
        const bool branch_taken_0x11dde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DDE4u;
        // 0x11dde8: 0x312affff  andi        $t2, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dde4) {
            ctx->pc = 0x11DEF0u;
            goto label_11def0;
        }
    }
    ctx->pc = 0x11DDECu;
label_11ddec:
    // 0x11ddec: 0xcb1804  sllv        $v1, $t3, $a2
    ctx->pc = 0x11ddecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x11ddf0: 0xec1006  srlv        $v0, $t4, $a3
    ctx->pc = 0x11ddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 7) & 0x1F));
    // 0x11ddf4: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x11ddf4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x11ddf8: 0xeb3806  srlv        $a3, $t3, $a3
    ctx->pc = 0x11ddf8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 7) & 0x1F));
    // 0x11ddfc: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x11ddfcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
    // 0x11de00: 0x625825  or          $t3, $v1, $v0
    ctx->pc = 0x11de00u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x11de04: 0x94402  srl         $t0, $t1, 16
    ctx->pc = 0x11de04u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x11de08: 0xe8001b  divu        $zero, $a3, $t0
    ctx->pc = 0x11de08u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x11de0c: 0x312affff  andi        $t2, $t1, 0xFFFF
    ctx->pc = 0x11de0cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x11de10: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x11de10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11de14: 0xb2402  srl         $a0, $t3, 16
    ctx->pc = 0x11de14u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x11de18: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11DE18u;
    {
        const bool branch_taken_0x11de18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11de18) {
            ctx->pc = 0x11DE1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DE18u;
            // 0x11de1c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DE20u;
            goto label_11de20;
        }
    }
    ctx->pc = 0x11DE20u;
label_11de20:
    // 0x11de20: 0x140682d  daddu       $t5, $t2, $zero
    ctx->pc = 0x11de20u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11de24: 0x1012  mflo        $v0
    ctx->pc = 0x11de24u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11de28: 0x1810  mfhi        $v1
    ctx->pc = 0x11de28u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11de2c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x11de2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11de30: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11de30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11de34: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11de34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11de38: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11de38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11de3c: 0xea3018  mult        $a2, $a3, $t2
    ctx->pc = 0x11de3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x11de40: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11de40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11de44: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11de44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11de48: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x11DE48u;
    {
        const bool branch_taken_0x11de48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11de48) {
            ctx->pc = 0x11DE4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DE48u;
            // 0x11de4c: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DE7Cu;
            goto label_11de7c;
        }
    }
    ctx->pc = 0x11DE50u;
    // 0x11de50: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x11de50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x11de54: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x11de54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x11de58: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11DE58u;
    {
        const bool branch_taken_0x11de58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DE58u;
        // 0x11de5c: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11de58) {
            ctx->pc = 0x11DE78u;
            goto label_11de78;
        }
    }
    ctx->pc = 0x11DE60u;
    // 0x11de60: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11de60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11de64: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11DE64u;
    {
        const bool branch_taken_0x11de64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11de64) {
            ctx->pc = 0x11DE68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DE64u;
            // 0x11de68: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DE7Cu;
            goto label_11de7c;
        }
    }
    ctx->pc = 0x11DE6Cu;
    // 0x11de6c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x11de6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x11de70: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x11de70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x11de74: 0x0  nop
    ctx->pc = 0x11de74u;
    // NOP
label_11de78:
    // 0x11de78: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x11de78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_11de7c:
    // 0x11de7c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11DE7Cu;
    {
        const bool branch_taken_0x11de7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11de7c) {
            ctx->pc = 0x11DE80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DE7Cu;
            // 0x11de80: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DE84u;
            goto label_11de84;
        }
    }
    ctx->pc = 0x11DE84u;
label_11de84:
    // 0x11de84: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x11de84u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x11de88: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x11de88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x11de8c: 0x1012  mflo        $v0
    ctx->pc = 0x11de8cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11de90: 0x1810  mfhi        $v1
    ctx->pc = 0x11de90u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11de94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11de94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11de98: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11de98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11de9c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11de9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11dea0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11dea0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11dea4: 0xad3018  mult        $a2, $a1, $t5
    ctx->pc = 0x11dea4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x11dea8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11dea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11deac: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11deacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11deb0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11DEB0u;
    {
        const bool branch_taken_0x11deb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DEB0u;
        // 0x11deb4: 0x7103c  dsll32      $v0, $a3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11deb0) {
            ctx->pc = 0x11DEE0u;
            goto label_11dee0;
        }
    }
    ctx->pc = 0x11DEB8u;
    // 0x11deb8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x11deb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x11debc: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x11debcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x11dec0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11DEC0u;
    {
        const bool branch_taken_0x11dec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DEC0u;
        // 0x11dec4: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dec0) {
            ctx->pc = 0x11DEDCu;
            goto label_11dedc;
        }
    }
    ctx->pc = 0x11DEC8u;
    // 0x11dec8: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11dec8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11decc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11DECCu;
    {
        const bool branch_taken_0x11decc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DECCu;
        // 0x11ded0: 0x7103c  dsll32      $v0, $a3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11decc) {
            ctx->pc = 0x11DEE0u;
            goto label_11dee0;
        }
    }
    ctx->pc = 0x11DED4u;
    // 0x11ded4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x11ded4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x11ded8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x11ded8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_11dedc:
    // 0x11dedc: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x11dedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
label_11dee0:
    // 0x11dee0: 0x665823  subu        $t3, $v1, $a2
    ctx->pc = 0x11dee0u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x11dee4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x11dee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x11dee8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11dee8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11deec: 0x456825  or          $t5, $v0, $a1
    ctx->pc = 0x11deecu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_11def0:
    // 0x11def0: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x11def0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11def4: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x11def4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x11def8: 0x165001b  divu        $zero, $t3, $a1
    ctx->pc = 0x11def8u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,11); } }
    // 0x11defc: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x11defcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11df00: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11DF00u;
    {
        const bool branch_taken_0x11df00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11df00) {
            ctx->pc = 0x11DF04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DF00u;
            // 0x11df04: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DF08u;
            goto label_11df08;
        }
    }
    ctx->pc = 0x11DF08u;
label_11df08:
    // 0x11df08: 0x1012  mflo        $v0
    ctx->pc = 0x11df08u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11df0c: 0x1810  mfhi        $v1
    ctx->pc = 0x11df0cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11df10: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x11df10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11df14: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11df14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11df18: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11df18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11df1c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11df1cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11df20: 0xe83018  mult        $a2, $a3, $t0
    ctx->pc = 0x11df20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x11df24: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11df24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11df28: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11df28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11df2c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x11DF2Cu;
    {
        const bool branch_taken_0x11df2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11df2c) {
            ctx->pc = 0x11DF30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DF2Cu;
            // 0x11df30: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DF5Cu;
            goto label_11df5c;
        }
    }
    ctx->pc = 0x11DF34u;
    // 0x11df34: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x11df34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x11df38: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x11df38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x11df3c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11DF3Cu;
    {
        const bool branch_taken_0x11df3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF3Cu;
        // 0x11df40: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df3c) {
            ctx->pc = 0x11DF58u;
            goto label_11df58;
        }
    }
    ctx->pc = 0x11DF44u;
    // 0x11df44: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11df44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11df48: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x11DF48u;
    {
        const bool branch_taken_0x11df48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11df48) {
            ctx->pc = 0x11DF4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DF48u;
            // 0x11df4c: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DF5Cu;
            goto label_11df5c;
        }
    }
    ctx->pc = 0x11DF50u;
    // 0x11df50: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x11df50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x11df54: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x11df54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_11df58:
    // 0x11df58: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x11df58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_11df5c:
    // 0x11df5c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11DF5Cu;
    {
        const bool branch_taken_0x11df5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11df5c) {
            ctx->pc = 0x11DF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DF5Cu;
            // 0x11df60: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DF64u;
            goto label_11df64;
        }
    }
    ctx->pc = 0x11DF64u;
label_11df64:
    // 0x11df64: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x11df64u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x11df68: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x11df68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x11df6c: 0x1012  mflo        $v0
    ctx->pc = 0x11df6cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11df70: 0x1810  mfhi        $v1
    ctx->pc = 0x11df70u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11df74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11df74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11df78: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11df78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11df7c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11df7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11df80: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11df80u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11df84: 0xa83018  mult        $a2, $a1, $t0
    ctx->pc = 0x11df84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x11df88: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11df88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11df8c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11df8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11df90: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11DF90u;
    {
        const bool branch_taken_0x11df90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF90u;
        // 0x11df94: 0x691821  addu        $v1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df90) {
            ctx->pc = 0x11DFB0u;
            goto label_11dfb0;
        }
    }
    ctx->pc = 0x11DF98u;
    // 0x11df98: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x11df98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x11df9c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11DF9Cu;
    {
        const bool branch_taken_0x11df9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF9Cu;
        // 0x11dfa0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df9c) {
            ctx->pc = 0x11DFB0u;
            goto label_11dfb0;
        }
    }
    ctx->pc = 0x11DFA4u;
    // 0x11dfa4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11dfa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11dfa8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11DFA8u;
    {
        const bool branch_taken_0x11dfa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11dfa8) {
            ctx->pc = 0x11DFACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DFA8u;
            // 0x11dfac: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DFB0u;
            goto label_11dfb0;
        }
    }
    ctx->pc = 0x11DFB0u;
label_11dfb0:
    // 0x11dfb0: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x11dfb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x11dfb4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x11dfb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x11dfb8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11dfb8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11dfbc: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x11DFBCu;
    {
        const bool branch_taken_0x11dfbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DFBCu;
        // 0x11dfc0: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dfbc) {
            ctx->pc = 0x11E198u;
            goto label_11e198;
        }
    }
    ctx->pc = 0x11DFC4u;
label_11dfc4:
    // 0x11dfc4: 0x168102b  sltu        $v0, $t3, $t0
    ctx->pc = 0x11dfc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11dfc8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11DFC8u;
    {
        const bool branch_taken_0x11dfc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DFC8u;
        // 0x11dfcc: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dfc8) {
            ctx->pc = 0x11DFD8u;
            goto label_11dfd8;
        }
    }
    ctx->pc = 0x11DFD0u;
    // 0x11dfd0: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x11DFD0u;
    {
        const bool branch_taken_0x11dfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DFD0u;
        // 0x11dfd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dfd0) {
            ctx->pc = 0x11E190u;
            goto label_11e190;
        }
    }
    ctx->pc = 0x11DFD8u;
label_11dfd8:
    // 0x11dfd8: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x11dfd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11dfdc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11DFDCu;
    {
        const bool branch_taken_0x11dfdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DFDCu;
        // 0x11dfe0: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dfdc) {
            ctx->pc = 0x11DFF8u;
            goto label_11dff8;
        }
    }
    ctx->pc = 0x11DFE4u;
    // 0x11dfe4: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x11dfe4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x11dfe8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x11dfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11dfec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11DFECu;
    {
        const bool branch_taken_0x11dfec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DFECu;
        // 0x11dff0: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dfec) {
            ctx->pc = 0x11E010u;
            goto label_11e010;
        }
    }
    ctx->pc = 0x11DFF4u;
    // 0x11dff4: 0x0  nop
    ctx->pc = 0x11dff4u;
    // NOP
label_11dff8:
    // 0x11dff8: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x11dff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x11dffc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11dffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11e000: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x11e000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11e004: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x11e004u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11e008: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x11e008u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x11e00c: 0x0  nop
    ctx->pc = 0x11e00cu;
    // NOP
label_11e010:
    // 0x11e010: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11e010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x11e014: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x11e014u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x11e018: 0x2442df28  addiu       $v0, $v0, -0x20D8
    ctx->pc = 0x11e018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958888));
    // 0x11e01c: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x11e01cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11e020: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11e020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11e024: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x11e024u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11e028: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x11e028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11e02c: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x11e02cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x11e030: 0x54c00009  bnel        $a2, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x11E030u;
    {
        const bool branch_taken_0x11e030 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e030) {
            ctx->pc = 0x11E034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E030u;
            // 0x11e034: 0xe63823  subu        $a3, $a3, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E058u;
            goto label_11e058;
        }
    }
    ctx->pc = 0x11E038u;
    // 0x11e038: 0x10b102b  sltu        $v0, $t0, $t3
    ctx->pc = 0x11e038u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x11e03c: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x11E03Cu;
    {
        const bool branch_taken_0x11e03c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E03Cu;
        // 0x11e040: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e03c) {
            ctx->pc = 0x11E190u;
            goto label_11e190;
        }
    }
    ctx->pc = 0x11E044u;
    // 0x11e044: 0x189102b  sltu        $v0, $t4, $t1
    ctx->pc = 0x11e044u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x11e048: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x11E048u;
    {
        const bool branch_taken_0x11e048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E048u;
        // 0x11e04c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e048) {
            ctx->pc = 0x11E190u;
            goto label_11e190;
        }
    }
    ctx->pc = 0x11E050u;
    // 0x11e050: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x11E050u;
    {
        const bool branch_taken_0x11e050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E050u;
        // 0x11e054: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e050) {
            ctx->pc = 0x11E190u;
            goto label_11e190;
        }
    }
    ctx->pc = 0x11E058u;
label_11e058:
    // 0x11e058: 0xc82804  sllv        $a1, $t0, $a2
    ctx->pc = 0x11e058u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x11e05c: 0xec2006  srlv        $a0, $t4, $a3
    ctx->pc = 0x11e05cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 7) & 0x1F));
    // 0x11e060: 0xe91806  srlv        $v1, $t1, $a3
    ctx->pc = 0x11e060u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 7) & 0x1F));
    // 0x11e064: 0xeb3806  srlv        $a3, $t3, $a3
    ctx->pc = 0x11e064u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 7) & 0x1F));
    // 0x11e068: 0xcb1004  sllv        $v0, $t3, $a2
    ctx->pc = 0x11e068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x11e06c: 0x445825  or          $t3, $v0, $a0
    ctx->pc = 0x11e06cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x11e070: 0xa34025  or          $t0, $a1, $v1
    ctx->pc = 0x11e070u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x11e074: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x11e074u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
    // 0x11e078: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x11e078u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x11e07c: 0x83402  srl         $a2, $t0, 16
    ctx->pc = 0x11e07cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x11e080: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x11e080u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x11e084: 0x3105ffff  andi        $a1, $t0, 0xFFFF
    ctx->pc = 0x11e084u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x11e088: 0xb2402  srl         $a0, $t3, 16
    ctx->pc = 0x11e088u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x11e08c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11E08Cu;
    {
        const bool branch_taken_0x11e08c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e08c) {
            ctx->pc = 0x11E090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E08Cu;
            // 0x11e090: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E094u;
            goto label_11e094;
        }
    }
    ctx->pc = 0x11E094u;
label_11e094:
    // 0x11e094: 0x1012  mflo        $v0
    ctx->pc = 0x11e094u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11e098: 0x1810  mfhi        $v1
    ctx->pc = 0x11e098u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11e09c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x11e09cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e0a0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11e0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11e0a4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11e0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11e0a8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11e0a8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11e0ac: 0x1453818  mult        $a3, $t2, $a1
    ctx->pc = 0x11e0acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x11e0b0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11e0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11e0b4: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x11e0b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x11e0b8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x11E0B8u;
    {
        const bool branch_taken_0x11e0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e0b8) {
            ctx->pc = 0x11E0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E0B8u;
            // 0x11e0bc: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E0ECu;
            goto label_11e0ec;
        }
    }
    ctx->pc = 0x11E0C0u;
    // 0x11e0c0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x11e0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x11e0c4: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x11e0c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11e0c8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11E0C8u;
    {
        const bool branch_taken_0x11e0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E0C8u;
        // 0x11e0cc: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e0c8) {
            ctx->pc = 0x11E0E8u;
            goto label_11e0e8;
        }
    }
    ctx->pc = 0x11E0D0u;
    // 0x11e0d0: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x11e0d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x11e0d4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E0D4u;
    {
        const bool branch_taken_0x11e0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e0d4) {
            ctx->pc = 0x11E0D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E0D4u;
            // 0x11e0d8: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E0ECu;
            goto label_11e0ec;
        }
    }
    ctx->pc = 0x11E0DCu;
    // 0x11e0dc: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x11e0dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x11e0e0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x11e0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x11e0e4: 0x0  nop
    ctx->pc = 0x11e0e4u;
    // NOP
label_11e0e8:
    // 0x11e0e8: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x11e0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_11e0ec:
    // 0x11e0ec: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11E0ECu;
    {
        const bool branch_taken_0x11e0ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e0ec) {
            ctx->pc = 0x11E0F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E0ECu;
            // 0x11e0f0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E0F4u;
            goto label_11e0f4;
        }
    }
    ctx->pc = 0x11E0F4u;
label_11e0f4:
    // 0x11e0f4: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x11e0f4u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x11e0f8: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x11e0f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x11e0fc: 0x1012  mflo        $v0
    ctx->pc = 0x11e0fcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11e100: 0x1810  mfhi        $v1
    ctx->pc = 0x11e100u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11e104: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11e104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e108: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11e108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11e10c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11e10cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11e110: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11e110u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11e114: 0xc53818  mult        $a3, $a2, $a1
    ctx->pc = 0x11e114u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x11e118: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11e118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11e11c: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x11e11cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x11e120: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11E120u;
    {
        const bool branch_taken_0x11e120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E120u;
        // 0x11e124: 0xa103c  dsll32      $v0, $t2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e120) {
            ctx->pc = 0x11E150u;
            goto label_11e150;
        }
    }
    ctx->pc = 0x11E128u;
    // 0x11e128: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x11e128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x11e12c: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x11e12cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11e130: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11E130u;
    {
        const bool branch_taken_0x11e130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E130u;
        // 0x11e134: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e130) {
            ctx->pc = 0x11E14Cu;
            goto label_11e14c;
        }
    }
    ctx->pc = 0x11E138u;
    // 0x11e138: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x11e138u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x11e13c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E13Cu;
    {
        const bool branch_taken_0x11e13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E13Cu;
        // 0x11e140: 0xa103c  dsll32      $v0, $t2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e13c) {
            ctx->pc = 0x11E150u;
            goto label_11e150;
        }
    }
    ctx->pc = 0x11E144u;
    // 0x11e144: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x11e144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x11e148: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x11e148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_11e14c:
    // 0x11e14c: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x11e14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
label_11e150:
    // 0x11e150: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x11e150u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x11e154: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x11e154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x11e158: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11e158u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11e15c: 0x462825  or          $a1, $v0, $a2
    ctx->pc = 0x11e15cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x11e160: 0xa90019  multu       $a1, $t1
    ctx->pc = 0x11e160u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 5) * (uint64_t)GPR_U32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11e164: 0x3010  mfhi        $a2
    ctx->pc = 0x11e164u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x11e168: 0x2012  mflo        $a0
    ctx->pc = 0x11e168u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x11e16c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11e16cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11e170: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x11E170u;
    {
        const bool branch_taken_0x11e170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e170) {
            ctx->pc = 0x11E174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E170u;
            // 0x11e174: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E190u;
            goto label_11e190;
        }
    }
    ctx->pc = 0x11E178u;
    // 0x11e178: 0x14c30007  bne         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11E178u;
    {
        const bool branch_taken_0x11e178 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x11E17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E178u;
        // 0x11e17c: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e178) {
            ctx->pc = 0x11E198u;
            goto label_11e198;
        }
    }
    ctx->pc = 0x11E180u;
    // 0x11e180: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x11e180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x11e184: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E184u;
    {
        const bool branch_taken_0x11e184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E184u;
        // 0x11e188: 0x5183c  dsll32      $v1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e184) {
            ctx->pc = 0x11E19Cu;
            goto label_11e19c;
        }
    }
    ctx->pc = 0x11E18Cu;
    // 0x11e18c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x11e18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_11e190:
    // 0x11e190: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x11e190u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e194: 0x0  nop
    ctx->pc = 0x11e194u;
    // NOP
label_11e198:
    // 0x11e198: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x11e198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
label_11e19c:
    // 0x11e19c: 0xd103c  dsll32      $v0, $t5, 0
    ctx->pc = 0x11e19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
    // 0x11e1a0: 0x3703e  dsrl32      $t6, $v1, 0
    ctx->pc = 0x11e1a0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x11e1a4: 0x1c21025  or          $v0, $t6, $v0
    ctx->pc = 0x11e1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
    // 0x11e1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x11E1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E1A8u;
        // 0x11e1ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E1B0u;
}
