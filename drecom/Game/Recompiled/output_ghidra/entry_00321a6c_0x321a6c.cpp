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

// Function: entry_00321a6c
// Address: 0x321a6c - 0x321ab0
void entry_00321a6c_0x321a6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00321a6c_0x321a6c");
#endif

    ctx->pc = 0x321a6cu;

    // 0x321a6c: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x321a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321a70: 0x8c830270  lw          $v1, 0x270($a0)
    ctx->pc = 0x321a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x321a74: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x321a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x321a78: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x321A78u;
    {
        const bool branch_taken_0x321a78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x321a78) {
            ctx->pc = 0x321AB0u;
            return;
        }
    }
    ctx->pc = 0x321A80u;
    // 0x321a80: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x321a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321a84: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x321a84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x321a88: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x321a88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x321a8c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x321a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321a90: 0x8c650278  lw          $a1, 0x278($v1)
    ctx->pc = 0x321a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 632)));
    // 0x321a94: 0x85082b  sltu        $at, $a0, $a1
    ctx->pc = 0x321a94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x321a98: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x321A98u;
    {
        const bool branch_taken_0x321a98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x321a98) {
            ctx->pc = 0x321AB0u;
            return;
        }
    }
    ctx->pc = 0x321AA0u;
    // 0x321aa0: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x321aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321aa4: 0x8cc40b18  lw          $a0, 0xB18($a2)
    ctx->pc = 0x321aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2840)));
    // 0x321aa8: 0x34830008  ori         $v1, $a0, 0x8
    ctx->pc = 0x321aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x321aac: 0xacc30b18  sw          $v1, 0xB18($a2)
    ctx->pc = 0x321aacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2840), GPR_U32(ctx, 3));
    ctx->pc = 0x321ab0u;
}
