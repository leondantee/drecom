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

// Function: entry_00321638
// Address: 0x321638 - 0x321678
void entry_00321638_0x321638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00321638_0x321638");
#endif

    ctx->pc = 0x321638u;

    // 0x321638: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x321638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x32163c: 0x8c630270  lw          $v1, 0x270($v1)
    ctx->pc = 0x32163cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 624)));
    // 0x321640: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x321640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x321644: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x321644u;
    {
        const bool branch_taken_0x321644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x321644) {
            ctx->pc = 0x321678u;
            return;
        }
    }
    ctx->pc = 0x32164Cu;
    // 0x32164c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x32164cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321650: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x321650u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x321654: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x321654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x321658: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x321658u;
    {
        const bool branch_taken_0x321658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x321658) {
            ctx->pc = 0x321678u;
            return;
        }
    }
    ctx->pc = 0x321660u;
    // 0x321660: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x321660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321664: 0x8c830358  lw          $v1, 0x358($a0)
    ctx->pc = 0x321664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 856)));
    // 0x321668: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x321668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32166c: 0xac830358  sw          $v1, 0x358($a0)
    ctx->pc = 0x32166cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 856), GPR_U32(ctx, 3));
    // 0x321670: 0x10000114  b           . + 4 + (0x114 << 2)
    ctx->pc = 0x321670u;
    {
        const bool branch_taken_0x321670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321670) {
            ctx->pc = 0x321AC4u;
            return;
        }
    }
    ctx->pc = 0x321678u;
}
