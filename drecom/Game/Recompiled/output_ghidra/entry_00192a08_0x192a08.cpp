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

// Function: entry_00192a08
// Address: 0x192a08 - 0x192a7c
void entry_00192a08_0x192a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192a08_0x192a08");
#endif

    ctx->pc = 0x192a08u;

    // 0x192a08: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x192a08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x192a0c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x192a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x192a10: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x192a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x192a14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x192a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x192a18: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x192a18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x192a1c: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x192a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x192a20: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x192a20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x192a24: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x192a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x192a28: 0x31082  srl         $v0, $v1, 2
    ctx->pc = 0x192a28u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x192a2c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x192a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192a30: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x192a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x192a34: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x192a34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x192a38: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x192a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x192a3c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x192a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x192a40: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x192a40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x192a44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x192a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x192a48: 0x21c80  sll         $v1, $v0, 18
    ctx->pc = 0x192a48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 18));
    // 0x192a4c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x192a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x192a50: 0x24422580  addiu       $v0, $v0, 0x2580
    ctx->pc = 0x192a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9600));
    // 0x192a54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x192a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x192a58: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x192a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
    // 0x192a5c: 0x3421fffc  ori         $at, $at, 0xFFFC
    ctx->pc = 0x192a5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65532);
    // 0x192a60: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x192a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x192a64: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x192a64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x192a68: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x192A68u;
    {
        const bool branch_taken_0x192a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x192a68) {
            ctx->pc = 0x192A7Cu;
            return;
        }
    }
    ctx->pc = 0x192A70u;
    // 0x192a70: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x192a70u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x192a74: 0x100001cf  b           . + 4 + (0x1CF << 2)
    ctx->pc = 0x192A74u;
    {
        const bool branch_taken_0x192a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192a74) {
            ctx->pc = 0x1931B4u;
            return;
        }
    }
    ctx->pc = 0x192A7Cu;
}
