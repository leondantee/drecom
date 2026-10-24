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

// Function: entry_00110f90
// Address: 0x110f90 - 0x111020
void entry_00110f90_0x110f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110f90_0x110f90");
#endif

    switch (ctx->pc) {
        case 0x110fd8u: goto label_110fd8;
        case 0x111008u: goto label_111008;
        default: break;
    }

    ctx->pc = 0x110f90u;

    // 0x110f90: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x110f90u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x110f94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x110f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x110f98: 0x8e424618  lw          $v0, 0x4618($s2)
    ctx->pc = 0x110f98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x384618u));
    // 0x110f9c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x110f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x110fa0: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x110FA0u;
    {
        const bool branch_taken_0x110fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110FA0u;
        // 0x110fa4: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110fa0) {
            ctx->pc = 0x111020u;
            return;
        }
    }
    ctx->pc = 0x110FA8u;
    // 0x110fa8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x110fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x110fac: 0x24515200  addiu       $s1, $v0, 0x5200
    ctx->pc = 0x110facu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 20992));
    // 0x110fb0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x110fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B5224u));
    // 0x110fb4: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x110FB4u;
    {
        const bool branch_taken_0x110fb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x110FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110FB4u;
        // 0x110fb8: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110fb4) {
            ctx->pc = 0x111020u;
            return;
        }
    }
    ctx->pc = 0x110FBCu;
    // 0x110fbc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x110fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x110fc0: 0x240603ff  addiu       $a2, $zero, 0x3FF
    ctx->pc = 0x110fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x110fc4: 0x245052b0  addiu       $s0, $v0, 0x52B0
    ctx->pc = 0x110fc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 21168));
    // 0x110fc8: 0xac4452b0  sw          $a0, 0x52B0($v0)
    ctx->pc = 0x110fc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3B52B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B52B0u, _value); } while (0);
    // 0x110fcc: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x110fccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x3B52B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B52B4u, _value); } while (0);
    // 0x110fd0: 0xc046c14  jal         func_11B050
    ctx->pc = 0x110FD0u;
    SET_GPR_U32(ctx, 31, 0x110FD8u);
    ctx->pc = 0x110FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110FD0u;
    // 0x110fd4: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    {
        ctx->pc = 0x110FD8u;
        ps2_stubs::strncpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x110FD8u) { return; }
    ctx->pc = 0x110FD8u;
label_110fd8:
    // 0x110fd8: 0xa2000413  sb          $zero, 0x413($s0)
    ctx->pc = 0x110fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x110fdc: 0x3c09003b  lui         $t1, 0x3B
    ctx->pc = 0x110fdcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)59 << 16));
    // 0x110fe0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110fe4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x110fe4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110fe8: 0x252967c0  addiu       $t1, $t1, 0x67C0
    ctx->pc = 0x110fe8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 26560));
    // 0x110fec: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x110fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x110ff0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x110ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x110ff4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x110ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110ff8: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x110ff8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x110ffc: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x110ffcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x111000: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x111000u;
    SET_GPR_U32(ctx, 31, 0x111008u);
    ctx->pc = 0x111004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111000u;
    // 0x111004: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x111008u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x111008u) { return; }
    ctx->pc = 0x111008u;
label_111008:
    // 0x111008: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x111008u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11100c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11100Cu;
    {
        const bool branch_taken_0x11100c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x111010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11100Cu;
        // 0x111010: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11100c) {
            ctx->pc = 0x111020u;
            return;
        }
    }
    ctx->pc = 0x111014u;
    // 0x111014: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x111014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x111018: 0xae424618  sw          $v0, 0x4618($s2)
    ctx->pc = 0x111018u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 17944), GPR_U32(ctx, 2));
    // 0x11101c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x11101cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111020u;
}
