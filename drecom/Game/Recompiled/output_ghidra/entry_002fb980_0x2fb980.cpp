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

// Function: entry_002fb980
// Address: 0x2fb980 - 0x2fb9bc
void entry_002fb980_0x2fb980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fb980_0x2fb980");
#endif

    ctx->pc = 0x2fb980u;

    // 0x2fb980: 0x8fa50178  lw          $a1, 0x178($sp)
    ctx->pc = 0x2fb980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb984: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2fb984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2fb988: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fb988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fb98c: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2FB98Cu;
    {
        const bool branch_taken_0x2fb98c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fb98c) {
            ctx->pc = 0x2FB9BCu;
            return;
        }
    }
    ctx->pc = 0x2FB994u;
    // 0x2fb994: 0x8fb60178  lw          $s6, 0x178($sp)
    ctx->pc = 0x2fb994u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb998: 0x8ec300d4  lw          $v1, 0xD4($s6)
    ctx->pc = 0x2fb998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 212)));
    // 0x2fb99c: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x2fb99cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2fb9a0: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FB9A0u;
    {
        const bool branch_taken_0x2fb9a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb9a0) {
            ctx->pc = 0x2FB9BCu;
            return;
        }
    }
    ctx->pc = 0x2FB9A8u;
    // 0x2fb9a8: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fb9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb9ac: 0x8c7600d4  lw          $s6, 0xD4($v1)
    ctx->pc = 0x2fb9acu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fb9b0: 0x2ac60009  slti        $a2, $s6, 0x9
    ctx->pc = 0x2fb9b0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2fb9b4: 0x14c00010  bnez        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x2FB9B4u;
    {
        const bool branch_taken_0x2fb9b4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb9b4) {
            ctx->pc = 0x2FB9F8u;
            return;
        }
    }
    ctx->pc = 0x2FB9BCu;
}
