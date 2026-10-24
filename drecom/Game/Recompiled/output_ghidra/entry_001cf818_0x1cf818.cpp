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

// Function: entry_001cf818
// Address: 0x1cf818 - 0x1cf848
void entry_001cf818_0x1cf818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf818_0x1cf818");
#endif

    ctx->pc = 0x1cf818u;

    // 0x1cf818: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf81c: 0x908309e7  lbu         $v1, 0x9E7($a0)
    ctx->pc = 0x1cf81cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
    // 0x1cf820: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CF820u;
    {
        const bool branch_taken_0x1cf820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf820) {
            ctx->pc = 0x1CF848u;
            return;
        }
    }
    ctx->pc = 0x1CF828u;
    // 0x1cf828: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf82c: 0x8c8609f8  lw          $a2, 0x9F8($a0)
    ctx->pc = 0x1cf82cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2552)));
    // 0x1cf830: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf834: 0x8c6409fc  lw          $a0, 0x9FC($v1)
    ctx->pc = 0x1cf834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2556)));
    // 0x1cf838: 0x2485ff00  addiu       $a1, $a0, -0x100
    ctx->pc = 0x1cf838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967040));
    // 0x1cf83c: 0xa6082b  sltu        $at, $a1, $a2
    ctx->pc = 0x1cf83cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1cf840: 0x102001d5  beqz        $at, . + 4 + (0x1D5 << 2)
    ctx->pc = 0x1CF840u;
    {
        const bool branch_taken_0x1cf840 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf840) {
            ctx->pc = 0x1CFF98u;
            return;
        }
    }
    ctx->pc = 0x1CF848u;
}
