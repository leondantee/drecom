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

// Function: entry_0016d784
// Address: 0x16d784 - 0x16d910
void entry_0016d784_0x16d784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d784_0x16d784");
#endif

    switch (ctx->pc) {
        case 0x16d908u: goto label_16d908;
        default: break;
    }

    ctx->pc = 0x16d784u;

    // 0x16d784: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x16d784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16d788: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16d788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d78c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x16d78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d790: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16d790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d794: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x16d794u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16d798: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x16d798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16d79c: 0x9463000c  lhu         $v1, 0xC($v1)
    ctx->pc = 0x16d79cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x16d7a0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x16d7a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16d7a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x16d7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16d7a8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16d7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d7ac: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16d7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16d7b0: 0x31823  negu        $v1, $v1
    ctx->pc = 0x16d7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x16d7b4: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x16d7b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16d7b8: 0x14600069  bnez        $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x16D7B8u;
    {
        const bool branch_taken_0x16d7b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d7b8) {
            ctx->pc = 0x16D960u;
            return;
        }
    }
    ctx->pc = 0x16D7C0u;
    // 0x16d7c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x16d7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16d7c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16d7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d7c8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x16d7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d7cc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16d7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d7d0: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x16d7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16d7d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x16d7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16d7d8: 0x9463000c  lhu         $v1, 0xC($v1)
    ctx->pc = 0x16d7d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x16d7dc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x16d7dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16d7e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x16d7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16d7e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16d7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d7e8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16d7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16d7ec: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x16d7ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x16d7f0: 0x1420005b  bnez        $at, . + 4 + (0x5B << 2)
    ctx->pc = 0x16D7F0u;
    {
        const bool branch_taken_0x16d7f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d7f0) {
            ctx->pc = 0x16D960u;
            return;
        }
    }
    ctx->pc = 0x16D7F8u;
    // 0x16d7f8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x16d7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16d7fc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x16d7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16d800: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x16d800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d804: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x16d804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16d808: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x16d808u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16d80c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x16d80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16d810: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x16d810u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x16d814: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x16d814u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16d818: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x16d818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16d81c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x16d81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16d820: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16d820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16d824: 0x31823  negu        $v1, $v1
    ctx->pc = 0x16d824u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x16d828: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x16d828u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16d82c: 0x1460004c  bnez        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x16D82Cu;
    {
        const bool branch_taken_0x16d82c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d82c) {
            ctx->pc = 0x16D960u;
            return;
        }
    }
    ctx->pc = 0x16D834u;
    // 0x16d834: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x16d834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16d838: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x16d838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16d83c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x16d83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d840: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x16d840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16d844: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x16d844u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16d848: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x16d848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16d84c: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x16d84cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x16d850: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x16d850u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16d854: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x16d854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16d858: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x16d858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16d85c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16d85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16d860: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x16d860u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x16d864: 0x1420003e  bnez        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x16D864u;
    {
        const bool branch_taken_0x16d864 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d864) {
            ctx->pc = 0x16D960u;
            return;
        }
    }
    ctx->pc = 0x16D86Cu;
    // 0x16d86c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x16d86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16d870: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x16d870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16d874: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x16d874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d878: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x16d878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16d87c: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x16d87cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16d880: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x16d880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16d884: 0x94630010  lhu         $v1, 0x10($v1)
    ctx->pc = 0x16d884u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x16d888: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x16d888u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16d88c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x16d88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16d890: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x16d890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16d894: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16d894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16d898: 0x31823  negu        $v1, $v1
    ctx->pc = 0x16d898u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x16d89c: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x16d89cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16d8a0: 0x1460002f  bnez        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x16D8A0u;
    {
        const bool branch_taken_0x16d8a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d8a0) {
            ctx->pc = 0x16D960u;
            return;
        }
    }
    ctx->pc = 0x16D8A8u;
    // 0x16d8a8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x16d8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16d8ac: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x16d8acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16d8b0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x16d8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d8b4: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x16d8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16d8b8: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x16d8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16d8bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x16d8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16d8c0: 0x94630010  lhu         $v1, 0x10($v1)
    ctx->pc = 0x16d8c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x16d8c4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x16d8c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16d8c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x16d8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16d8cc: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x16d8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16d8d0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16d8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16d8d4: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x16d8d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x16d8d8: 0x14200021  bnez        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x16D8D8u;
    {
        const bool branch_taken_0x16d8d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d8d8) {
            ctx->pc = 0x16D960u;
            return;
        }
    }
    ctx->pc = 0x16D8E0u;
    // 0x16d8e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x16d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16d8e4: 0x94420012  lhu         $v0, 0x12($v0)
    ctx->pc = 0x16d8e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x16d8e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16D8E8u;
    {
        const bool branch_taken_0x16d8e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d8e8) {
            ctx->pc = 0x16D910u;
            return;
        }
    }
    ctx->pc = 0x16D8F0u;
    // 0x16d8f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x16d8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16d8f4: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x16d8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x16d8f8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x16d8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d8fc: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x16d8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16d900: 0xc05b5dc  jal         func_16D770
    ctx->pc = 0x16D900u;
    SET_GPR_U32(ctx, 31, 0x16D908u);
    ctx->pc = 0x16D770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D770u, 0x16D900u, 0x16D908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D908u;
label_16d908:
    // 0x16d908: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x16D908u;
    {
        const bool branch_taken_0x16d908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d908) {
            ctx->pc = 0x16D960u;
            return;
        }
    }
    ctx->pc = 0x16D910u;
}
