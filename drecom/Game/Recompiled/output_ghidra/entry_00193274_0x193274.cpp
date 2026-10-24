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

// Function: entry_00193274
// Address: 0x193274 - 0x1932e8
void entry_00193274_0x193274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193274_0x193274");
#endif

    ctx->pc = 0x193274u;

    // 0x193274: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x193274u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x193278: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x193278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19327c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x19327cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x193280: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x193280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x193284: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x193284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x193288: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x193288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x19328c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x19328cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x193290: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x193290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x193294: 0x31082  srl         $v0, $v1, 2
    ctx->pc = 0x193294u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x193298: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x193298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19329c: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x19329cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x1932a0: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x1932a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x1932a4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1932a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1932a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1932a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1932ac: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1932acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1932b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1932b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1932b4: 0x21c80  sll         $v1, $v0, 18
    ctx->pc = 0x1932b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 18));
    // 0x1932b8: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1932b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x1932bc: 0x24422580  addiu       $v0, $v0, 0x2580
    ctx->pc = 0x1932bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9600));
    // 0x1932c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1932c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1932c4: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x1932c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
    // 0x1932c8: 0x3421fffc  ori         $at, $at, 0xFFFC
    ctx->pc = 0x1932c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65532);
    // 0x1932cc: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x1932ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1932d0: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1932d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1932d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1932D4u;
    {
        const bool branch_taken_0x1932d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1932d4) {
            ctx->pc = 0x1932E8u;
            return;
        }
    }
    ctx->pc = 0x1932DCu;
    // 0x1932dc: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1932dcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1932e0: 0x1000048b  b           . + 4 + (0x48B << 2)
    ctx->pc = 0x1932E0u;
    {
        const bool branch_taken_0x1932e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1932e0) {
            ctx->pc = 0x194510u;
            return;
        }
    }
    ctx->pc = 0x1932E8u;
}
