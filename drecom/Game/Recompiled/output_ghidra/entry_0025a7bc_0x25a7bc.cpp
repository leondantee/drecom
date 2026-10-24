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

// Function: entry_0025a7bc
// Address: 0x25a7bc - 0x25a804
void entry_0025a7bc_0x25a7bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025a7bc_0x25a7bc");
#endif

    ctx->pc = 0x25a7bcu;

    // 0x25a7bc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a7c0: 0x8c43036c  lw          $v1, 0x36C($v0)
    ctx->pc = 0x25a7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x25a7c4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x25a7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25a7c8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x25a7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x25a7cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25a7d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25a7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25a7d4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a7d8: 0xac4305f0  sw          $v1, 0x5F0($v0)
    ctx->pc = 0x25a7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1520), GPR_U32(ctx, 3));
    // 0x25a7dc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a7e0: 0xa4400600  sh          $zero, 0x600($v0)
    ctx->pc = 0x25a7e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1536), (uint16_t)GPR_U32(ctx, 0));
    // 0x25a7e4: 0x3003ffff  andi        $v1, $zero, 0xFFFF
    ctx->pc = 0x25a7e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x25a7e8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a7ec: 0xa44305fe  sh          $v1, 0x5FE($v0)
    ctx->pc = 0x25a7ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1534), (uint16_t)GPR_U32(ctx, 3));
    // 0x25a7f0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25a7f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25a7f4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a7f8: 0xa44305fc  sh          $v1, 0x5FC($v0)
    ctx->pc = 0x25a7f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1532), (uint16_t)GPR_U32(ctx, 3));
    // 0x25a7fc: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x25A7FCu;
    {
        const bool branch_taken_0x25a7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a7fc) {
            ctx->pc = 0x25A968u;
            return;
        }
    }
    ctx->pc = 0x25A804u;
}
