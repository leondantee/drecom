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

// Function: entry_002087d4
// Address: 0x2087d4 - 0x20882c
void entry_002087d4_0x2087d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002087d4_0x2087d4");
#endif

    switch (ctx->pc) {
        case 0x2087f8u: goto label_2087f8;
        case 0x208808u: goto label_208808;
        case 0x208814u: goto label_208814;
        default: break;
    }

    ctx->pc = 0x2087d4u;

    // 0x2087d4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2087d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2087d8: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x2087d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2087dc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2087dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2087e0: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x2087e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2087e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2087e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2087e8: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2087e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2087ec: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2087ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2087f0: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x2087F0u;
    SET_GPR_U32(ctx, 31, 0x2087F8u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x2087F0u, 0x2087F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2087F8u;
label_2087f8:
    // 0x2087f8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2087f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2087fc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2087fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x208800: 0xc080f60  jal         func_203D80
    ctx->pc = 0x208800u;
    SET_GPR_U32(ctx, 31, 0x208808u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x208800u, 0x208808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208808u;
label_208808:
    // 0x208808: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x208808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20880c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20880Cu;
    SET_GPR_U32(ctx, 31, 0x208814u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20880Cu, 0x208814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208814u;
label_208814:
    // 0x208814: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x208814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208818: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x208818u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x20881c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20881Cu;
    {
        const bool branch_taken_0x20881c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20881c) {
            ctx->pc = 0x20882Cu;
            return;
        }
    }
    ctx->pc = 0x208824u;
    // 0x208824: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x208824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208828: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x208828u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x20882cu;
}
