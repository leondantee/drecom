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

// Function: entry_00318314
// Address: 0x318314 - 0x318364
void entry_00318314_0x318314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00318314_0x318314");
#endif

    ctx->pc = 0x318314u;

    // 0x318314: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x318314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318318: 0x8ca6128c  lw          $a2, 0x128C($a1)
    ctx->pc = 0x318318u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4748)));
    // 0x31831c: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x31831cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x318320: 0xaca4128c  sw          $a0, 0x128C($a1)
    ctx->pc = 0x318320u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4748), GPR_U32(ctx, 4));
    // 0x318324: 0x8fa90048  lw          $t1, 0x48($sp)
    ctx->pc = 0x318324u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318328: 0x8d25128c  lw          $a1, 0x128C($t1)
    ctx->pc = 0x318328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4748)));
    // 0x31832c: 0x2ca10033  sltiu       $at, $a1, 0x33
    ctx->pc = 0x31832cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
    // 0x318330: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x318330u;
    {
        const bool branch_taken_0x318330 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x318330) {
            ctx->pc = 0x318364u;
            return;
        }
    }
    ctx->pc = 0x318338u;
    // 0x318338: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x318338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31833c: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x31833cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318340: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x318340u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x318344: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x318344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318348: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x318348u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x31834c: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x31834cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318350: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x318350u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x318354: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x318354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318358: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x318358u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x31835c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31835cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318360: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x318360u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x318364u;
}
