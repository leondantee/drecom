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

// Function: entry_00193038
// Address: 0x193038 - 0x1930ac
void entry_00193038_0x193038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193038_0x193038");
#endif

    ctx->pc = 0x193038u;

    // 0x193038: 0x92c30348  lbu         $v1, 0x348($s6)
    ctx->pc = 0x193038u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x19303c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x19303cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x193040: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x193040u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x193044: 0x1460ff5e  bnez        $v1, . + 4 + (-0xA2 << 2)
    ctx->pc = 0x193044u;
    {
        const bool branch_taken_0x193044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x193044) {
            ctx->pc = 0x192DC0u;
            return;
        }
    }
    ctx->pc = 0x19304Cu;
    // 0x19304c: 0x96c30340  lhu         $v1, 0x340($s6)
    ctx->pc = 0x19304cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 832)));
    // 0x193050: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x193050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x193054: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x193054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x193058: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x193058u;
    {
        const bool branch_taken_0x193058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x193058) {
            ctx->pc = 0x1930F4u;
            return;
        }
    }
    ctx->pc = 0x193060u;
    // 0x193060: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x193060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x193064: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x193064u;
    {
        const bool branch_taken_0x193064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193064) {
            ctx->pc = 0x1930ACu;
            return;
        }
    }
    ctx->pc = 0x19306Cu;
    // 0x19306c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19306cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x193070: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x193070u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x193074: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x193074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x193078: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x193078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19307c: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x19307cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x193080: 0x8c55036c  lw          $s5, 0x36C($v0)
    ctx->pc = 0x193080u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x193084: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x193084u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x193088: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x193088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x19308c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x19308cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x193090: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x193090u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x193094: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x193094u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x193098: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x193098u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x19309c: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x19309cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x1930a0: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x1930a0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x1930a4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1930A4u;
    {
        const bool branch_taken_0x1930a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1930a4) {
            ctx->pc = 0x1930E8u;
            return;
        }
    }
    ctx->pc = 0x1930ACu;
}
