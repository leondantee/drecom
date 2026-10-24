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

// Function: entry_0020f434
// Address: 0x20f434 - 0x20f470
void entry_0020f434_0x20f434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020f434_0x20f434");
#endif

    switch (ctx->pc) {
        case 0x20f458u: goto label_20f458;
        case 0x20f46cu: goto label_20f46c;
        default: break;
    }

    ctx->pc = 0x20f434u;

    // 0x20f434: 0x8fa60528  lw          $a2, 0x528($sp)
    ctx->pc = 0x20f434u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f438: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20f438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f43c: 0x24c80180  addiu       $t0, $a2, 0x180
    ctx->pc = 0x20f43cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 384));
    // 0x20f440: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x20f440u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x20f444: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x20f444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x20f448: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20f448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20f44c: 0xc42c9548  lwc1        $f12, -0x6AB8($at)
    ctx->pc = 0x20f44cu;
    { uint32_t bits = FAST_READ32(0x619548u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20f450: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x20F450u;
    SET_GPR_U32(ctx, 31, 0x20F458u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x20F458u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20F458u) { return; }
    ctx->pc = 0x20F458u;
label_20f458:
    // 0x20f458: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x20f458u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20f45c: 0x8fa90528  lw          $t1, 0x528($sp)
    ctx->pc = 0x20f45cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f460: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x20f460u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x20f464: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x20F464u;
    SET_GPR_U32(ctx, 31, 0x20F46Cu);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x20F464u, 0x20F46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F46Cu;
label_20f46c:
    // 0x20f46c: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x20f46cu;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20f470u;
}
