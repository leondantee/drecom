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

// Function: entry_00184760
// Address: 0x184760 - 0x184794
void entry_00184760_0x184760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184760_0x184760");
#endif

    ctx->pc = 0x184760u;

    // 0x184760: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x184760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184764: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x184764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x184768: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x184768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x18476c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x18476cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x184770: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x184770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184774: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x184774u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x184778: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x184778u;
    {
        const bool branch_taken_0x184778 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x184778) {
            ctx->pc = 0x184794u;
            return;
        }
    }
    ctx->pc = 0x184780u;
    // 0x184780: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x184780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184784: 0x0  nop
    ctx->pc = 0x184784u;
    // NOP
    // 0x184788: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x184788u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18478c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18478Cu;
    {
        const bool branch_taken_0x18478c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18478c) {
            ctx->pc = 0x1847B0u;
            return;
        }
    }
    ctx->pc = 0x184794u;
}
