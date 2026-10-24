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

// Function: entry_00191b70
// Address: 0x191b70 - 0x191be4
void entry_00191b70_0x191b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191b70_0x191b70");
#endif

    ctx->pc = 0x191b70u;

    // 0x191b70: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x191b70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x191b74: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x191b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x191b78: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x191b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x191b7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191b80: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x191b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x191b84: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x191b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x191b88: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x191b88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x191b8c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x191b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x191b90: 0x31082  srl         $v0, $v1, 2
    ctx->pc = 0x191b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x191b94: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x191b94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x191b98: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x191b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x191b9c: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x191b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x191ba0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x191ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191ba4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x191ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x191ba8: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x191ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x191bac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x191bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x191bb0: 0x21c80  sll         $v1, $v0, 18
    ctx->pc = 0x191bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 18));
    // 0x191bb4: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x191bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x191bb8: 0x24422580  addiu       $v0, $v0, 0x2580
    ctx->pc = 0x191bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9600));
    // 0x191bbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191bc0: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x191bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
    // 0x191bc4: 0x3421fffc  ori         $at, $at, 0xFFFC
    ctx->pc = 0x191bc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65532);
    // 0x191bc8: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x191bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x191bcc: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x191bccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x191bd0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x191BD0u;
    {
        const bool branch_taken_0x191bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191bd0) {
            ctx->pc = 0x191BE4u;
            return;
        }
    }
    ctx->pc = 0x191BD8u;
    // 0x191bd8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x191bd8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x191bdc: 0x1000035b  b           . + 4 + (0x35B << 2)
    ctx->pc = 0x191BDCu;
    {
        const bool branch_taken_0x191bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191bdc) {
            ctx->pc = 0x19294Cu;
            return;
        }
    }
    ctx->pc = 0x191BE4u;
}
