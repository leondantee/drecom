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

// Function: entry_001af8b0
// Address: 0x1af8b0 - 0x1af8d8
void entry_001af8b0_0x1af8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af8b0_0x1af8b0");
#endif

    ctx->pc = 0x1af8b0u;

    // 0x1af8b0: 0x8ea30030  lw          $v1, 0x30($s5)
    ctx->pc = 0x1af8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1af8b4: 0xaec3000c  sw          $v1, 0xC($s6)
    ctx->pc = 0x1af8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 3));
    // 0x1af8b8: 0x8eb00028  lw          $s0, 0x28($s5)
    ctx->pc = 0x1af8b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x1af8bc: 0x8ef30a68  lw          $s3, 0xA68($s7)
    ctx->pc = 0x1af8bcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x1af8c0: 0x72609628  paddub      $s2, $s3, $zero
    ctx->pc = 0x1af8c0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1af8c4: 0x96c30006  lhu         $v1, 0x6($s6)
    ctx->pc = 0x1af8c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x1af8c8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1af8c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1af8cc: 0x17c30002  bne         $fp, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF8CCu;
    {
        const bool branch_taken_0x1af8cc = (GPR_U64(ctx, 30) != GPR_U64(ctx, 3));
        if (branch_taken_0x1af8cc) {
            ctx->pc = 0x1AF8D8u;
            return;
        }
    }
    ctx->pc = 0x1AF8D4u;
    // 0x1af8d4: 0xaed00008  sw          $s0, 0x8($s6)
    ctx->pc = 0x1af8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 16));
    ctx->pc = 0x1af8d8u;
}
