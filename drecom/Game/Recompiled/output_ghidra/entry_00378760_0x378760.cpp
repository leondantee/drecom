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

// Function: entry_00378760
// Address: 0x378760 - 0x3787d8
void entry_00378760_0x378760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00378760_0x378760");
#endif

    ctx->pc = 0x378760u;

    // 0x378760: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x378760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x378764: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x378764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x378768: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x378768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x37876c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x37876cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x378770: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x378770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x378774: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x378774u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x378778: 0x8e500034  lw          $s0, 0x34($s2)
    ctx->pc = 0x378778u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x37877c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x37877cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x378780: 0x8c421330  lw          $v0, 0x1330($v0)
    ctx->pc = 0x378780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4912)));
    // 0x378784: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x378784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x378788: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x378788u;
    {
        const bool branch_taken_0x378788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x378788) {
            ctx->pc = 0x3787D8u;
            return;
        }
    }
    ctx->pc = 0x378790u;
    // 0x378790: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x378790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x378794: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x378794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x378798: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x378798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x37879c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x37879cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x3787a0: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x3787a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3787a4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3787a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3787a8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3787a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3787ac: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3787acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x3787b0: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x3787b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x3787b4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3787b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3787b8: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x3787b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x3787bc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3787bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x3787c0: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x3787c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3787c4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3787c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3787c8: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x3787c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x3787cc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3787ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x3787d0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3787D0u;
    {
        const bool branch_taken_0x3787d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3787d0) {
            ctx->pc = 0x378818u;
            return;
        }
    }
    ctx->pc = 0x3787D8u;
}
