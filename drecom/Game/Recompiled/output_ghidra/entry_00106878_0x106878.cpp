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

// Function: entry_00106878
// Address: 0x106878 - 0x1068a0
void entry_00106878_0x106878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106878_0x106878");
#endif

    ctx->pc = 0x106878u;

    // 0x106878: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x106878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x10687c: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x10687cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x106880: 0x246341f8  addiu       $v1, $v1, 0x41F8
    ctx->pc = 0x106880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16888));
    // 0x106884: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x106884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106888: 0x8c620280  lw          $v0, 0x280($v1)
    ctx->pc = 0x106888u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x384478u));
    // 0x10688c: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x10688cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x106890: 0x453018  mult        $a2, $v0, $a1
    ctx->pc = 0x106890u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x106894: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x106894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x106898: 0xac44013c  sw          $a0, 0x13C($v0)
    ctx->pc = 0x106898u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 4));
    // 0x10689c: 0x8fc23d08  lw          $v0, 0x3D08($fp)
    ctx->pc = 0x10689cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 15624)));
    ctx->pc = 0x1068a0u;
}
