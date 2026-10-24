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

// Function: entry_002fcc84
// Address: 0x2fcc84 - 0x2fccc0
void entry_002fcc84_0x2fcc84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fcc84_0x2fcc84");
#endif

    ctx->pc = 0x2fcc84u;

    // 0x2fcc84: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fcc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fcc88: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x2fcc88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fcc8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2fcc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fcc90: 0x14a4000b  bne         $a1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2FCC90u;
    {
        const bool branch_taken_0x2fcc90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x2fcc90) {
            ctx->pc = 0x2FCCC0u;
            return;
        }
    }
    ctx->pc = 0x2FCC98u;
    // 0x2fcc98: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fcc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fcc9c: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x2fcc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fcca0: 0x28810005  slti        $at, $a0, 0x5
    ctx->pc = 0x2fcca0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2fcca4: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FCCA4u;
    {
        const bool branch_taken_0x2fcca4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fcca4) {
            ctx->pc = 0x2FCCC0u;
            return;
        }
    }
    ctx->pc = 0x2FCCACu;
    // 0x2fccac: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fccacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fccb0: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x2fccb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fccb4: 0x28830007  slti        $v1, $a0, 0x7
    ctx->pc = 0x2fccb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2fccb8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2FCCB8u;
    {
        const bool branch_taken_0x2fccb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fccb8) {
            ctx->pc = 0x2FCCFCu;
            return;
        }
    }
    ctx->pc = 0x2FCCC0u;
}
