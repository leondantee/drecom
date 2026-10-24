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

// Function: entry_002256a4
// Address: 0x2256a4 - 0x22571c
void entry_002256a4_0x2256a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002256a4_0x2256a4");
#endif

    switch (ctx->pc) {
        case 0x2256c4u: goto label_2256c4;
        case 0x2256e8u: goto label_2256e8;
        default: break;
    }

    ctx->pc = 0x2256a4u;

    // 0x2256a4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2256a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2256a8: 0x84a4127e  lh          $a0, 0x127E($a1)
    ctx->pc = 0x2256a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4734)));
    // 0x2256ac: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2256acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2256b0: 0xa4a3127e  sh          $v1, 0x127E($a1)
    ctx->pc = 0x2256b0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x2256b4: 0x14800019  bnez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2256B4u;
    {
        const bool branch_taken_0x2256b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2256b4) {
            ctx->pc = 0x22571Cu;
            return;
        }
    }
    ctx->pc = 0x2256BCu;
    // 0x2256bc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2256BCu;
    SET_GPR_U32(ctx, 31, 0x2256C4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2256BCu, 0x2256C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2256C4u;
label_2256c4:
    // 0x2256c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2256c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2256c8: 0x24420258  addiu       $v0, $v0, 0x258
    ctx->pc = 0x2256c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 600));
    // 0x2256cc: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x2256ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x2256d0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2256d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2256d4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2256d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2256d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2256d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2256dc: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x2256dcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x2256e0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2256E0u;
    SET_GPR_U32(ctx, 31, 0x2256E8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2256E0u, 0x2256E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2256E8u;
label_2256e8:
    // 0x2256e8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2256e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2256ec: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2256ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2256f0: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2256F0u;
    {
        const bool branch_taken_0x2256f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2256f0) {
            ctx->pc = 0x22571Cu;
            return;
        }
    }
    ctx->pc = 0x2256F8u;
    // 0x2256f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2256f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2256fc: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x2256fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x225700: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x225700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x225704: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x225704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x225708: 0x24040521  addiu       $a0, $zero, 0x521
    ctx->pc = 0x225708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1313));
    // 0x22570c: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x22570cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x225710: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x225710u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x225714: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x225714u;
    SET_GPR_U32(ctx, 31, 0x22571Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x225714u, 0x22571Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22571Cu;
}
