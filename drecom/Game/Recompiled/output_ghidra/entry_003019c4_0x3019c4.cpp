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

// Function: entry_003019c4
// Address: 0x3019c4 - 0x3019e4
void entry_003019c4_0x3019c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003019c4_0x3019c4");
#endif

    ctx->pc = 0x3019c4u;

    // 0x3019c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3019c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3019c8: 0x8c631348  lw          $v1, 0x1348($v1)
    ctx->pc = 0x3019c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4936)));
    // 0x3019cc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3019CCu;
    {
        const bool branch_taken_0x3019cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3019cc) {
            ctx->pc = 0x3019E4u;
            return;
        }
    }
    ctx->pc = 0x3019D4u;
    // 0x3019d4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3019d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3019d8: 0x8c831348  lw          $v1, 0x1348($a0)
    ctx->pc = 0x3019d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4936)));
    // 0x3019dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3019dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3019e0: 0xac831348  sw          $v1, 0x1348($a0)
    ctx->pc = 0x3019e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4936), GPR_U32(ctx, 3));
    ctx->pc = 0x3019e4u;
}
