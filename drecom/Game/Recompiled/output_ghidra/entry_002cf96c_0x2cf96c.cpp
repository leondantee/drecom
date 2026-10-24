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

// Function: entry_002cf96c
// Address: 0x2cf96c - 0x2cf9c8
void entry_002cf96c_0x2cf96c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cf96c_0x2cf96c");
#endif

    ctx->pc = 0x2cf96cu;

    // 0x2cf96c: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x2cf96cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf970: 0x24a3134c  addiu       $v1, $a1, 0x134C
    ctx->pc = 0x2cf970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4940));
    // 0x2cf974: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cf974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cf978: 0x948301c0  lhu         $v1, 0x1C0($a0)
    ctx->pc = 0x2cf978u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x2cf97c: 0x2466fffc  addiu       $a2, $v1, -0x4
    ctx->pc = 0x2cf97cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x2cf980: 0xa48601c0  sh          $a2, 0x1C0($a0)
    ctx->pc = 0x2cf980u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 448), (uint16_t)GPR_U32(ctx, 6));
    // 0x2cf984: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x2cf984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf988: 0x24a3134c  addiu       $v1, $a1, 0x134C
    ctx->pc = 0x2cf988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4940));
    // 0x2cf98c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cf98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cf990: 0x948301c0  lhu         $v1, 0x1C0($a0)
    ctx->pc = 0x2cf990u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x2cf994: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2cf994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2cf998: 0x28610041  slti        $at, $v1, 0x41
    ctx->pc = 0x2cf998u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x2cf99c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x2CF99Cu;
    {
        const bool branch_taken_0x2cf99c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf99c) {
            ctx->pc = 0x2CF9C8u;
            return;
        }
    }
    ctx->pc = 0x2CF9A4u;
    // 0x2cf9a4: 0x24100040  addiu       $s0, $zero, 0x40
    ctx->pc = 0x2cf9a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2cf9a8: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf9ac: 0x2465134c  addiu       $a1, $v1, 0x134C
    ctx->pc = 0x2cf9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2cf9b0: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x2cf9b0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cf9b4: 0xa69001c0  sh          $s0, 0x1C0($s4)
    ctx->pc = 0x2cf9b4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 448), (uint16_t)GPR_U32(ctx, 16));
    // 0x2cf9b8: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cf9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf9bc: 0x2483134c  addiu       $v1, $a0, 0x134C
    ctx->pc = 0x2cf9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4940));
    // 0x2cf9c0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2cf9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cf9c4: 0xa4a001c2  sh          $zero, 0x1C2($a1)
    ctx->pc = 0x2cf9c4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 450), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2cf9c8u;
}
