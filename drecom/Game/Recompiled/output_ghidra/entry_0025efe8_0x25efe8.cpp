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

// Function: entry_0025efe8
// Address: 0x25efe8 - 0x25f048
void entry_0025efe8_0x25efe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025efe8_0x25efe8");
#endif

    ctx->pc = 0x25efe8u;

    // 0x25efe8: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x25efe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25efec: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x25efecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25eff0: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x25eff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x25eff4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25eff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25eff8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x25eff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25effc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x25effcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x25f000: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x25f000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x25f004: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x25f004u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25f008: 0x92030143  lbu         $v1, 0x143($s0)
    ctx->pc = 0x25f008u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 323)));
    // 0x25f00c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x25f00cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25f010: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x25f010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x25f014: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x25F014u;
    {
        const bool branch_taken_0x25f014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x25f014) {
            ctx->pc = 0x25F048u;
            return;
        }
    }
    ctx->pc = 0x25F01Cu;
    // 0x25f01c: 0x92030143  lbu         $v1, 0x143($s0)
    ctx->pc = 0x25f01cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 323)));
    // 0x25f020: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x25f020u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25f024: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25f024u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25f028: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x25f028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25f02c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25f02cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25f030: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x25f030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25f034: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x25f034u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x25f038: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25f038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f03c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x25f03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x25f040: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x25f040u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25f044: 0x0  nop
    ctx->pc = 0x25f044u;
    // NOP
    ctx->pc = 0x25f048u;
}
