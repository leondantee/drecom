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

// Function: entry_001d4ecc
// Address: 0x1d4ecc - 0x1d4f38
void entry_001d4ecc_0x1d4ecc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4ecc_0x1d4ecc");
#endif

    switch (ctx->pc) {
        case 0x1d4f04u: goto label_1d4f04;
        case 0x1d4f18u: goto label_1d4f18;
        default: break;
    }

    ctx->pc = 0x1d4eccu;

    // 0x1d4ecc: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x1d4eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1d4ed0: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x1d4ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
    // 0x1d4ed4: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x1d4ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1d4ed8: 0x24530080  addiu       $s3, $v0, 0x80
    ctx->pc = 0x1d4ed8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1d4edc: 0x8fa20144  lw          $v0, 0x144($sp)
    ctx->pc = 0x1d4edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x1d4ee0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1d4ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d4ee4: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x1d4ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
    // 0x1d4ee8: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x1d4ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x1d4eec: 0x24570080  addiu       $s7, $v0, 0x80
    ctx->pc = 0x1d4eecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1d4ef0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1d4ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d4ef4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1d4ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1d4ef8: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1d4ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1d4efc: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1D4EFCu;
    SET_GPR_U32(ctx, 31, 0x1D4F04u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1D4F04u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4F04u) { return; }
    ctx->pc = 0x1D4F04u;
label_1d4f04:
    // 0x1d4f04: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1d4f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d4f08: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1d4f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1d4f0c: 0x2445e510  addiu       $a1, $v0, -0x1AF0
    ctx->pc = 0x1d4f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960400));
    // 0x1d4f10: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1D4F10u;
    SET_GPR_U32(ctx, 31, 0x1D4F18u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1D4F18u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4F18u) { return; }
    ctx->pc = 0x1D4F18u;
label_1d4f18:
    // 0x1d4f18: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d4f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d4f1c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1d4f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1d4f20: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1d4f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1d4f24: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d4f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d4f28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4F28u;
    {
        const bool branch_taken_0x1d4f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4f28) {
            ctx->pc = 0x1D4F38u;
            return;
        }
    }
    ctx->pc = 0x1D4F30u;
    // 0x1d4f30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d4f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d4f34: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x1d4f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
    ctx->pc = 0x1d4f38u;
}
