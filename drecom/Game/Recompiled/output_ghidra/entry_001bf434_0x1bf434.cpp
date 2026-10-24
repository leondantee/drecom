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

// Function: entry_001bf434
// Address: 0x1bf434 - 0x1bf4b8
void entry_001bf434_0x1bf434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf434_0x1bf434");
#endif

    ctx->pc = 0x1bf434u;

    // 0x1bf434: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf438: 0x90631084  lbu         $v1, 0x1084($v1)
    ctx->pc = 0x1bf438u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4228)));
    // 0x1bf43c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1bf43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bf440: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1bf440u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bf444: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x1BF444u;
    {
        const bool branch_taken_0x1bf444 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf444) {
            ctx->pc = 0x1BF4B8u;
            return;
        }
    }
    ctx->pc = 0x1BF44Cu;
    // 0x1bf44c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf450: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1bf450u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1bf454: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BF454u;
    {
        const bool branch_taken_0x1bf454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf454) {
            ctx->pc = 0x1BF4B8u;
            return;
        }
    }
    ctx->pc = 0x1BF45Cu;
    // 0x1bf45c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf460: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1bf460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bf464: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1bf464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1bf468: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bf468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bf46c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BF46Cu;
    {
        const bool branch_taken_0x1bf46c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf46c) {
            ctx->pc = 0x1BF4B8u;
            return;
        }
    }
    ctx->pc = 0x1BF474u;
    // 0x1bf474: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1bf474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bf478: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf47c: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x1bf47cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x1bf480: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1bf480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bf484: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf488: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1bf488u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bf48c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1bf48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bf490: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf494: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1bf494u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x1bf498: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf49c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1bf49cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bf4a0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1bf4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf4a4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1bf4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1bf4a8: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1bf4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1bf4ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1bf4acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1bf4b0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bf4b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bf4b4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1bf4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1bf4b8u;
}
