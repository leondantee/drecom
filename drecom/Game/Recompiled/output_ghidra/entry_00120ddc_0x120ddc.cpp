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

// Function: entry_00120ddc
// Address: 0x120ddc - 0x120e08
void entry_00120ddc_0x120ddc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120ddc_0x120ddc");
#endif

    switch (ctx->pc) {
        case 0x120e04u: goto label_120e04;
        default: break;
    }

    ctx->pc = 0x120ddcu;

    // 0x120ddc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x120ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x120de0: 0x8c660130  lw          $a2, 0x130($v1)
    ctx->pc = 0x120de0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x120de4: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x120de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x120de8: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x120de8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x120dec: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x120decu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x120df0: 0x2404030a  addiu       $a0, $zero, 0x30A
    ctx->pc = 0x120df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 778));
    // 0x120df4: 0x24c50030  addiu       $a1, $a2, 0x30
    ctx->pc = 0x120df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x120df8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x120df8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x120dfc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x120DFCu;
    SET_GPR_U32(ctx, 31, 0x120E04u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x120DFCu, 0x120E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120E04u;
label_120e04:
    // 0x120e04: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x120e04u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x120e08u;
}
