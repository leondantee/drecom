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

// Function: entry_001d0fe8
// Address: 0x1d0fe8 - 0x1d1010
void entry_001d0fe8_0x1d0fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0fe8_0x1d0fe8");
#endif

    switch (ctx->pc) {
        case 0x1d100cu: goto label_1d100c;
        default: break;
    }

    ctx->pc = 0x1d0fe8u;

    // 0x1d0fe8: 0x8e230130  lw          $v1, 0x130($s1)
    ctx->pc = 0x1d0fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x1d0fec: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1d0fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1d0ff0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1d0ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1d0ff4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d0ff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d0ff8: 0x2404030d  addiu       $a0, $zero, 0x30D
    ctx->pc = 0x1d0ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 781));
    // 0x1d0ffc: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1d0ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1d1000: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1d1000u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d1004: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1D1004u;
    SET_GPR_U32(ctx, 31, 0x1D100Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1D1004u, 0x1D100Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D100Cu;
label_1d100c:
    // 0x1d100c: 0x0  nop
    ctx->pc = 0x1d100cu;
    // NOP
    ctx->pc = 0x1d1010u;
}
