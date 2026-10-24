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

// Function: entry_00246130
// Address: 0x246130 - 0x2461a8
void entry_00246130_0x246130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00246130_0x246130");
#endif

    switch (ctx->pc) {
        case 0x246148u: goto label_246148;
        case 0x246160u: goto label_246160;
        case 0x246170u: goto label_246170;
        case 0x2461a4u: goto label_2461a4;
        default: break;
    }

    ctx->pc = 0x246130u;

    // 0x246130: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x246130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x246134: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x246134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246138: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x246138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24613c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x24613cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x246140: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x246140u;
    SET_GPR_U32(ctx, 31, 0x246148u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x246140u, 0x246148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246148u;
label_246148:
    // 0x246148: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x246148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24614c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x24614cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x246150: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x246150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x246154: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x246154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x246158: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x246158u;
    SET_GPR_U32(ctx, 31, 0x246160u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x246158u, 0x246160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246160u;
label_246160:
    // 0x246160: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x246160u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x246164: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x246164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x246168: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x246168u;
    SET_GPR_U32(ctx, 31, 0x246170u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x246168u, 0x246170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246170u;
label_246170:
    // 0x246170: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x246170u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x246174: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x246174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x246178: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x246178u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x24617c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x24617Cu;
    {
        const bool branch_taken_0x24617c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24617c) {
            ctx->pc = 0x2461A8u;
            return;
        }
    }
    ctx->pc = 0x246184u;
    // 0x246184: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x246184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x246188: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x246188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24618c: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x24618cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x246190: 0x24067821  addiu       $a2, $zero, 0x7821
    ctx->pc = 0x246190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30753));
    // 0x246194: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x246194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246198: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x246198u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x24619c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x24619Cu;
    SET_GPR_U32(ctx, 31, 0x2461A4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x24619Cu, 0x2461A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2461A4u;
label_2461a4:
    // 0x2461a4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2461a4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2461a8u;
}
