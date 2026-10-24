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

// Function: entry_00108474
// Address: 0x108474 - 0x108498
void entry_00108474_0x108474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108474_0x108474");
#endif

    ctx->pc = 0x108474u;

    // 0x108474: 0x8d820010  lw          $v0, 0x10($t4)
    ctx->pc = 0x108474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x108478: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x108478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x10847c: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x10847cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x108480: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x108480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x108484: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x108484u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x108488: 0x837018  mult        $t6, $a0, $v1
    ctx->pc = 0x108488u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x10848c: 0x70455818  mult1       $t3, $v0, $a1
    ctx->pc = 0x10848cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x108490: 0x24190002  addiu       $t9, $zero, 0x2
    ctx->pc = 0x108490u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x108494: 0xb5103  sra         $t2, $t3, 4
    ctx->pc = 0x108494u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 11), 4));
    ctx->pc = 0x108498u;
}
