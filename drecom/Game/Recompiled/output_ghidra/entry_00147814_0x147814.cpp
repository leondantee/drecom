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

// Function: entry_00147814
// Address: 0x147814 - 0x14785c
void entry_00147814_0x147814(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147814_0x147814");
#endif

    switch (ctx->pc) {
        case 0x147834u: goto label_147834;
        default: break;
    }

    ctx->pc = 0x147814u;

    // 0x147814: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147818: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14781c: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x14781cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x147820: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x147820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x147824: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x147824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147828: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x147828u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14782c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14782Cu;
    SET_GPR_U32(ctx, 31, 0x147834u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14782Cu, 0x147834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147834u;
label_147834:
    // 0x147834: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x147834u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x147838: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14783c: 0x94650a02  lhu         $a1, 0xA02($v1)
    ctx->pc = 0x14783cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2562)));
    // 0x147840: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x147840u;
    {
        const bool branch_taken_0x147840 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x147840) {
            ctx->pc = 0x14785Cu;
            return;
        }
    }
    ctx->pc = 0x147848u;
    // 0x147848: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x147848u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14784c: 0x0  nop
    ctx->pc = 0x14784cu;
    // NOP
    // 0x147850: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x147850u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x147854: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x147854u;
    {
        const bool branch_taken_0x147854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147854) {
            ctx->pc = 0x147878u;
            return;
        }
    }
    ctx->pc = 0x14785Cu;
}
