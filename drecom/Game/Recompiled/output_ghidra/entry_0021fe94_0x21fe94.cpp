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

// Function: entry_0021fe94
// Address: 0x21fe94 - 0x21feb4
void entry_0021fe94_0x21fe94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fe94_0x21fe94");
#endif

    ctx->pc = 0x21fe94u;

    // 0x21fe94: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x21fe94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21fe98: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x21fe98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x21fe9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21fe9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21fea0: 0x0  nop
    ctx->pc = 0x21fea0u;
    // NOP
    // 0x21fea4: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x21fea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x21fea8: 0x24160004  addiu       $s6, $zero, 0x4
    ctx->pc = 0x21fea8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21feac: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x21FEACu;
    {
        const bool branch_taken_0x21feac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21feac) {
            ctx->pc = 0x21FF0Cu;
            return;
        }
    }
    ctx->pc = 0x21FEB4u;
}
