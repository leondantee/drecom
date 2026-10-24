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

// Function: entry_00166524
// Address: 0x166524 - 0x16654c
void entry_00166524_0x166524(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166524_0x166524");
#endif

    ctx->pc = 0x166524u;

    // 0x166524: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x166524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166528: 0x944201e0  lhu         $v0, 0x1E0($v0)
    ctx->pc = 0x166528u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 480)));
    // 0x16652c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x16652cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x166530: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x166530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x166534: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x166534u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x166538: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x166538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16653c: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x16653cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x166540: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x166540u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x166544: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x166544u;
    {
        const bool branch_taken_0x166544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166544) {
            ctx->pc = 0x166620u;
            return;
        }
    }
    ctx->pc = 0x16654Cu;
}
