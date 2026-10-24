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

// Function: entry_001f4220
// Address: 0x1f4220 - 0x1f4264
void entry_001f4220_0x1f4220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f4220_0x1f4220");
#endif

    ctx->pc = 0x1f4220u;

    // 0x1f4220: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f4220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4224: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1f4224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f4228: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x1f4228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1f422c: 0x2403dfe7  addiu       $v1, $zero, -0x2019
    ctx->pc = 0x1f422cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959079));
    // 0x1f4230: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f4230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f4234: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x1f4234u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x1f4238: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f4238u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f423c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f423cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4240: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x1f4240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x1f4244: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f4244u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4248: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f4248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f424c: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x1f424cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x1f4250: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f4250u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4254: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f4254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4258: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f4258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x1f425c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1F425Cu;
    {
        const bool branch_taken_0x1f425c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f425c) {
            ctx->pc = 0x1F4338u;
            return;
        }
    }
    ctx->pc = 0x1F4264u;
}
