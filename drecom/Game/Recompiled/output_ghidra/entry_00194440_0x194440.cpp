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

// Function: entry_00194440
// Address: 0x194440 - 0x1944a4
void entry_00194440_0x194440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194440_0x194440");
#endif

    ctx->pc = 0x194440u;

    // 0x194440: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x194440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x194444: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x194444u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x194448: 0x2a28023  subu        $s0, $s5, $v0
    ctx->pc = 0x194448u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x19444c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x19444cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x194450: 0x101082  srl         $v0, $s0, 2
    ctx->pc = 0x194450u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x194454: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x194454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x194458: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x194458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x19445c: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x19445cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x194460: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x194460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x194464: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x194464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x194468: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x194468u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x19446c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19446cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x194470: 0x21c80  sll         $v1, $v0, 18
    ctx->pc = 0x194470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 18));
    // 0x194474: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x194474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x194478: 0x24422580  addiu       $v0, $v0, 0x2580
    ctx->pc = 0x194478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9600));
    // 0x19447c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19447cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x194480: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x194480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
    // 0x194484: 0x3421fffc  ori         $at, $at, 0xFFFC
    ctx->pc = 0x194484u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65532);
    // 0x194488: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x194488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x19448c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x19448cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x194490: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x194490u;
    {
        const bool branch_taken_0x194490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194490) {
            ctx->pc = 0x1944A4u;
            return;
        }
    }
    ctx->pc = 0x194498u;
    // 0x194498: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x194498u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19449c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x19449Cu;
    {
        const bool branch_taken_0x19449c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19449c) {
            ctx->pc = 0x194510u;
            return;
        }
    }
    ctx->pc = 0x1944A4u;
}
