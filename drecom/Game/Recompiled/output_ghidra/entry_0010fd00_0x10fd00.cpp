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

// Function: entry_0010fd00
// Address: 0x10fd00 - 0x10fd40
void entry_0010fd00_0x10fd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fd00_0x10fd00");
#endif

    switch (ctx->pc) {
        case 0x10fd30u: goto label_10fd30;
        default: break;
    }

    ctx->pc = 0x10fd00u;

    // 0x10fd00: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x10fd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x10fd04: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x10fd04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fd08: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x10fd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x10fd0c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x10fd0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fd10: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x10fd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x10fd14: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x10fd14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fd18: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x10fd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x10fd1c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x10fd1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fd20: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x10fd20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x10fd24: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x10fd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x10fd28: 0xc04369e  jal         func_10DA78
    ctx->pc = 0x10FD28u;
    SET_GPR_U32(ctx, 31, 0x10FD30u);
    ctx->pc = 0x10FD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FD28u;
    // 0x10fd2c: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DA78u, 0x10FD28u, 0x10FD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FD30u;
label_10fd30:
    // 0x10fd30: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10FD30u;
    {
        const bool branch_taken_0x10fd30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD30u;
        // 0x10fd34: 0x3c160038  lui         $s6, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fd30) {
            ctx->pc = 0x10FD40u;
            return;
        }
    }
    ctx->pc = 0x10FD38u;
    // 0x10fd38: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x10FD38u;
    {
        const bool branch_taken_0x10fd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD38u;
        // 0x10fd3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fd38) {
            ctx->pc = 0x10FE28u;
            return;
        }
    }
    ctx->pc = 0x10FD40u;
}
