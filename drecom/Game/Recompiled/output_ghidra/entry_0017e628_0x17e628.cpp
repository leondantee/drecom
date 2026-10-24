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

// Function: entry_0017e628
// Address: 0x17e628 - 0x17e68c
void entry_0017e628_0x17e628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e628_0x17e628");
#endif

    ctx->pc = 0x17e628u;

    // 0x17e628: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e62c: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x17e62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x17e630: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x17E630u;
    {
        const bool branch_taken_0x17e630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e630) {
            ctx->pc = 0x17E758u;
            return;
        }
    }
    ctx->pc = 0x17E638u;
    // 0x17e638: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x17e638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e63c: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x17e63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x17e640: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17e640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17e644: 0xac6200c0  sw          $v0, 0xC0($v1)
    ctx->pc = 0x17e644u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 2));
    // 0x17e648: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e64c: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x17e64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x17e650: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e654: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x17e654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x17e658: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17E658u;
    {
        const bool branch_taken_0x17e658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17e658) {
            ctx->pc = 0x17E68Cu;
            return;
        }
    }
    ctx->pc = 0x17E660u;
    // 0x17e660: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e664: 0xac4000c0  sw          $zero, 0xC0($v0)
    ctx->pc = 0x17e664u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 0));
    // 0x17e668: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e66c: 0xac4000c4  sw          $zero, 0xC4($v0)
    ctx->pc = 0x17e66cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 0));
    // 0x17e670: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e674: 0xc440007c  lwc1        $f0, 0x7C($v0)
    ctx->pc = 0x17e674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e678: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e67c: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x17e67cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17e680: 0xe44001b0  swc1        $f0, 0x1B0($v0)
    ctx->pc = 0x17e680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 432), bits); }
    // 0x17e684: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x17E684u;
    {
        const bool branch_taken_0x17e684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e684) {
            ctx->pc = 0x17E754u;
            return;
        }
    }
    ctx->pc = 0x17E68Cu;
}
