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

// Function: caseD_0
// Address: 0x199540 - 0x1995b0
void caseD_0_0x199540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x199540");
#endif

    switch (ctx->pc) {
        case 0x199560u: goto label_199560;
        default: break;
    }

    ctx->pc = 0x199540u;

    // 0x199540: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199544: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199548: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x199548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x19954c: 0x24063c03  addiu       $a2, $zero, 0x3C03
    ctx->pc = 0x19954cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15363));
    // 0x199550: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x199550u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199554: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x199554u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x199558: 0xc0965d0  jal         func_259740
    ctx->pc = 0x199558u;
    SET_GPR_U32(ctx, 31, 0x199560u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x199558u, 0x199560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199560u;
label_199560:
    // 0x199560: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199564: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x199564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x199568: 0x94620140  lhu         $v0, 0x140($v1)
    ctx->pc = 0x199568u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 320)));
    // 0x19956c: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x19956cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
    // 0x199570: 0xa4620140  sh          $v0, 0x140($v1)
    ctx->pc = 0x199570u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x199574: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x199574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x199578: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19957c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19957cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199580: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x199580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x199584: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x199584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x199588: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19958c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19958cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199590: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x199590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x199594: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x199594u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199598: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19959c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x19959cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x1995a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1995a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1995a4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1995a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1995a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1995a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1995ac: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1995acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1995b0u;
}
