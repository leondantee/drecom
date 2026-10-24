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

// Function: entry_0018d528
// Address: 0x18d528 - 0x18d58c
void entry_0018d528_0x18d528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d528_0x18d528");
#endif

    ctx->pc = 0x18d528u;

    // 0x18d528: 0xdfa20090  ld          $v0, 0x90($sp)
    ctx->pc = 0x18d528u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18d52c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d530: 0x2a83c  dsll32      $s5, $v0, 0
    ctx->pc = 0x18d530u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d534: 0x15a83f  dsra32      $s5, $s5, 0
    ctx->pc = 0x18d534u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 0));
    // 0x18d538: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x18d538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x18d53c: 0x24626ef0  addiu       $v0, $v1, 0x6EF0
    ctx->pc = 0x18d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28400));
    // 0x18d540: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x18d540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x18d544: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x18d544u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18d548: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18d548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d54c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x18d54cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18d550: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x18d550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18d554: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18d554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18d558: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x18d558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18d55c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x18d55cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18d560: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x18d560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x18d564: 0x2442e890  addiu       $v0, $v0, -0x1770
    ctx->pc = 0x18d564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961296));
    // 0x18d568: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x18d568u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d56c: 0x92220097  lbu         $v0, 0x97($s1)
    ctx->pc = 0x18d56cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 151)));
    // 0x18d570: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d574: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18D574u;
    {
        const bool branch_taken_0x18d574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d574) {
            ctx->pc = 0x18D58Cu;
            return;
        }
    }
    ctx->pc = 0x18D57Cu;
    // 0x18d57c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18d57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18d580: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x18d580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x18d584: 0x100001ae  b           . + 4 + (0x1AE << 2)
    ctx->pc = 0x18D584u;
    {
        const bool branch_taken_0x18d584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d584) {
            ctx->pc = 0x18DC40u;
            return;
        }
    }
    ctx->pc = 0x18D58Cu;
}
