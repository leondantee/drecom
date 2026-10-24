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

// Function: entry_001bd4ec
// Address: 0x1bd4ec - 0x1bd550
void entry_001bd4ec_0x1bd4ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd4ec_0x1bd4ec");
#endif

    switch (ctx->pc) {
        case 0x1bd518u: goto label_1bd518;
        case 0x1bd530u: goto label_1bd530;
        case 0x1bd540u: goto label_1bd540;
        default: break;
    }

    ctx->pc = 0x1bd4ecu;

    // 0x1bd4ec: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1bd4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1bd4f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bd4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd4f4: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x1bd4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bd4f8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bd4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd4fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bd4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd500: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1bd500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1bd504: 0x24060a49  addiu       $a2, $zero, 0xA49
    ctx->pc = 0x1bd504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2633));
    // 0x1bd508: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1bd508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bd50c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bd50cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bd510: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BD510u;
    SET_GPR_U32(ctx, 31, 0x1BD518u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BD510u, 0x1BD518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD518u;
label_1bd518:
    // 0x1bd518: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd51c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bd51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd520: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1bd520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bd524: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1bd524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bd528: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1BD528u;
    SET_GPR_U32(ctx, 31, 0x1BD530u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1BD528u, 0x1BD530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD530u;
label_1bd530:
    // 0x1bd530: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1bd530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1bd534: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1bd534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bd538: 0xc05733c  jal         func_15CCF0
    ctx->pc = 0x1BD538u;
    SET_GPR_U32(ctx, 31, 0x1BD540u);
    ctx->pc = 0x15CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CCF0u, 0x1BD538u, 0x1BD540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD540u;
label_1bd540:
    // 0x1bd540: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd544: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1bd544u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1bd548: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bd548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bd54c: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1bd54cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1bd550u;
}
