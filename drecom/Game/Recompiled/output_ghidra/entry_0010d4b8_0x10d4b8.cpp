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

// Function: entry_0010d4b8
// Address: 0x10d4b8 - 0x10d4e8
void entry_0010d4b8_0x10d4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d4b8_0x10d4b8");
#endif

    switch (ctx->pc) {
        case 0x10d4e0u: goto label_10d4e0;
        default: break;
    }

    ctx->pc = 0x10d4b8u;

    // 0x10d4b8: 0x8c4345b4  lw          $v1, 0x45B4($v0)
    ctx->pc = 0x10d4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17844)));
    // 0x10d4bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10d4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10d4c0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x10D4C0u;
    {
        const bool branch_taken_0x10d4c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D4C0u;
        // 0x10d4c4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d4c0) {
            ctx->pc = 0x10D4E8u;
            return;
        }
    }
    ctx->pc = 0x10D4C8u;
    // 0x10d4c8: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x10d4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x10d4cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10d4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10d4d0: 0xac6245f8  sw          $v0, 0x45F8($v1)
    ctx->pc = 0x10d4d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3845F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3845F8u, _value); } while (0);
    // 0x10d4d4: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x10d4d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x10d4d8: 0xc084a90  jal         func_212A40
    ctx->pc = 0x10D4D8u;
    SET_GPR_U32(ctx, 31, 0x10D4E0u);
    ctx->pc = 0x10D4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D4D8u;
    // 0x10d4dc: 0x8e0445c0  lw          $a0, 0x45C0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17856)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x10D4E0u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10D4E0u) { return; }
    ctx->pc = 0x10D4E0u;
label_10d4e0:
    // 0x10d4e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10D4E0u;
    {
        const bool branch_taken_0x10d4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D4E0u;
        // 0x10d4e4: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d4e0) {
            ctx->pc = 0x10D4F0u;
            return;
        }
    }
    ctx->pc = 0x10D4E8u;
}
