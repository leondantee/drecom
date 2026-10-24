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

// Function: entry_00122e38
// Address: 0x122e38 - 0x122ea4
void entry_00122e38_0x122e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122e38_0x122e38");
#endif

    ctx->pc = 0x122e38u;

    // 0x122e38: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x122e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x122e3c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x122e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x122e40: 0x3c026ff7  lui         $v0, 0x6FF7
    ctx->pc = 0x122e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28663 << 16));
    // 0x122e44: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x122e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x122e48: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x122e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x122e4c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x122e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x122e50: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x122e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x122e54: 0x2402ff7b  addiu       $v0, $zero, -0x85
    ctx->pc = 0x122e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967163));
    // 0x122e58: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x122e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x122e5c: 0xae620020  sw          $v0, 0x20($s3)
    ctx->pc = 0x122e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
    // 0x122e60: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x122e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x122e64: 0x8c83121c  lw          $v1, 0x121C($a0)
    ctx->pc = 0x122e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4636)));
    // 0x122e68: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x122e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x122e6c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x122e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x122e70: 0xac82121c  sw          $v0, 0x121C($a0)
    ctx->pc = 0x122e70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4636), GPR_U32(ctx, 2));
    // 0x122e74: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x122e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x122e78: 0x8c83121c  lw          $v1, 0x121C($a0)
    ctx->pc = 0x122e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4636)));
    // 0x122e7c: 0x3c02e7ff  lui         $v0, 0xE7FF
    ctx->pc = 0x122e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59391 << 16));
    // 0x122e80: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x122e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x122e84: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x122e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x122e88: 0xac82121c  sw          $v0, 0x121C($a0)
    ctx->pc = 0x122e88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4636), GPR_U32(ctx, 2));
    // 0x122e8c: 0x86620092  lh          $v0, 0x92($s3)
    ctx->pc = 0x122e8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
    // 0x122e90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x122E90u;
    {
        const bool branch_taken_0x122e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x122e90) {
            ctx->pc = 0x122EA4u;
            return;
        }
    }
    ctx->pc = 0x122E98u;
    // 0x122e98: 0x86620092  lh          $v0, 0x92($s3)
    ctx->pc = 0x122e98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
    // 0x122e9c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x122e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x122ea0: 0xa6620092  sh          $v0, 0x92($s3)
    ctx->pc = 0x122ea0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 146), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x122ea4u;
}
