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

// Function: entry_002dc31c
// Address: 0x2dc31c - 0x2dc378
void entry_002dc31c_0x2dc31c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dc31c_0x2dc31c");
#endif

    ctx->pc = 0x2dc31cu;

    // 0x2dc31c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc320: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2dc320u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2dc324: 0x106000b1  beqz        $v1, . + 4 + (0xB1 << 2)
    ctx->pc = 0x2DC324u;
    {
        const bool branch_taken_0x2dc324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc324) {
            ctx->pc = 0x2DC5ECu;
            return;
        }
    }
    ctx->pc = 0x2DC32Cu;
    // 0x2dc32c: 0x920300db  lbu         $v1, 0xDB($s0)
    ctx->pc = 0x2dc32cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x2dc330: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2dc330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2dc334: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x2dc334u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2dc338: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2DC338u;
    {
        const bool branch_taken_0x2dc338 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc338) {
            ctx->pc = 0x2DC378u;
            return;
        }
    }
    ctx->pc = 0x2DC340u;
    // 0x2dc340: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2dc340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc344: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc348: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2dc348u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dc34c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2dc34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2dc350: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc354: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2dc354u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dc358: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc35c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2dc35cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc360: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc364: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2dc364u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc368: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc36c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2dc36cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2dc370: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x2DC370u;
    {
        const bool branch_taken_0x2dc370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc370) {
            ctx->pc = 0x2DC5ECu;
            return;
        }
    }
    ctx->pc = 0x2DC378u;
}
