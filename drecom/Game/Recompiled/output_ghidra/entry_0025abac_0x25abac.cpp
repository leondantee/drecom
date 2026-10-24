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

// Function: entry_0025abac
// Address: 0x25abac - 0x25abcc
void entry_0025abac_0x25abac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025abac_0x25abac");
#endif

    ctx->pc = 0x25abacu;

    // 0x25abac: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x25abacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x25abb0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25ABB0u;
    {
        const bool branch_taken_0x25abb0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x25abb0) {
            ctx->pc = 0x25ABCCu;
            return;
        }
    }
    ctx->pc = 0x25ABB8u;
    // 0x25abb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25abb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25abbc: 0x0  nop
    ctx->pc = 0x25abbcu;
    // NOP
    // 0x25abc0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x25abc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25abc4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25ABC4u;
    {
        const bool branch_taken_0x25abc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25abc4) {
            ctx->pc = 0x25ABE8u;
            return;
        }
    }
    ctx->pc = 0x25ABCCu;
}
