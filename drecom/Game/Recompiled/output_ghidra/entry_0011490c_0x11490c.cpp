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

// Function: entry_0011490c
// Address: 0x11490c - 0x114928
void entry_0011490c_0x11490c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011490c_0x11490c");
#endif

    ctx->pc = 0x11490cu;

    // 0x11490c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11490cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x114910: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x114910u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x114914: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x114914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x114918: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x114918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x11491c: 0x72102b  sltu        $v0, $v1, $s2
    ctx->pc = 0x11491cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x114920: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x114920u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x114924: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x114924u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114928u;
}
