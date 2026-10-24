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

// Function: entry_001400a4
// Address: 0x1400a4 - 0x1400f4
void entry_001400a4_0x1400a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001400a4_0x1400a4");
#endif

    ctx->pc = 0x1400a4u;

    // 0x1400a4: 0x8e330008  lw          $s3, 0x8($s1)
    ctx->pc = 0x1400a4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1400a8: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1400a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1400ac: 0x2631824  and         $v1, $s3, $v1
    ctx->pc = 0x1400acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
    // 0x1400b0: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1400B0u;
    {
        const bool branch_taken_0x1400b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1400b0) {
            ctx->pc = 0x140100u;
            return;
        }
    }
    ctx->pc = 0x1400B8u;
    // 0x1400b8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1400b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1400bc: 0x30720f00  andi        $s2, $v1, 0xF00
    ctx->pc = 0x1400bcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
    // 0x1400c0: 0x129202  srl         $s2, $s2, 8
    ctx->pc = 0x1400c0u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 18), 8));
    // 0x1400c4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1400c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1400c8: 0x1643000d  bne         $s2, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1400C8u;
    {
        const bool branch_taken_0x1400c8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x1400c8) {
            ctx->pc = 0x140100u;
            return;
        }
    }
    ctx->pc = 0x1400D0u;
    // 0x1400d0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1400d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1400d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1400d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1400d8: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1400D8u;
    {
        const bool branch_taken_0x1400d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1400d8) {
            ctx->pc = 0x1400F4u;
            return;
        }
    }
    ctx->pc = 0x1400E0u;
    // 0x1400e0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1400e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1400e4: 0x306300fb  andi        $v1, $v1, 0xFB
    ctx->pc = 0x1400e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)251);
    // 0x1400e8: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x1400e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1400ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1400ECu;
    {
        const bool branch_taken_0x1400ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1400ec) {
            ctx->pc = 0x140100u;
            return;
        }
    }
    ctx->pc = 0x1400F4u;
}
