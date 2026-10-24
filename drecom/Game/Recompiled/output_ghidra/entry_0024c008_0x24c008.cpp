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

// Function: entry_0024c008
// Address: 0x24c008 - 0x24c04c
void entry_0024c008_0x24c008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024c008_0x24c008");
#endif

    ctx->pc = 0x24c008u;

    // 0x24c008: 0x264300b0  addiu       $v1, $s2, 0xB0
    ctx->pc = 0x24c008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
    // 0x24c00c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x24c00cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24c010: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x24c010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x24c014: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x24c014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x24c018: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x24c018u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x24c01c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x24c01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x24c020: 0xac6000d4  sw          $zero, 0xD4($v1)
    ctx->pc = 0x24c020u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 212), GPR_U32(ctx, 0));
    // 0x24c024: 0x8e43020c  lw          $v1, 0x20C($s2)
    ctx->pc = 0x24c024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 524)));
    // 0x24c028: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x24c028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x24c02c: 0xae43020c  sw          $v1, 0x20C($s2)
    ctx->pc = 0x24c02cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 524), GPR_U32(ctx, 3));
    // 0x24c030: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24c030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24c034: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x24c034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24c038: 0x12830004  beq         $s4, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24C038u;
    {
        const bool branch_taken_0x24c038 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x24c038) {
            ctx->pc = 0x24C04Cu;
            return;
        }
    }
    ctx->pc = 0x24C040u;
    // 0x24c040: 0x8e830b18  lw          $v1, 0xB18($s4)
    ctx->pc = 0x24c040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2840)));
    // 0x24c044: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x24c044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x24c048: 0xae830b18  sw          $v1, 0xB18($s4)
    ctx->pc = 0x24c048u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2840), GPR_U32(ctx, 3));
    ctx->pc = 0x24c04cu;
}
