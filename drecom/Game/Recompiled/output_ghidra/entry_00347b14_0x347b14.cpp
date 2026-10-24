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

// Function: entry_00347b14
// Address: 0x347b14 - 0x347b60
void entry_00347b14_0x347b14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00347b14_0x347b14");
#endif

    ctx->pc = 0x347b14u;

    // 0x347b14: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347b18: 0x24721330  addiu       $s2, $v1, 0x1330
    ctx->pc = 0x347b18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347b1c: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x347b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x347b20: 0x30a40008  andi        $a0, $a1, 0x8
    ctx->pc = 0x347b20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
    // 0x347b24: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x347B24u;
    {
        const bool branch_taken_0x347b24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x347b24) {
            ctx->pc = 0x347B60u;
            return;
        }
    }
    ctx->pc = 0x347B2Cu;
    // 0x347b2c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347b30: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x347b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347b34: 0xa060006e  sb          $zero, 0x6E($v1)
    ctx->pc = 0x347b34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x347b38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x347b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347b3c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x347b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347b40: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x347b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x347b44: 0xa065006f  sb          $a1, 0x6F($v1)
    ctx->pc = 0x347b44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 5));
    // 0x347b48: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x347b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x347b4c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x347b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347b50: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x347b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x347b54: 0xa0650072  sb          $a1, 0x72($v1)
    ctx->pc = 0x347b54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 5));
    // 0x347b58: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x347B58u;
    {
        const bool branch_taken_0x347b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x347b58) {
            ctx->pc = 0x347B88u;
            return;
        }
    }
    ctx->pc = 0x347B60u;
}
