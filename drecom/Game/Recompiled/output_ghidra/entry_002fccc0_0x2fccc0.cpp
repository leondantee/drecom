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

// Function: entry_002fccc0
// Address: 0x2fccc0 - 0x2fccfc
void entry_002fccc0_0x2fccc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fccc0_0x2fccc0");
#endif

    ctx->pc = 0x2fccc0u;

    // 0x2fccc0: 0x8fa50178  lw          $a1, 0x178($sp)
    ctx->pc = 0x2fccc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fccc4: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x2fccc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2fccc8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2fccc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fcccc: 0x14c30013  bne         $a2, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2FCCCCu;
    {
        const bool branch_taken_0x2fcccc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fcccc) {
            ctx->pc = 0x2FCD1Cu;
            return;
        }
    }
    ctx->pc = 0x2FCCD4u;
    // 0x2fccd4: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2fccd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fccd8: 0x8c8300d4  lw          $v1, 0xD4($a0)
    ctx->pc = 0x2fccd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x2fccdc: 0x2861000c  slti        $at, $v1, 0xC
    ctx->pc = 0x2fccdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2fcce0: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x2FCCE0u;
    {
        const bool branch_taken_0x2fcce0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fcce0) {
            ctx->pc = 0x2FCD1Cu;
            return;
        }
    }
    ctx->pc = 0x2FCCE8u;
    // 0x2fcce8: 0x8fa50178  lw          $a1, 0x178($sp)
    ctx->pc = 0x2fcce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fccec: 0x8ca400d4  lw          $a0, 0xD4($a1)
    ctx->pc = 0x2fccecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x2fccf0: 0x2881000e  slti        $at, $a0, 0xE
    ctx->pc = 0x2fccf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x2fccf4: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FCCF4u;
    {
        const bool branch_taken_0x2fccf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fccf4) {
            ctx->pc = 0x2FCD1Cu;
            return;
        }
    }
    ctx->pc = 0x2FCCFCu;
}
