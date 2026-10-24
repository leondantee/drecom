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

// Function: entry_001c60e4
// Address: 0x1c60e4 - 0x1c6154
void entry_001c60e4_0x1c60e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c60e4_0x1c60e4");
#endif

    ctx->pc = 0x1c60e4u;

    // 0x1c60e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c60e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c60e8: 0x90631084  lbu         $v1, 0x1084($v1)
    ctx->pc = 0x1c60e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4228)));
    // 0x1c60ec: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C60ECu;
    {
        const bool branch_taken_0x1c60ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c60ec) {
            ctx->pc = 0x1C6154u;
            return;
        }
    }
    ctx->pc = 0x1C60F4u;
    // 0x1c60f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c60f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c60f8: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1c60f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1c60fc: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C60FCu;
    {
        const bool branch_taken_0x1c60fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c60fc) {
            ctx->pc = 0x1C6154u;
            return;
        }
    }
    ctx->pc = 0x1C6104u;
    // 0x1c6104: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c6104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6108: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c6108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c610c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c610cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c6110: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c6110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c6114: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C6114u;
    {
        const bool branch_taken_0x1c6114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6114) {
            ctx->pc = 0x1C6154u;
            return;
        }
    }
    ctx->pc = 0x1C611Cu;
    // 0x1c611c: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1c611cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1c6120: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c6120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6124: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x1c6124u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c6128: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c6128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c612c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c612cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6130: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c6130u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c6134: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c6134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6138: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c6138u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c613c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c613cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6140: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c6140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c6144: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c6144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c6148: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c6148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c614c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c614cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c6150: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c6150u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1c6154u;
}
