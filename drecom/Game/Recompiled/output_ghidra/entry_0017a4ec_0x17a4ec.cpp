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

// Function: entry_0017a4ec
// Address: 0x17a4ec - 0x17a528
void entry_0017a4ec_0x17a4ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a4ec_0x17a4ec");
#endif

    switch (ctx->pc) {
        case 0x17a518u: goto label_17a518;
        default: break;
    }

    ctx->pc = 0x17a4ecu;

    // 0x17a4ec: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x17a4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x17a4f0: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x17a4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x17a4f4: 0xaec20004  sw          $v0, 0x4($s6)
    ctx->pc = 0x17a4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
    // 0x17a4f8: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x17a4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x17a4fc: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x17a4fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17a500: 0x96820004  lhu         $v0, 0x4($s4)
    ctx->pc = 0x17a500u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x17a504: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x17a504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17a508: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x17a508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17a50c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x17a50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17a510: 0xc05e990  jal         func_17A640
    ctx->pc = 0x17A510u;
    SET_GPR_U32(ctx, 31, 0x17A518u);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x17A510u, 0x17A518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A518u;
label_17a518:
    // 0x17a518: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17a518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17a51c: 0xa6820004  sh          $v0, 0x4($s4)
    ctx->pc = 0x17a51cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x17a520: 0x26d60010  addiu       $s6, $s6, 0x10
    ctx->pc = 0x17a520u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x17a524: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x17a524u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x17a528u;
}
