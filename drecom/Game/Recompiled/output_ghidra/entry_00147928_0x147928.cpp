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

// Function: entry_00147928
// Address: 0x147928 - 0x14796c
void entry_00147928_0x147928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147928_0x147928");
#endif

    switch (ctx->pc) {
        case 0x147948u: goto label_147948;
        default: break;
    }

    ctx->pc = 0x147928u;

    // 0x147928: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14792c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x14792cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147930: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x147930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x147934: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x147934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x147938: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x147938u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14793c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14793cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x147940: 0xc0965d0  jal         func_259740
    ctx->pc = 0x147940u;
    SET_GPR_U32(ctx, 31, 0x147948u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x147940u, 0x147948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147948u;
label_147948:
    // 0x147948: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14794c: 0x94420a02  lhu         $v0, 0xA02($v0)
    ctx->pc = 0x14794cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2562)));
    // 0x147950: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x147950u;
    {
        const bool branch_taken_0x147950 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x147950) {
            ctx->pc = 0x14796Cu;
            return;
        }
    }
    ctx->pc = 0x147958u;
    // 0x147958: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x147958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14795c: 0x0  nop
    ctx->pc = 0x14795cu;
    // NOP
    // 0x147960: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x147960u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x147964: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x147964u;
    {
        const bool branch_taken_0x147964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147964) {
            ctx->pc = 0x147988u;
            return;
        }
    }
    ctx->pc = 0x14796Cu;
}
