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

// Function: caseD_2
// Address: 0x2de57c - 0x2de5d4
void caseD_2_0x2de57c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x2de57c");
#endif

    switch (ctx->pc) {
        case 0x2de59cu: goto label_2de59c;
        default: break;
    }

    ctx->pc = 0x2de57cu;

    // 0x2de57c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de580: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de584: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2de584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2de588: 0x24060027  addiu       $a2, $zero, 0x27
    ctx->pc = 0x2de588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x2de58c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2de58cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2de590: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2de590u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2de594: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2DE594u;
    SET_GPR_U32(ctx, 31, 0x2DE59Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DE594u, 0x2DE59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE59Cu;
label_2de59c:
    // 0x2de59c: 0x3c0242e0  lui         $v0, 0x42E0
    ctx->pc = 0x2de59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17120 << 16));
    // 0x2de5a0: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x2de5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x2de5a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2de5a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2de5a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de5ac: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x2de5acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x2de5b0: 0x3c0240a3  lui         $v0, 0x40A3
    ctx->pc = 0x2de5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16547 << 16));
    // 0x2de5b4: 0x34423334  ori         $v0, $v0, 0x3334
    ctx->pc = 0x2de5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13108);
    // 0x2de5b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2de5b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2de5bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de5c0: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x2de5c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x2de5c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2de5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de5c8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2de5c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2de5cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2de5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2de5d0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2de5d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2de5d4u;
}
