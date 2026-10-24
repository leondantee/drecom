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

// Function: caseD_4
// Address: 0x12b500 - 0x12b528
void caseD_4_0x12b500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x12b500");
#endif

    ctx->pc = 0x12b500u;

    // 0x12b500: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b504: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x12b504u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x12b508: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12b508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12b50c: 0x3043f000  andi        $v1, $v0, 0xF000
    ctx->pc = 0x12b50cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x12b510: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x12b510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12b514: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B514u;
    {
        const bool branch_taken_0x12b514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12b514) {
            ctx->pc = 0x12B528u;
            return;
        }
    }
    ctx->pc = 0x12B51Cu;
    // 0x12b51c: 0x2411003d  addiu       $s1, $zero, 0x3D
    ctx->pc = 0x12b51cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x12b520: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12B520u;
    {
        const bool branch_taken_0x12b520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b520) {
            ctx->pc = 0x12B52Cu;
            return;
        }
    }
    ctx->pc = 0x12B528u;
}
