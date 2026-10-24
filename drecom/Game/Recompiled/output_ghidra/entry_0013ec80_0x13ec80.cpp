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

// Function: entry_0013ec80
// Address: 0x13ec80 - 0x13ecd0
void entry_0013ec80_0x13ec80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ec80_0x13ec80");
#endif

    ctx->pc = 0x13ec80u;

    // 0x13ec80: 0x2dd1021  addu        $v0, $s6, $sp
    ctx->pc = 0x13ec80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
    // 0x13ec84: 0x90420240  lbu         $v0, 0x240($v0)
    ctx->pc = 0x13ec84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 576)));
    // 0x13ec88: 0x104004a7  beqz        $v0, . + 4 + (0x4A7 << 2)
    ctx->pc = 0x13EC88u;
    {
        const bool branch_taken_0x13ec88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ec88) {
            ctx->pc = 0x13FF28u;
            return;
        }
    }
    ctx->pc = 0x13EC90u;
    // 0x13ec90: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13ec90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13ec94: 0xafa51684  sw          $a1, 0x1684($sp)
    ctx->pc = 0x13ec94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5764), GPR_U32(ctx, 5));
    // 0x13ec98: 0xafa01688  sw          $zero, 0x1688($sp)
    ctx->pc = 0x13ec98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5768), GPR_U32(ctx, 0));
    // 0x13ec9c: 0x241100ff  addiu       $s1, $zero, 0xFF
    ctx->pc = 0x13ec9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x13eca0: 0x2dd2021  addu        $a0, $s6, $sp
    ctx->pc = 0x13eca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
    // 0x13eca4: 0x90850240  lbu         $a1, 0x240($a0)
    ctx->pc = 0x13eca4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 576)));
    // 0x13eca8: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x13eca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13ecac: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x13ecacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13ecb0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13ECB0u;
    {
        const bool branch_taken_0x13ecb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ecb0) {
            ctx->pc = 0x13ECD0u;
            return;
        }
    }
    ctx->pc = 0x13ECB8u;
    // 0x13ecb8: 0x8fa21684  lw          $v0, 0x1684($sp)
    ctx->pc = 0x13ecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5764)));
    // 0x13ecbc: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x13ecbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13ecc0: 0xafa61684  sw          $a2, 0x1684($sp)
    ctx->pc = 0x13ecc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5764), GPR_U32(ctx, 6));
    // 0x13ecc4: 0x8fb11684  lw          $s1, 0x1684($sp)
    ctx->pc = 0x13ecc4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5764)));
    // 0x13ecc8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13ECC8u;
    {
        const bool branch_taken_0x13ecc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ecc8) {
            ctx->pc = 0x13ECE8u;
            return;
        }
    }
    ctx->pc = 0x13ECD0u;
}
