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

// Function: entry_001cac50
// Address: 0x1cac50 - 0x1cac84
void entry_001cac50_0x1cac50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cac50_0x1cac50");
#endif

    ctx->pc = 0x1cac50u;

    // 0x1cac50: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1cac50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1cac54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1cac54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cac58: 0xa443127c  sh          $v1, 0x127C($v0)
    ctx->pc = 0x1cac58u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cac5c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1cac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cac60: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1cac60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1cac64: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1cac64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1cac68: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1cac68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1cac6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cac6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cac70: 0x24040300  addiu       $a0, $zero, 0x300
    ctx->pc = 0x1cac70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x1cac74: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1cac74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1cac78: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1cac78u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cac7c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1CAC7Cu;
    SET_GPR_U32(ctx, 31, 0x1CAC84u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1CAC7Cu, 0x1CAC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAC84u;
}
