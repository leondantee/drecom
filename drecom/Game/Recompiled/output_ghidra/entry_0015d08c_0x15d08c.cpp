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

// Function: entry_0015d08c
// Address: 0x15d08c - 0x15d0b4
void entry_0015d08c_0x15d08c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d08c_0x15d08c");
#endif

    ctx->pc = 0x15d08cu;

    // 0x15d08c: 0x93a20048  lbu         $v0, 0x48($sp)
    ctx->pc = 0x15d08cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d090: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15d090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15d094: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x15d094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x15d098: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15D098u;
    {
        const bool branch_taken_0x15d098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d098) {
            ctx->pc = 0x15D0B4u;
            return;
        }
    }
    ctx->pc = 0x15D0A0u;
    // 0x15d0a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d0a4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x15d0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15d0a8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x15d0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x15d0ac: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x15D0ACu;
    {
        const bool branch_taken_0x15d0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d0ac) {
            ctx->pc = 0x15D0E4u;
            return;
        }
    }
    ctx->pc = 0x15D0B4u;
}
