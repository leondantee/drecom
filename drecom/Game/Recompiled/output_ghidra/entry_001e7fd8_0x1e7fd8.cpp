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

// Function: entry_001e7fd8
// Address: 0x1e7fd8 - 0x1e8038
void entry_001e7fd8_0x1e7fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7fd8_0x1e7fd8");
#endif

    ctx->pc = 0x1e7fd8u;

    // 0x1e7fd8: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x1e7fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1e7fdc: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x1e7fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1e7fe0: 0x839823  subu        $s3, $a0, $v1
    ctx->pc = 0x1e7fe0u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e7fe4: 0x8fa401c4  lw          $a0, 0x1C4($sp)
    ctx->pc = 0x1e7fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x1e7fe8: 0x8fa301e4  lw          $v1, 0x1E4($sp)
    ctx->pc = 0x1e7fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x1e7fec: 0x83a823  subu        $s5, $a0, $v1
    ctx->pc = 0x1e7fecu;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e7ff0: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x1e7ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1e7ff4: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x1e7ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1e7ff8: 0x83b023  subu        $s6, $a0, $v1
    ctx->pc = 0x1e7ff8u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e7ffc: 0x8fa40214  lw          $a0, 0x214($sp)
    ctx->pc = 0x1e7ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x1e8000: 0x8fa301e4  lw          $v1, 0x1E4($sp)
    ctx->pc = 0x1e8000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x1e8004: 0x83b823  subu        $s7, $a0, $v1
    ctx->pc = 0x1e8004u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e8008: 0x2b62018  mult        $a0, $s5, $s6
    ctx->pc = 0x1e8008u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1e800c: 0x2771818  mult        $v1, $s3, $s7
    ctx->pc = 0x1e800cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e8010: 0x839823  subu        $s3, $a0, $v1
    ctx->pc = 0x1e8010u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e8014: 0x6610008  bgez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E8014u;
    {
        const bool branch_taken_0x1e8014 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x1e8014) {
            ctx->pc = 0x1E8038u;
            return;
        }
    }
    ctx->pc = 0x1E801Cu;
    // 0x1e801c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e801cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e8020: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1e8020u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e8024: 0x240300a1  addiu       $v1, $zero, 0xA1
    ctx->pc = 0x1e8024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1e8028: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1e8028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1e802c: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1e802cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1e8030: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E8030u;
    {
        const bool branch_taken_0x1e8030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8030) {
            ctx->pc = 0x1E8050u;
            return;
        }
    }
    ctx->pc = 0x1E8038u;
}
