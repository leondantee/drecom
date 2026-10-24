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

// Function: entry_0010d2c8
// Address: 0x10d2c8 - 0x10d344
void entry_0010d2c8_0x10d2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d2c8_0x10d2c8");
#endif

    switch (ctx->pc) {
        case 0x10d2e0u: goto label_10d2e0;
        case 0x10d2f8u: goto label_10d2f8;
        case 0x10d32cu: goto label_10d32c;
        case 0x10d33cu: goto label_10d33c;
        default: break;
    }

    ctx->pc = 0x10d2c8u;

    // 0x10d2c8: 0x8e8445b4  lw          $a0, 0x45B4($s4)
    ctx->pc = 0x10d2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 17844)));
    // 0x10d2cc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x10d2ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d2d0: 0x1480001c  bnez        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x10D2D0u;
    {
        const bool branch_taken_0x10d2d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D2D0u;
        // 0x10d2d4: 0xffbf0050  sd          $ra, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d2d0) {
            ctx->pc = 0x10D344u;
            return;
        }
    }
    ctx->pc = 0x10D2D8u;
    // 0x10d2d8: 0xc084a44  jal         func_212910
    ctx->pc = 0x10D2D8u;
    SET_GPR_U32(ctx, 31, 0x10D2E0u);
    ctx->pc = 0x212910u;
    {
        ctx->pc = 0x10D2E0u;
        ps2_syscalls::GetThreadId(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10D2E0u) { return; }
    ctx->pc = 0x10D2E0u;
label_10d2e0:
    // 0x10d2e0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x10d2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x10d2e4: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x10d2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x10d2e8: 0xac623b80  sw          $v0, 0x3B80($v1)
    ctx->pc = 0x10d2e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3B3B80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B3B80u, _value); } while (0);
    // 0x10d2ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10d2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d2f0: 0xc084a48  jal         func_212920
    ctx->pc = 0x10D2F0u;
    SET_GPR_U32(ctx, 31, 0x10D2F8u);
    ctx->pc = 0x10D2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D2F0u;
    // 0x10d2f4: 0x24a53b88  addiu       $a1, $a1, 0x3B88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212920u;
    {
        ctx->pc = 0x10D2F8u;
        ps2_syscalls::ReferThreadStatus(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10D2F8u) { return; }
    ctx->pc = 0x10D2F8u;
label_10d2f8:
    // 0x10d2f8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x10d2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x10d2fc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x10d2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x10d300: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x10d300u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
    // 0x10d304: 0x24633bb8  addiu       $v1, $v1, 0x3BB8
    ctx->pc = 0x10d304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15288));
    // 0x10d308: 0x2442ac70  addiu       $v0, $v0, -0x5390
    ctx->pc = 0x10d308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945904));
    // 0x10d30c: 0x24a5d1d8  addiu       $a1, $a1, -0x2E28
    ctx->pc = 0x10d30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955480));
    // 0x10d310: 0xac70000c  sw          $s0, 0xC($v1)
    ctx->pc = 0x10d310u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x3B3BC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B3BC4u, _value); } while (0);
    // 0x10d314: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x10d314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d318: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x10d318u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3B3BC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B3BC8u, _value); } while (0);
    // 0x10d31c: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x10d31cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3B3BBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B3BBCu, _value); } while (0);
    // 0x10d320: 0xac720008  sw          $s2, 0x8($v1)
    ctx->pc = 0x10d320u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x3B3BC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B3BC0u, _value); } while (0);
    // 0x10d324: 0xc084a08  jal         func_212820
    ctx->pc = 0x10D324u;
    SET_GPR_U32(ctx, 31, 0x10D32Cu);
    ctx->pc = 0x10D328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D324u;
    // 0x10d328: 0xac710014  sw          $s1, 0x14($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212820u;
    {
        ctx->pc = 0x10D32Cu;
        ps2_syscalls::CreateThread(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10D32Cu) { return; }
    ctx->pc = 0x10D32Cu;
label_10d32c:
    // 0x10d32c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10d32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d330: 0xae8245b4  sw          $v0, 0x45B4($s4)
    ctx->pc = 0x10d330u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 17844), GPR_U32(ctx, 2));
    // 0x10d334: 0xc084a10  jal         func_212840
    ctx->pc = 0x10D334u;
    SET_GPR_U32(ctx, 31, 0x10D33Cu);
    ctx->pc = 0x10D338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D334u;
    // 0x10d338: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212840u;
    {
        ctx->pc = 0x10D33Cu;
        ps2_syscalls::StartThread(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10D33Cu) { return; }
    ctx->pc = 0x10D33Cu;
label_10d33c:
    // 0x10d33c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10D33Cu;
    {
        const bool branch_taken_0x10d33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D33Cu;
        // 0x10d340: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d33c) {
            ctx->pc = 0x10D354u;
            return;
        }
    }
    ctx->pc = 0x10D344u;
}
