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

// Function: entry_001211f0
// Address: 0x1211f0 - 0x121244
void entry_001211f0_0x1211f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001211f0_0x1211f0");
#endif

    ctx->pc = 0x1211f0u;

    // 0x1211f0: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1211f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1211f4: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x1211f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1211f8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1211f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1211fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1211fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121200: 0x14640010  bne         $v1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x121200u;
    {
        const bool branch_taken_0x121200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x121200) {
            ctx->pc = 0x121244u;
            return;
        }
    }
    ctx->pc = 0x121208u;
    // 0x121208: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12120c: 0x90640001  lbu         $a0, 0x1($v1)
    ctx->pc = 0x12120cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x121210: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x121210u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x121214: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x121214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x121218: 0x10a20019  beq         $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x121218u;
    {
        const bool branch_taken_0x121218 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x121218) {
            ctx->pc = 0x121280u;
            return;
        }
    }
    ctx->pc = 0x121220u;
    // 0x121220: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121224: 0x90640001  lbu         $a0, 0x1($v1)
    ctx->pc = 0x121224u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x121228: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x121228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x12122c: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x12122cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x121230: 0x10440013  beq         $v0, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x121230u;
    {
        const bool branch_taken_0x121230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x121230) {
            ctx->pc = 0x121280u;
            return;
        }
    }
    ctx->pc = 0x121238u;
    // 0x121238: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x121238u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12123c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x12123Cu;
    {
        const bool branch_taken_0x12123c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12123c) {
            ctx->pc = 0x121280u;
            return;
        }
    }
    ctx->pc = 0x121244u;
}
