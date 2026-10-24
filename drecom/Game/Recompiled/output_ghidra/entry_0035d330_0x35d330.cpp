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

// Function: entry_0035d330
// Address: 0x35d330 - 0x35d368
void entry_0035d330_0x35d330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035d330_0x35d330");
#endif

    ctx->pc = 0x35d330u;

    // 0x35d330: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x35d330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x35d334: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x35d334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x35d338: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x35d338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35d33c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35d33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35d340: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x35d340u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x35d344: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35d344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35d348: 0x3c010007  lui         $at, 0x7
    ctx->pc = 0x35d348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)7 << 16));
    // 0x35d34c: 0x3421fff1  ori         $at, $at, 0xFFF1
    ctx->pc = 0x35d34cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65521);
    // 0x35d350: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x35d350u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x35d354: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x35D354u;
    {
        const bool branch_taken_0x35d354 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x35d354) {
            ctx->pc = 0x35D368u;
            return;
        }
    }
    ctx->pc = 0x35D35Cu;
    // 0x35d35c: 0x2415000f  addiu       $s5, $zero, 0xF
    ctx->pc = 0x35d35cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x35d360: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x35D360u;
    {
        const bool branch_taken_0x35d360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d360) {
            ctx->pc = 0x35D36Cu;
            return;
        }
    }
    ctx->pc = 0x35D368u;
}
