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

// Function: entry_00234654
// Address: 0x234654 - 0x2346ac
void entry_00234654_0x234654(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00234654_0x234654");
#endif

    ctx->pc = 0x234654u;

    // 0x234654: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x234654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x234658: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x234658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x23465c: 0x24710480  addiu       $s1, $v1, 0x480
    ctx->pc = 0x23465cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x234660: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x234660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x234664: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x234664u;
    {
        const bool branch_taken_0x234664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x234664) {
            ctx->pc = 0x2346ACu;
            return;
        }
    }
    ctx->pc = 0x23466Cu;
    // 0x23466c: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x23466cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x234670: 0x2483fffc  addiu       $v1, $a0, -0x4
    ctx->pc = 0x234670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x234674: 0xae230060  sw          $v1, 0x60($s1)
    ctx->pc = 0x234674u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
    // 0x234678: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x234678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x23467c: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x23467cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x234680: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x234680u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
    // 0x234684: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x234684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x234688: 0x2483fffc  addiu       $v1, $a0, -0x4
    ctx->pc = 0x234688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x23468c: 0xae230068  sw          $v1, 0x68($s1)
    ctx->pc = 0x23468cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
    // 0x234690: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x234690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x234694: 0x2c610005  sltiu       $at, $v1, 0x5
    ctx->pc = 0x234694u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x234698: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x234698u;
    {
        const bool branch_taken_0x234698 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x234698) {
            ctx->pc = 0x2346ACu;
            return;
        }
    }
    ctx->pc = 0x2346A0u;
    // 0x2346a0: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x2346a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
    // 0x2346a4: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x2346a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
    // 0x2346a8: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x2346a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
    ctx->pc = 0x2346acu;
}
