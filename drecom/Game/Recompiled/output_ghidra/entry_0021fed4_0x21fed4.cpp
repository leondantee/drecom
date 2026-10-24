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

// Function: entry_0021fed4
// Address: 0x21fed4 - 0x21fef4
void entry_0021fed4_0x21fed4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fed4_0x21fed4");
#endif

    ctx->pc = 0x21fed4u;

    // 0x21fed4: 0x2415000a  addiu       $s5, $zero, 0xA
    ctx->pc = 0x21fed4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x21fed8: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x21fed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x21fedc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21fedcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21fee0: 0x0  nop
    ctx->pc = 0x21fee0u;
    // NOP
    // 0x21fee4: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x21fee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x21fee8: 0x24160006  addiu       $s6, $zero, 0x6
    ctx->pc = 0x21fee8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21feec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x21FEECu;
    {
        const bool branch_taken_0x21feec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21feec) {
            ctx->pc = 0x21FF0Cu;
            return;
        }
    }
    ctx->pc = 0x21FEF4u;
}
