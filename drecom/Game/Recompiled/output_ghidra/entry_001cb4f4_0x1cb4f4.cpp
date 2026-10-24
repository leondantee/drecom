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

// Function: entry_001cb4f4
// Address: 0x1cb4f4 - 0x1cb5c8
void entry_001cb4f4_0x1cb4f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb4f4_0x1cb4f4");
#endif

    switch (ctx->pc) {
        case 0x1cb518u: goto label_1cb518;
        case 0x1cb530u: goto label_1cb530;
        case 0x1cb54cu: goto label_1cb54c;
        case 0x1cb56cu: goto label_1cb56c;
        case 0x1cb584u: goto label_1cb584;
        default: break;
    }

    ctx->pc = 0x1cb4f4u;

    // 0x1cb4f4: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x1cb4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x1cb4f8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cb4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1cb4fc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1cb4fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1cb500: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb504: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb508: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1cb508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cb50c: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1cb50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cb510: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1CB510u;
    SET_GPR_U32(ctx, 31, 0x1CB518u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1CB510u, 0x1CB518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB518u;
label_1cb518:
    // 0x1cb518: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb51c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1cb51cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1cb520: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1cb520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb524: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1cb524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1cb528: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1CB528u;
    SET_GPR_U32(ctx, 31, 0x1CB530u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CB528u, 0x1CB530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB530u;
label_1cb530:
    // 0x1cb530: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb534: 0xc4401b50  lwc1        $f0, 0x1B50($v0)
    ctx->pc = 0x1cb534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb538: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb53c: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x1cb53cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x1cb540: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1cb540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb544: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x1CB544u;
    SET_GPR_U32(ctx, 31, 0x1CB54Cu);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x1CB544u, 0x1CB54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB54Cu;
label_1cb54c:
    // 0x1cb54c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb54cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb550: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb554: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x1cb554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x1cb558: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb558u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb55c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1cb55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb560: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cb560u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cb564: 0xc0574f4  jal         func_15D3D0
    ctx->pc = 0x1CB564u;
    SET_GPR_U32(ctx, 31, 0x1CB56Cu);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x1CB564u, 0x1CB56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB56Cu;
label_1cb56c:
    // 0x1cb56c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb570: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb574: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1cb574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1cb578: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x1cb578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1cb57c: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1CB57Cu;
    SET_GPR_U32(ctx, 31, 0x1CB584u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1CB57Cu, 0x1CB584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB584u;
label_1cb584:
    // 0x1cb584: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1cb584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1cb588: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1cb588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1cb58c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cb58cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb590: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1cb590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb594: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1cb594u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cb598: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb59c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1cb59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb5a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cb5a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb5a4: 0x0  nop
    ctx->pc = 0x1cb5a4u;
    // NOP
    // 0x1cb5a8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1CB5A8u;
    {
        const bool branch_taken_0x1cb5a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb5a8) {
            ctx->pc = 0x1CB5C8u;
            return;
        }
    }
    ctx->pc = 0x1CB5B0u;
    // 0x1cb5b0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1cb5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1cb5b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cb5b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb5b8: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1cb5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb5bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cb5bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cb5c0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb5c4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1cb5c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x1cb5c8u;
}
