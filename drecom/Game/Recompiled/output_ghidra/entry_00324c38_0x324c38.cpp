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

// Function: entry_00324c38
// Address: 0x324c38 - 0x324c5c
void entry_00324c38_0x324c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00324c38_0x324c38");
#endif

    ctx->pc = 0x324c38u;

    // 0x324c38: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x324c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x324c3c: 0x93a20068  lbu         $v0, 0x68($sp)
    ctx->pc = 0x324c3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x324c40: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x324C40u;
    {
        const bool branch_taken_0x324c40 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x324c40) {
            ctx->pc = 0x324C5Cu;
            return;
        }
    }
    ctx->pc = 0x324C48u;
    // 0x324c48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x324c48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324c4c: 0x0  nop
    ctx->pc = 0x324c4cu;
    // NOP
    // 0x324c50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x324c50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x324c54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x324C54u;
    {
        const bool branch_taken_0x324c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x324c54) {
            ctx->pc = 0x324C78u;
            return;
        }
    }
    ctx->pc = 0x324C5Cu;
}
