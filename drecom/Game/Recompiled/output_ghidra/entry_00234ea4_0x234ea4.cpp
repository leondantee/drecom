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

// Function: entry_00234ea4
// Address: 0x234ea4 - 0x234ee8
void entry_00234ea4_0x234ea4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00234ea4_0x234ea4");
#endif

    ctx->pc = 0x234ea4u;

    // 0x234ea4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234ea8: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x234ea8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x234eac: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x234eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x234eb0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x234eb0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x234eb4: 0x4600026  bltz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x234EB4u;
    {
        const bool branch_taken_0x234eb4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x234eb4) {
            ctx->pc = 0x234F50u;
            return;
        }
    }
    ctx->pc = 0x234EBCu;
    // 0x234ebc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234ec0: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x234ec0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x234ec4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x234ec4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x234ec8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x234ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x234ecc: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x234ECCu;
    {
        const bool branch_taken_0x234ecc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x234ecc) {
            ctx->pc = 0x234F1Cu;
            return;
        }
    }
    ctx->pc = 0x234ED4u;
    // 0x234ed4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x234ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234ed8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x234ED8u;
    {
        const bool branch_taken_0x234ed8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x234ed8) {
            ctx->pc = 0x234EE8u;
            return;
        }
    }
    ctx->pc = 0x234EE0u;
    // 0x234ee0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x234EE0u;
    {
        const bool branch_taken_0x234ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x234ee0) {
            ctx->pc = 0x234EE8u;
            return;
        }
    }
    ctx->pc = 0x234EE8u;
}
