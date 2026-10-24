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

// Function: entry_0014d9a0
// Address: 0x14d9a0 - 0x14d9c0
void entry_0014d9a0_0x14d9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d9a0_0x14d9a0");
#endif

    ctx->pc = 0x14d9a0u;

    // 0x14d9a0: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x14d9a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14d9a4: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x14d9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x14d9a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14d9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14d9ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D9ACu;
    {
        const bool branch_taken_0x14d9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d9ac) {
            ctx->pc = 0x14D9C0u;
            return;
        }
    }
    ctx->pc = 0x14D9B4u;
    // 0x14d9b4: 0x860215ec  lh          $v0, 0x15EC($s0)
    ctx->pc = 0x14d9b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5612)));
    // 0x14d9b8: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x14d9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
    // 0x14d9bc: 0xa60215ec  sh          $v0, 0x15EC($s0)
    ctx->pc = 0x14d9bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5612), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14d9c0u;
}
