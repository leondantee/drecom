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

// Function: entry_001e5fb0
// Address: 0x1e5fb0 - 0x1e6010
void entry_001e5fb0_0x1e5fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5fb0_0x1e5fb0");
#endif

    ctx->pc = 0x1e5fb0u;

    // 0x1e5fb0: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x1e5fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1e5fb4: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x1e5fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1e5fb8: 0x839023  subu        $s2, $a0, $v1
    ctx->pc = 0x1e5fb8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e5fbc: 0x8fa40164  lw          $a0, 0x164($sp)
    ctx->pc = 0x1e5fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x1e5fc0: 0x8fa30154  lw          $v1, 0x154($sp)
    ctx->pc = 0x1e5fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1e5fc4: 0x83a023  subu        $s4, $a0, $v1
    ctx->pc = 0x1e5fc4u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e5fc8: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1e5fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1e5fcc: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x1e5fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1e5fd0: 0x83a823  subu        $s5, $a0, $v1
    ctx->pc = 0x1e5fd0u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e5fd4: 0x8fa40184  lw          $a0, 0x184($sp)
    ctx->pc = 0x1e5fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x1e5fd8: 0x8fa30154  lw          $v1, 0x154($sp)
    ctx->pc = 0x1e5fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1e5fdc: 0x83b023  subu        $s6, $a0, $v1
    ctx->pc = 0x1e5fdcu;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e5fe0: 0x2952018  mult        $a0, $s4, $s5
    ctx->pc = 0x1e5fe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1e5fe4: 0x2561818  mult        $v1, $s2, $s6
    ctx->pc = 0x1e5fe4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e5fe8: 0x839023  subu        $s2, $a0, $v1
    ctx->pc = 0x1e5fe8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e5fec: 0x6410008  bgez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E5FECu;
    {
        const bool branch_taken_0x1e5fec = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1e5fec) {
            ctx->pc = 0x1E6010u;
            return;
        }
    }
    ctx->pc = 0x1E5FF4u;
    // 0x1e5ff4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e5ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e5ff8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1e5ff8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e5ffc: 0x240300a1  addiu       $v1, $zero, 0xA1
    ctx->pc = 0x1e5ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1e6000: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1e6000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1e6004: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1e6004u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1e6008: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E6008u;
    {
        const bool branch_taken_0x1e6008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6008) {
            ctx->pc = 0x1E6028u;
            return;
        }
    }
    ctx->pc = 0x1E6010u;
}
