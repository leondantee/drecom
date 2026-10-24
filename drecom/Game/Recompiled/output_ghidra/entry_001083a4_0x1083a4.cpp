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

// Function: entry_001083a4
// Address: 0x1083a4 - 0x1083b8
void entry_001083a4_0x1083a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001083a4_0x1083a4");
#endif

    ctx->pc = 0x1083a4u;

    // 0x1083a4: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x1083a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1083a8: 0x8c4200e4  lw          $v0, 0xE4($v0)
    ctx->pc = 0x1083a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x1083ac: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1083acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1083b0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1083b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1083b4: 0x38500001  xori        $s0, $v0, 0x1
    ctx->pc = 0x1083b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    ctx->pc = 0x1083b8u;
}
