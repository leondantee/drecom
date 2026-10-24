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

// Function: entry_001dfb94
// Address: 0x1dfb94 - 0x1dfbcc
void entry_001dfb94_0x1dfb94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfb94_0x1dfb94");
#endif

    ctx->pc = 0x1dfb94u;

label_1dfb94:
    // 0x1dfb94: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1dfb94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1dfb98: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1dfb98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1dfb9c: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x1dfb9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1dfba0: 0x26310090  addiu       $s1, $s1, 0x90
    ctx->pc = 0x1dfba0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x1dfba4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1dfba4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1dfba8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1dfba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1dfbac: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x1dfbacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x1dfbb0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1dfbb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1dfbb4: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x1dfbb4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1dfbb8: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1DFBB8u;
    {
        const bool branch_taken_0x1dfbb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dfbb8) {
            ctx->pc = 0x1DFB94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dfb94;
        }
    }
    ctx->pc = 0x1DFBC0u;
    // 0x1dfbc0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1dfbc0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dfbc4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DFBC4u;
    {
        const bool branch_taken_0x1dfbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfbc4) {
            ctx->pc = 0x1DFBE8u;
            return;
        }
    }
    ctx->pc = 0x1DFBCCu;
}
