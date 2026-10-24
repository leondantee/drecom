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

// Function: entry_00226bb0
// Address: 0x226bb0 - 0x226c28
void entry_00226bb0_0x226bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226bb0_0x226bb0");
#endif

    switch (ctx->pc) {
        case 0x226bd0u: goto label_226bd0;
        case 0x226bf4u: goto label_226bf4;
        default: break;
    }

    ctx->pc = 0x226bb0u;

    // 0x226bb0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x226bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226bb4: 0x84a4127e  lh          $a0, 0x127E($a1)
    ctx->pc = 0x226bb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4734)));
    // 0x226bb8: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x226bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x226bbc: 0xa4a3127e  sh          $v1, 0x127E($a1)
    ctx->pc = 0x226bbcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x226bc0: 0x14800019  bnez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x226BC0u;
    {
        const bool branch_taken_0x226bc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x226bc0) {
            ctx->pc = 0x226C28u;
            return;
        }
    }
    ctx->pc = 0x226BC8u;
    // 0x226bc8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x226BC8u;
    SET_GPR_U32(ctx, 31, 0x226BD0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x226BC8u, 0x226BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226BD0u;
label_226bd0:
    // 0x226bd0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x226bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x226bd4: 0x24420258  addiu       $v0, $v0, 0x258
    ctx->pc = 0x226bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 600));
    // 0x226bd8: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x226bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x226bdc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x226bdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x226be0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x226be0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x226be4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226be8: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x226be8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x226bec: 0xc067694  jal         func_19DA50
    ctx->pc = 0x226BECu;
    SET_GPR_U32(ctx, 31, 0x226BF4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x226BECu, 0x226BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226BF4u;
label_226bf4:
    // 0x226bf4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x226bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x226bf8: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x226bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x226bfc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x226BFCu;
    {
        const bool branch_taken_0x226bfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x226bfc) {
            ctx->pc = 0x226C28u;
            return;
        }
    }
    ctx->pc = 0x226C04u;
    // 0x226c04: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x226c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x226c08: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x226c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x226c0c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x226c0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x226c10: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226c14: 0x24040521  addiu       $a0, $zero, 0x521
    ctx->pc = 0x226c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1313));
    // 0x226c18: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x226c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x226c1c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x226c1cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x226c20: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x226C20u;
    SET_GPR_U32(ctx, 31, 0x226C28u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x226C20u, 0x226C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226C28u;
}
