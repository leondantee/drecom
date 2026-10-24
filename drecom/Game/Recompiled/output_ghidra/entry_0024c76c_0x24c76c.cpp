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

// Function: entry_0024c76c
// Address: 0x24c76c - 0x24c7b0
void entry_0024c76c_0x24c76c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024c76c_0x24c76c");
#endif

    ctx->pc = 0x24c76cu;

    // 0x24c76c: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x24c76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x24c770: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x24c770u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24c774: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x24c774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x24c778: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x24c778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x24c77c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x24c77cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x24c780: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x24c780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x24c784: 0xac6000d4  sw          $zero, 0xD4($v1)
    ctx->pc = 0x24c784u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 212), GPR_U32(ctx, 0));
    // 0x24c788: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x24c788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x24c78c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x24c78cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x24c790: 0xae03020c  sw          $v1, 0x20C($s0)
    ctx->pc = 0x24c790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 3));
    // 0x24c794: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24c794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24c798: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x24c798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24c79c: 0x12430004  beq         $s2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24C79Cu;
    {
        const bool branch_taken_0x24c79c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x24c79c) {
            ctx->pc = 0x24C7B0u;
            return;
        }
    }
    ctx->pc = 0x24C7A4u;
    // 0x24c7a4: 0x8e430b18  lw          $v1, 0xB18($s2)
    ctx->pc = 0x24c7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2840)));
    // 0x24c7a8: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x24c7a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x24c7ac: 0xae430b18  sw          $v1, 0xB18($s2)
    ctx->pc = 0x24c7acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2840), GPR_U32(ctx, 3));
    ctx->pc = 0x24c7b0u;
}
