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

// Function: entry_00184220
// Address: 0x184220 - 0x184260
void entry_00184220_0x184220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184220_0x184220");
#endif

    ctx->pc = 0x184220u;

    // 0x184220: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x184220u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x184224: 0x1440ffb1  bnez        $v0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x184224u;
    {
        const bool branch_taken_0x184224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x184224) {
            ctx->pc = 0x1840ECu;
            return;
        }
    }
    ctx->pc = 0x18422Cu;
    // 0x18422c: 0x1240002a  beqz        $s2, . + 4 + (0x2A << 2)
    ctx->pc = 0x18422Cu;
    {
        const bool branch_taken_0x18422c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x18422c) {
            ctx->pc = 0x1842D8u;
            return;
        }
    }
    ctx->pc = 0x184234u;
    // 0x184234: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x184234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x184238: 0x8c330af0  lw          $s3, 0xAF0($at)
    ctx->pc = 0x184238u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x18423c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x18423cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x184240: 0x2454f260  addiu       $s4, $v0, -0xDA0
    ctx->pc = 0x184240u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963808));
    // 0x184244: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x184244u;
    {
        const bool branch_taken_0x184244 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x184244) {
            ctx->pc = 0x184260u;
            return;
        }
    }
    ctx->pc = 0x18424Cu;
    // 0x18424c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x18424cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184250: 0x0  nop
    ctx->pc = 0x184250u;
    // NOP
    // 0x184254: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x184254u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x184258: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x184258u;
    {
        const bool branch_taken_0x184258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184258) {
            ctx->pc = 0x18427Cu;
            return;
        }
    }
    ctx->pc = 0x184260u;
}
