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

// Function: entry_00107038
// Address: 0x107038 - 0x107070
void entry_00107038_0x107038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107038_0x107038");
#endif

    ctx->pc = 0x107038u;

    // 0x107038: 0x8e823c24  lw          $v0, 0x3C24($s4)
    ctx->pc = 0x107038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 15396)));
    // 0x10703c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10703cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107040: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x107040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x107044: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x107044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x107048: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x107048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10704c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10704Cu;
    {
        const bool branch_taken_0x10704c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x107050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10704Cu;
        // 0x107050: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10704c) {
            ctx->pc = 0x107070u;
            return;
        }
    }
    ctx->pc = 0x107054u;
    // 0x107054: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x107054u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
    // 0x107058: 0x8e62449c  lw          $v0, 0x449C($s3)
    ctx->pc = 0x107058u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x38449Cu));
    // 0x10705c: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x10705cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x107060: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x107060u;
    {
        const bool branch_taken_0x107060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107060u;
        // 0x107064: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107060) {
            ctx->pc = 0x10712Cu;
            return;
        }
    }
    ctx->pc = 0x107068u;
    // 0x107068: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x107068u;
    {
        const bool branch_taken_0x107068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x107068) {
            ctx->pc = 0x107078u;
            return;
        }
    }
    ctx->pc = 0x107070u;
}
