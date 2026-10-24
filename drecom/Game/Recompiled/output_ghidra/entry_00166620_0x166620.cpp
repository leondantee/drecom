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

// Function: entry_00166620
// Address: 0x166620 - 0x166674
void entry_00166620_0x166620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166620_0x166620");
#endif

    switch (ctx->pc) {
        case 0x16663cu: goto label_16663c;
        default: break;
    }

    ctx->pc = 0x166620u;

    // 0x166620: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x166620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x166624: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x166624u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x166628: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x166628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x16662c: 0x3444a000  ori         $a0, $v0, 0xA000
    ctx->pc = 0x16662cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x166630: 0x3c05f000  lui         $a1, 0xF000
    ctx->pc = 0x166630u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61440 << 16));
    // 0x166634: 0xc04086e  jal         func_1021B8
    ctx->pc = 0x166634u;
    SET_GPR_U32(ctx, 31, 0x16663Cu);
    ctx->pc = 0x1021B8u;
    {
        ctx->pc = 0x16663Cu;
        ps2_stubs::sceDmaSend(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16663Cu) { return; }
    ctx->pc = 0x16663Cu;
label_16663c:
    // 0x16663c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x16663cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x166640: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x166640u;
    {
        const bool branch_taken_0x166640 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x166640) {
            ctx->pc = 0x166674u;
            return;
        }
    }
    ctx->pc = 0x166648u;
    // 0x166648: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x166648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16664c: 0x24630038  addiu       $v1, $v1, 0x38
    ctx->pc = 0x16664cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x166650: 0xae030a50  sw          $v1, 0xA50($s0)
    ctx->pc = 0x166650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2640), GPR_U32(ctx, 3));
    // 0x166654: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x166654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166658: 0x246301f0  addiu       $v1, $v1, 0x1F0
    ctx->pc = 0x166658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 496));
    // 0x16665c: 0xae030a54  sw          $v1, 0xA54($s0)
    ctx->pc = 0x16665cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2644), GPR_U32(ctx, 3));
    // 0x166660: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x166660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166664: 0x24630270  addiu       $v1, $v1, 0x270
    ctx->pc = 0x166664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 624));
    // 0x166668: 0xae030a58  sw          $v1, 0xA58($s0)
    ctx->pc = 0x166668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2648), GPR_U32(ctx, 3));
    // 0x16666c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16666Cu;
    {
        const bool branch_taken_0x16666c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16666c) {
            ctx->pc = 0x166694u;
            return;
        }
    }
    ctx->pc = 0x166674u;
}
