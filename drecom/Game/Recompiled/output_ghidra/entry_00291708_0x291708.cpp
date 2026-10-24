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

// Function: entry_00291708
// Address: 0x291708 - 0x29172c
void entry_00291708_0x291708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00291708_0x291708");
#endif

    ctx->pc = 0x291708u;

    // 0x291708: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x291708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x29170c: 0x90430008  lbu         $v1, 0x8($v0)
    ctx->pc = 0x29170cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x291710: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x291710u;
    {
        const bool branch_taken_0x291710 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x291710) {
            ctx->pc = 0x29172Cu;
            return;
        }
    }
    ctx->pc = 0x291718u;
    // 0x291718: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x291718u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29171c: 0x0  nop
    ctx->pc = 0x29171cu;
    // NOP
    // 0x291720: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x291720u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x291724: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x291724u;
    {
        const bool branch_taken_0x291724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291724) {
            ctx->pc = 0x291748u;
            return;
        }
    }
    ctx->pc = 0x29172Cu;
}
