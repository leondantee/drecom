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

// Function: entry_001109d0
// Address: 0x1109d0 - 0x110a80
void entry_001109d0_0x1109d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001109d0_0x1109d0");
#endif

    switch (ctx->pc) {
        case 0x110a28u: goto label_110a28;
        case 0x110a38u: goto label_110a38;
        case 0x110a68u: goto label_110a68;
        default: break;
    }

    ctx->pc = 0x1109d0u;

    // 0x1109d0: 0x8e824618  lw          $v0, 0x4618($s4)
    ctx->pc = 0x1109d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 17944)));
    // 0x1109d4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1109d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1109d8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1109d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1109dc: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1109dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1109e0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1109e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1109e4: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1109E4u;
    {
        const bool branch_taken_0x1109e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1109E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1109E4u;
        // 0x1109e8: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1109e4) {
            ctx->pc = 0x110A80u;
            return;
        }
    }
    ctx->pc = 0x1109ECu;
    // 0x1109ec: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1109ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1109f0: 0x24535200  addiu       $s3, $v0, 0x5200
    ctx->pc = 0x1109f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 20992));
    // 0x1109f4: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1109f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B5224u));
    // 0x1109f8: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1109F8u;
    {
        const bool branch_taken_0x1109f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1109FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1109F8u;
        // 0x1109fc: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1109f8) {
            ctx->pc = 0x110A80u;
            return;
        }
    }
    ctx->pc = 0x110A00u;
    // 0x110a00: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x110a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x110a04: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x110a04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x110a08: 0x245152b0  addiu       $s1, $v0, 0x52B0
    ctx->pc = 0x110a08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 21168));
    // 0x110a0c: 0x261057c0  addiu       $s0, $s0, 0x57C0
    ctx->pc = 0x110a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22464));
    // 0x110a10: 0xac4452b0  sw          $a0, 0x52B0($v0)
    ctx->pc = 0x110a10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3B52B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B52B0u, _value); } while (0);
    // 0x110a14: 0x240603ff  addiu       $a2, $zero, 0x3FF
    ctx->pc = 0x110a14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x110a18: 0xae280004  sw          $t0, 0x4($s1)
    ctx->pc = 0x110a18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x3B52B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B52B4u, _value); } while (0);
    // 0x110a1c: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x110a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x110a20: 0xc046c14  jal         func_11B050
    ctx->pc = 0x110A20u;
    SET_GPR_U32(ctx, 31, 0x110A28u);
    ctx->pc = 0x110A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110A20u;
    // 0x110a24: 0xae300010  sw          $s0, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    {
        ctx->pc = 0x110A28u;
        ps2_stubs::strncpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x110A28u) { return; }
    ctx->pc = 0x110A28u;
label_110a28:
    // 0x110a28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110a2c: 0xa2200413  sb          $zero, 0x413($s1)
    ctx->pc = 0x110a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x110a30: 0xc0854a6  jal         func_215298
    ctx->pc = 0x110A30u;
    SET_GPR_U32(ctx, 31, 0x110A38u);
    ctx->pc = 0x110A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110A30u;
    // 0x110a34: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215298u;
    {
        ctx->pc = 0x110A38u;
        ps2_stubs::sceSifWriteBackDCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x110A38u) { return; }
    ctx->pc = 0x110A38u;
label_110a38:
    // 0x110a38: 0x3c09003b  lui         $t1, 0x3B
    ctx->pc = 0x110a38u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)59 << 16));
    // 0x110a3c: 0x3c0b0011  lui         $t3, 0x11
    ctx->pc = 0x110a3cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)17 << 16));
    // 0x110a40: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x110a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x110a44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x110a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110a48: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x110a48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110a4c: 0x252967c0  addiu       $t1, $t1, 0x67C0
    ctx->pc = 0x110a4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 26560));
    // 0x110a50: 0x256b0930  addiu       $t3, $t3, 0x930
    ctx->pc = 0x110a50u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2352));
    // 0x110a54: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x110a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x110a58: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x110a58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110a5c: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x110a5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x110a60: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x110A60u;
    SET_GPR_U32(ctx, 31, 0x110A68u);
    ctx->pc = 0x110A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110A60u;
    // 0x110a64: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x110A68u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x110A68u) { return; }
    ctx->pc = 0x110A68u;
label_110a68:
    // 0x110a68: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x110a68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110a6c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x110A6Cu;
    {
        const bool branch_taken_0x110a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x110A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A6Cu;
        // 0x110a70: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110a6c) {
            ctx->pc = 0x110A80u;
            return;
        }
    }
    ctx->pc = 0x110A74u;
    // 0x110a74: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x110a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x110a78: 0xae824618  sw          $v0, 0x4618($s4)
    ctx->pc = 0x110a78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 17944), GPR_U32(ctx, 2));
    // 0x110a7c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x110a7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x110a80u;
}
