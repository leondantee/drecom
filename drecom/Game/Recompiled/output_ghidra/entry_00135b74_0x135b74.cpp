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

// Function: entry_00135b74
// Address: 0x135b74 - 0x135bb0
void entry_00135b74_0x135b74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135b74_0x135b74");
#endif

    switch (ctx->pc) {
        case 0x135b9cu: goto label_135b9c;
        default: break;
    }

    ctx->pc = 0x135b74u;

    // 0x135b74: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x135b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135b78: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x135b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x135b7c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x135b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x135b80: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x135b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x135b84: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x135b84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x135b88: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x135b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x135b8c: 0x24650570  addiu       $a1, $v1, 0x570
    ctx->pc = 0x135b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1392));
    // 0x135b90: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x135b90u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x135b94: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x135B94u;
    SET_GPR_U32(ctx, 31, 0x135B9Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x135B94u, 0x135B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135B9Cu;
label_135b9c:
    // 0x135b9c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x135b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135ba0: 0x8c83121c  lw          $v1, 0x121C($a0)
    ctx->pc = 0x135ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4636)));
    // 0x135ba4: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x135ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x135ba8: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x135ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x135bac: 0xac83121c  sw          $v1, 0x121C($a0)
    ctx->pc = 0x135bacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4636), GPR_U32(ctx, 3));
    ctx->pc = 0x135bb0u;
}
