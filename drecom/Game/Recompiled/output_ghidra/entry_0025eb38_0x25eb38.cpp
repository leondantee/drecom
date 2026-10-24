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

// Function: entry_0025eb38
// Address: 0x25eb38 - 0x25eb98
void entry_0025eb38_0x25eb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025eb38_0x25eb38");
#endif

    ctx->pc = 0x25eb38u;

    // 0x25eb38: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x25eb38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25eb3c: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x25eb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x25eb40: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x25eb40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x25eb44: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25eb44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25eb48: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x25eb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25eb4c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x25eb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x25eb50: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x25eb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x25eb54: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x25eb54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25eb58: 0x92030143  lbu         $v1, 0x143($s0)
    ctx->pc = 0x25eb58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 323)));
    // 0x25eb5c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x25eb5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25eb60: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x25eb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x25eb64: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x25EB64u;
    {
        const bool branch_taken_0x25eb64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x25eb64) {
            ctx->pc = 0x25EB98u;
            return;
        }
    }
    ctx->pc = 0x25EB6Cu;
    // 0x25eb6c: 0x92030143  lbu         $v1, 0x143($s0)
    ctx->pc = 0x25eb6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 323)));
    // 0x25eb70: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x25eb70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25eb74: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25eb74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25eb78: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x25eb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25eb7c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25eb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25eb80: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x25eb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25eb84: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x25eb84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x25eb88: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25eb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25eb8c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x25eb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x25eb90: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x25eb90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25eb94: 0x0  nop
    ctx->pc = 0x25eb94u;
    // NOP
    ctx->pc = 0x25eb98u;
}
