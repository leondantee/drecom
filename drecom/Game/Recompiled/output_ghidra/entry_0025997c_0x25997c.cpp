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

// Function: entry_0025997c
// Address: 0x25997c - 0x2599c4
void entry_0025997c_0x25997c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025997c_0x25997c");
#endif

    ctx->pc = 0x25997cu;

    // 0x25997c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25997cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259980: 0x8c43036c  lw          $v1, 0x36C($v0)
    ctx->pc = 0x259980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x259984: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x259984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x259988: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x259988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x25998c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25998cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259990: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x259990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x259994: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259998: 0xac4305f0  sw          $v1, 0x5F0($v0)
    ctx->pc = 0x259998u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1520), GPR_U32(ctx, 3));
    // 0x25999c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25999cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2599a0: 0xa4400600  sh          $zero, 0x600($v0)
    ctx->pc = 0x2599a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1536), (uint16_t)GPR_U32(ctx, 0));
    // 0x2599a4: 0x3003ffff  andi        $v1, $zero, 0xFFFF
    ctx->pc = 0x2599a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x2599a8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2599a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2599ac: 0xa44305fe  sh          $v1, 0x5FE($v0)
    ctx->pc = 0x2599acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1534), (uint16_t)GPR_U32(ctx, 3));
    // 0x2599b0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2599b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2599b4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2599b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2599b8: 0xa44305fc  sh          $v1, 0x5FC($v0)
    ctx->pc = 0x2599b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1532), (uint16_t)GPR_U32(ctx, 3));
    // 0x2599bc: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2599BCu;
    {
        const bool branch_taken_0x2599bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2599bc) {
            ctx->pc = 0x259B28u;
            return;
        }
    }
    ctx->pc = 0x2599C4u;
}
