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

// Function: entry_001b6978
// Address: 0x1b6978 - 0x1b69f0
void entry_001b6978_0x1b6978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6978_0x1b6978");
#endif

    ctx->pc = 0x1b6978u;

    // 0x1b6978: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b6978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b697c: 0xaca01b60  sw          $zero, 0x1B60($a1)
    ctx->pc = 0x1b697cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7008), GPR_U32(ctx, 0));
    // 0x1b6980: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b6980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6984: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x1b6984u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b6988: 0x3c080100  lui         $t0, 0x100
    ctx->pc = 0x1b6988u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)256 << 16));
    // 0x1b698c: 0xe81024  and         $v0, $a3, $t0
    ctx->pc = 0x1b698cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x1b6990: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1B6990u;
    {
        const bool branch_taken_0x1b6990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6990) {
            ctx->pc = 0x1B69FCu;
            return;
        }
    }
    ctx->pc = 0x1B6998u;
    // 0x1b6998: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b6998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b699c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1b699cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b69a0: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x1b69a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x1b69a4: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x1b69a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b69a8: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x1b69a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1b69ac: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1b69acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x1b69b0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b69b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b69b4: 0x908313a6  lbu         $v1, 0x13A6($a0)
    ctx->pc = 0x1b69b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5030)));
    // 0x1b69b8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1b69b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b69bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b69bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b69c0: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1B69C0u;
    {
        const bool branch_taken_0x1b69c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b69c0) {
            ctx->pc = 0x1B69F0u;
            return;
        }
    }
    ctx->pc = 0x1B69C8u;
    // 0x1b69c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b69c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b69cc: 0x10440008  beq         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B69CCu;
    {
        const bool branch_taken_0x1b69cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1b69cc) {
            ctx->pc = 0x1B69F0u;
            return;
        }
    }
    ctx->pc = 0x1B69D4u;
    // 0x1b69d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b69d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b69d8: 0x10450008  beq         $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B69D8u;
    {
        const bool branch_taken_0x1b69d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1b69d8) {
            ctx->pc = 0x1B69FCu;
            return;
        }
    }
    ctx->pc = 0x1B69E0u;
    // 0x1b69e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B69E0u;
    {
        const bool branch_taken_0x1b69e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b69e0) {
            ctx->pc = 0x1B69FCu;
            return;
        }
    }
    ctx->pc = 0x1B69E8u;
    // 0x1b69e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B69E8u;
    {
        const bool branch_taken_0x1b69e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b69e8) {
            ctx->pc = 0x1B69FCu;
            return;
        }
    }
    ctx->pc = 0x1B69F0u;
}
