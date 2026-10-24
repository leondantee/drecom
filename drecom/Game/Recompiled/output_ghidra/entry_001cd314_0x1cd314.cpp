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

// Function: entry_001cd314
// Address: 0x1cd314 - 0x1cd344
void entry_001cd314_0x1cd314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd314_0x1cd314");
#endif

    ctx->pc = 0x1cd314u;

    // 0x1cd314: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd318: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1cd318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1cd31c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CD31Cu;
    {
        const bool branch_taken_0x1cd31c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd31c) {
            ctx->pc = 0x1CD344u;
            return;
        }
    }
    ctx->pc = 0x1CD324u;
    // 0x1cd324: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1cd324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd328: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x1cd328u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1cd32c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1cd32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cd330: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x1cd330u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cd334: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd338: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1cd338u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1cd33c: 0x1000020c  b           . + 4 + (0x20C << 2)
    ctx->pc = 0x1CD33Cu;
    {
        const bool branch_taken_0x1cd33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd33c) {
            ctx->pc = 0x1CDB70u;
            return;
        }
    }
    ctx->pc = 0x1CD344u;
}
