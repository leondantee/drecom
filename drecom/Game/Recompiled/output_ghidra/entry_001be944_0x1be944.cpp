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

// Function: entry_001be944
// Address: 0x1be944 - 0x1be978
void entry_001be944_0x1be944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be944_0x1be944");
#endif

    ctx->pc = 0x1be944u;

    // 0x1be944: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1be944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be948: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1be948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1be94c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1be94cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1be950: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1be950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1be954: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE954u;
    {
        const bool branch_taken_0x1be954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be954) {
            ctx->pc = 0x1BE978u;
            return;
        }
    }
    ctx->pc = 0x1BE95Cu;
    // 0x1be95c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1be95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be960: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1be960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be964: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1be964u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1be968: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1be968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be96c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1be96cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1be970: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1BE970u;
    {
        const bool branch_taken_0x1be970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be970) {
            ctx->pc = 0x1BE9BCu;
            return;
        }
    }
    ctx->pc = 0x1BE978u;
}
