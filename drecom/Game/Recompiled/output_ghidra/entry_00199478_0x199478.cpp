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

// Function: entry_00199478
// Address: 0x199478 - 0x1994d0
void entry_00199478_0x199478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199478_0x199478");
#endif

    switch (ctx->pc) {
        case 0x19949cu: goto label_19949c;
        case 0x1994acu: goto label_1994ac;
        case 0x1994b8u: goto label_1994b8;
        default: break;
    }

    ctx->pc = 0x199478u;

    // 0x199478: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19947c: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x19947cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199480: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199484: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x199484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199488: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x199488u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x19948c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x19948cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x199490: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199494: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x199494u;
    SET_GPR_U32(ctx, 31, 0x19949Cu);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x199494u, 0x19949Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19949Cu;
label_19949c:
    // 0x19949c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x19949cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1994a0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1994a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1994a4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x1994A4u;
    SET_GPR_U32(ctx, 31, 0x1994ACu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x1994A4u, 0x1994ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1994ACu;
label_1994ac:
    // 0x1994ac: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1994acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1994b0: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x1994B0u;
    SET_GPR_U32(ctx, 31, 0x1994B8u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x1994B0u, 0x1994B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1994B8u;
label_1994b8:
    // 0x1994b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1994b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1994bc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1994bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1994c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1994C0u;
    {
        const bool branch_taken_0x1994c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1994c0) {
            ctx->pc = 0x1994D0u;
            return;
        }
    }
    ctx->pc = 0x1994C8u;
    // 0x1994c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1994c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1994cc: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x1994ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1994d0u;
}
