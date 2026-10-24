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

// Function: entry_002ded44
// Address: 0x2ded44 - 0x2ded90
void entry_002ded44_0x2ded44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ded44_0x2ded44");
#endif

    switch (ctx->pc) {
        case 0x2ded68u: goto label_2ded68;
        default: break;
    }

    ctx->pc = 0x2ded44u;

    // 0x2ded44: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2ded44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ded48: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x2ded48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ded4c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2ded4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ded50: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x2ded50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ded54: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2ded54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2ded58: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x2ded58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x2ded5c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2ded5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ded60: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DED60u;
    SET_GPR_U32(ctx, 31, 0x2DED68u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DED60u, 0x2DED68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DED68u;
label_2ded68:
    // 0x2ded68: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2ded68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ded6c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2ded6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2ded70: 0x1060011f  beqz        $v1, . + 4 + (0x11F << 2)
    ctx->pc = 0x2DED70u;
    {
        const bool branch_taken_0x2ded70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ded70) {
            ctx->pc = 0x2DF1F0u;
            return;
        }
    }
    ctx->pc = 0x2DED78u;
    // 0x2ded78: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2ded78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ded7c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2ded7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2ded80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ded80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ded84: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2ded84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ded88: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x2DED88u;
    {
        const bool branch_taken_0x2ded88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ded88) {
            ctx->pc = 0x2DF1F0u;
            return;
        }
    }
    ctx->pc = 0x2DED90u;
}
