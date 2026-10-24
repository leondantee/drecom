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

// Function: entry_0030a918
// Address: 0x30a918 - 0x30a93c
void entry_0030a918_0x30a918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030a918_0x30a918");
#endif

    ctx->pc = 0x30a918u;

    // 0x30a918: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30a918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a91c: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x30a91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30a920: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30a920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a924: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x30a924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30a928: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30a928u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30a92c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x30a92cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x30a930: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30a930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a934: 0xc097a68  jal         func_25E9A0
    ctx->pc = 0x30A934u;
    SET_GPR_U32(ctx, 31, 0x30A93Cu);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x30A934u, 0x30A93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A93Cu;
}
