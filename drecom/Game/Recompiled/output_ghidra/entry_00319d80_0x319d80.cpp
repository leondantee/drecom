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

// Function: entry_00319d80
// Address: 0x319d80 - 0x319db8
void entry_00319d80_0x319d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00319d80_0x319d80");
#endif

    ctx->pc = 0x319d80u;

    // 0x319d80: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x319d80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x319d84: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x319D84u;
    {
        const bool branch_taken_0x319d84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x319d84) {
            ctx->pc = 0x319D50u;
            return;
        }
    }
    ctx->pc = 0x319D8Cu;
    // 0x319d8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x319d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x319d90: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x319d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x319d94: 0xac6412a8  sw          $a0, 0x12A8($v1)
    ctx->pc = 0x319d94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4776), GPR_U32(ctx, 4));
    // 0x319d98: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x319d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x319d9c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x319d9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x319da0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x319da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x319da4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x319da4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x319da8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x319da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x319dac: 0xac601290  sw          $zero, 0x1290($v1)
    ctx->pc = 0x319dacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 0));
    // 0x319db0: 0x100002a9  b           . + 4 + (0x2A9 << 2)
    ctx->pc = 0x319DB0u;
    {
        const bool branch_taken_0x319db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x319db0) {
            ctx->pc = 0x31A858u;
            return;
        }
    }
    ctx->pc = 0x319DB8u;
}
