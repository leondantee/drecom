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

// Function: entry_002fc2f8
// Address: 0x2fc2f8 - 0x2fc334
void entry_002fc2f8_0x2fc2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fc2f8_0x2fc2f8");
#endif

    ctx->pc = 0x2fc2f8u;

    // 0x2fc2f8: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2fc2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc2fc: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x2fc2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2fc300: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fc300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fc304: 0x14a3000b  bne         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2FC304u;
    {
        const bool branch_taken_0x2fc304 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fc304) {
            ctx->pc = 0x2FC334u;
            return;
        }
    }
    ctx->pc = 0x2FC30Cu;
    // 0x2fc30c: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fc30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc310: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x2fc310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fc314: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x2fc314u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2fc318: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FC318u;
    {
        const bool branch_taken_0x2fc318 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc318) {
            ctx->pc = 0x2FC334u;
            return;
        }
    }
    ctx->pc = 0x2FC320u;
    // 0x2fc320: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fc320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc324: 0x8c6600d4  lw          $a2, 0xD4($v1)
    ctx->pc = 0x2fc324u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fc328: 0x28c3000d  slti        $v1, $a2, 0xD
    ctx->pc = 0x2fc328u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x2fc32c: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2FC32Cu;
    {
        const bool branch_taken_0x2fc32c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc32c) {
            ctx->pc = 0x2FC370u;
            return;
        }
    }
    ctx->pc = 0x2FC334u;
}
