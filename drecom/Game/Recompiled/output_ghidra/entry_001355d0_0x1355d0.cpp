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

// Function: entry_001355d0
// Address: 0x1355d0 - 0x13564c
void entry_001355d0_0x1355d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001355d0_0x1355d0");
#endif

    switch (ctx->pc) {
        case 0x1355f4u: goto label_1355f4;
        case 0x135624u: goto label_135624;
        default: break;
    }

    ctx->pc = 0x1355d0u;

    // 0x1355d0: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1355d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1355d4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1355d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1355d8: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1355d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1355dc: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x1355dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x1355e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1355e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1355e4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1355e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1355e8: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1355e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1355ec: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1355ECu;
    SET_GPR_U32(ctx, 31, 0x1355F4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1355F4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1355F4u) { return; }
    ctx->pc = 0x1355F4u;
label_1355f4:
    // 0x1355f4: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1355f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1355f8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1355f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1355fc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1355fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135600: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x135600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135604: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x135604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135608: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x135608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13560c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x13560cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x135610: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x135610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x135614: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x135614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135618: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x135618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13561c: 0xc040ca2  jal         func_103288
    ctx->pc = 0x13561Cu;
    SET_GPR_U32(ctx, 31, 0x135624u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x135624u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x135624u) { return; }
    ctx->pc = 0x135624u;
label_135624:
    // 0x135624: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x135624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x135628: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x135628u;
    {
        const bool branch_taken_0x135628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x135628) {
            ctx->pc = 0x13564Cu;
            return;
        }
    }
    ctx->pc = 0x135630u;
    // 0x135630: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x135630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x135634: 0x8ca4121c  lw          $a0, 0x121C($a1)
    ctx->pc = 0x135634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4636)));
    // 0x135638: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x135638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x13563c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x13563cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x135640: 0xaca3121c  sw          $v1, 0x121C($a1)
    ctx->pc = 0x135640u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4636), GPR_U32(ctx, 3));
    // 0x135644: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x135644u;
    {
        const bool branch_taken_0x135644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135644) {
            ctx->pc = 0x135660u;
            return;
        }
    }
    ctx->pc = 0x13564Cu;
}
