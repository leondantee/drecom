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

// Function: entry_0010e0c0
// Address: 0x10e0c0 - 0x10e120
void entry_0010e0c0_0x10e0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e0c0_0x10e0c0");
#endif

    switch (ctx->pc) {
        case 0x10e104u: goto label_10e104;
        default: break;
    }

    ctx->pc = 0x10e0c0u;

    // 0x10e0c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10e0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10e0c4: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x10e0c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x10e0c8: 0xae0245f8  sw          $v0, 0x45F8($s0)
    ctx->pc = 0x10e0c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3845F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3845F8u, _value); } while (0);
    // 0x10e0cc: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x10e0ccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x10e0d0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10e0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10e0d4: 0x3c0b0011  lui         $t3, 0x11
    ctx->pc = 0x10e0d4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)17 << 16));
    // 0x10e0d8: 0xae2245c4  sw          $v0, 0x45C4($s1)
    ctx->pc = 0x10e0d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3845C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3845C4u, _value); } while (0);
    // 0x10e0dc: 0x24843e80  addiu       $a0, $a0, 0x3E80
    ctx->pc = 0x10e0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16000));
    // 0x10e0e0: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x10e0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
    // 0x10e0e4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x10e0e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e0e8: 0x256bd378  addiu       $t3, $t3, -0x2C88
    ctx->pc = 0x10e0e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294955896));
    // 0x10e0ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10e0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10e0f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10e0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10e0f4: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x10e0f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x10e0f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10e0f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e0fc: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x10E0FCu;
    SET_GPR_U32(ctx, 31, 0x10E104u);
    ctx->pc = 0x10E100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E0FCu;
    // 0x10e100: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x10E104u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10E104u) { return; }
    ctx->pc = 0x10E104u;
label_10e104:
    // 0x10e104: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10E104u;
    {
        const bool branch_taken_0x10e104 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x10e104) {
            ctx->pc = 0x10E108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E104u;
            // 0x10e108: 0x8e6245a8  lw          $v0, 0x45A8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 17832)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E128u;
            return;
        }
    }
    ctx->pc = 0x10E10Cu;
    // 0x10e10c: 0xae0045f8  sw          $zero, 0x45F8($s0)
    ctx->pc = 0x10e10cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17912), GPR_U32(ctx, 0));
    // 0x10e110: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10e110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10e114: 0xae2045c4  sw          $zero, 0x45C4($s1)
    ctx->pc = 0x10e114u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 17860), GPR_U32(ctx, 0));
    // 0x10e118: 0xc084a90  jal         func_212A40
    ctx->pc = 0x10E118u;
    SET_GPR_U32(ctx, 31, 0x10E120u);
    ctx->pc = 0x10E11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E118u;
    // 0x10e11c: 0x8c4445b8  lw          $a0, 0x45B8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17848)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x10E120u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10E120u) { return; }
    ctx->pc = 0x10E120u;
}
