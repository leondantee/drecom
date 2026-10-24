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

// Function: entry_0021c504
// Address: 0x21c504 - 0x21c598
void entry_0021c504_0x21c504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021c504_0x21c504");
#endif

    switch (ctx->pc) {
        case 0x21c50cu: goto label_21c50c;
        case 0x21c540u: goto label_21c540;
        case 0x21c54cu: goto label_21c54c;
        case 0x21c554u: goto label_21c554;
        case 0x21c588u: goto label_21c588;
        case 0x21c594u: goto label_21c594;
        default: break;
    }

    ctx->pc = 0x21c504u;

    // 0x21c504: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21C504u;
    SET_GPR_U32(ctx, 31, 0x21C50Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21C504u, 0x21C50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C50Cu;
label_21c50c:
    // 0x21c50c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x21c50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x21c510: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21c510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21c514: 0x0  nop
    ctx->pc = 0x21c514u;
    // NOP
    // 0x21c518: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21c518u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21c51c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x21c51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c520: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21c520u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21c524: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x21c524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x21c528: 0x24041301  addiu       $a0, $zero, 0x1301
    ctx->pc = 0x21c528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4865));
    // 0x21c52c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21c52cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21c530: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x21c530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x21c534: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x21c534u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21c538: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21C538u;
    SET_GPR_U32(ctx, 31, 0x21C540u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21C538u, 0x21C540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C540u;
label_21c540:
    // 0x21c540: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21c540u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21c544: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21C544u;
    SET_GPR_U32(ctx, 31, 0x21C54Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21C544u, 0x21C54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C54Cu;
label_21c54c:
    // 0x21c54c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21C54Cu;
    SET_GPR_U32(ctx, 31, 0x21C554u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21C54Cu, 0x21C554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C554u;
label_21c554:
    // 0x21c554: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x21c554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x21c558: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21c558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21c55c: 0x0  nop
    ctx->pc = 0x21c55cu;
    // NOP
    // 0x21c560: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21c560u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21c564: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x21c564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c568: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21c568u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21c56c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x21c56cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x21c570: 0x24041001  addiu       $a0, $zero, 0x1001
    ctx->pc = 0x21c570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x21c574: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21c574u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21c578: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x21c578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x21c57c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x21c57cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21c580: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21C580u;
    SET_GPR_U32(ctx, 31, 0x21C588u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21C580u, 0x21C588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C588u;
label_21c588:
    // 0x21c588: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21c588u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21c58c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21C58Cu;
    SET_GPR_U32(ctx, 31, 0x21C594u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21C58Cu, 0x21C594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C594u;
label_21c594:
    // 0x21c594: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21c594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x21c598u;
}
