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

// Function: entry_001f9aa0
// Address: 0x1f9aa0 - 0x1f9b18
void entry_001f9aa0_0x1f9aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9aa0_0x1f9aa0");
#endif

    ctx->pc = 0x1f9aa0u;

    // 0x1f9aa0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f9aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f9aa4: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1f9aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f9aa8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9aac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f9aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f9ab0: 0x8c700244  lw          $s0, 0x244($v1)
    ctx->pc = 0x1f9ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 580)));
    // 0x1f9ab4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f9ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f9ab8: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x1f9ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1f9abc: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1f9abcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1f9ac0: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x1f9ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f9ac4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1f9ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1f9ac8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1f9ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f9acc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1f9accu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1f9ad0: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x1f9ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1f9ad4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9ad8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9adc: 0x9063007d  lbu         $v1, 0x7D($v1)
    ctx->pc = 0x1f9adcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 125)));
    // 0x1f9ae0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1f9ae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f9ae4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f9ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f9ae8: 0x10830155  beq         $a0, $v1, . + 4 + (0x155 << 2)
    ctx->pc = 0x1F9AE8u;
    {
        const bool branch_taken_0x1f9ae8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f9ae8) {
            ctx->pc = 0x1FA040u;
            return;
        }
    }
    ctx->pc = 0x1F9AF0u;
    // 0x1f9af0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f9af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f9af4: 0x108300e1  beq         $a0, $v1, . + 4 + (0xE1 << 2)
    ctx->pc = 0x1F9AF4u;
    {
        const bool branch_taken_0x1f9af4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f9af4) {
            ctx->pc = 0x1F9E7Cu;
            return;
        }
    }
    ctx->pc = 0x1F9AFCu;
    // 0x1f9afc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f9afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9b00: 0x1083003d  beq         $a0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x1F9B00u;
    {
        const bool branch_taken_0x1f9b00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f9b00) {
            ctx->pc = 0x1F9BF8u;
            return;
        }
    }
    ctx->pc = 0x1F9B08u;
    // 0x1f9b08: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9B08u;
    {
        const bool branch_taken_0x1f9b08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9b08) {
            ctx->pc = 0x1F9B18u;
            return;
        }
    }
    ctx->pc = 0x1F9B10u;
    // 0x1f9b10: 0x1000015f  b           . + 4 + (0x15F << 2)
    ctx->pc = 0x1F9B10u;
    {
        const bool branch_taken_0x1f9b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9b10) {
            ctx->pc = 0x1FA090u;
            return;
        }
    }
    ctx->pc = 0x1F9B18u;
}
