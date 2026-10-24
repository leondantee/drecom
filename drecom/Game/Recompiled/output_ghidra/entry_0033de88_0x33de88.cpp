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

// Function: entry_0033de88
// Address: 0x33de88 - 0x33dec8
void entry_0033de88_0x33de88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033de88_0x33de88");
#endif

    ctx->pc = 0x33de88u;

    // 0x33de88: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x33de88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x33de8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33de8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33de90: 0xae23005c  sw          $v1, 0x5C($s1)
    ctx->pc = 0x33de90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 3));
    // 0x33de94: 0x96230052  lhu         $v1, 0x52($s1)
    ctx->pc = 0x33de94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 82)));
    // 0x33de98: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x33DE98u;
    {
        const bool branch_taken_0x33de98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33de98) {
            ctx->pc = 0x33DEC8u;
            return;
        }
    }
    ctx->pc = 0x33DEA0u;
    // 0x33dea0: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x33dea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x33dea4: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x33dea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
    // 0x33dea8: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x33dea8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
    // 0x33deac: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x33deacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x33deb0: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x33DEB0u;
    {
        const bool branch_taken_0x33deb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33deb0) {
            ctx->pc = 0x33DEF8u;
            return;
        }
    }
    ctx->pc = 0x33DEB8u;
    // 0x33deb8: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x33deb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x33debc: 0xa6200052  sh          $zero, 0x52($s1)
    ctx->pc = 0x33debcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 82), (uint16_t)GPR_U32(ctx, 0));
    // 0x33dec0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x33DEC0u;
    {
        const bool branch_taken_0x33dec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33dec0) {
            ctx->pc = 0x33DEF8u;
            return;
        }
    }
    ctx->pc = 0x33DEC8u;
}
