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

// Function: entry_0010c2c4
// Address: 0x10c2c4 - 0x10c340
void entry_0010c2c4_0x10c2c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c2c4_0x10c2c4");
#endif

    switch (ctx->pc) {
        case 0x10c330u: goto label_10c330;
        default: break;
    }

    ctx->pc = 0x10c2c4u;

    // 0x10c2c4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x10c2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x10c2c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10c2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10c2cc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x10c2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x10c2d0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10c2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10c2d4: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x10c2d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10c2d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x10c2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10c2dc: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x10C2DCu;
    {
        const bool branch_taken_0x10c2dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C2DCu;
        // 0x10c2e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c2dc) {
            ctx->pc = 0x10C344u;
            return;
        }
    }
    ctx->pc = 0x10C2E4u;
    // 0x10c2e4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x10c2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x10c2e8: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x10c2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x10c2ec: 0x24503b00  addiu       $s0, $v0, 0x3B00
    ctx->pc = 0x10c2ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 15104));
    // 0x10c2f0: 0xac433b00  sw          $v1, 0x3B00($v0)
    ctx->pc = 0x10c2f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3B3B00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B3B00u, _value); } while (0);
    // 0x10c2f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10c2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c2f8: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x10c2f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x3B3B04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B3B04u, _value); } while (0);
    // 0x10c2fc: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x10c2fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3B3B08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B3B08u, _value); } while (0);
    // 0x10c300: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10c300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10c304: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x10c304u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x3B3B10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B3B10u, _value); } while (0);
    // 0x10c308: 0x24843940  addiu       $a0, $a0, 0x3940
    ctx->pc = 0x10c308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14656));
    // 0x10c30c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10c30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c310: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10c310u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c314: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10c314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10c318: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x10c318u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c31c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x10c31cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x10c320: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x10c320u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c324: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x10c324u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x10c328: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x10C328u;
    SET_GPR_U32(ctx, 31, 0x10C330u);
    ctx->pc = 0x10C32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C328u;
    // 0x10c32c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x10C330u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10C330u) { return; }
    ctx->pc = 0x10C330u;
label_10c330:
    // 0x10c330: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C330u;
    {
        const bool branch_taken_0x10c330 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x10c330) {
            ctx->pc = 0x10C334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C330u;
            // 0x10c334: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C340u;
            return;
        }
    }
    ctx->pc = 0x10C338u;
    // 0x10c338: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10C338u;
    {
        const bool branch_taken_0x10c338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C338u;
        // 0x10c33c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c338) {
            ctx->pc = 0x10C344u;
            return;
        }
    }
    ctx->pc = 0x10C340u;
}
