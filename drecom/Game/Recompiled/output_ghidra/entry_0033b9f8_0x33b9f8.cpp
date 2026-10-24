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

// Function: entry_0033b9f8
// Address: 0x33b9f8 - 0x33ba64
void entry_0033b9f8_0x33b9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033b9f8_0x33b9f8");
#endif

    ctx->pc = 0x33b9f8u;

    // 0x33b9f8: 0x24052710  addiu       $a1, $zero, 0x2710
    ctx->pc = 0x33b9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x33b9fc: 0x8e04013c  lw          $a0, 0x13C($s0)
    ctx->pc = 0x33b9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x33ba00: 0xa4850004  sh          $a1, 0x4($a0)
    ctx->pc = 0x33ba00u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x33ba04: 0x8e0400a8  lw          $a0, 0xA8($s0)
    ctx->pc = 0x33ba04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x33ba08: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x33ba08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x33ba0c: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x33ba0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33ba10: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x33ba10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x33ba14: 0x642823  subu        $a1, $v1, $a0
    ctx->pc = 0x33ba14u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33ba18: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x33ba18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x33ba1c: 0x8603000c  lh          $v1, 0xC($s0)
    ctx->pc = 0x33ba1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x33ba20: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x33ba20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x33ba24: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x33ba24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x33ba28: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x33ba28u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x33ba2c: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x33BA2Cu;
    {
        const bool branch_taken_0x33ba2c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33ba2c) {
            ctx->pc = 0x33BA64u;
            return;
        }
    }
    ctx->pc = 0x33BA34u;
    // 0x33ba34: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x33ba34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x33ba38: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x33ba38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33ba3c: 0xae0400a8  sw          $a0, 0xA8($s0)
    ctx->pc = 0x33ba3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 4));
    // 0x33ba40: 0xa600000c  sh          $zero, 0xC($s0)
    ctx->pc = 0x33ba40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x33ba44: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x33ba44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x33ba48: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x33ba48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x33ba4c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x33ba4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x33ba50: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x33ba50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x33ba54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33ba54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33ba58: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x33ba58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x33ba5c: 0x10000203  b           . + 4 + (0x203 << 2)
    ctx->pc = 0x33BA5Cu;
    {
        const bool branch_taken_0x33ba5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ba5c) {
            ctx->pc = 0x33C26Cu;
            return;
        }
    }
    ctx->pc = 0x33BA64u;
}
