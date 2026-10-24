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

// Function: entry_00335f74
// Address: 0x335f74 - 0x336014
void entry_00335f74_0x335f74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00335f74_0x335f74");
#endif

    switch (ctx->pc) {
        case 0x335fa8u: goto label_335fa8;
        case 0x335ff0u: goto label_335ff0;
        default: break;
    }

    ctx->pc = 0x335f74u;

    // 0x335f74: 0xc6015df0  lwc1        $f1, 0x5DF0($s0)
    ctx->pc = 0x335f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x335f78: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335f7c: 0xc4203428  lwc1        $f0, 0x3428($at)
    ctx->pc = 0x335f7cu;
    { uint32_t bits = FAST_READ32(0x893428u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x335f80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x335f80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x335f84: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335f88: 0xe4203428  swc1        $f0, 0x3428($at)
    ctx->pc = 0x335f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x893428u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x893428u, _value); } while (0); }
    // 0x335f8c: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x335f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x335f90: 0x244449d8  addiu       $a0, $v0, 0x49D8
    ctx->pc = 0x335f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 18904));
    // 0x335f94: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x335f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x335f98: 0x2465e7d0  addiu       $a1, $v1, -0x1830
    ctx->pc = 0x335f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961104));
    // 0x335f9c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x335f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x335fa0: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x335FA0u;
    SET_GPR_U32(ctx, 31, 0x335FA8u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x335FA8u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x335FA8u) { return; }
    ctx->pc = 0x335FA8u;
label_335fa8:
    // 0x335fa8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x335fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x335fac: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x335facu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x335fb0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x335fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x335fb4: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x335fb4u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x335fb8: 0x0  nop
    ctx->pc = 0x335fb8u;
    // NOP
    // 0x335fbc: 0x0  nop
    ctx->pc = 0x335fbcu;
    // NOP
    // 0x335fc0: 0x1010  mfhi        $v0
    ctx->pc = 0x335fc0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x335fc4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x335FC4u;
    {
        const bool branch_taken_0x335fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x335fc4) {
            ctx->pc = 0x336014u;
            return;
        }
    }
    ctx->pc = 0x335FCCu;
    // 0x335fcc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x335fccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x335fd0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335fd4: 0x8c2249a8  lw          $v0, 0x49A8($at)
    ctx->pc = 0x335fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8949A8u));
    // 0x335fd8: 0x24440027  addiu       $a0, $v0, 0x27
    ctx->pc = 0x335fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 39));
    // 0x335fdc: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x335fdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x335fe0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x335fe0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x335fe4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x335fe4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x335fe8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x335FE8u;
    SET_GPR_U32(ctx, 31, 0x335FF0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x335FE8u, 0x335FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335FF0u;
label_335ff0:
    // 0x335ff0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335ff4: 0x8c2249a8  lw          $v0, 0x49A8($at)
    ctx->pc = 0x335ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8949A8u));
    // 0x335ff8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x335ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x335ffc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336000: 0xac2349a8  sw          $v1, 0x49A8($at)
    ctx->pc = 0x336000u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8949A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8949A8u, _value); } while (0);
    // 0x336004: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x336004u;
    {
        const bool branch_taken_0x336004 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x336004) {
            ctx->pc = 0x336014u;
            return;
        }
    }
    ctx->pc = 0x33600Cu;
    // 0x33600c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33600cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336010: 0xac2049a8  sw          $zero, 0x49A8($at)
    ctx->pc = 0x336010u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8949A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8949A8u, _value); } while (0);
    ctx->pc = 0x336014u;
}
