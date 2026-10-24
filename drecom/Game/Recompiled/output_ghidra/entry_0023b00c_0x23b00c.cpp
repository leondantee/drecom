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

// Function: entry_0023b00c
// Address: 0x23b00c - 0x23b030
void entry_0023b00c_0x23b00c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023b00c_0x23b00c");
#endif

    ctx->pc = 0x23b00cu;

    // 0x23b00c: 0x3c07469c  lui         $a3, 0x469C
    ctx->pc = 0x23b00cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)18076 << 16));
    // 0x23b010: 0x34e54000  ori         $a1, $a3, 0x4000
    ctx->pc = 0x23b010u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16384);
    // 0x23b014: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x23b014u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23b018: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b01c: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x23b01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x23b020: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x23b020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x23b024: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23b024u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23b028: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23B028u;
    SET_GPR_U32(ctx, 31, 0x23B030u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23B028u, 0x23B030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B030u;
}
