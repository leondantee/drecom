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

// Function: entry_002d7218
// Address: 0x2d7218 - 0x2d7258
void entry_002d7218_0x2d7218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d7218_0x2d7218");
#endif

    ctx->pc = 0x2d7218u;

    // 0x2d7218: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d721c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2d721cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2d7220: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d7220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d7224: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2d7224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2d7228: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D7228u;
    {
        const bool branch_taken_0x2d7228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7228) {
            ctx->pc = 0x2D7258u;
            return;
        }
    }
    ctx->pc = 0x2D7230u;
    // 0x2d7230: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7234: 0x24421348  addiu       $v0, $v0, 0x1348
    ctx->pc = 0x2d7234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x2d7238: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2d7238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d723c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d723cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7240: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d7240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d7244: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d7244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7248: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d7248u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d724c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2d724cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d7250: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D7250u;
    {
        const bool branch_taken_0x2d7250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7250) {
            ctx->pc = 0x2D7278u;
            return;
        }
    }
    ctx->pc = 0x2D7258u;
}
