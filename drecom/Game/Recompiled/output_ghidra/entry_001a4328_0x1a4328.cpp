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

// Function: entry_001a4328
// Address: 0x1a4328 - 0x1a4390
void entry_001a4328_0x1a4328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4328_0x1a4328");
#endif

    ctx->pc = 0x1a4328u;

    // 0x1a4328: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a4328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a432c: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x1a432cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x1a4330: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1a4330u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a4334: 0x30832000  andi        $v1, $a0, 0x2000
    ctx->pc = 0x1a4334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x1a4338: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A4338u;
    {
        const bool branch_taken_0x1a4338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4338) {
            ctx->pc = 0x1A4390u;
            return;
        }
    }
    ctx->pc = 0x1A4340u;
    // 0x1a4340: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1a4340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4344: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1a4344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a4348: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a434c: 0xa0640311  sb          $a0, 0x311($v1)
    ctx->pc = 0x1a434cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 785), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a4350: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1a4350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a4354: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4358: 0xa0640312  sb          $a0, 0x312($v1)
    ctx->pc = 0x1a4358u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 786), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a435c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a435cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4360: 0xa0600310  sb          $zero, 0x310($v1)
    ctx->pc = 0x1a4360u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 784), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4364: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a4364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4368: 0x8c83030c  lw          $v1, 0x30C($a0)
    ctx->pc = 0x1a4368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 780)));
    // 0x1a436c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a436cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a4370: 0xac83030c  sw          $v1, 0x30C($a0)
    ctx->pc = 0x1a4370u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 780), GPR_U32(ctx, 3));
    // 0x1a4374: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a4374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4378: 0xa08002b0  sb          $zero, 0x2B0($a0)
    ctx->pc = 0x1a4378u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 688), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a437c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a437cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4380: 0x8c63030c  lw          $v1, 0x30C($v1)
    ctx->pc = 0x1a4380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 780)));
    // 0x1a4384: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1a4384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a4388: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a438c: 0xa064031c  sb          $a0, 0x31C($v1)
    ctx->pc = 0x1a438cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 796), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1a4390u;
}
