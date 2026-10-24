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

// Function: entry_001b860c
// Address: 0x1b860c - 0x1b8664
void entry_001b860c_0x1b860c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b860c_0x1b860c");
#endif

    switch (ctx->pc) {
        case 0x1b861cu: goto label_1b861c;
        default: break;
    }

    ctx->pc = 0x1b860cu;

    // 0x1b860c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b860cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8610: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x1b8610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x1b8614: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1B8614u;
    SET_GPR_U32(ctx, 31, 0x1B861Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1B8614u, 0x1B861Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B861Cu;
label_1b861c:
    // 0x1b861c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b861cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8620: 0x8c631b64  lw          $v1, 0x1B64($v1)
    ctx->pc = 0x1b8620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7012)));
    // 0x1b8624: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1B8624u;
    {
        const bool branch_taken_0x1b8624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8624) {
            ctx->pc = 0x1B8664u;
            return;
        }
    }
    ctx->pc = 0x1B862Cu;
    // 0x1b862c: 0x3c0442a2  lui         $a0, 0x42A2
    ctx->pc = 0x1b862cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17058 << 16));
    // 0x1b8630: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b8630u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8634: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b8634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8638: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1b8638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x1b863c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1b863cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1b8640: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b8640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8644: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b8644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8648: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x1b8648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x1b864c: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x1b864cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
    // 0x1b8650: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b8650u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8654: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b8654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8658: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x1b8658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x1b865c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B865Cu;
    {
        const bool branch_taken_0x1b865c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b865c) {
            ctx->pc = 0x1B869Cu;
            return;
        }
    }
    ctx->pc = 0x1B8664u;
}
