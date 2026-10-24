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

// Function: entry_00221514
// Address: 0x221514 - 0x2215ac
void entry_00221514_0x221514(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00221514_0x221514");
#endif

    ctx->pc = 0x221514u;

    // 0x221514: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221518: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x221518u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x22151c: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x22151cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x221520: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x221520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x221524: 0x10a400e6  beq         $a1, $a0, . + 4 + (0xE6 << 2)
    ctx->pc = 0x221524u;
    {
        const bool branch_taken_0x221524 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x221524) {
            ctx->pc = 0x2218C0u;
            return;
        }
    }
    ctx->pc = 0x22152Cu;
    // 0x22152c: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x22152cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x221530: 0x10a300e3  beq         $a1, $v1, . + 4 + (0xE3 << 2)
    ctx->pc = 0x221530u;
    {
        const bool branch_taken_0x221530 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x221530) {
            ctx->pc = 0x2218C0u;
            return;
        }
    }
    ctx->pc = 0x221538u;
    // 0x221538: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x221538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x22153c: 0x10a300e0  beq         $a1, $v1, . + 4 + (0xE0 << 2)
    ctx->pc = 0x22153Cu;
    {
        const bool branch_taken_0x22153c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x22153c) {
            ctx->pc = 0x2218C0u;
            return;
        }
    }
    ctx->pc = 0x221544u;
    // 0x221544: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x221544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x221548: 0x10a300dd  beq         $a1, $v1, . + 4 + (0xDD << 2)
    ctx->pc = 0x221548u;
    {
        const bool branch_taken_0x221548 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x221548) {
            ctx->pc = 0x2218C0u;
            return;
        }
    }
    ctx->pc = 0x221550u;
    // 0x221550: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x221550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x221554: 0x10a300da  beq         $a1, $v1, . + 4 + (0xDA << 2)
    ctx->pc = 0x221554u;
    {
        const bool branch_taken_0x221554 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x221554) {
            ctx->pc = 0x2218C0u;
            return;
        }
    }
    ctx->pc = 0x22155Cu;
    // 0x22155c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x22155cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x221560: 0x10a300d7  beq         $a1, $v1, . + 4 + (0xD7 << 2)
    ctx->pc = 0x221560u;
    {
        const bool branch_taken_0x221560 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x221560) {
            ctx->pc = 0x2218C0u;
            return;
        }
    }
    ctx->pc = 0x221568u;
    // 0x221568: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x221568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x22156c: 0x10a300d4  beq         $a1, $v1, . + 4 + (0xD4 << 2)
    ctx->pc = 0x22156Cu;
    {
        const bool branch_taken_0x22156c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x22156c) {
            ctx->pc = 0x2218C0u;
            return;
        }
    }
    ctx->pc = 0x221574u;
    // 0x221574: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x221574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x221578: 0x10a400d1  beq         $a1, $a0, . + 4 + (0xD1 << 2)
    ctx->pc = 0x221578u;
    {
        const bool branch_taken_0x221578 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x221578) {
            ctx->pc = 0x2218C0u;
            return;
        }
    }
    ctx->pc = 0x221580u;
    // 0x221580: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x221580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x221584: 0x10a600ce  beq         $a1, $a2, . + 4 + (0xCE << 2)
    ctx->pc = 0x221584u;
    {
        const bool branch_taken_0x221584 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x221584) {
            ctx->pc = 0x2218C0u;
            return;
        }
    }
    ctx->pc = 0x22158Cu;
    // 0x22158c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x22158cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x221590: 0x10a400cb  beq         $a1, $a0, . + 4 + (0xCB << 2)
    ctx->pc = 0x221590u;
    {
        const bool branch_taken_0x221590 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x221590) {
            ctx->pc = 0x2218C0u;
            return;
        }
    }
    ctx->pc = 0x221598u;
    // 0x221598: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x221598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22159c: 0x10a300c8  beq         $a1, $v1, . + 4 + (0xC8 << 2)
    ctx->pc = 0x22159Cu;
    {
        const bool branch_taken_0x22159c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x22159c) {
            ctx->pc = 0x2218C0u;
            return;
        }
    }
    ctx->pc = 0x2215A4u;
    // 0x2215a4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2215A4u;
    {
        const bool branch_taken_0x2215a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2215a4) {
            ctx->pc = 0x2215ACu;
            return;
        }
    }
    ctx->pc = 0x2215ACu;
}
