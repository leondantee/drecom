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

// Function: entry_00190fd8
// Address: 0x190fd8 - 0x19103c
void entry_00190fd8_0x190fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190fd8_0x190fd8");
#endif

    ctx->pc = 0x190fd8u;

    // 0x190fd8: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x190fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x190fdc: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x190fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x190fe0: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x190fe0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x190fe4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x190fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x190fe8: 0x101082  srl         $v0, $s0, 2
    ctx->pc = 0x190fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x190fec: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x190fecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x190ff0: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x190ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x190ff4: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x190ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x190ff8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x190ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x190ffc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x190ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x191000: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x191000u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x191004: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x191004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x191008: 0x21c80  sll         $v1, $v0, 18
    ctx->pc = 0x191008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 18));
    // 0x19100c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x19100cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x191010: 0x24422580  addiu       $v0, $v0, 0x2580
    ctx->pc = 0x191010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9600));
    // 0x191014: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191018: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x191018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
    // 0x19101c: 0x3421fffc  ori         $at, $at, 0xFFFC
    ctx->pc = 0x19101cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65532);
    // 0x191020: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x191020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x191024: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x191024u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x191028: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x191028u;
    {
        const bool branch_taken_0x191028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191028) {
            ctx->pc = 0x19103Cu;
            return;
        }
    }
    ctx->pc = 0x191030u;
    // 0x191030: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x191030u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x191034: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x191034u;
    {
        const bool branch_taken_0x191034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191034) {
            ctx->pc = 0x1910D8u;
            return;
        }
    }
    ctx->pc = 0x19103Cu;
}
