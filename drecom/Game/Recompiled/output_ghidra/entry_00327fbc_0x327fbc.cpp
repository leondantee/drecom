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

// Function: entry_00327fbc
// Address: 0x327fbc - 0x327ff0
void entry_00327fbc_0x327fbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00327fbc_0x327fbc");
#endif

    ctx->pc = 0x327fbcu;

    // 0x327fbc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x327fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x327fc0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x327fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x327fc4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x327fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x327fc8: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x327fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x327fcc: 0x8c820ab8  lw          $v0, 0xAB8($a0)
    ctx->pc = 0x327fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2744)));
    // 0x327fd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x327fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327fd4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x327FD4u;
    {
        const bool branch_taken_0x327fd4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x327fd4) {
            ctx->pc = 0x327FF0u;
            return;
        }
    }
    ctx->pc = 0x327FDCu;
    // 0x327fdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x327fdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327fe0: 0x0  nop
    ctx->pc = 0x327fe0u;
    // NOP
    // 0x327fe4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x327fe4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x327fe8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x327FE8u;
    {
        const bool branch_taken_0x327fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327fe8) {
            ctx->pc = 0x32800Cu;
            return;
        }
    }
    ctx->pc = 0x327FF0u;
}
