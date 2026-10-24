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

// Function: entry_002dcdc8
// Address: 0x2dcdc8 - 0x2dce14
void entry_002dcdc8_0x2dcdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dcdc8_0x2dcdc8");
#endif

    switch (ctx->pc) {
        case 0x2dcdd8u: goto label_2dcdd8;
        case 0x2dcdecu: goto label_2dcdec;
        case 0x2dce08u: goto label_2dce08;
        default: break;
    }

    ctx->pc = 0x2dcdc8u;

    // 0x2dcdc8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2dcdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2dcdcc: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2dcdccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2dcdd0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2DCDD0u;
    SET_GPR_U32(ctx, 31, 0x2DCDD8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2DCDD8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2DCDD8u) { return; }
    ctx->pc = 0x2DCDD8u;
label_2dcdd8:
    // 0x2dcdd8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2dcdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2dcddc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2dcddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2dcde0: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2dcde0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2dcde4: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x2DCDE4u;
    SET_GPR_U32(ctx, 31, 0x2DCDECu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x2DCDE4u, 0x2DCDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCDECu;
label_2dcdec:
    // 0x2dcdec: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x2dcdecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x2dcdf0: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x2dcdf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x2dcdf4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2dcdf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2dcdf8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2dcdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2dcdfc: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2dcdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2dce00: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x2DCE00u;
    SET_GPR_U32(ctx, 31, 0x2DCE08u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x2DCE08u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2DCE08u) { return; }
    ctx->pc = 0x2DCE08u;
label_2dce08:
    // 0x2dce08: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2dce08u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dce0c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2DCE0Cu;
    {
        const bool branch_taken_0x2dce0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dce0c) {
            ctx->pc = 0x2DCE68u;
            return;
        }
    }
    ctx->pc = 0x2DCE14u;
}
