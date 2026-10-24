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

// Function: entry_0026b8c8
// Address: 0x26b8c8 - 0x26b92c
void entry_0026b8c8_0x26b8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026b8c8_0x26b8c8");
#endif

    switch (ctx->pc) {
        case 0x26b8dcu: goto label_26b8dc;
        case 0x26b8e8u: goto label_26b8e8;
        default: break;
    }

    ctx->pc = 0x26b8c8u;

    // 0x26b8c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26b8c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26b8cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b8d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26b8d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26b8d4: 0xc0574f4  jal         func_15D3D0
    ctx->pc = 0x26B8D4u;
    SET_GPR_U32(ctx, 31, 0x26B8DCu);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x26B8D4u, 0x26B8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B8DCu;
label_26b8dc:
    // 0x26b8dc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26b8dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26b8e0: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x26B8E0u;
    SET_GPR_U32(ctx, 31, 0x26B8E8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x26B8E0u, 0x26B8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B8E8u;
label_26b8e8:
    // 0x26b8e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26b8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b8ec: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x26b8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b8f0: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x26b8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x26b8f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26b8f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26b8f8: 0x0  nop
    ctx->pc = 0x26b8f8u;
    // NOP
    // 0x26b8fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26b8fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26b900: 0x0  nop
    ctx->pc = 0x26b900u;
    // NOP
    // 0x26b904: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x26B904u;
    {
        const bool branch_taken_0x26b904 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26b904) {
            ctx->pc = 0x26B92Cu;
            return;
        }
    }
    ctx->pc = 0x26B90Cu;
    // 0x26b90c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26b90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b910: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x26b910u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x26b914: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26B914u;
    {
        const bool branch_taken_0x26b914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b914) {
            ctx->pc = 0x26B92Cu;
            return;
        }
    }
    ctx->pc = 0x26B91Cu;
    // 0x26b91c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b920: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x26b920u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x26b924: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26b924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26b928: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x26b928u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x26b92cu;
}
