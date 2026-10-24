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

// Function: entry_00334f28
// Address: 0x334f28 - 0x334fa8
void entry_00334f28_0x334f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00334f28_0x334f28");
#endif

    switch (ctx->pc) {
        case 0x334f40u: goto label_334f40;
        default: break;
    }

    ctx->pc = 0x334f28u;

    // 0x334f28: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x334f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x334f2c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x334f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x334f30: 0x2445e7d0  addiu       $a1, $v0, -0x1830
    ctx->pc = 0x334f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961104));
    // 0x334f34: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x334f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x334f38: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x334F38u;
    SET_GPR_U32(ctx, 31, 0x334F40u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x334F40u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x334F40u) { return; }
    ctx->pc = 0x334F40u;
label_334f40:
    // 0x334f40: 0xc6015df4  lwc1        $f1, 0x5DF4($s0)
    ctx->pc = 0x334f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x334f44: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x334f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x334f48: 0xc42032c8  lwc1        $f0, 0x32C8($at)
    ctx->pc = 0x334f48u;
    { uint32_t bits = FAST_READ32(0x8932C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x334f4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x334f4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x334f50: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x334f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x334f54: 0xe42032c8  swc1        $f0, 0x32C8($at)
    ctx->pc = 0x334f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8932C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8932C8u, _value); } while (0); }
    // 0x334f58: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x334f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x334f5c: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x334f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x334f60: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x334f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x334f64: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x334f64u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x334f68: 0x0  nop
    ctx->pc = 0x334f68u;
    // NOP
    // 0x334f6c: 0x0  nop
    ctx->pc = 0x334f6cu;
    // NOP
    // 0x334f70: 0x1010  mfhi        $v0
    ctx->pc = 0x334f70u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x334f74: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x334F74u;
    {
        const bool branch_taken_0x334f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x334f74) {
            ctx->pc = 0x334FCCu;
            return;
        }
    }
    ctx->pc = 0x334F7Cu;
    // 0x334f7c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x334f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x334f80: 0x8c2232d8  lw          $v0, 0x32D8($at)
    ctx->pc = 0x334f80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8932D8u));
    // 0x334f84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x334f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x334f88: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x334f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x334f8c: 0xac2232d8  sw          $v0, 0x32D8($at)
    ctx->pc = 0x334f8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8932D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8932D8u, _value); } while (0);
    // 0x334f90: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x334f90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x334f94: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x334F94u;
    {
        const bool branch_taken_0x334f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x334f94) {
            ctx->pc = 0x334FA8u;
            return;
        }
    }
    ctx->pc = 0x334F9Cu;
    // 0x334f9c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x334f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x334fa0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x334fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x334fa4: 0xac2232d8  sw          $v0, 0x32D8($at)
    ctx->pc = 0x334fa4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8932D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8932D8u, _value); } while (0);
    ctx->pc = 0x334fa8u;
}
