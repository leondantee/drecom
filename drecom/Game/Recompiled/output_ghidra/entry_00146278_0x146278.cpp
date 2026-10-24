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

// Function: entry_00146278
// Address: 0x146278 - 0x1462a4
void entry_00146278_0x146278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146278_0x146278");
#endif

    switch (ctx->pc) {
        case 0x14629cu: goto label_14629c;
        default: break;
    }

    ctx->pc = 0x146278u;

    // 0x146278: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x146278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14627c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x14627cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x146280: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x146280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x146284: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x146284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x146288: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x146288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x14628c: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x14628cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x146290: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x146290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x146294: 0xc058f50  jal         func_163D40
    ctx->pc = 0x146294u;
    SET_GPR_U32(ctx, 31, 0x14629Cu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x146294u, 0x14629Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14629Cu;
label_14629c:
    // 0x14629c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x14629cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1462a0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1462a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x1462a4u;
}
