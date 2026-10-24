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

// Function: entry_0025db38
// Address: 0x25db38 - 0x25db68
void entry_0025db38_0x25db38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025db38_0x25db38");
#endif

    ctx->pc = 0x25db38u;

    // 0x25db38: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x25db38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x25db3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25db3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25db40: 0xc6200108  lwc1        $f0, 0x108($s1)
    ctx->pc = 0x25db40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25db44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25db44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25db48: 0xe6200108  swc1        $f0, 0x108($s1)
    ctx->pc = 0x25db48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
    // 0x25db4c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x25db4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x25db50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25db50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25db54: 0xc620010c  lwc1        $f0, 0x10C($s1)
    ctx->pc = 0x25db54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25db58: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25db58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25db5c: 0xe620010c  swc1        $f0, 0x10C($s1)
    ctx->pc = 0x25db5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 268), bits); }
    // 0x25db60: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x25DB60u;
    {
        const bool branch_taken_0x25db60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25db60) {
            ctx->pc = 0x25DC80u;
            return;
        }
    }
    ctx->pc = 0x25DB68u;
}
