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

// Function: entry_00124e80
// Address: 0x124e80 - 0x124ef8
void entry_00124e80_0x124e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124e80_0x124e80");
#endif

    ctx->pc = 0x124e80u;

    // 0x124e80: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x124e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124e84: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x124e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x124e88: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x124e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x124e8c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x124e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x124e90: 0x14600046  bnez        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x124E90u;
    {
        const bool branch_taken_0x124e90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x124e90) {
            ctx->pc = 0x124FACu;
            return;
        }
    }
    ctx->pc = 0x124E98u;
    // 0x124e98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x124e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124e9c: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x124e9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x124ea0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x124ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x124ea4: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x124ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x124ea8: 0x14600040  bnez        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x124EA8u;
    {
        const bool branch_taken_0x124ea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x124ea8) {
            ctx->pc = 0x124FACu;
            return;
        }
    }
    ctx->pc = 0x124EB0u;
    // 0x124eb0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x124eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x124eb4: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x124eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x124eb8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x124EB8u;
    {
        const bool branch_taken_0x124eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x124eb8) {
            ctx->pc = 0x124EF8u;
            return;
        }
    }
    ctx->pc = 0x124EC0u;
    // 0x124ec0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x124ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124ec4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x124ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124ec8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x124ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x124ecc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x124eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x124ed0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x124ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124ed4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x124ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x124ed8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x124ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124edc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x124edcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x124ee0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x124ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124ee4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x124ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x124ee8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x124ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124eec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x124eecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x124ef0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x124EF0u;
    {
        const bool branch_taken_0x124ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124ef0) {
            ctx->pc = 0x124FACu;
            return;
        }
    }
    ctx->pc = 0x124EF8u;
}
