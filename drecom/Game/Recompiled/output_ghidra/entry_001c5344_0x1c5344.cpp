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

// Function: entry_001c5344
// Address: 0x1c5344 - 0x1c53b4
void entry_001c5344_0x1c5344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5344_0x1c5344");
#endif

    ctx->pc = 0x1c5344u;

    // 0x1c5344: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5348: 0x90631084  lbu         $v1, 0x1084($v1)
    ctx->pc = 0x1c5348u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4228)));
    // 0x1c534c: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C534Cu;
    {
        const bool branch_taken_0x1c534c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c534c) {
            ctx->pc = 0x1C53B4u;
            return;
        }
    }
    ctx->pc = 0x1C5354u;
    // 0x1c5354: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5358: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1c5358u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1c535c: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C535Cu;
    {
        const bool branch_taken_0x1c535c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c535c) {
            ctx->pc = 0x1C53B4u;
            return;
        }
    }
    ctx->pc = 0x1C5364u;
    // 0x1c5364: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5368: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c5368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c536c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c536cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c5370: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c5370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c5374: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C5374u;
    {
        const bool branch_taken_0x1c5374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5374) {
            ctx->pc = 0x1C53B4u;
            return;
        }
    }
    ctx->pc = 0x1C537Cu;
    // 0x1c537c: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1c537cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1c5380: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5384: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x1c5384u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c5388: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c5388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c538c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c538cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5390: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c5390u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c5394: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5398: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c5398u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c539c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c539cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c53a0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c53a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c53a4: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c53a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c53a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c53a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c53ac: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c53acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c53b0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c53b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1c53b4u;
}
