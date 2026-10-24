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

// Function: entry_00285af4
// Address: 0x285af4 - 0x285b18
void entry_00285af4_0x285af4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00285af4_0x285af4");
#endif

    switch (ctx->pc) {
        case 0x285b0cu: goto label_285b0c;
        default: break;
    }

    ctx->pc = 0x285af4u;

    // 0x285af4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x285af4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x285af8: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x285af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x285afc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x285afcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285b00: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x285b00u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285b04: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x285B04u;
    SET_GPR_U32(ctx, 31, 0x285B0Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x285B04u, 0x285B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285B0Cu;
label_285b0c:
    // 0x285b0c: 0x8e23685c  lw          $v1, 0x685C($s1)
    ctx->pc = 0x285b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26716)));
    // 0x285b10: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x285b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x285b14: 0xae23685c  sw          $v1, 0x685C($s1)
    ctx->pc = 0x285b14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26716), GPR_U32(ctx, 3));
    ctx->pc = 0x285b18u;
}
