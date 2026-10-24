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

// Function: entry_00285be4
// Address: 0x285be4 - 0x285c4c
void entry_00285be4_0x285be4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00285be4_0x285be4");
#endif

    ctx->pc = 0x285be4u;

    // 0x285be4: 0x92236624  lbu         $v1, 0x6624($s1)
    ctx->pc = 0x285be4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26148)));
    // 0x285be8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x285be8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x285bec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x285becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285bf0: 0x1483002d  bne         $a0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x285BF0u;
    {
        const bool branch_taken_0x285bf0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x285bf0) {
            ctx->pc = 0x285CA8u;
            return;
        }
    }
    ctx->pc = 0x285BF8u;
    // 0x285bf8: 0x9223660d  lbu         $v1, 0x660D($s1)
    ctx->pc = 0x285bf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26125)));
    // 0x285bfc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x285bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x285c00: 0x14600029  bnez        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x285C00u;
    {
        const bool branch_taken_0x285c00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x285c00) {
            ctx->pc = 0x285CA8u;
            return;
        }
    }
    ctx->pc = 0x285C08u;
    // 0x285c08: 0x82235dea  lb          $v1, 0x5DEA($s1)
    ctx->pc = 0x285c08u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24042)));
    // 0x285c0c: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x285c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x285c10: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x285c10u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x285c14: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x285C14u;
    {
        const bool branch_taken_0x285c14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x285c14) {
            ctx->pc = 0x285CA8u;
            return;
        }
    }
    ctx->pc = 0x285C1Cu;
    // 0x285c1c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x285c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x285c20: 0x8c230128  lw          $v1, 0x128($at)
    ctx->pc = 0x285c20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0128u));
    // 0x285c24: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x285c24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x285c28: 0x642824  and         $a1, $v1, $a0
    ctx->pc = 0x285c28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x285c2c: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x285C2Cu;
    {
        const bool branch_taken_0x285c2c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x285c2c) {
            ctx->pc = 0x285C4Cu;
            return;
        }
    }
    ctx->pc = 0x285C34u;
    // 0x285c34: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x285c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x285c38: 0x8c26011c  lw          $a2, 0x11C($at)
    ctx->pc = 0x285c38u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x285c3c: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x285c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x285c40: 0xc74024  and         $t0, $a2, $a3
    ctx->pc = 0x285c40u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x285c44: 0x11000018  beqz        $t0, . + 4 + (0x18 << 2)
    ctx->pc = 0x285C44u;
    {
        const bool branch_taken_0x285c44 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x285c44) {
            ctx->pc = 0x285CA8u;
            return;
        }
    }
    ctx->pc = 0x285C4Cu;
}
