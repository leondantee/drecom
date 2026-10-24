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

// Function: entry_001ca5c8
// Address: 0x1ca5c8 - 0x1ca630
void entry_001ca5c8_0x1ca5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca5c8_0x1ca5c8");
#endif

    ctx->pc = 0x1ca5c8u;

    // 0x1ca5c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ca5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca5cc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca5d0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ca5d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ca5d4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1ca5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ca5d8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca5dc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1ca5dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ca5e0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca5e4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ca5e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca5e8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca5ec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ca5ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca5f0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca5f4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ca5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ca5f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ca5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca5fc: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1ca5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca600: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x1ca600u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ca604: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca608: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ca608u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca60c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1ca60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ca610: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca614: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1ca614u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ca618: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1ca618u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca61c: 0xa4c0127c  sh          $zero, 0x127C($a2)
    ctx->pc = 0x1ca61cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ca620: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1ca620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca624: 0xa0a0156c  sb          $zero, 0x156C($a1)
    ctx->pc = 0x1ca624u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5484), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca628: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x1CA628u;
    {
        const bool branch_taken_0x1ca628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca628) {
            ctx->pc = 0x1CA8E8u;
            return;
        }
    }
    ctx->pc = 0x1CA630u;
}
