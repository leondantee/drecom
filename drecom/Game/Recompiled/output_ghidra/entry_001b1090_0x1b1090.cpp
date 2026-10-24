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

// Function: entry_001b1090
// Address: 0x1b1090 - 0x1b1128
void entry_001b1090_0x1b1090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1090_0x1b1090");
#endif

    ctx->pc = 0x1b1090u;

    // 0x1b1090: 0x8fa304a0  lw          $v1, 0x4A0($sp)
    ctx->pc = 0x1b1090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x1b1094: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1b1094u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b1098: 0x8fa30494  lw          $v1, 0x494($sp)
    ctx->pc = 0x1b1098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1172)));
    // 0x1b109c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b109cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b10a0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1b10a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1b10a4: 0x8fa30494  lw          $v1, 0x494($sp)
    ctx->pc = 0x1b10a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1172)));
    // 0x1b10a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b10a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b10ac: 0xafa3049c  sw          $v1, 0x49C($sp)
    ctx->pc = 0x1b10acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1180), GPR_U32(ctx, 3));
    // 0x1b10b0: 0x8fa3049c  lw          $v1, 0x49C($sp)
    ctx->pc = 0x1b10b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1180)));
    // 0x1b10b4: 0xafa30498  sw          $v1, 0x498($sp)
    ctx->pc = 0x1b10b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1176), GPR_U32(ctx, 3));
    // 0x1b10b8: 0x8fa30498  lw          $v1, 0x498($sp)
    ctx->pc = 0x1b10b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1176)));
    // 0x1b10bc: 0x24760004  addiu       $s6, $v1, 0x4
    ctx->pc = 0x1b10bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1b10c0: 0x8fa304b8  lw          $v1, 0x4B8($sp)
    ctx->pc = 0x1b10c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1208)));
    // 0x1b10c4: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x1b10c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1b10c8: 0xafa30490  sw          $v1, 0x490($sp)
    ctx->pc = 0x1b10c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 3));
    // 0x1b10cc: 0x8fa30498  lw          $v1, 0x498($sp)
    ctx->pc = 0x1b10ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1176)));
    // 0x1b10d0: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x1b10d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1b10d4: 0x30643fff  andi        $a0, $v1, 0x3FFF
    ctx->pc = 0x1b10d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1b10d8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1b10d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1b10dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b10dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b10e0: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x1b10e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1b10e4: 0x8fa30490  lw          $v1, 0x490($sp)
    ctx->pc = 0x1b10e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x1b10e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b10e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b10ec: 0xafa30490  sw          $v1, 0x490($sp)
    ctx->pc = 0x1b10ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 3));
    // 0x1b10f0: 0x8fa30490  lw          $v1, 0x490($sp)
    ctx->pc = 0x1b10f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x1b10f4: 0x8c750034  lw          $s5, 0x34($v1)
    ctx->pc = 0x1b10f4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1b10f8: 0x7000f628  paddub      $fp, $zero, $zero
    ctx->pc = 0x1b10f8u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b10fc: 0xafa004a4  sw          $zero, 0x4A4($sp)
    ctx->pc = 0x1b10fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1188), GPR_U32(ctx, 0));
    // 0x1b1100: 0x8fa30498  lw          $v1, 0x498($sp)
    ctx->pc = 0x1b1100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1176)));
    // 0x1b1104: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x1b1104u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1b1108: 0x30643fff  andi        $a0, $v1, 0x3FFF
    ctx->pc = 0x1b1108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1b110c: 0x8fa304a8  lw          $v1, 0x4A8($sp)
    ctx->pc = 0x1b110cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1192)));
    // 0x1b1110: 0x10830061  beq         $a0, $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x1B1110u;
    {
        const bool branch_taken_0x1b1110 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b1110) {
            ctx->pc = 0x1B1298u;
            return;
        }
    }
    ctx->pc = 0x1B1118u;
    // 0x1b1118: 0x8fa30498  lw          $v1, 0x498($sp)
    ctx->pc = 0x1b1118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1176)));
    // 0x1b111c: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x1b111cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1b1120: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x1b1120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1b1124: 0xafa304a8  sw          $v1, 0x4A8($sp)
    ctx->pc = 0x1b1124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1192), GPR_U32(ctx, 3));
    ctx->pc = 0x1b1128u;
}
