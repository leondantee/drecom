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

// Function: entry_00349080
// Address: 0x349080 - 0x3490a8
void entry_00349080_0x349080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00349080_0x349080");
#endif

    ctx->pc = 0x349080u;

    // 0x349080: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x349080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349084: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x349084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x349088: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x349088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x34908c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x34908cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x349090: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x349090u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x349094: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x349094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x349098: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x349098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34909c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34909cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3490a0: 0xc0d56ac  jal         func_355AB0
    ctx->pc = 0x3490A0u;
    SET_GPR_U32(ctx, 31, 0x3490A8u);
    ctx->pc = 0x355AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355AB0u, 0x3490A0u, 0x3490A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3490A8u;
}
