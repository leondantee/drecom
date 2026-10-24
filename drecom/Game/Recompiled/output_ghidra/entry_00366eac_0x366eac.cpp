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

// Function: entry_00366eac
// Address: 0x366eac - 0x366ed4
void entry_00366eac_0x366eac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00366eac_0x366eac");
#endif

    ctx->pc = 0x366eacu;

    // 0x366eac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x366eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x366eb0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x366eb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x366eb4: 0x10600062  beqz        $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x366EB4u;
    {
        const bool branch_taken_0x366eb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x366eb4) {
            ctx->pc = 0x367040u;
            return;
        }
    }
    ctx->pc = 0x366EBCu;
    // 0x366ebc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x366ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x366ec0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x366ec0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x366ec4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x366ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x366ec8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x366ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x366ecc: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x366ECCu;
    {
        const bool branch_taken_0x366ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x366ecc) {
            ctx->pc = 0x367040u;
            return;
        }
    }
    ctx->pc = 0x366ED4u;
}
