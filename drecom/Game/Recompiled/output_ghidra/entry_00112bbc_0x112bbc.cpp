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

// Function: entry_00112bbc
// Address: 0x112bbc - 0x112bd0
void entry_00112bbc_0x112bbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112bbc_0x112bbc");
#endif

    ctx->pc = 0x112bbcu;

    // 0x112bbc: 0x14c00027  bnez        $a2, . + 4 + (0x27 << 2)
    ctx->pc = 0x112BBCu;
    {
        const bool branch_taken_0x112bbc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x112BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112BBCu;
        // 0x112bc0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112bbc) {
            ctx->pc = 0x112C5Cu;
            return;
        }
    }
    ctx->pc = 0x112BC4u;
    // 0x112bc4: 0x2bd70000  slti        $s7, $fp, 0x0
    ctx->pc = 0x112bc4u;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x112bc8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x112bc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112bcc: 0x0  nop
    ctx->pc = 0x112bccu;
    // NOP
    ctx->pc = 0x112bd0u;
}
