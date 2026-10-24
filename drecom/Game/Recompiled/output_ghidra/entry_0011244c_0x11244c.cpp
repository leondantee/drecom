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

// Function: entry_0011244c
// Address: 0x11244c - 0x112464
void entry_0011244c_0x11244c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011244c_0x11244c");
#endif

    ctx->pc = 0x11244cu;

    // 0x11244c: 0x46016001  sub.s       $f0, $f12, $f1
    ctx->pc = 0x11244cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x112450: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x112450u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x112454: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x112454u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x112458: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x112458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x11245c: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x11245Cu;
    {
        const bool branch_taken_0x11245c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11245Cu;
        // 0x112460: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11245c) {
            ctx->pc = 0x1126E0u;
            return;
        }
    }
    ctx->pc = 0x112464u;
}
