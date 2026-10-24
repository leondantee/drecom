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

// Function: entry_00296a38
// Address: 0x296a38 - 0x296a6c
void entry_00296a38_0x296a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00296a38_0x296a38");
#endif

    ctx->pc = 0x296a38u;

    // 0x296a38: 0x1620ffcf  bnez        $s1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x296A38u;
    {
        const bool branch_taken_0x296a38 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x296a38) {
            ctx->pc = 0x296978u;
            return;
        }
    }
    ctx->pc = 0x296A40u;
    // 0x296a40: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x296a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x296a44: 0x8ca46998  lw          $a0, 0x6998($a1)
    ctx->pc = 0x296a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27032)));
    // 0x296a48: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296a4c: 0xaca36998  sw          $v1, 0x6998($a1)
    ctx->pc = 0x296a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27032), GPR_U32(ctx, 3));
    // 0x296a50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x296a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x296a54: 0x8c63699c  lw          $v1, 0x699C($v1)
    ctx->pc = 0x296a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27036)));
    // 0x296a58: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x296a58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x296a5c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x296A5Cu;
    {
        const bool branch_taken_0x296a5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x296a5c) {
            ctx->pc = 0x296A6Cu;
            return;
        }
    }
    ctx->pc = 0x296A64u;
    // 0x296a64: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x296a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x296a68: 0xac606998  sw          $zero, 0x6998($v1)
    ctx->pc = 0x296a68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27032), GPR_U32(ctx, 0));
    ctx->pc = 0x296a6cu;
}
