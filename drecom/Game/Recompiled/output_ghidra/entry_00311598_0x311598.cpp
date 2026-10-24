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

// Function: entry_00311598
// Address: 0x311598 - 0x311678
void entry_00311598_0x311598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00311598_0x311598");
#endif

    switch (ctx->pc) {
        case 0x3115d4u: goto label_3115d4;
        case 0x3115f0u: goto label_3115f0;
        case 0x31160cu: goto label_31160c;
        case 0x311670u: goto label_311670;
        default: break;
    }

    ctx->pc = 0x311598u;

    // 0x311598: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x311598u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31159c: 0x0  nop
    ctx->pc = 0x31159cu;
    // NOP
    // 0x3115a0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3115a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3115a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3115a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3115a8: 0x0  nop
    ctx->pc = 0x3115a8u;
    // NOP
    // 0x3115ac: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x3115acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3115b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3115b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3115b4: 0x0  nop
    ctx->pc = 0x3115b4u;
    // NOP
    // 0x3115b8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x3115b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3115bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3115bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3115c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3115c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3115c4: 0x0  nop
    ctx->pc = 0x3115c4u;
    // NOP
    // 0x3115c8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x3115c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x3115cc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x3115CCu;
    SET_GPR_U32(ctx, 31, 0x3115D4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x3115CCu, 0x3115D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3115D4u;
label_3115d4:
    // 0x3115d4: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x3115d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
    // 0x3115d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3115d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3115dc: 0x0  nop
    ctx->pc = 0x3115dcu;
    // NOP
    // 0x3115e0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3115e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3115e4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3115e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3115e8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x3115E8u;
    SET_GPR_U32(ctx, 31, 0x3115F0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x3115E8u, 0x3115F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3115F0u;
label_3115f0:
    // 0x3115f0: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x3115f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
    // 0x3115f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3115f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3115f8: 0x0  nop
    ctx->pc = 0x3115f8u;
    // NOP
    // 0x3115fc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3115fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x311600: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x311600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x311604: 0xc06765c  jal         func_19D970
    ctx->pc = 0x311604u;
    SET_GPR_U32(ctx, 31, 0x31160Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x311604u, 0x31160Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31160Cu;
label_31160c:
    // 0x31160c: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x31160cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
    // 0x311610: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x311610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x311614: 0x0  nop
    ctx->pc = 0x311614u;
    // NOP
    // 0x311618: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x311618u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31161c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x31161cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x311620: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x311620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
    // 0x311624: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x311624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x311628: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31162c: 0x0  nop
    ctx->pc = 0x31162cu;
    // NOP
    // 0x311630: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x311630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x311634: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x311634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x311638: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x311638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31163c: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x31163cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x311640: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x311640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x311644: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x311644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x311648: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x311648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x31164c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x31164cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x311650: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x311650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x311654: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x311654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x311658: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x311658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x31165c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31165cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x311660: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x311660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x311664: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x311664u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x311668: 0xc086584  jal         func_219610
    ctx->pc = 0x311668u;
    SET_GPR_U32(ctx, 31, 0x311670u);
    ctx->pc = 0x219610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219610u, 0x311668u, 0x311670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311670u;
label_311670:
    // 0x311670: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x311670u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x311674: 0x0  nop
    ctx->pc = 0x311674u;
    // NOP
    ctx->pc = 0x311678u;
}
