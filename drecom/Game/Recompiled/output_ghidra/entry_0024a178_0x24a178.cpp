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

// Function: entry_0024a178
// Address: 0x24a178 - 0x24a1c0
void entry_0024a178_0x24a178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024a178_0x24a178");
#endif

    ctx->pc = 0x24a178u;

    // 0x24a178: 0x8fa201c8  lw          $v0, 0x1C8($sp)
    ctx->pc = 0x24a178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x24a17c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x24a17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x24a180: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x24a180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x24a184: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x24a184u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x24a188: 0x851024  and         $v0, $a0, $a1
    ctx->pc = 0x24a188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x24a18c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24A18Cu;
    {
        const bool branch_taken_0x24a18c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a18c) {
            ctx->pc = 0x24A1C0u;
            return;
        }
    }
    ctx->pc = 0x24A194u;
    // 0x24a194: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24a194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24a198: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x24a198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a19c: 0xa0820029  sb          $v0, 0x29($a0)
    ctx->pc = 0x24a19cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x24a1a0: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x24a1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x24a1a4: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x24a1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x24a1a8: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x24a1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x24a1ac: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x24a1acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x24a1b0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24a1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24a1b4: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x24a1b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x24a1b8: 0xac450030  sw          $a1, 0x30($v0)
    ctx->pc = 0x24a1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 5));
    // 0x24a1bc: 0x0  nop
    ctx->pc = 0x24a1bcu;
    // NOP
    ctx->pc = 0x24a1c0u;
}
