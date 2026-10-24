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

// Function: entry_0016f050
// Address: 0x16f050 - 0x16f09c
void entry_0016f050_0x16f050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f050_0x16f050");
#endif

    ctx->pc = 0x16f050u;

    // 0x16f050: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x16f050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x16f054: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x16f054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f058: 0xa2020012  sb          $v0, 0x12($s0)
    ctx->pc = 0x16f058u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x16f05c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x16f05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16f060: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x16f060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x16f064: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x16f064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x16f068: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x16f068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x16f06c: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x16f06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x16f070: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x16f070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
    // 0x16f074: 0xae1e00a4  sw          $fp, 0xA4($s0)
    ctx->pc = 0x16f074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 30));
    // 0x16f078: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x16f078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16f07c: 0xae020368  sw          $v0, 0x368($s0)
    ctx->pc = 0x16f07cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 2));
    // 0x16f080: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x16f080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x16f084: 0xae020360  sw          $v0, 0x360($s0)
    ctx->pc = 0x16f084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 2));
    // 0x16f088: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16f088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16f08c: 0x2451bbc8  addiu       $s1, $v0, -0x4438
    ctx->pc = 0x16f08cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949832));
    // 0x16f090: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x16f090u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16f094: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16F094u;
    {
        const bool branch_taken_0x16f094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f094) {
            ctx->pc = 0x16F0B8u;
            return;
        }
    }
    ctx->pc = 0x16F09Cu;
}
