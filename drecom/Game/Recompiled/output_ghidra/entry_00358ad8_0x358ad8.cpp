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

// Function: entry_00358ad8
// Address: 0x358ad8 - 0x358b04
void entry_00358ad8_0x358ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00358ad8_0x358ad8");
#endif

    ctx->pc = 0x358ad8u;

    // 0x358ad8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x358ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x358adc: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x358adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x358ae0: 0x28610033  slti        $at, $v1, 0x33
    ctx->pc = 0x358ae0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x358ae4: 0x14200010  bnez        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x358AE4u;
    {
        const bool branch_taken_0x358ae4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x358ae4) {
            ctx->pc = 0x358B28u;
            return;
        }
    }
    ctx->pc = 0x358AECu;
    // 0x358aec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x358aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x358af0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x358af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x358af4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x358af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x358af8: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x358af8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x358afc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x358AFCu;
    {
        const bool branch_taken_0x358afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358afc) {
            ctx->pc = 0x358B28u;
            return;
        }
    }
    ctx->pc = 0x358B04u;
}
