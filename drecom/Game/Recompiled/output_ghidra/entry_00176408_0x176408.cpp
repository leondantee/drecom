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

// Function: entry_00176408
// Address: 0x176408 - 0x17648c
void entry_00176408_0x176408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176408_0x176408");
#endif

    ctx->pc = 0x176408u;

    // 0x176408: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x176408u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17640c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x17640cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x176410: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x176410u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x176414: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x176414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x176418: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x176418u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17641c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x17641cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x176420: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x176420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x176424: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x176424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x176428: 0x8c63007c  lw          $v1, 0x7C($v1)
    ctx->pc = 0x176428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x17642c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x17642cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x176430: 0x146000b3  bnez        $v1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x176430u;
    {
        const bool branch_taken_0x176430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x176430) {
            ctx->pc = 0x176700u;
            return;
        }
    }
    ctx->pc = 0x176438u;
    // 0x176438: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x176438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17643c: 0x8c7700a0  lw          $s7, 0xA0($v1)
    ctx->pc = 0x17643cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x176440: 0x8ee30008  lw          $v1, 0x8($s7)
    ctx->pc = 0x176440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x176444: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x176444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x176448: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x176448u;
    {
        const bool branch_taken_0x176448 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x176448) {
            ctx->pc = 0x17648Cu;
            return;
        }
    }
    ctx->pc = 0x176450u;
    // 0x176450: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x176450u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x176454: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x176454u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x176458: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x176458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x17645c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17645cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x176460: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x176460u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x176464: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x176464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x176468: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x176468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x17646c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17646cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x176470: 0x8c64007c  lw          $a0, 0x7C($v1)
    ctx->pc = 0x176470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x176474: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x176474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x176478: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x176478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x17647c: 0x106000a0  beqz        $v1, . + 4 + (0xA0 << 2)
    ctx->pc = 0x17647Cu;
    {
        const bool branch_taken_0x17647c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17647c) {
            ctx->pc = 0x176700u;
            return;
        }
    }
    ctx->pc = 0x176484u;
    // 0x176484: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x176484u;
    {
        const bool branch_taken_0x176484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176484) {
            ctx->pc = 0x1764C0u;
            return;
        }
    }
    ctx->pc = 0x17648Cu;
}
