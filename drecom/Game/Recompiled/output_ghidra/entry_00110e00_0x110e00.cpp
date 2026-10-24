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

// Function: entry_00110e00
// Address: 0x110e00 - 0x110ecc
void entry_00110e00_0x110e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110e00_0x110e00");
#endif

    switch (ctx->pc) {
        case 0x110e58u: goto label_110e58;
        case 0x110e74u: goto label_110e74;
        case 0x110e88u: goto label_110e88;
        case 0x110eb4u: goto label_110eb4;
        default: break;
    }

    ctx->pc = 0x110e00u;

    // 0x110e00: 0x8e824618  lw          $v0, 0x4618($s4)
    ctx->pc = 0x110e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 17944)));
    // 0x110e04: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x110e04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e08: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x110e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x110e0c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x110e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x110e10: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x110e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x110e14: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x110E14u;
    {
        const bool branch_taken_0x110e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E14u;
        // 0x110e18: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e14) {
            ctx->pc = 0x110ECCu;
            return;
        }
    }
    ctx->pc = 0x110E1Cu;
    // 0x110e1c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x110e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x110e20: 0x24535200  addiu       $s3, $v0, 0x5200
    ctx->pc = 0x110e20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 20992));
    // 0x110e24: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x110e24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B5224u));
    // 0x110e28: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x110E28u;
    {
        const bool branch_taken_0x110e28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x110E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E28u;
        // 0x110e2c: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e28) {
            ctx->pc = 0x110ECCu;
            return;
        }
    }
    ctx->pc = 0x110E30u;
    // 0x110e30: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x110e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x110e34: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x110e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x110e38: 0x245152b0  addiu       $s1, $v0, 0x52B0
    ctx->pc = 0x110e38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 21168));
    // 0x110e3c: 0xac4452b0  sw          $a0, 0x52B0($v0)
    ctx->pc = 0x110e3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3B52B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B52B0u, _value); } while (0);
    // 0x110e40: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x110e40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3B52B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B52B4u, _value); } while (0);
    // 0x110e44: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x110e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x110e48: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x110e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e4c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x110e4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3B52B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B52B8u, _value); } while (0);
    // 0x110e50: 0xc046c14  jal         func_11B050
    ctx->pc = 0x110E50u;
    SET_GPR_U32(ctx, 31, 0x110E58u);
    ctx->pc = 0x110E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110E50u;
    // 0x110e54: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    {
        ctx->pc = 0x110E58u;
        ps2_stubs::strncpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x110E58u) { return; }
    ctx->pc = 0x110E58u;
label_110e58:
    // 0x110e58: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x110e58u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x110e5c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x110e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e60: 0x26105260  addiu       $s0, $s0, 0x5260
    ctx->pc = 0x110e60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21088));
    // 0x110e64: 0xa2200413  sb          $zero, 0x413($s1)
    ctx->pc = 0x110e64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x110e68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e6c: 0xc046c14  jal         func_11B050
    ctx->pc = 0x110E6Cu;
    SET_GPR_U32(ctx, 31, 0x110E74u);
    ctx->pc = 0x110E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110E6Cu;
    // 0x110e70: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    {
        ctx->pc = 0x110E74u;
        ps2_stubs::strncpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x110E74u) { return; }
    ctx->pc = 0x110E74u;
label_110e74:
    // 0x110e74: 0x2610ffe0  addiu       $s0, $s0, -0x20
    ctx->pc = 0x110e74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
    // 0x110e78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x110e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e7c: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x110e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
    // 0x110e80: 0xc084b28  jal         func_212CA0
    ctx->pc = 0x110E80u;
    SET_GPR_U32(ctx, 31, 0x110E88u);
    ctx->pc = 0x110E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110E80u;
    // 0x110e84: 0xa200003f  sb          $zero, 0x3F($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 63), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212CA0u;
    {
        ctx->pc = 0x110E88u;
        ps2_syscalls::FlushCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x110E88u) { return; }
    ctx->pc = 0x110E88u;
label_110e88:
    // 0x110e88: 0x3c09003b  lui         $t1, 0x3B
    ctx->pc = 0x110e88u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)59 << 16));
    // 0x110e8c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x110e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e90: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x110e90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e94: 0x252967c0  addiu       $t1, $t1, 0x67C0
    ctx->pc = 0x110e94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 26560));
    // 0x110e98: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x110e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x110e9c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x110e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x110ea0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x110ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110ea4: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x110ea4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x110ea8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x110ea8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x110eac: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x110EACu;
    SET_GPR_U32(ctx, 31, 0x110EB4u);
    ctx->pc = 0x110EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110EACu;
    // 0x110eb0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x110EB4u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x110EB4u) { return; }
    ctx->pc = 0x110EB4u;
label_110eb4:
    // 0x110eb4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x110eb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110eb8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x110EB8u;
    {
        const bool branch_taken_0x110eb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x110EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110EB8u;
        // 0x110ebc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110eb8) {
            ctx->pc = 0x110ECCu;
            return;
        }
    }
    ctx->pc = 0x110EC0u;
    // 0x110ec0: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x110ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x110ec4: 0xae824618  sw          $v0, 0x4618($s4)
    ctx->pc = 0x110ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 17944), GPR_U32(ctx, 2));
    // 0x110ec8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x110ec8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x110eccu;
}
