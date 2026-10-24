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

// Function: entry_0012b8e8
// Address: 0x12b8e8 - 0x12b96c
void entry_0012b8e8_0x12b8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b8e8_0x12b8e8");
#endif

    switch (ctx->pc) {
        case 0x12b908u: goto label_12b908;
        case 0x12b920u: goto label_12b920;
        default: break;
    }

    ctx->pc = 0x12b8e8u;

    // 0x12b8e8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12b8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b8ec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12b8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b8f0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12b8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12b8f4: 0x24063c2e  addiu       $a2, $zero, 0x3C2E
    ctx->pc = 0x12b8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15406));
    // 0x12b8f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12b8f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b8fc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12b8fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12b900: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12B900u;
    SET_GPR_U32(ctx, 31, 0x12B908u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12B900u, 0x12B908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B908u;
label_12b908:
    // 0x12b908: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12b908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b90c: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x12b90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12b910: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x12b910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x12b914: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x12b914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x12b918: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x12B918u;
    SET_GPR_U32(ctx, 31, 0x12B920u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x12B918u, 0x12B920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B920u;
label_12b920:
    // 0x12b920: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12b920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b924: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x12b924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x12b928: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12b928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b92c: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x12b92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b930: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x12b930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x12b934: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12b934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12b938: 0x0  nop
    ctx->pc = 0x12b938u;
    // NOP
    // 0x12b93c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x12b93cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x12b940: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x12b940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x12b944: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x12b944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x12b948: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12b948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12b94c: 0x0  nop
    ctx->pc = 0x12b94cu;
    // NOP
    // 0x12b950: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12b950u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12b954: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12b954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b958: 0xe4401298  swc1        $f0, 0x1298($v0)
    ctx->pc = 0x12b958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4760), bits); }
    // 0x12b95c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b960: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12b960u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12b964: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12b964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12b968: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x12b968u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12b96cu;
}
