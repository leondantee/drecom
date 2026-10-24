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

// Function: entry_0027ad44
// Address: 0x27ad44 - 0x27ad60
void entry_0027ad44_0x27ad44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027ad44_0x27ad44");
#endif

    ctx->pc = 0x27ad44u;

    // 0x27ad44: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x27ad44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x27ad48: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27AD48u;
    {
        const bool branch_taken_0x27ad48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x27ad48) {
            ctx->pc = 0x27AD60u;
            return;
        }
    }
    ctx->pc = 0x27AD50u;
    // 0x27ad50: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x27ad50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x27ad54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ad54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ad58: 0x0  nop
    ctx->pc = 0x27ad58u;
    // NOP
    // 0x27ad5c: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x27ad5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    ctx->pc = 0x27ad60u;
}
