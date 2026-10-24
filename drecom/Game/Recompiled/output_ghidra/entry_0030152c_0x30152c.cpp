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

// Function: entry_0030152c
// Address: 0x30152c - 0x3015d0
void entry_0030152c_0x30152c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030152c_0x30152c");
#endif

    switch (ctx->pc) {
        case 0x301548u: goto label_301548;
        case 0x301564u: goto label_301564;
        case 0x301590u: goto label_301590;
        case 0x30159cu: goto label_30159c;
        case 0x3015ccu: goto label_3015cc;
        default: break;
    }

    ctx->pc = 0x30152cu;

    // 0x30152c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30152cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x301530: 0x244294c0  addiu       $v0, $v0, -0x6B40
    ctx->pc = 0x301530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939840));
    // 0x301534: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x301534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x301538: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x301538u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3994C0u));
    // 0x30153c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x30153cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x301540: 0xc06765c  jal         func_19D970
    ctx->pc = 0x301540u;
    SET_GPR_U32(ctx, 31, 0x301548u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x301540u, 0x301548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301548u;
label_301548:
    // 0x301548: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x301548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x30154c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30154cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x301550: 0x0  nop
    ctx->pc = 0x301550u;
    // NOP
    // 0x301554: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x301554u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x301558: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x301558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x30155c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x30155Cu;
    SET_GPR_U32(ctx, 31, 0x301564u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x30155Cu, 0x301564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301564u;
label_301564:
    // 0x301564: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x301564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x301568: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x301568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30156c: 0x0  nop
    ctx->pc = 0x30156cu;
    // NOP
    // 0x301570: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x301570u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x301574: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x301574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x301578: 0x24045100  addiu       $a0, $zero, 0x5100
    ctx->pc = 0x301578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20736));
    // 0x30157c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x30157cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x301580: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x301580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x301584: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x301584u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x301588: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x301588u;
    SET_GPR_U32(ctx, 31, 0x301590u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x301588u, 0x301590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301590u;
label_301590:
    // 0x301590: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x301590u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x301594: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x301594u;
    SET_GPR_U32(ctx, 31, 0x30159Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x301594u, 0x30159Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30159Cu;
label_30159c:
    // 0x30159c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30159cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3015a0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3015a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3015a4: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x3015a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x3015a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3015a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3015ac: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x3015acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x3015b0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3015b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3015b4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x3015b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3015b8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3015b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3015bc: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x3015bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3015c0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x3015c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3015c4: 0xc086488  jal         func_219220
    ctx->pc = 0x3015C4u;
    SET_GPR_U32(ctx, 31, 0x3015CCu);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x3015C4u, 0x3015CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3015CCu;
label_3015cc:
    // 0x3015cc: 0x0  nop
    ctx->pc = 0x3015ccu;
    // NOP
    ctx->pc = 0x3015d0u;
}
