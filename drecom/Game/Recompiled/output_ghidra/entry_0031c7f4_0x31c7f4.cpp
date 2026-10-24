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

// Function: entry_0031c7f4
// Address: 0x31c7f4 - 0x31c828
void entry_0031c7f4_0x31c7f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031c7f4_0x31c7f4");
#endif

    switch (ctx->pc) {
        case 0x31c804u: goto label_31c804;
        default: break;
    }

    ctx->pc = 0x31c7f4u;

    // 0x31c7f4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c7f8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x31c7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x31c7fc: 0xc05cfdc  jal         func_173F70
    ctx->pc = 0x31C7FCu;
    SET_GPR_U32(ctx, 31, 0x31C804u);
    ctx->pc = 0x173F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173F70u, 0x31C7FCu, 0x31C804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C804u;
label_31c804:
    // 0x31c804: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x31c804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x31c808: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x31c808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31c80c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c810: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x31c810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x31c814: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x31c814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x31c818: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c81c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x31c81cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x31c820: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x31C820u;
    {
        const bool branch_taken_0x31c820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c820) {
            ctx->pc = 0x31C880u;
            return;
        }
    }
    ctx->pc = 0x31C828u;
}
