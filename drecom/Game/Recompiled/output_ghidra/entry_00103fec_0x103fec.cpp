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

// Function: entry_00103fec
// Address: 0x103fec - 0x104020
void entry_00103fec_0x103fec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103fec_0x103fec");
#endif

    ctx->pc = 0x103fecu;

    // 0x103fec: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x103fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x103ff0: 0x25e641f8  addiu       $a2, $t7, 0x41F8
    ctx->pc = 0x103ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), 16888));
    // 0x103ff4: 0x8cc50280  lw          $a1, 0x280($a2)
    ctx->pc = 0x103ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 640)));
    // 0x103ff8: 0x24070180  addiu       $a3, $zero, 0x180
    ctx->pc = 0x103ff8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x103ffc: 0x2241818  mult        $v1, $s1, $a0
    ctx->pc = 0x103ffcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x104000: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x104000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x104004: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x104004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x104008: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x104008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x10400c: 0x872018  mult        $a0, $a0, $a3
    ctx->pc = 0x10400cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x104010: 0xa34018  mult        $t0, $a1, $v1
    ctx->pc = 0x104010u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x104014: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x104014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x104018: 0x1062821  addu        $a1, $t0, $a2
    ctx->pc = 0x104018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x10401c: 0xaca20128  sw          $v0, 0x128($a1)
    ctx->pc = 0x10401cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 296), GPR_U32(ctx, 2));
    ctx->pc = 0x104020u;
}
