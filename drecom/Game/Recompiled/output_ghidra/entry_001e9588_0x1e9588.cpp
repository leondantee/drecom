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

// Function: entry_001e9588
// Address: 0x1e9588 - 0x1e9694
void entry_001e9588_0x1e9588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9588_0x1e9588");
#endif

    switch (ctx->pc) {
        case 0x1e95acu: goto label_1e95ac;
        case 0x1e9618u: goto label_1e9618;
        case 0x1e968cu: goto label_1e968c;
        default: break;
    }

    ctx->pc = 0x1e9588u;

    // 0x1e9588: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e9588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e958c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1e958cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e9590: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x1e9590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x1e9594: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x1e9594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x1e9598: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e9598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e959c: 0x0  nop
    ctx->pc = 0x1e959cu;
    // NOP
    // 0x1e95a0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1e95a0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e95a4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1E95A4u;
    SET_GPR_U32(ctx, 31, 0x1E95ACu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1E95A4u, 0x1E95ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E95ACu;
label_1e95ac:
    // 0x1e95ac: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e95acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e95b0: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x1e95b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x1e95b4: 0x8fa60198  lw          $a2, 0x198($sp)
    ctx->pc = 0x1e95b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e95b8: 0x8cc20058  lw          $v0, 0x58($a2)
    ctx->pc = 0x1e95b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x1e95bc: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x1e95bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1e95c0: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1e95c0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e95c4: 0x8e500034  lw          $s0, 0x34($s2)
    ctx->pc = 0x1e95c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1e95c8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1e95c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1e95cc: 0x2213c  dsll32      $a0, $v0, 4
    ctx->pc = 0x1e95ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1e95d0: 0x4213e  dsrl32      $a0, $a0, 4
    ctx->pc = 0x1e95d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x1e95d4: 0xae040024  sw          $a0, 0x24($s0)
    ctx->pc = 0x1e95d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 4));
    // 0x1e95d8: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1e95d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1e95dc: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1e95dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x1e95e0: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x1e95e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1e95e4: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1e95e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1e95e8: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x1e95e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1e95ec: 0x34830002  ori         $v1, $a0, 0x2
    ctx->pc = 0x1e95ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x1e95f0: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x1e95f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x1e95f4: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x1e95f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e95f8: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1e95f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x1e95fc: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1e95fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1e9600: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1e9600u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e9604: 0x2404051f  addiu       $a0, $zero, 0x51F
    ctx->pc = 0x1e9604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1311));
    // 0x1e9608: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x1e9608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x1e960c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1e960cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e9610: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1E9610u;
    SET_GPR_U32(ctx, 31, 0x1E9618u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1E9610u, 0x1E9618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9618u;
label_1e9618:
    // 0x1e9618: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e9618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e961c: 0xc4401200  lwc1        $f0, 0x1200($v0)
    ctx->pc = 0x1e961cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9620: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1e9620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1e9624: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e9624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9628: 0xc4401204  lwc1        $f0, 0x1204($v0)
    ctx->pc = 0x1e9628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e962c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1e962cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1e9630: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e9630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9634: 0xc4401208  lwc1        $f0, 0x1208($v0)
    ctx->pc = 0x1e9634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9638: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x1e9638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1e963c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1e963cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1e9640: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1e9640u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e9644: 0x0  nop
    ctx->pc = 0x1e9644u;
    // NOP
    // 0x1e9648: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1e9648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x1e964c: 0x8fa60198  lw          $a2, 0x198($sp)
    ctx->pc = 0x1e964cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9650: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x1e9650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1e9654: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1e9654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1e9658: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1e9658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1e965c: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x1e965cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x1e9660: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x1e9660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1e9664: 0x432024  and         $a0, $v0, $v1
    ctx->pc = 0x1e9664u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e9668: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x1e9668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1e966c: 0x34640001  ori         $a0, $v1, 0x1
    ctx->pc = 0x1e966cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1e9670: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9674: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1e9674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e9678: 0x246600d0  addiu       $a2, $v1, 0xD0
    ctx->pc = 0x1e9678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x1e967c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e967cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e9680: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1e9680u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e9684: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1E9684u;
    SET_GPR_U32(ctx, 31, 0x1E968Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1E9684u, 0x1E968Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E968Cu;
label_1e968c:
    // 0x1e968c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1E968Cu;
    {
        const bool branch_taken_0x1e968c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e968c) {
            ctx->pc = 0x1E9788u;
            return;
        }
    }
    ctx->pc = 0x1E9694u;
}
