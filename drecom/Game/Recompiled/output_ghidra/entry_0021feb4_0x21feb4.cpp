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

// Function: entry_0021feb4
// Address: 0x21feb4 - 0x21fed4
void entry_0021feb4_0x21feb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021feb4_0x21feb4");
#endif

    ctx->pc = 0x21feb4u;

    // 0x21feb4: 0x24150006  addiu       $s5, $zero, 0x6
    ctx->pc = 0x21feb4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21feb8: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x21feb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x21febc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21febcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21fec0: 0x0  nop
    ctx->pc = 0x21fec0u;
    // NOP
    // 0x21fec4: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x21fec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x21fec8: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x21fec8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21fecc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x21FECCu;
    {
        const bool branch_taken_0x21fecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fecc) {
            ctx->pc = 0x21FF0Cu;
            return;
        }
    }
    ctx->pc = 0x21FED4u;
}
