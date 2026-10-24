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

// Function: entry_0025a0fc
// Address: 0x25a0fc - 0x25a18c
void entry_0025a0fc_0x25a0fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025a0fc_0x25a0fc");
#endif

    ctx->pc = 0x25a0fcu;

    // 0x25a0fc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a100: 0x8c640a14  lw          $a0, 0xA14($v1)
    ctx->pc = 0x25a100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2580)));
    // 0x25a104: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x25a104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25a108: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x25a108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x25a10c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x25a10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25a110: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x25a110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25a114: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x25a114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x25a118: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x25a118u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25a11c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a120: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25a120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25a124: 0xac650b58  sw          $a1, 0xB58($v1)
    ctx->pc = 0x25a124u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2904), GPR_U32(ctx, 5));
    // 0x25a128: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x25a128u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x25a12c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x25a12cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x25a130: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25a130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25a134: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x25a134u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x25a138: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a13c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25a13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25a140: 0xa46007ec  sh          $zero, 0x7EC($v1)
    ctx->pc = 0x25a140u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2028), (uint16_t)GPR_U32(ctx, 0));
    // 0x25a144: 0x3005ffff  andi        $a1, $zero, 0xFFFF
    ctx->pc = 0x25a144u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x25a148: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x25a148u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x25a14c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x25a14cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x25a150: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25a150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25a154: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x25a154u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x25a158: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a15c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25a15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25a160: 0xa46507ea  sh          $a1, 0x7EA($v1)
    ctx->pc = 0x25a160u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2026), (uint16_t)GPR_U32(ctx, 5));
    // 0x25a164: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x25a164u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x25a168: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x25a168u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x25a16c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x25a16cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x25a170: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25a170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25a174: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x25a174u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x25a178: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a17c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25a17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25a180: 0xa46507e8  sh          $a1, 0x7E8($v1)
    ctx->pc = 0x25a180u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2024), (uint16_t)GPR_U32(ctx, 5));
    // 0x25a184: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x25A184u;
    {
        const bool branch_taken_0x25a184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a184) {
            ctx->pc = 0x25A218u;
            return;
        }
    }
    ctx->pc = 0x25A18Cu;
}
