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

// Function: entry_0010a688
// Address: 0x10a688 - 0x10a698
void entry_0010a688_0x10a688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a688_0x10a688");
#endif

    ctx->pc = 0x10a688u;

    // 0x10a688: 0x1262000c  beq         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x10A688u;
    {
        const bool branch_taken_0x10a688 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x10A68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A688u;
        // 0x10a68c: 0x2e820005  sltiu       $v0, $s4, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a688) {
            ctx->pc = 0x10A6BCu;
            return;
        }
    }
    ctx->pc = 0x10A690u;
    // 0x10a690: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x10a690u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x10a694: 0x0  nop
    ctx->pc = 0x10a694u;
    // NOP
    ctx->pc = 0x10a698u;
}
