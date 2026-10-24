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

// Function: entry_002cefc0
// Address: 0x2cefc0 - 0x2cf018
void entry_002cefc0_0x2cefc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cefc0_0x2cefc0");
#endif

    ctx->pc = 0x2cefc0u;

    // 0x2cefc0: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x2cefc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cefc4: 0x24a4134c  addiu       $a0, $a1, 0x134C
    ctx->pc = 0x2cefc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4940));
    // 0x2cefc8: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2cefc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2cefcc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2cefccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2cefd0: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x2cefd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2cefd4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2cefd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cefd8: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x2cefd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2cefdc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2cefdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2cefe0: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x2cefe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2cefe4: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x2cefe4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x2cefe8: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cefe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cefec: 0x2464134c  addiu       $a0, $v1, 0x134C
    ctx->pc = 0x2cefecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2ceff0: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2ceff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2ceff4: 0x703021  addu        $a2, $v1, $s0
    ctx->pc = 0x2ceff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2ceff8: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x2ceff8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2ceffc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2ceffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cf000: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x2cf000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2cf004: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2cf004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2cf008: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x2cf008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x2cf00c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2cf00cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2cf010: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2cf010u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2cf014: 0x0  nop
    ctx->pc = 0x2cf014u;
    // NOP
    ctx->pc = 0x2cf018u;
}
