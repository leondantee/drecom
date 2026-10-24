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

// Function: entry_00329838
// Address: 0x329838 - 0x329894
void entry_00329838_0x329838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00329838_0x329838");
#endif

    ctx->pc = 0x329838u;

    // 0x329838: 0x9203000d  lbu         $v1, 0xD($s0)
    ctx->pc = 0x329838u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x32983c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x32983cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329840: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329844: 0x14830024  bne         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x329844u;
    {
        const bool branch_taken_0x329844 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x329844) {
            ctx->pc = 0x3298D8u;
            return;
        }
    }
    ctx->pc = 0x32984Cu;
    // 0x32984c: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x32984cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x329850: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x329850u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329854: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329858: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x329858u;
    {
        const bool branch_taken_0x329858 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x329858) {
            ctx->pc = 0x329894u;
            return;
        }
    }
    ctx->pc = 0x329860u;
    // 0x329860: 0x86040010  lh          $a0, 0x10($s0)
    ctx->pc = 0x329860u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x329864: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x329864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x329868: 0xa6030010  sh          $v1, 0x10($s0)
    ctx->pc = 0x329868u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x32986c: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x32986cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x329870: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x329870u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x329874: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x329874u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x329878: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x329878u;
    {
        const bool branch_taken_0x329878 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329878) {
            ctx->pc = 0x3298D8u;
            return;
        }
    }
    ctx->pc = 0x329880u;
    // 0x329880: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x329880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x329884: 0xa6030010  sh          $v1, 0x10($s0)
    ctx->pc = 0x329884u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x329888: 0xa200000d  sb          $zero, 0xD($s0)
    ctx->pc = 0x329888u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x32988c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x32988Cu;
    {
        const bool branch_taken_0x32988c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32988c) {
            ctx->pc = 0x3298D8u;
            return;
        }
    }
    ctx->pc = 0x329894u;
}
