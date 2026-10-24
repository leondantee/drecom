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

// Function: entry_0025d53c
// Address: 0x25d53c - 0x25d560
void entry_0025d53c_0x25d53c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025d53c_0x25d53c");
#endif

    ctx->pc = 0x25d53cu;

    // 0x25d53c: 0x8e0609f8  lw          $a2, 0x9F8($s0)
    ctx->pc = 0x25d53cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2552)));
    // 0x25d540: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x25d540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x25d544: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25D544u;
    {
        const bool branch_taken_0x25d544 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x25d544) {
            ctx->pc = 0x25D560u;
            return;
        }
    }
    ctx->pc = 0x25D54Cu;
    // 0x25d54c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25d54cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d550: 0x0  nop
    ctx->pc = 0x25d550u;
    // NOP
    // 0x25d554: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x25d554u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25d558: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25D558u;
    {
        const bool branch_taken_0x25d558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d558) {
            ctx->pc = 0x25D57Cu;
            return;
        }
    }
    ctx->pc = 0x25D560u;
}
