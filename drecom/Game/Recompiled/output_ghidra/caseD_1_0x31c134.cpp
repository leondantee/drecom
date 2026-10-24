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

// Function: caseD_1
// Address: 0x31c134 - 0x31c1a0
void caseD_1_0x31c134(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x31c134");
#endif

    ctx->pc = 0x31c134u;

    // 0x31c134: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c138: 0x8c421294  lw          $v0, 0x1294($v0)
    ctx->pc = 0x31c138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4756)));
    // 0x31c13c: 0x1440008b  bnez        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x31C13Cu;
    {
        const bool branch_taken_0x31c13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31c13c) {
            ctx->pc = 0x31C36Cu;
            return;
        }
    }
    ctx->pc = 0x31C144u;
    // 0x31c144: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c148: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x31c148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x31c14c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x31c14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x31c150: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x31c150u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x31c154: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31c154u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c158: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31c158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c15c: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x31c15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
    // 0x31c160: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31c160u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c164: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c168: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x31c168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x31c16c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31c16cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c170: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c174: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x31c174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x31c178: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c17c: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x31c17cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x31c180: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x31c180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31c184: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31c184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31c188: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x31C188u;
    {
        const bool branch_taken_0x31c188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31c188) {
            ctx->pc = 0x31C1E4u;
            return;
        }
    }
    ctx->pc = 0x31C190u;
    // 0x31c190: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31C190u;
    {
        const bool branch_taken_0x31c190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c190) {
            ctx->pc = 0x31C1A0u;
            return;
        }
    }
    ctx->pc = 0x31C198u;
    // 0x31c198: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x31C198u;
    {
        const bool branch_taken_0x31c198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c198) {
            ctx->pc = 0x31C220u;
            return;
        }
    }
    ctx->pc = 0x31C1A0u;
}
