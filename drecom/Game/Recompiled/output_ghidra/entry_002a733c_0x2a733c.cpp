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

// Function: entry_002a733c
// Address: 0x2a733c - 0x2a73d0
void entry_002a733c_0x2a733c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a733c_0x2a733c");
#endif

    switch (ctx->pc) {
        case 0x2a736cu: goto label_2a736c;
        case 0x2a7398u: goto label_2a7398;
        default: break;
    }

    ctx->pc = 0x2a733cu;

    // 0x2a733c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a733cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a7340: 0xc44101a8  lwc1        $f1, 0x1A8($v0)
    ctx->pc = 0x2a7340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7344: 0x3c033a94  lui         $v1, 0x3A94
    ctx->pc = 0x2a7344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14996 << 16));
    // 0x2a7348: 0x3463f209  ori         $v1, $v1, 0xF209
    ctx->pc = 0x2a7348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61961);
    // 0x2a734c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a734cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7350: 0x0  nop
    ctx->pc = 0x2a7350u;
    // NOP
    // 0x2a7354: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a7354u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a7358: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x2a7358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x2a735c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a735cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a7360: 0xc44c01a8  lwc1        $f12, 0x1A8($v0)
    ctx->pc = 0x2a7360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a7364: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x2A7364u;
    SET_GPR_U32(ctx, 31, 0x2A736Cu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2A7364u, 0x2A736Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A736Cu;
label_2a736c:
    // 0x2a736c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a736cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a7370: 0x3c033fb9  lui         $v1, 0x3FB9
    ctx->pc = 0x2a7370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16313 << 16));
    // 0x2a7374: 0x34639999  ori         $v1, $v1, 0x9999
    ctx->pc = 0x2a7374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39321);
    // 0x2a7378: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2a7378u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a737c: 0x34059999  ori         $a1, $zero, 0x9999
    ctx->pc = 0x2a737cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39321);
    // 0x2a7380: 0x51438  dsll        $v0, $a1, 16
    ctx->pc = 0x2a7380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 16);
    // 0x2a7384: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2a7384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2a7388: 0x442825  or          $a1, $v0, $a0
    ctx->pc = 0x2a7388u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2a738c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a738cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a7390: 0xc040048  jal         func_100120
    ctx->pc = 0x2A7390u;
    SET_GPR_U32(ctx, 31, 0x2A7398u);
    ctx->pc = 0x100120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100120u, 0x2A7390u, 0x2A7398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7398u;
label_2a7398:
    // 0x2a7398: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a7398u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a739c: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2A739Cu;
    {
        const bool branch_taken_0x2a739c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a739c) {
            ctx->pc = 0x2A73D0u;
            return;
        }
    }
    ctx->pc = 0x2A73A4u;
    // 0x2a73a4: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2a73a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a73a8: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2a73a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a73ac: 0xa0e60002  sb          $a2, 0x2($a3)
    ctx->pc = 0x2a73acu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 6));
    // 0x2a73b0: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x2a73b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a73b4: 0x9503000e  lhu         $v1, 0xE($t0)
    ctx->pc = 0x2a73b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 14)));
    // 0x2a73b8: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x2a73b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x2a73bc: 0xa503000e  sh          $v1, 0xE($t0)
    ctx->pc = 0x2a73bcu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a73c0: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a73c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a73c4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2a73c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2a73c8: 0x34830200  ori         $v1, $a0, 0x200
    ctx->pc = 0x2a73c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)512);
    // 0x2a73cc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2a73ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x2a73d0u;
}
