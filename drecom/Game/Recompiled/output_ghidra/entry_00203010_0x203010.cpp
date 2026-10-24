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

// Function: entry_00203010
// Address: 0x203010 - 0x203050
void entry_00203010_0x203010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203010_0x203010");
#endif

    ctx->pc = 0x203010u;

    // 0x203010: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x203010u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x203014: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x203014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x203018: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x203018u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x20301c: 0x1460ff38  bnez        $v1, . + 4 + (-0xC8 << 2)
    ctx->pc = 0x20301Cu;
    {
        const bool branch_taken_0x20301c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20301c) {
            ctx->pc = 0x202D00u;
            return;
        }
    }
    ctx->pc = 0x203024u;
    // 0x203024: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x203024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x203028: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x203028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20302c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20302cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x203030: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x203030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x203034: 0x8fa600e4  lw          $a2, 0xE4($sp)
    ctx->pc = 0x203034u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x203038: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x203038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x20303c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x20303cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x203040: 0xafa300e4  sw          $v1, 0xE4($sp)
    ctx->pc = 0x203040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 3));
    // 0x203044: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x203044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x203048: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x203048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20304c: 0xafa600e0  sw          $a2, 0xE0($sp)
    ctx->pc = 0x20304cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 6));
    ctx->pc = 0x203050u;
}
