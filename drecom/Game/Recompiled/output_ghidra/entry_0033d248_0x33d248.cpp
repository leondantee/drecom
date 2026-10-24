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

// Function: entry_0033d248
// Address: 0x33d248 - 0x33d290
void entry_0033d248_0x33d248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033d248_0x33d248");
#endif

    ctx->pc = 0x33d248u;

    // 0x33d248: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x33d248u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x33d24c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x33d24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x33d250: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33d250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x33d254: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x33D254u;
    {
        const bool branch_taken_0x33d254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d254) {
            ctx->pc = 0x33D290u;
            return;
        }
    }
    ctx->pc = 0x33D25Cu;
    // 0x33d25c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x33d25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x33d260: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x33d260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33d264: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x33d264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x33d268: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33D268u;
    {
        const bool branch_taken_0x33d268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d268) {
            ctx->pc = 0x33D290u;
            return;
        }
    }
    ctx->pc = 0x33D270u;
    // 0x33d270: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x33d270u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x33d274: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x33d274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33d278: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33d278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33d27c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33D27Cu;
    {
        const bool branch_taken_0x33d27c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33d27c) {
            ctx->pc = 0x33D290u;
            return;
        }
    }
    ctx->pc = 0x33D284u;
    // 0x33d284: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x33d284u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x33d288: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x33D288u;
    {
        const bool branch_taken_0x33d288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d288) {
            ctx->pc = 0x33D2B0u;
            return;
        }
    }
    ctx->pc = 0x33D290u;
}
