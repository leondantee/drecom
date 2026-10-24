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

// Function: entry_0010a5bc
// Address: 0x10a5bc - 0x10a5ec
void entry_0010a5bc_0x10a5bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a5bc_0x10a5bc");
#endif

    ctx->pc = 0x10a5bcu;

    // 0x10a5bc: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x10a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x10a5c0: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x10a5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x10a5c4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x10a5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x10a5c8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x10a5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x10a5cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10a5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10a5d0: 0x46001b  divu        $zero, $v0, $a2
    ctx->pc = 0x10a5d0u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x10a5d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10a5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10a5d8: 0x1012  mflo        $v0
    ctx->pc = 0x10a5d8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x10a5dc: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x10a5dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x10a5e0: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x10a5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x10a5e4: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x10a5e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x10a5e8: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x10A5E8u;
    {
        const bool branch_taken_0x10a5e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a5e8) {
            ctx->pc = 0x10A5F8u;
            return;
        }
    }
    ctx->pc = 0x10A5F0u;
}
