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

// Function: entry_002d8954
// Address: 0x2d8954 - 0x2d8990
void entry_002d8954_0x2d8954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d8954_0x2d8954");
#endif

    ctx->pc = 0x2d8954u;

    // 0x2d8954: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d8954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8958: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d895c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d895cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8960: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2d8960u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8964: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8968: 0xa0710001  sb          $s1, 0x1($v1)
    ctx->pc = 0x2d8968u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 17));
    // 0x2d896c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d896cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8970: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x2d8970u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8974: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x2d8974u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8978: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x2d8978u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d897c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d897cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8980: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d8980u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d8984: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2d8984u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8988: 0x1000017d  b           . + 4 + (0x17D << 2)
    ctx->pc = 0x2D8988u;
    {
        const bool branch_taken_0x2d8988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8988) {
            ctx->pc = 0x2D8F80u;
            return;
        }
    }
    ctx->pc = 0x2D8990u;
}
