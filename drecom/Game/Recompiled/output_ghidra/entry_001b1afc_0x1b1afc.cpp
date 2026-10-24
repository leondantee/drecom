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

// Function: entry_001b1afc
// Address: 0x1b1afc - 0x1b1b58
void entry_001b1afc_0x1b1afc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1afc_0x1b1afc");
#endif

    ctx->pc = 0x1b1afcu;

    // 0x1b1afc: 0x72601628  paddub      $v0, $s3, $zero
    ctx->pc = 0x1b1afcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1b1b00: 0x24530004  addiu       $s3, $v0, 0x4
    ctx->pc = 0x1b1b00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1b1b04: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1b1b04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b1b08: 0x920211ee  lbu         $v0, 0x11EE($s0)
    ctx->pc = 0x1b1b08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4590)));
    // 0x1b1b0c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B1B0Cu;
    {
        const bool branch_taken_0x1b1b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1b0c) {
            ctx->pc = 0x1B1B58u;
            return;
        }
    }
    ctx->pc = 0x1B1B14u;
    // 0x1b1b14: 0x860210a6  lh          $v0, 0x10A6($s0)
    ctx->pc = 0x1b1b14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x1b1b18: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b1b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b1b1c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b1b1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1b1b20: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B1B20u;
    {
        const bool branch_taken_0x1b1b20 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1b1b20) {
            ctx->pc = 0x1B1B58u;
            return;
        }
    }
    ctx->pc = 0x1B1B28u;
    // 0x1b1b28: 0x920210a8  lbu         $v0, 0x10A8($s0)
    ctx->pc = 0x1b1b28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4264)));
    // 0x1b1b2c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B1B2Cu;
    {
        const bool branch_taken_0x1b1b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1b2c) {
            ctx->pc = 0x1B1B58u;
            return;
        }
    }
    ctx->pc = 0x1B1B34u;
    // 0x1b1b34: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1b1b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b1b38: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B1B38u;
    {
        const bool branch_taken_0x1b1b38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b1b38) {
            ctx->pc = 0x1B1B58u;
            return;
        }
    }
    ctx->pc = 0x1B1B40u;
    // 0x1b1b40: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1b1b40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1b1b44: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b1b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1b1b48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b1b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b1b4c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1b1b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1b1b50: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b1b50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1b1b54: 0x0  nop
    ctx->pc = 0x1b1b54u;
    // NOP
    ctx->pc = 0x1b1b58u;
}
